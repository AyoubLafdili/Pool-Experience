/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:17:31 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/26 23:03:04 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	length;

	counter = 0;
	length = 0;
	while (dest[counter] != '\0')
	{
		length++;
		counter++;
	}
	counter = 0;
	while (counter < nb && src[counter] != 0)
	{
		dest[length] = src[counter];
		length++;
		counter++;
	}
	dest[length] = '\0';
	return (dest);
}
