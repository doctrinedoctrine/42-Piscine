/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:48:54 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/06 18:12:16 by iozkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main(void)
{
	int a = 64;
	int b = 7;
	int div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n" , div);
	printf("%d" , mod);
}