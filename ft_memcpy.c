/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:15:46 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/21 18:52:39 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* memcpy() copia n bytes de la memoria del area src
 * a la memoria en el area dst. Si dst y src se supoerponen,
 * el comportamiento es indefinido.
 * RETURN
 *  memcpy() retorna el valor original de dst.
 *  */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	if (!dst && !src)
		return (0);
	while (cont < n)
	{
		((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
		cont++;
	}
	return (dst);
}
