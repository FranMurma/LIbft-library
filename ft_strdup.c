/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:39:37 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/26 13:30:35 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str_nueva;
	int		cont;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	str_nueva = malloc(sizeof(char) * (len + 1));
	if (!str_nueva)
		return (NULL);
	cont = 0;
	while (s1[cont])
	{
		str_nueva[cont] = s1[cont];
		cont++;
	}
	str_nueva[cont] = '\0';
	return (str_nueva);
}
