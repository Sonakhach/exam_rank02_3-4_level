#include <unistd.h>

void fun(char *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t')
			write(1, &s[i], 1);
		
		if ((s[i+1] != ' ' && s[i+1] != '\t' && s[i+1] != '\0') && (s[i] == ' ' || s[i] == '\t'))
			write(1, " ", 1);
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
/*
int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				if (av[1][i + 1] > 32 && av[1][i + 1] != '\0')
					write(1, " ", 1);
			}
			else if (av[1][i] != ' ' && av[1][i] != '\t')
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}*/
