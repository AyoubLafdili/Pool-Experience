/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:14:35 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/20 15:14:47 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	swap;
	int	length;

	length = size - 1;
	counter = 0;
	while (counter < length)
	{
		swap = tab[counter];
		tab[counter] = tab [length];
		tab[length] = swap;
		length--;
		counter++;
	}
}
