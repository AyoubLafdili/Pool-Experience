/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:06:31 by alafdili          #+#    #+#             */
/*   Updated: 2023/10/01 20:07:37 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cmp(char *av1, char *av2)
{
	int	c1;

	c1 = 0;
	while (av1[c1] || av2[c1])
	{
		if (av1[c1] != av2[c1])
		{
			return (av1[c1] - av2[c1]);
		}
		c1++;
	}
	return (0);
}

void	ft_sort(int counter, char **arg)
{
	int		c1;
	int		c2;
	char	*swap;

	c1 = 1;
	while (c1 < counter - 1)
	{
		c2 = 1;
		while (c2 < counter - 1)
		{
			if (ft_cmp(arg[c2], arg[c2 + 1]) > 0)
			{
				swap = arg[c2];
				arg[c2] = arg[c2 + 1];
				arg[c2 + 1] = swap;
			}
			c2++;
		}
		c1++;
	}
}

int	main(int argc, char **argv)
{
	int	counter1;
	int	counter2;

	counter1 = 1;
	counter2 = 0;
	ft_sort(argc, argv);
	while (counter1 < argc)
	{
		counter2 = 0;
		while (argv[counter1][counter2])
		{
			write(1, &argv[counter1][counter2], 1);
			counter2++;
		}
		write(1, "\n", 1);
		counter1++;
	}
}
