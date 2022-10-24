#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
	struct s_list	 *next;
	int 		 data;	

}t_list;
/*
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;
	tmp = lst;
	while (lst->next)
	{
		if (cmp(lst->data,lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;

	}
	
	return (lst);
}*/
t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swap = 1;
	int tmp;
	t_list *new;
	new = lst;
	while (swap == 1)
	{
	
		swap = 0;
		while (new && new->next)
		{
			if (cmp(new->data,new->next->data)== 0)
			{
				tmp =lst->data;
				lst->data=lst->next->data;
				lst->next->data=tmp;
				swap = 1;
			}
			new = new->next;
		}
		new = lst;
	}
	return (lst);
}

int ascending(int a, int b)
{
	return (a <= b);
}
int main()
{
	t_list *aa = malloc(sizeof(t_list));
	 t_list *bb = malloc(sizeof(t_list));
	  t_list *cc = malloc(sizeof(t_list));
	   t_list *dd = malloc(sizeof(t_list));

	   aa->data = 7;
	   bb->data = 9;
	   cc->data = 3;
	   dd->data = 5;

	   aa->next = bb;
	   bb->next = cc;
	   cc->next = dd;
	   dd->next = 0;



	t_list *lst;
	lst = aa;

	sort_list(lst,ascending);
	while (lst)
	{
		printf("%d ,", lst->data);
			lst = lst->next;
	}

}
