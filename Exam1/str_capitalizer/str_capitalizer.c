#include <unistd.h>
void str_capitalizer(char *s)
{
	int i = 0;
		while (s[i])
		{
			
			 if (s[i]>='a' && s[i]<='z' && s[i-1] <= 32)
				s[i] -= 32;	
			 else if (s[i]>='A' && s[i] <= 'Z' && s[i-1] > 32)
				s[i] += 32;		
			write(1, &s[i], 1);
			i++;
		}

}
int main(int ac, char **av)
{
	int i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
