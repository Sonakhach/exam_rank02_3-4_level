#include <unistd.h>

/*void rostring(char *s)
{
	int j = 0;
	int i = 0;
	while (s[i] <= 32)
		i++;
	j = i;
	while (s[i] > 32)
		i++;
	while (s[i])
	{
		while (s[i] <= 32)
	                i++;

		while (s[i] > 32)
		{
			write(1, &s[i], 1);
			if(s[i] > 32 && s[i + 1] <= 32)
				write(1, " ", 1);
			i++;
		}
		
	}
	while(s[j] > 32)
	{
		write(1, &s[j], 1);
		j++;
	}

}*/
void rostring(char *s)
{
	int i = 0;
	int start;
	int end;
	int flag = 0;
	while (s[i] <= 32)
		i++;
	start = i;
	while (s[i] > 32  && s[i])
		i++;
	end = i;
	while (s[i] <= 32)
		i++;
	while (s[i])
	{
		flag = 1;
		write(1, &s[i], 1);
		i++;
	}
	if (flag == 1)
		write(1," ", 1);
	while(start < end)
	{
		write(1, &s[start], 1);
		start++;
	}


}
int main(int ac, char **av)
{
	if(ac > 1)
		rostring(av[1]);
	write(1,"\n",1);

}
