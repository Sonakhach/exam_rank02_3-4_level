#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;

	}
}

void fun(void *s)
{
	*(int *) s = *(int *) s * 2;
}

void print(t_list *s)
{
	while (s)
	{
		printf("%d ,", *(int *)(s->data));
		s = s->next;
	}
}

int main()
{
	t_list *aa;
	t_list *bb;
	t_list *cc;
	t_list *lst;

	aa = (t_list *)malloc(sizeof(t_list));
	bb = (t_list *)malloc(sizeof(t_list));
	cc = malloc(sizeof(t_list));
	
	int a = 9;
	int b = 10;
	int c = 11;

	aa->data = &a;
	bb->data = &b;
	cc->data = &c;

	aa->next = bb;
	bb->next = cc;
	cc->next = 0;
	lst = aa;
	print(lst);
       	ft_list_foreach(lst,fun);	
	print(lst);
}
