#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *s)
{
	int	i;
	int	res;
	int	x;

        i = 0;
	x = 1;
	res = 0;
	if (s[i]=='-' || s[i]=='+')
	{
		if (s[i] == '-')
			x = -1;
		i++;	
	}
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + s[i] - '0';
		i++;

	}
	return (res * x);
}

int	prim(int a)
{
	int i = 2;
	while (i < a)
	{
		if (a % i == 0)
			return (0);
		i++;

	}
	return (1);
}

int	sum_fun(int a)
{
	int i = 2;
	int sum = 0;

	while (i <= a)
	{
		if (prim(i) == 1)
			sum += i;
	       i++;	
	}
	return (sum);
	
}

void put_nbr(int s)
{
	char c;
	if (s >= 10)
		put_nbr(s / 10);
	c = s % 10 + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2 &&  ft_atoi(av[1]) > 0)
	{
		put_nbr(sum_fun(ft_atoi(av[1])));
		//printf("%d\n",ft_atoi(av[1]));
		
	}
	else
		write(1, "0", 1);
	write(1,"\n", 1);
}
