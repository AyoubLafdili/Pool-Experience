/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:23:15 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/04 20:57:48 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	seplen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int	strslen(char **strs, int size)
{
	int	c1;
	int	c2;
	int	length;

	c1 = 0;
	c2 = 0;
	length = 0;
	while (c1 < size)
	{
		c2 = 0;
		while (strs[c1][c2])
		{
			length++;
			c2++;
		}
		c1++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		counter;
	char	*cstrs;
	int		total_length;

	if (size <= 0 || strs == NULL)
	{
		cstrs = (char *)malloc(sizeof(char));
		*cstrs = 0;
		return (cstrs);
	}
	total_length = (strslen(strs, size) + (size - 1) * seplen(sep) + 1);
	counter = 0;
	cstrs = (char *)malloc(total_length * sizeof(char));
	*cstrs = '\0';
	while (counter < size - 1)
	{
		ft_strcat(cstrs, strs[counter]);
		ft_strcat(cstrs, sep);
		counter++;
	}
	ft_strcat(cstrs, strs[counter]);
	return (cstrs);
}
