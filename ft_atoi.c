int	ft_comienzo(char *str)
{
	int	cont1;

	cont1 = 0;
	while (str[cont1] == ' ' || str[cont1] == '\n'
		|| str[cont1] == '\t' || str[cont1] == '\r'
		|| str[cont1] == '\v' || str[cont1] == '\f')
	{
		cont1++;
	}
	return (cont1);
}

int	ft_atoi(char *str)
{
	int	cont1;
	int	almacen;
	int	neg;

	cont1 = 0;
	almacen = 0;
	neg = 1;
	if (str[cont1] != '\0')
	{
		cont1 = ft_comienzo(str);
		while (str[cont1] == '+' || str[cont1] == '-')
		{
			if (str[cont1] == '-')
				neg = neg * -1;
			cont1++;
		}
		while (str[cont1] >= '0' && str[cont1] <= '9')
		{
			almacen = (almacen * 10) + (str[cont1] - '0');
			cont1++;
		}
		almacen = almacen * neg;
	}
	return (almacen);
}
