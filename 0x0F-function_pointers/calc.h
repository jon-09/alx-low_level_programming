#ifndef CALC_H
#define CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - typedef structure of op
 * @op: the operator to be passed
 * @f: the function associated with the operator
 */
typedef struct op
{
	char *op;

	int (*f)(int a, int b);
}op_t;

#endif
