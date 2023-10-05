/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:47:45 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/14 16:13:28 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		counter;
	int		digit;

	counter = '0';
	while (counter <= '9')
	{
		digit = counter;
		write(1, &digit, 1);
		counter++;
	}
}
