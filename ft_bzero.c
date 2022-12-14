/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:04:49 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/17 16:33:23 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		((char *)s)[cont] = '\0';
		cont++;
	}
}
