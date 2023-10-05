/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atio.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:02:39 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/30 16:26:56 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	result;
	int	sign;

	sign = 1;
	c = 0;
	result = 0;
	while ((str[c] && str[c] >= 9 && str[c] <= 13) || (str[c] == 32))
	{
		c++;
	}
	while (str[c] && (str[c] == '-' || str[c] == '+'))
	{
		if (str[c] == '-')
		{
			sign *= (-1);
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = result * 10 + (str[c] - '0');
		c++;
	}
	return (result * sign);
}
