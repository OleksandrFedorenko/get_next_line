/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counts_extra3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedoren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:25:49 by afedoren          #+#    #+#             */
/*   Updated: 2017/11/23 13:25:51 by afedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counts(char const *str, char c, int k)
{
	int len;

	len = 0;
	while (str[k] != c && str[k] != '\0')
	{
		k++;
		len++;
	}
	return (len);
}
