#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int swap = 1;
	int tmp = tab[i];
	while (swap == 1)
	{
		i = 1;
		swap = 0;
		while (i < size)
		{
			if (tab[i-1] > tab[i])
			{
				tmp = tab[i - 1];
				tab[i-1] = tab[i];
				tab[i] = tmp;
				swap = 1;
			}
		i++;
		}
	}
	
}

int main()
{
	int i = 0;
	int a[] = {9,5,7,3,2,1};
	sort_int_tab(a,6);
	while(i < 6)
	{
		printf("%d ,", a[i]);
		i++;
	}
}
