#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
return (i);
}
int main()
{
	t_list *aa;
	t_list *bb;
	t_list *cc;
	t_list *lst;

	aa =(t_list *)malloc(sizeof(t_list));
	bb =(t_list *)malloc(sizeof(t_list));
	cc =(t_list *)malloc(sizeof(t_list));

	aa->data =(int *) 6;
	bb->data =(int *) 7;
	cc->data =(int *) 9;

	aa->next = bb;
	bb->next = cc;
	cc->next = 0;
	
	lst = aa;
	printf("%d\n", ft_list_size(lst));
}
