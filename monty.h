#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ASCII_TABLE_RANGE 128

/* Data structure for stack */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
   char *opcode;
   void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/* Function prototypes */
void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number, int n);
int main(int argc, char *argv[]);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div_stack(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void add_node(stack_t **stack, int n);
#endif /* MONTY_H */

