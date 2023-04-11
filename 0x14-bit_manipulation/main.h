#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdlib.h>
#include <math.h>

unsigned int binary_to_uint(const char *b);
int _pow_recursion(int x, int y);
void rev_string(const char *s);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
