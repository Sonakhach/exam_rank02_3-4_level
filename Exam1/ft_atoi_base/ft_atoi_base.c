#include <stdio.h>
char lower(char c)
{
	if (c >= 'A' && c <= 'F')
		return (c + 32);
	return (c);
}
int dig_in_base(char c, int str_base)
{
	int dig = 0;
	if (str_base < 10)
		dig = str_base + '0';
	else
		dig = str_base + 'a' - 10;
	if (c >= '0' && c <= '9' && c <= dig)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= dig)
		return (c - 'a' + 10);
	else
		return (-1);

}
int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int n = 1;
	int digit;
	int i = 0;
	if (str[i]=='-')
	{
		n=-1;
		i++;
	}
	while ((digit=dig_in_base(lower(str[i]),str_base)) >= 0)
	{
		res = res * str_base + digit * n;
		i++;
	}
	return (res);
}

/*
int ft_atoi_base(const char *str, int str_base)
{
	int j = 0;
	int dig = 0;
	int n = 1;
	int res = 0;
	int i = 0;
	

	while (str[j])
	{
		if (str[j]=='-')
			j++;
		if (str[j] >= '0' && str[j] <= '9')
			dig = str_base + '0';
		else 
			dig = str_base + 'a' - 10;
		j++;
	}
	if (str[i]=='-')
	{
		n = -1;
		i++;
	}

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9' && str[i] <= dig)
			res = res * str_base + str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f' && str[i] <= dig)
			res = res * str_base + str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F' && str[i] <= dig)
			res = res * str_base + str[i] + 32 - 'a' + 10;
		else
			return (0);
		i++;
	}
	return (res * n);
}*/
int main()
{
	printf("%d\n", ft_atoi_base("10311", 2));

}
