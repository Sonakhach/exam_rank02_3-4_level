#include <unistd.h>
#include <stdlib.h>
int  ft_atoi(char *s)
{
	int res = 0;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - '0';
		s++;
	}
return (res);
}

void print_hex(int a)
{
	char b[]="0123456789abcdef";
	if (a > 16)
		print_hex(a/16);
	write(1, &b[a % 16],1);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = ft_atoi(av[1]);
		print_hex(a);
	}
	write(1,"\n",1);
}
