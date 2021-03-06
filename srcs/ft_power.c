/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roster <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:43:16 by roster            #+#    #+#             */
/*   Updated: 2019/03/05 15:30:58 by roster           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_power(double nb, int power)
{
	double i;

	if (power == 0)
		return (1);
	i = nb;
	if (power > 0)
	{
		while (power > 1)
		{
			nb = nb * i;
			power--;
		}
	}
	else
	{
		i = 1 / nb;
		nb = 1 / nb;
		while (power < -1)
		{
			nb = nb * i;
			power++;
		}
	}
	return (nb);
}
