#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

int _putchar(int c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int calc_sqrt(int num, int itr);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int check_empty(char *str, int first_char, int last_char);
int wildcmp(char *s1, char *s2);
int is_divisible(int n, int div);

#endif

