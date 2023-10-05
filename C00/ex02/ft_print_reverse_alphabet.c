/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:58:28 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/14 16:12:21 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;
	int		counter;

	counter = 122;
	while (counter >= 97)
	{
		alphabet = counter;
		write(1, &alphabet, 1);
		counter--;
	}
}
