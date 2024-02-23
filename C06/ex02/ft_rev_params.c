/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:54:29 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/13 14:04:43 by iozkilic         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i < argc && i != 0)
	{
		ft_putarg(argv[i]);
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
