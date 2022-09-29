/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:20:22 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/22 18:57:40 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (((unsigned char *)s1)[cont] != ((unsigned char *)s2)[cont])
			return (((unsigned char *)s1)[cont] - ((unsigned char *)s2)[cont]);
		cont++;
	}
	return (0);
}
