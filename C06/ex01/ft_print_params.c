/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:42:51 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/13 13:53:25 by iozkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putarg(char *c)
{
	while (*c != 0)
	{
		write(1, &*c, 1);
		c++;
	}
}

int	main( int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putarg(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
