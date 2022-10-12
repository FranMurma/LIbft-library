/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:17:26 by frmurcia          #+#    #+#             */
/*   Updated: 2022/10/04 16:15:33 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_n;
	unsigned int	indice;

	s_n = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s_n)
		return (NULL);
	indice = 0;
	while (s[indice])
	{
	s_n[indice] = f(indice, s[indice]);
	indice++;
	}
	s_n[indice] = '\0';
	return (s_n);
}
