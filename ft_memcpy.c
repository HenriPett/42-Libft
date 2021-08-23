/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:13:52 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/08/23 09:14:00 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*cpy;
	const char	*origem;

	i = 0;
	cpy = dest;
	origem = src;
	while (i < (int)n)
	{
		cpy[i] = origem[i];
		i++;
	}
	return (dest);
}
