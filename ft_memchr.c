/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:57:06 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/22 18:15:58 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* mcmchr() localiza la primera aparicion de c (convertido en unsigned char)
 * en la cadena s
 * RETURN
 * memchr() devuelve un puntero al byte localizado o NULL si tal byte no existe 
 * dentro de n bytes
*/
#include "libft.h"
/*
void	*ft_memchr(const void *s, int c, size_t n)
{	
	size_t	cont;

	cont = 0;
	while (cont < n && ((unsigned char *)s)[cont] != (unsigned char)c)
		cont++;
	if (n > cont && ((unsigned char *)s)[cont] == (unsigned char) c)
		return ((void *)(s + cont));
	else
		return (0);
}
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (((unsigned char *)s)[cont] != (unsigned char) c)
			cont++;
		else
			return ((void *)(s + cont));
	}
	return (0);
}
