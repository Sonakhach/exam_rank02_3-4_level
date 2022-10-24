#include <unistd.h>

/*
void fun(char *a, char *b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (a[i] && b[j])
	{
		if (a[i] == b[j])
			i++;
		j++;
	}
	if (a[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);

}*/
void fun (char *a, char *b)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while (a[i])
	{
		while (b[j])
		{
			if (a[i] == b[j])
			{
				count++;
				break;	
			}
			j++;
		}
		i++;
	}
	if (i==count)
		write(1,"1", 1);
	else
		write(1, "0", 1);
}
int main(int ac, char **av)
{
	if (ac == 3)
		fun(av[1], av[2]);
	write(1, "\n", 1);
}
