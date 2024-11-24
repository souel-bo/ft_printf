/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souel-bo <souel-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:08:32 by souel-bo          #+#    #+#             */
/*   Updated: 2024/11/24 12:56:59 by souel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, char *base, int *counter)
{
	if (nb >= 16)
		ft_puthex(nb / 16, base, counter);
	ft_putchar(base[nb % 16], counter);
}
