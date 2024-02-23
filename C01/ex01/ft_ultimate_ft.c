/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:54:07 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/06 18:09:19 by iozkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *****nbr)
{
	*****nbr = 42;
}

#include <stdio.h>
int main(void)
{
	int a = 0;
	int *ptr = &a;
	int **ptr1 = &ptr;
	int ***ptr2 = &ptr1;
	int ****ptr3 = &ptr2;
	int *****ptr4 = &ptr3;
	ft_ultimate_ft(ptr4);
	printf("%d" , a);
}