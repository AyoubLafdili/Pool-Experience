/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:02:12 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/26 15:09:50 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	length;

	length = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		length++;
		c++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[length] = src[c];
		length++;
		c++;
	}
	dest[length] = '\0';
	return (dest);
}
