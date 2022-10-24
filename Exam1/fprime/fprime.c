#include <stdio.h>
#include <stdlib.h>

void fprime(int nb)
{
	if (nb == 1)
		printf("1");
	int i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			printf("%d",i);
			if(nb != i)
				printf("*");
			nb = nb/i;
			i--;	
		}
		
		i++;

	}
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = atoi(av[1]);
		fprime(a);
	}
	printf("\n");

}
