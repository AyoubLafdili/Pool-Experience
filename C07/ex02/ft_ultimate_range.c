/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:36:08 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/04 10:28:29 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	counter;

	counter = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	arr = (int *)malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (-1);
	while (min < max)
	{
		arr[counter] = min;
		counter++;
		min++;
	}
	*range = arr;
	return (counter);
}
