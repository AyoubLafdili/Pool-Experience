/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 01:30:51 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/05 04:56:24 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	counter;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	counter = 0;
	if (size <= dlen)
		slen += size;
	else
		slen += dlen;
	while (src[counter] && size > (dlen + 1))
	{
		dest[dlen] = src[counter];
		dlen++;
		counter++;
	}
	if (dlen < size)
		dest[dlen] = '\0';
	return (slen);
}
