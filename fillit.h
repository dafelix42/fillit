/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fakl <fakl@student.le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/15 14:44:12 by davfelix     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/08 14:05:16 by fakl        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <string.h>

typedef struct	s_lstfillit
{
	int			nb_tetris;
	char		numtetri[3];
	int			typ_f[26];
	char		modeltetri[381];
	int			error_tetris;
	char		str[546];
	int			lngstr;
	char		newstr[545];
	int			lngnewstr;
	char		strrech[17];
	char		**db_tetri[19];
	char		**grid;
	int			size;
	int			nb_point;
	char		letter[27];
}				t_lstfillit;

/*
** Global variable
*/

t_lstfillit		*g_sf;

/*
** file: main.c
*/

int				main(int argc, char **argv);

/*
** file: check_parse.c
** Check the source.
*/

int				initstruct(void);
int				testargc(int argc);
int				gettetris(char *filename, int fd);
void			ft_parseverifystr(void);
void			ft_verifystrstructure(void);

/*
** files: standardise _columns.c _lines.c et _str.c
** Move the tetri on the left side.
** Move the tetri on the left side.
** Create the source string of research.
*/

void			ft_standardiselines(void);
void			ft_standardisecolumns(void);
int				ft_standardisecolumnsif(int j);
void			ft_standardisecolumnsfilldot(int i);
void			ft_standardisestr(void);

/*
** file: detect_tetri.c
** Compare a received tetri with all the models of tetri and find the good one.
** Then save it's type number.
*/

void			ft_searchtetri(void);
void			ft_savenumtetrifound(int k, char ret17, char ret18);
void			ft_fillmodeltetri(void);

/*
** file: define_tetri.c
** Create database of tetri and store alphabet. Results are used by algo.c.
*/

int				define_type(void);
int				free_error_define(int n);
void			fill_shapes(void);
void			set_alphabet(void);

/*
** file: grid.c
** Create grid and define size, based on nb_tetris and typ_f.
** Results are used by algo.c.
*/

int				create_grid(int size_plus, int row, int col);
void			define_size(int size_plus);
int				only_sqr(void);
int				malloc_grid(int row, int col);

/*
** file: algo.c
** Fonctions to resolve fillit.
*/

int				algo_main(int size_plus, int row);
int				fillit(int row, int col, int i_tetri);
int				check_piece(int i, int r, int c);
void			copy_tetri(int i_tetri, int r, int c);
void			move_last_tetri(int i, int r, int c);

/*
** file: free_all.c
** After printing the result, free the entire structure.
*/

void			free_all(void);
void			free_grid(void);
void			free_db_tetri(void);

#endif
