/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roster <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 16:48:46 by roster            #+#    #+#             */
/*   Updated: 2019/12/06 13:36:11 by lojesu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_nb_size(long int nb)
{
	size_t	size;

	size = 1;
	if (nb < 0)
		size++;
	while (nb / 10 >= 1 || nb / 10 <= -1)
	{
		size++;
		nb = nb / 10;
	}
	return (size);
}
