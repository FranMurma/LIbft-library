/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:59:12 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/19 18:53:53 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 * DESCRIPCION
 * La funcion ft_memset escribe  len  bytes del valor c 
 * (convertido en un unsigned char)
 * 
 * RETORNO
 * ft_memset retorna su primer argumento.
 *
 * */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cont;

	cont = 0;
	while (cont < len)
	{
		((unsigned char *)b)[cont] = (unsigned char)c;
		cont++;
	}
	return (b);
}
