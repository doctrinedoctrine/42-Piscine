/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:01:24 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/08 17:34:43 by iozkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	ft_decide(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if ((c >= 'A' && c <= 'Z') || ((c >= '0' && c <= '9')))
	{
		return (1);
	}
	else
	{
		return (2);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_lowercase(str);
	while (str[i])
	{
		if ((ft_decide(str[i - 1]) == 2) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}