/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:30:17 by hnass-pe          #+#    #+#             */
/*   Updated: 2021/08/26 20:31:25 by hnass-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;

	while ((9 <= *nptr && *nptr <= 15) || *nptr == ' ')
		++nptr;
	sign = 1;
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -sign;
		++nptr;
	}
	num = 0;
	while ('9' >= *nptr && *nptr >= '0')
	{
		num *= 10;
		num += sign * (*nptr - '0');
		++nptr;
	}
	return (num);
}
