#include "main.h"

void checkElf(unsigned char *e_ident);
void printMagic(unsigned char *e_ident);
void printClass(unsigned char *e_ident);
void printData(unsigned char *e_ident);
void printVersion(unsigned char *e_ident);
void printABI(unsigned char *e_ident);
void printOSABI(unsigned char *e_ident);
void printType(unsigned int e_type, unsigned char *e_ident);
void printEntry(unsigned long int e_entry, unsigned char *e_ident);
void closeElf(int elf);

/**
 * checkElf - Function confirms if it’s Elf.
 * @e_ident: Array pointer with the ELF magic numbers.
 *
 */
void checkElf(unsigned char *e_ident)
{
	int j = 0;
	int isElf = 1;

	while (j < 4)
	{
		if (e_ident[j] != 127 &&
		    e_ident[j] != 'E' &&
		    e_ident[j] != 'L' &&
		    e_ident[j] != 'F')
		{
			isElf = 0;
			break;
		}
		j++;
	}

	if (!isElf)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * printMagic - Function outputs ELF header magic numbers.
 * @e_ident:Array pointer with the ELF magic numbers.
 *
 */
void printMagic(unsigned char *e_ident)
{
	int k = 0;
		printf("  Magic:   ");

	while (k < EI_NIDENT)
	{
		printf("%02x", e_ident[k]);

		if (k == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");

		k++;
	}
}

/**
 * printClass - Function outputs ELF header class.
 * @e_ident: Array pointer with the ELF magic numbers.
 */
void printClass(unsigned char *e_ident)
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
 * printData - Function outputs the  ELF header data.
 * @e_ident: Array pointer with the ELF magic numbers.
 */
void printData(unsigned char *e_ident)
{
	printf("  Data:                              ");

	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * printVersion - Function outputs an ELF header version.
 * @e_ident: Array pointer with the ELF magic numbers.
 */
void printVersion(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * printOSABI - Functon outputs OS/ABI of an ELF header.
 * @e_ident: Array pointer with the ELF magic numbers.
 */
void printOSABI(unsigned char *e_ident)
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
 * printABI - Function outputs an ELF header’s ABI version .
 * @e_ident: Array pointer with the ELF magic numbers.
 */
void printABI(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * printType - Function outputs an ELF header’s type.
 * @e_type: Type of ELF.
 * @e_ident: Array pointer with the ELF magic numbers.
 */
void printType(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	e_type >>= 8;

		printf("  Type:                              ");

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
	else
		printf("<unknown: %x>\n", e_type);
}

/**
 * printEntry - Function outputs the  entry point of an ELF header.
 * @e_entry: ELF entry point’s address.
 * @e_ident: Array pointer with the ELF magic numbers.
 */
void printEntry(unsigned long int e_entry, unsigned char *e_ident)
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
 * closeElf - Function closes an ELF open file.
 * @elf:  ELF file’s file descriptor.
 *
 */
void closeElf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Function shows the  ELF header’s information contained
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
	int read_file, open_file;

	open_file = open(argv[1], O_RDONLY);
	if (open_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closeElf(open_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(open_file,  header, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(header);
		closeElf(open_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checkElf(header->e_ident);
	printf("ELF Header:\n");
	printMagic(header->e_ident);
	printClass(header->e_ident);
	printData(header->e_ident);
	printVersion(header->e_ident);
	printOSABI(header->e_ident);
	printABI(header->e_ident);
	printType(header->e_type, header->e_ident);
	printEntry(header->e_entry, header->e_ident);

	free(header);
	closeElf(open_file);
	return (0);
}
