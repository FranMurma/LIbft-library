/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:40:39 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/28 16:06:55 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		cont_s1;
	int		cont_s2;
	char	*s3;

	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	cont_s1 = 0;
	cont_s2 = 0;
	while (s1[cont_s1])
	{
		s3[cont_s1] = s1[cont_s1];
		cont_s1++;
	}
	while (s2[cont_s2])
	{
		s3[cont_s1 + cont_s2] = s2[cont_s2];
		cont_s2++;
	}
	s3[cont_s1 + cont_s2] = '\0';
	return (s3);
}
