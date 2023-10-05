/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:03:47 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/03 13:06:13 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	ncheck;

	ncheck = 0;
	if (nb >= 0)
	{
		while (ncheck * ncheck <= nb)
		{
			if (ncheck * ncheck == nb)
				return (ncheck);
			ncheck++;
		}
	}
	return (0);
}
