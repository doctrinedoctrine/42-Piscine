/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:38 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/15 15:53:11 by iozkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (nb < 0)
		return (0);
	if (power <= 0)
		return (1);
	while (++i <= power)
	{
		nb *= n;
	}
	return (nb);
}
