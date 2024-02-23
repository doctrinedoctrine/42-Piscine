/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:19:42 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/07 17:49:27 by iozkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		swap;
	int		count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}

#include <stdio.h>
int main()
{
	int arr[5] = {1, 4, 2, 4, 0};
	int size = 5;
	int i = 0;
	ft_sort_int_tab(arr, size);
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}