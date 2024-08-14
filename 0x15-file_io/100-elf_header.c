#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void print_elf_header(const char *filename);

int main(int argc, char *argv[])
{
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s <ELF file>\n", argv[0]);
return 1;
}

print_elf_header(argv[1]);
return 0;
}

void print_elf_header(const char *filename)
{
int fd;
Elf64_Ehdr header;

fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", filename);
exit(98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file %s\n", filename);
close(fd);
exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", filename);
close(fd);
exit(98);
}

printf("ELF Header:\n");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", header.e_ident[i]);
printf("\n");

printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
printf("  Entry point address:               0x%lx\n", header.e_entry);

close(fd);
}
