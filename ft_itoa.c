/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:35:58 by frmurcia          #+#    #+#             */
/*   Updated: 2022/10/04 16:46:33 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

int	ft_cifras(long nb)
{
	int	cifras;

	cifras = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		cifras++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		cifras++;
	}
	return (cifras);
}

char	*ft_mayomen(char *s, int cifras, long m)
{
	if (m < 0)
	{
		s[0] = '-';
		m = m * -1;
	}
	while (m > 0)
	{
		s[cifras] = '0' + (m % 10);
		m = m / 10;
		cifras--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		cifras;
	long	m;

	m = n;
	cifras = ft_cifras(m);
	if (m == 0)
	{
		s = malloc(sizeof(char) * 2);
		if (!s)
			return (NULL);
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	s = malloc(sizeof(char) * (cifras + 1));
	if (!s)
		return (NULL);
	s[cifras] = '\0';
	cifras--;
	s = ft_mayomen(s, cifras, m);
	return (s);
}
/*
int	main(void)
{
	long	j;

	j = 55555555555;
	ft_itoa(j);

	printf("El numero en ints es: %ld\n", j);
	j = -1246;
    printf("El numero en ints es: %ld\n", j);
	j = 2147483648;
	printf("El int maximo es: %ld\n", j);
	j = -2147483648;
	printf("El int minimo es: %ld\n", j);
}
*/
