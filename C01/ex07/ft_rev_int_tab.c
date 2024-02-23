/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:56:43 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/07 17:46:42 by iozkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}

#include <stdio.h>
int main()
{
	int arr[5] = {1, 4, 2, 4, 0};
	int size = 5;
	int i = 0;
	ft_rev_int_tab(arr, size);
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}