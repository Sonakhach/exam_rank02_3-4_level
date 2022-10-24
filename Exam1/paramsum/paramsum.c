#include <unistd.h>

void putnbr(int nb)
{
	if (nb >= 10)
		putnbr(nb/10);
	char c;
	c = nb % 10 + '0';
	write(1,&c,1);

}
/*int main(int ac, char **av)
{
	if (ac > 1 && av)
		putnbr(ac-1);
	else
		write(1, "0", 1);
	write(1,"\n",1);

}*/
int	main(int argc, char **argv)
{
	(void)argv;

	putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
