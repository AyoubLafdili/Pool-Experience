/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:33:43 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/19 22:47:46 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter1;
	int	counter2;
	int	swap;

	counter1 = 0;
	while (counter1 < size - 1)
	{
		counter2 = 0;
		while (counter2 < size - 1)
		{
			if (tab [counter2] > tab [counter2 + 1])
			{
				swap = tab [counter2];
				tab [counter2] = tab [counter2 + 1];
				tab [counter2 + 1] = swap;
			}
			counter2++;
		}
		counter1++;
	}
}
