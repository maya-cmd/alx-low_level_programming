#include "main.h"
void checkingElf(unsigned char *e_ident);
void printingMagic(unsigned char *e_ident);
void printingClass(unsigned char *e_ident);
void printingData(unsigned char *e_ident);
void printingVersion(unsigned char *e_ident);
void printingABI(unsigned char *e_ident);
void printingOSABI(unsigned char *e_ident);
void printingType(unsigned int e_type, unsigned char *e_ident);
void printingEntry(unsigned long int e_entry, unsigned char *e_ident);
void closingElf(int elf);

/**
*checkingElf - Function confirms if it's Elf.
* @e_ident: Array pointer with the ELF magic numbers.
*
*/
void checkingElf(unsigned char *e_ident)
{
	int index = 0;

	while (index < 4)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		index++;
	}
}

/**
* printingMagic - Function outputs ELF header magic numbers.
* @e_ident: Array pointer with the ELF magic numbers.
*
*/
void printingMagic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
* printingClass - Function outputs ELF header class.
* @e_ident: Array pointer with the ELF magic numbers.
*/

void printingClass(unsigned char *e_ident)
{
	printf("  Class:                             ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
* printingData - Function outputs the ELF header data.
* @e_ident: Array pointer with the ELF magic numbers.
*/
void printingData(unsigned char *e_ident)
{
	printf("  Data:                              ");

	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
* printingVersion - Function outputs an ELF header version.
* @e_ident: Array pointer with the ELF magic numbers.
*/
void printingVersion(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
		printf(" (current)\n");
		break;
		default:
		printf("\n");
		break;
	}
}

/**
* printingOSABI - Functon outputs OS/ABI of an ELF header.
* @e_ident: Array pointer with the ELF magic numbers.
*/
void printingOSABI(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}


/**
* printingABI - Function outputs an ELF header's ABI version .
* @e_ident: Array pointer with the ELF magic numbers.
*/
void printingABI(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
* printingType - Function outputs an ELF header's type.
* @e_type: Type of ELF.
* @e_ident: Array pointer with the ELF magic numbers.
*/
void printingType(unsigned int e_type, unsigned char *e_ident)
{
	printf("  Type:                              ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	e_type >>= 8;

	if (e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else if (e_type == ET_LOPROC)
		printf("LOPROC (Processor-specific)\n");
	else if (e_type == ET_HIPROC)
		printf("HIPROC (Processor-specific)\n");
	else
		printf("<unknown: %x>\n", e_type);
}


/**
* printingEntry - Function outputs the entry point of an ELF header.
* @e_entry: ELF entry point's address.
* @e_ident: Array pointer with the ELF magic numbers.
*/
void printingEntry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
* closingElf - Function closes an ELF open file.
* @elf: ELF file's file descriptor.
*
*/
void closingElf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
* main - Function shows the ELF header's information contained
* at the start of an ELF file.
* @argc: The number of arguments present .
* @argv: The arguments array of pointers to .
*
* Return: 0 on success.
*
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closingElf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		closingElf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checkingElf(header->e_ident);
	printf("ELF Header:\n");
	printingMagic(header->e_ident);
	printingClass(header->e_ident);
	printingData(header->e_ident);
	printingVersion(header->e_ident);
	printingOSABI(header->e_ident);
	printingABI(header->e_ident);
	printingType(header->e_type, header->e_ident);
	printingEntry(header->e_entry, header->e_ident);

	free(header);
	closingElf(o);
	return (0);
}
