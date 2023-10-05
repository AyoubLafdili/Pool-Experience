/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:07:36 by alafdili          #+#    #+#             */
/*   Updated: 2023/09/30 21:44:34 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;

	counter = 0;
	if (argc == 1)
	{
		while (argv[0][counter])
		{
			write(1, &argv[0][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
	}
}
