/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iozkilic <iozkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:31:01 by iozkilic          #+#    #+#             */
/*   Updated: 2024/02/14 21:58:26 by iozkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


char map[10][8] = 
{
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','.','o','.','.','o'},
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','.','o','.','.','o'},
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','.','.','.','.','o'},
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','.','.','.','.','.'}
};

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void 	print_map(char map[][8])
{
	int		i;
	int		j;

	i = 0;
	j = 0;

	while(i < 8)
	{
		while (j < 10)
		{
			ft_putchar(map[i][j]);
			ft_putchar(' ');
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}

char	get_tile(char map[][8], int x, int y)
{
	char 	tile;

	tile = map[x][y];
	return (tile);
}

void    put_tile(char map[][8], int x, int y, char change)
{
    map[x][y] = change;

}

void 	write_borders(char map[][8], save,)
{
	int		i;
	int		j;

	i = 0;
	j = 0;

	while(i < 8)
	{
		while (j < 10)
		{
			ft_putchar(map[i][j]);
			ft_putchar(' ');
			j++;
		}
		j = 0;
		i++;
		ft_putchar('\n');
	}
}
void    fill(int x, int y, char obs)
{
	if (x < 0 || x >= 10 || y < 0 || y >= 8) 
        return;
	if (get_tile(map, x, y) == 'X' || get_tile(map, x, y) == obs)
	{
		return;
	}
	put_tile(map, x, y, 'X');
	printf("%d %d\n", x, y);
	while ()
    	fill(x+1, y, obs);
    	fill(x-1, y, obs);
    	fill(x, y+1, obs); 
    	fill(x, y-1, obs);
	
}



int	main()
{
	char path;
	char obs;

	path = '.';
	obs = 'o';

	printf("%c\n", get_tile(map, 0, 0));
	fill(3, 3, path, [10, 8]);
	printf("%c\n", get_tile(map, 1, 1));
	print_map(map);
}