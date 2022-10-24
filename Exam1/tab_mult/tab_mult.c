#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
	int res = 0;
	int n = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			n = -1;
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - '0';
		s++;
	}
	return (res * n);
}

void putnbr(int nbr)
{
	char c;
	if (nbr > 10)
		putnbr(nbr/10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}


int main(int ac, char **av)
{
	if (ac == 2 && ft_atoi(av[1]) > 0)
	{
		int a = ft_atoi(av[1]);
		int i = 1;
		while (i <= 9)
		{
			putnbr(i);
			write(1, " X ", 3);
			putnbr(a);
			write(1, " = ", 3);
			putnbr(i*a);
			write(1,"\n",1);
			i++;
		}
		
	}
	else
		write(1, "\n", 1);
}
