/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lojesu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:42:17 by lojesu            #+#    #+#             */
/*   Updated: 2018/11/23 16:55:52 by lojesu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (i < 0)
		return (0);
	while (i <= 50000)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}