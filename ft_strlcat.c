/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:19:52 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/21 18:03:43 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * DESCRIPCION
 * strcat() concatena cadenas. Toman el tamaño total del buffer destino 
 * y garantizan la terminación NULL si hay espacio. Nota que el espacio 
 * para el NULL debe ser incluido en dtsize.
 * strlcat() agrega la cadena src al final de dst. 
 * Agregará como máximo dstsize - strlen (dst) - 1 caracteres. 
 * Luego terminará en NUL, a menos que dstsize sea 0 o que la 
 * cadena dst original sea más larga que dstsize (en la práctica, 
 * esto no debería suceder, ya que significa que dstsize es incorrecto 
 * o que dst no es una cadena adecuada).
 * RETURN
 * strlcat() devuelven la longitud total de la cadena que intentaron 
 * crear. Eso significa la longitud inicial de dst más la longitud de src.
 * Si dstsize <= dst, retorna  la longitud de src + dstsize
 *
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	len_s;
	size_t	len_d;

	cont = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (len_d >= dstsize)
		return (len_s + dstsize);
	while ((cont + len_d < dstsize -1) && src[cont])
	{
		dst[len_d + cont] = src[cont];
		cont++;
	}
	dst[len_d + cont] = '\0';
	len_d = ft_strlen(dst);
	return (len_d + ft_strlen(&src[cont]));
}
