/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lojesu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:41:18 by lojesu            #+#    #+#             */
/*   Updated: 2018/11/23 16:51:06 by lojesu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_words(char *str, char x)
{
	int i;
	int count;

	if (!str || !x)
		return (0);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == x)
			i++;
		if (str[i] != x && str[i] != '\0')
		{
			while (str[i] != x && str[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}
