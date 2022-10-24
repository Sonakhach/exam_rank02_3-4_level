#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*int pgcd(int a, int b)
{
	unsigned int n;
	if (a > b)
		n = b;
	while (n > 0)
	{
		if (a % n == 0 && b % n ==0)
			return (n);
		n--;
	}
	return(n);

}
int main(int ac, char **av)
{
	
	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		if (a>0 && b>0)
			printf("%d", pgcd(a,b));
	}
	printf("\n");
}*/
int main(int argc, char const *argv[])
{
	int nbr1;
	int nbr2;

	if (argc == 3)
	{
		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
