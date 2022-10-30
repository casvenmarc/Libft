/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macasano <macasano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:17:59 by macasano          #+#    #+#             */
/*   Updated: 2022/10/30 22:05:51 by macasano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	new_c;
	unsigned char	*str;

	i = 0;
	new_c = c;
	str = (unsigned char *)b;
	while (i <= len)
	{
		str[i] = new_c;
		i++;
	}
	return (str);
}
