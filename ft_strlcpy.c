/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:21:36 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/20 19:17:16 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
 *
 *
 *
 *
 *
*/
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;

	cont = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((cont < dstsize - 1) && (src[cont]))
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';	
	cont = ft_strlen(src);
	return (cont);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	len;

	cont = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while ((cont < dstsize - 1) && src[cont])
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';
	return (len);
}
