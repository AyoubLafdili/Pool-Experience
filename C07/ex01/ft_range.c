/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:06:13 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/04 10:30:01 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	counter;

	counter = 0;
	if (min >= max)
		return (NULL);
	ptr = (int *)malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (min < max)
	{
		ptr[counter] = min;
		counter++;
		min++;
	}
	return (ptr);
}
