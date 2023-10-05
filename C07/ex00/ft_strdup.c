/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:37:05 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/03 18:46:44 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	int		counter;
	char	*ptr;

	counter = 0;
	ptr = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (src[counter])
	{
		ptr[counter] = src[counter];
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}
