#include <unistd.h>

void fun_rstr(char *s)
{
	int i = 0;
	
		while (s[i])
		{
			if (s[i] >= 'a' && s[i] <= 'z' && s[i + 1] <= 32)
				s[i] = s[i] - 32;
			else if (s[i] >= 'A' && s[i] <= 'Z' && s[i + 1] > 32)
				s[i] = s[i] + 32;			
			write(1, &s[i], 1);
		i++;
		}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		while (av[i])
		{
			fun_rstr(av[i]);
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
