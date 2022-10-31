0x15. C - File I/O

New commands / functions used:

open, close, read, write, O_RDONLY, O_WRONLY, O_RDWR, STDIN_FILENO

Helpful Links

https://en.wikipedia.org/wiki/File_descriptor
https://www.youtube.com/watch?v=dP3N8g7h8gY
https://community.ibm.com/community/user/legacy?lang=en

Description of Files

0-read_textfile.c
Reads a text file and prints it to the POSTIX standard output

1-create_file.c
Writes a file with rw------- permissions. If no content is provided, creates an empty file.

2-append_text_to_file.c
Appends text to a file.

3-cp.c
Copies contents of one file into another

100-elf_header.c
Displays the info contained in the ELF header at the start of an ELF file. Only uses ``lseek`` once. Only uses ``read`` twice.If not an ELF file, or on any error, exit with a status code 98, and display a comprehensive error to STDERR.

Information displayed:

Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address