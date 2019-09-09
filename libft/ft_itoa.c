/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpizpot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 05:49:46 by rpizpot           #+#    #+#             */
/*   Updated: 2019/04/08 07:32:39 by rpizpot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			i;
	char		*numb;
	int			flag;
	long int	k;

	k = (long int)n;
	flag = 0;
	if (k < 0)
	{
		flag = 1;
		k *= -1;
	}
	i = ft_size(k);
	numb = (char *)malloc(sizeof(char) * i + 1 + flag);
	if (!numb)
		return (NULL);
	if (flag == 1)
		numb[0] = '-';
	numb[i + flag] = '\0';
	while (i-- > 0)
	{
		numb[i + flag] = k % 10 + '0';
		k = k / 10;
	}
	return (numb);
}
