/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:18:24 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/20 16:25:58 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPCION
 * La funcion strncmp() compara lexicograficamente las cadenas s1 y s2, 
 * terminadas en null.
 * strncmp() compara solo n caracteres. Como strncmp() esta disenada
 * para comparar cadenas mas que datos binarios, los caracteres 
 * que aparecen despues 
 * de un '\0' no se comparan.
 *
 * RETORNO
 * strncmp() retorno un entero positivo, negativo o igual a 0, 
 * segun si la cadena s1 es mayor, igual a o menor que la cadena s2.
 * La comparacion se hace usando unsigned characters, de modo que '\200'
 * es mayor que '\0'. 
 */

#include "libft.h"
/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			cont;

	cont = 0;
	while ((cont < n) && (s1[cont] != '\0' || s2[cont] != '\0'))
	{
		if (s1[cont] == s2[cont])
			cont++;
		else
			return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
	}
	return (0);
}*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			cont;

	cont = 0;
	while ((cont < n) && (s1[cont] != '\0' || s2[cont] != '\0'))
	{
		if (s1[cont] == s2[cont])
			cont++;
		else
			return (((unsigned char *)s1)[cont] - ((unsigned char *)s2)[cont]);
	}
	return (0);
}
