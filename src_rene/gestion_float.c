/*
** gestion_float.c for gestion_float in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Tue May 10 21:32:32 2016 rodrigue rene
** Last update Sun May 29 03:10:21 2016 rodrigue rene
*/

#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "my.h"

void		my_put_nbr_double_part_2(int	nbi,
					 int	witness,
					 double	rest,
					 int	div)
{
  int		i;

  i = 0;
  if (nbi >= 10)
    while (div != 0)
      {
	my_putchar(nbi / div % 10 + '0');
	div = div / 10;
      }
  if (nbi < 10)
    my_putchar(nbi + '0');
  if (witness == 0)
    {
      rest = rest * 10;
      my_putchar('.');
      while (rest < 1 && i++ < 5)
	{
	  rest = rest * 10;
	  my_putchar('0');
	}
      rest = rest * 1000;
      if (rest < 0)
	rest = rest * -1;
      my_put_nbr((int) rest);
    }
}

void		my_put_nbr_double(double nb, int witness)
{
  int		div;
  int		nbi;
  double	rest;

  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  div = 1;
  if (witness == 0)
    rest = nb - (int) nb;
  nbi = (int)nb;
  while (nbi / div >= 10)
    {
      div = div * 10;
    }
  my_put_nbr_double_part_2(nbi, witness, rest, div);
}

void	while_go_in_tabb_float(t_n4s *help, int *i)
{
  if ((*i) == 0)
    help->tabb_float[(*i)] = (my_atof(help->tabb[(*i) + 3])
			      + my_atof(help->tabb[(*i) + 4])) / 2;
  else if ((*i) == 32)
    help->tabb_float[(*i)] = (my_atof(help->tabb[(*i) + 2])
			      + my_atof(help->tabb[(*i) + 3])) / 2;
  else
    help->tabb_float[(*i)] = (my_atof(help->tabb[(*i) + 2])
			      + my_atof(help->tabb[(*i) + 3])
			      + my_atof(help->tabb[(*i) + 4])) / 3;
  help->sum = help->sum + help->tabb_float[(*i)];
}

int	go_in_tabb_float(t_n4s *help)
{
  int	i;

  i = 0;
  help->sum = 0;
  if (word_word("OK", help->tabb[1]) == 1
      && word_word("No further info", help->tabb[3]) != 1)
    {
      if ((help->tabb_float = malloc(sizeof(float) * 33)) == NULL)
	return (-1);
      help->tabb_float[32] = -1.0;
      while (i != 32)
	{
	  while_go_in_tabb_float(help, &i);
	  i++;
	}
      return (1);
    }
  return (0);
}
