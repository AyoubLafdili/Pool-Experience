/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:23:00 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/05 00:29:56 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c1;
	int	c2;

	c1 = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[c1])
	{
		c2 = 0;
		while (str[c1 + c2] == to_find[c2])
		{
			if (to_find[c2 + 1] == '\0')
				return (&str[c1]);
			c2++;
		}
		c1++;
	}
	return (NULL);
}
