#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (*begin_list==NULL || begin_list==NULL)
		return ;
	t_list	*new;
	t_list	*tmp;
	if (*begin_list && cmp((*begin_list)->data, data_ref)==0)
	{
		new = *begin_list;
		*begin_list = (*begin_list)->next;
		free(new);
	}
	new = *begin_list;
	while (new && new->next)
	{
		if (cmp(new->next->data,data_ref)==0)
		{
			tmp = new->next;
			new->next = tmp->next;
		        free(tmp);	
		}
		new = new->next;
	}
}
void print(t_list **s)
{
	t_list *new;
	new = *s;
	while (new)
	{
		printf("%s\n", (char *) (new->data));
		new = new->next;
	}
}
int main()
{
	t_list *aa = (t_list *)malloc(sizeof(t_list ));
	t_list *bb = (t_list *)malloc(sizeof(t_list ));
	t_list *cc = (t_list *)malloc(sizeof(t_list ));
	t_list **lst;
	char a[] = "chara";
	char b[] = "charb";
	char c[] = "charc";	
	aa->data = a;
       	bb->data = b;
	cc->data = c;  

	aa->next = bb;
	bb->next = cc;
	cc->next = 0;
	lst = &aa;
	print(lst);
	ft_list_remove_if(lst,a,strcmp);
	print(lst);

		

}
