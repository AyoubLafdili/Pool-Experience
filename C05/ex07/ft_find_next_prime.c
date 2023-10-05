/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:18:45 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/03 13:08:39 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int num)
{
	int	counter;

	counter = 2;
	if (num < 2)
		return (0);
	while (counter <= num / counter)
	{
		if (num % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else 
			nb++;
	}
}
