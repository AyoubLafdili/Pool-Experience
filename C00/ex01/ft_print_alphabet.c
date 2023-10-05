/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:52:15 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/14 16:11:24 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		counter;	
	char	alphabet;

	counter = 97;
	while (counter <= 122)
	{
		alphabet = counter;
		write(1, &alphabet, 1);
		counter++;
	}
}
