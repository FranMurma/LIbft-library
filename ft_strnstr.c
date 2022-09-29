/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:08:28 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/20 18:07:55 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La funcion strnstr() localiza la primera aparicion de una cadena (needle)
 * dentro de otra cadena (haystack), en la que no hay mas caracteres que la
 * len que se busca. Los carateres que aparecen despues de un '\0'
 * no se buscan. Como la funcion strnstr() es una API especificia FreeBSD,
 * solo deberia usarse cuando no concierne a una portabilidad. 
 *
 * RETURNO
 * si neede es una cadena vacia, se retorna haystack; si no aparece needle
 * en haystack, se devuelve NULL; en caso contrario se retorna un puntero con 
 * la aparicion del primer caracter de needle.
 * */
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont_h;
	size_t	cont_n;

	cont_h = 0;
	cont_n = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack[0] == '\0')
		return (NULL);
	while (haystack[cont_h] != '\0')
	{
		cont_n = 0;
		while ((cont_h + cont_n < len)
			&& (haystack[cont_h + cont_n] == needle[cont_n]))
		{
			if (needle[cont_n + 1] == '\0')
				return ((char *)(haystack + cont_h));
			cont_n++;
		}
		cont_h++;
	}
	return (NULL);
}
