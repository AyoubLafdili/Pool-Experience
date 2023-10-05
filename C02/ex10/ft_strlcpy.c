/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 01:52:26 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/25 16:31:03 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter1;
	unsigned int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (src[counter1] != 0)
	{
		counter1++;
	}
	while (counter2 < size - 1 && src[counter2] != 0)
	{
		dest[counter2] = src[counter2];
		counter2++;
	}
	dest [counter2] = 0;
	return (counter1);
}
