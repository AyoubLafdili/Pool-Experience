/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:54:44 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/03 13:06:57 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb < 2)
		return (0);
	while (counter < nb)
	{
		if (nb % counter == 0)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
