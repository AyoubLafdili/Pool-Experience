/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:29:39 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/01 23:45:03 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ft;
	int	counter;

	ft = 1;
	counter = 1;
	if (!(nb < 0))
	{
		while (counter <= nb)
		{
			ft *= counter;
			counter++;
		}
		return (ft);
	}
	else
		return (0);
}
