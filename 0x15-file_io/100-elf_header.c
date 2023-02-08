#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

#define ELF_MAGIC 0x464C457F
#define ELF_HEADER_SIZE 0x40

void print_elf_header(unsigned char *buf) 
{
    int i;	
    Elf32_Ehdr *ehdr = (Elf32_Ehdr *)buf;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", ehdr->e_ident[i]);
    printf("\n");
    printf("  Class:                             ELF32\n");
    printf("  Data:                              2's complement, little endian\n");
    printf("  Version:                           %d\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            UNIX - System V\n");
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", ehdr->e_type);
    printf("  Entry point address:               0x%x\n", ehdr->e_entry);
}

int main(int argc, char *argv[]) 
{
    int fd;
    unsigned char buf[ELF_HEADER_SIZE];

    if (argc != 2) 
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) 
    {
        perror("Error opening file");
        exit(98);
    }

    if (read(fd, buf, ELF_HEADER_SIZE) != ELF_HEADER_SIZE)
    {
        perror("Error reading file");
        close(fd);
        exit(98);
    }

    if (buf[EI_MAG0] != ELFMAG0 || buf[EI_MAG1] != ELFMAG1 || buf[EI_MAG2] != ELFMAG2 || buf[EI_MAG3] != ELFMAG3) 
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        exit(98);
    }

    print_elf_header(buf);

    close(fd);
    return 0;
}

