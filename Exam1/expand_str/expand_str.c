#include <unistd.h>
void fun(char *s)
{
	int i;

	i = 0;
	while (s[i] <= 32)
		i++;
	while (s[i])
	{
		if (s[i] > 32)
			write(1, &s[i], 1);
		if (s[i] <= 32 && s[i + 1] > 32 && s[i+1] != '\0')
			write(1,"   ", 3);
		i++;
	}

}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		fun(av[1]);
	}
	write(1, "\n", 1);
}
