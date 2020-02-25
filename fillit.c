/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/27 10:47:03 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/26 23:51:35 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

static	int	free_and_return_1(void)
{
	write(1, "error\n", 6);
	free_all();
	return (1);
}

int			main(int argc, char **argv)
{
	int	fd;

	if (!(testargc(argc)))
		return (1);
	fd = 0;
	if (!initstruct() || !(fd = gettetris(argv[1], fd)))
		return (free_and_return_1());
	ft_parseverifystr();
	if (close(fd) == -1)
		return (free_and_return_1());
	if (g_sf->error_tetris == 1)
		return (free_and_return_1());
	else
	{
		set_alphabet();
		if (!define_type() || !algo_main(0, 0))
			return (free_and_return_1());
	}
	free_all();
	return (0);
}
