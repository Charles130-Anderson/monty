#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ASCII_TABLE_RANGE 128

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct gvab_t - Global variable for program settings.
 * @r_flag: Flag for return status.
 *
 * Description: Defines a global variable used for program-wide settings.
 * The @r_flag member serves as a status flag for indicating the return
 * status of the program or a specific function, controlling program flow.
 */
typedef struct gvab_t
{
	int r_flag;
} gvab_t;

extern gvab_t data;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
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
void free_stack(stack_t **stack);
#endif /* MONTY_H */

