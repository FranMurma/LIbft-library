/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:09:45 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/27 20:07:57 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_nueva;
	size_t	len_s;
	size_t	cont;

	len_s = 0;
	while (s[len_s])
		len_s++;
	if (len_s < start)
		len = 0;
	else if (len >= (len_s - start))
		len = len_s - start;
	str_nueva = malloc(sizeof(char) * (len + 1));
	if (!str_nueva)
		return (NULL);
	cont = 0;
	while (cont < len)
	{
		str_nueva[cont] = s[start];
		cont++;
		start++;
	}
	str_nueva[cont] = '\0';
	return (str_nueva);
}
