#include <unistd.h>

void rev_wstr(char *s)
{
	int start;
	int end;
	int flag;
	int i = 0;
	while (s[i])
		i++;
	while (i>=0)
	{
		while (s[i] <= 32 || s[i] == '\0')
			i--;
		end = i;
		while (s[i] > 32)
			i--;
		start = i + 1;
		flag = start;
		while (start <= end)
		{
			
			write(1, &s[start], 1);
			start++;
		}
		if (flag != 0)
			write(1, " ", 1);
	}

}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_wstr(av[1]);
	}
	write(1,"\n",1);
}
