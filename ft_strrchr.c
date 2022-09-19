/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:33:18 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/19 18:48:45 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPCION
 * strrchr() localiza la ultima aparicion de c (convertido en char)
 * en la string apuntada por s. La terminacion null se considera
 * parte de la string; por tanto, si c es '\0', la funcion localiza 
 * la terminacion '\0'
 *
 * RETORNO
 * La funcion strrchr() devuelve un puntero para el caracter localizado o
 * NULL si el caracter no aparece en la string.
 *
 */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	while (cont >= 0)
	{
		if (s[cont] == (char)c)
			return ((char *)(s + cont));
		cont--;
	}
	return (0);
}
