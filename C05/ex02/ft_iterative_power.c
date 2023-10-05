/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:18:58 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/02 15:57:56 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	result;

	counter = 0;
	result = nb;
	if (power > 0)
	{
		while (counter < power - 1)
		{
			result *= nb;
			counter++;
		}
		return (result);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
