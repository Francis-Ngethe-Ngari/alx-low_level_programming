#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_error(int exit_code, const char *f_str, const char *Arg);
void exit_with_err(const char *msg);
void output_elf_hedr(Elf32_Ehdr *hedr);
int _putchar(int c);

#endif
