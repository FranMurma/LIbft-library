/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:20:11 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/20 20:01:34 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPCION
 * strchr() localiza la primera aparicion de c (convertido en char)
 * en la string apuntada por s. La terminacion null se considera
 * parte de la string; por tanto si c es '\0', la funcion localiza
 * la terminacion '\0'.
 * RETORNO
 * La funcion strchr() devuelve un puntero para el caracter localizado o
 * NULL si el caracter no aparece en la string. 
 *
 */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == (char)c)
			return ((char *)(s + cont));
		cont++;
	}
	if (s[cont] == (char)c)
		return ((char *)(s + cont));
	return (NULL);
}
