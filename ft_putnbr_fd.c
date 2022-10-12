/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:04:30 by frmurcia          #+#    #+#             */
/*   Updated: 2022/10/04 19:16:17 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_negative_fd(int nb, int fd)
{
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if ((nb < -9) || (nb > 9))
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		else
		nb = ft_negative_fd(nb, fd);
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		nb = ft_negative_fd(nb, fd);
		ft_putchar_fd(nb + '0', fd);
	}
}
