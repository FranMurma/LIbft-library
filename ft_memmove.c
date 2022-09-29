/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:32:33 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/26 12:34:44 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * memmove() copia len bytes de la cadena src a la cadena dst.
 * las dos cadenas se pueden superponer. La copia siempre se
 * hace de forma no destructiva.
 *
 * RETURN
 * La funcion memmove() devuelve el valor original de dst.
 */

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cont;

	cont = 0;
	if (!dst && !src)
		return (0);
	if (len < ft_strlen(src))
	{
		return (dst);
	}
	while (cont < len)
	{
		((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
		cont++;
	}
	return (dst);
}
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cont;

	cont = 0;
	if (dst == src && len >= 0)
		return (dst);
	if (src > dst)
	{
		while (cont < len)
		{
			*((char *)(dst + cont)) = *((char *)(src + cont));
			cont++;
		}
	}
	else
	{
		cont = len;
		while (cont > 0)
		{
			*((char *)(dst + cont -1)) = *((char *)(src + cont -1));
			cont--;
		}
	}
	return (dst);
}
