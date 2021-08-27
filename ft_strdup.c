/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:10:36 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/08/27 09:13:55 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	int		i;
	int		strlen;
	char	*strdup;

	i = 0;
	strlen = ft_strlen((char *)s);
	strdup = (char *)malloc((strlen + 1) * sizeof(*s));
	strdup[strlen + 1] = '\0';
	while (i <= strlen)
	{
		strdup[i] = s[i];
		i++;
	}
	return (strdup);
}
