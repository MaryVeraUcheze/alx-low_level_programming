#ifndef BIT_MAN_H
#define BIT_MAN_H

/*Libraries*/
#include <string.h>
#include <stdio.h>

/*Prototypes*/
int _putchar(char);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
