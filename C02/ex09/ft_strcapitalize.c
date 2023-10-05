/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:32:22 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/24 18:09:38 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	ctr;
	int	boll;

	ft_lowcase(str);
	ctr = 0;
	boll = 1;
	while (str[ctr])
	{
		if (str[ctr] >= 'a' && str[ctr] <= 'z')
		{
			if (boll == 1)
				str[ctr] -= 32;
			boll = 0;
		}
		else if (str[ctr] >= '0' && str[ctr] <= '9')
		{
			boll = 0;
		}
		else
			boll = 1;
		ctr++;
	}
	return (str);
}
