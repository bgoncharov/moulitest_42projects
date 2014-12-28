#include <test.h>
#include <stdio.h>
#include <color.h>

void	test_print(t_lst_elem *elem)
{
	char *symbol;
	t_test	*test;

	test = elem->data;
	if (test->sig == SIGABRT)
		symbol = C_RED "F" C_CLEAR;
	else if (test->sig == SIGSEGV)
		symbol = C_RED "S" C_CLEAR;
	else if (test->sig == SIGBUS)
		symbol = C_RED "B" C_CLEAR;
	else
		symbol = C_GREEN "." C_CLEAR;
	printf(symbol);
}