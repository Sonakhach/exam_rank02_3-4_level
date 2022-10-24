#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
	int i = 0;
	int j;
	int l = 0;
	char **tab = (char **)malloc(sizeof(char *) * 1000);
	while (str[l])
	{
		if (str[l] == ' ' || str[l] == '\t' || str[l] == '\n')
			l++;
		else
		{
			tab[i] = (char *)malloc(sizeof(char) * 1000);
			j = 0;

			while (str[l] != ' ' && str[l] != '\t' && str[l] != '\n')
			{
				tab[i][j] = str[l];
				j++;
				l++;
			}
			tab[i][j] = '\0';
			i++;
		}			
	}
	tab[i]='\0';
	return (tab);
}
int main()
{
	int i = 0;
	while (i<3)
	{
		char **s = ft_split(" sona lilo anna ");
		printf("%s\n", s[i]);
		i++;
	}
}
