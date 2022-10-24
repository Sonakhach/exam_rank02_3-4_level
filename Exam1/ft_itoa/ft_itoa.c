#include <stdio.h>
#include <stdlib.h>

int count(int nbr)
{
	int sum = 0;
	if (nbr <= 0)
		sum++;
	while (nbr != 0)
	{
		sum++;
		nbr /= 10;
	}
	return (sum);

}
char	*ft_itoa(int nbr)
{
	int i = 0;
	int len = count(nbr);
	char *ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
		if (nbr == 0)
		{
			ptr[0] = '0';
			return (ptr);
		}
		if (nbr < 0)
		{
			ptr[0] = '-';
			nbr = -nbr;
			
		}		
		while (nbr != 0)
		{
			len--;
			ptr[len] = (nbr % 10) + '0';
			nbr /= 10;
		}
return (ptr);
}
int main()
{
	//printf("%d\n", count(0));
	printf("%s\n ",ft_itoa(-123));

}
