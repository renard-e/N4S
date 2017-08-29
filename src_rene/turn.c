/*
** turn.c for turn in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Fri May 13 19:49:05 2016 rodrigue rene
** Last update Sun May 29 03:25:08 2016 rodrigue rene
*/

#include <math.h>
#include <stdlib.h>
#include "my.h"

int		algo_turn(t_n4s *help)
{
  char		*strbis;
  t_n4s_range	h_range;

  grep_in_tab_float(help->tabb_float, &h_range);
  if (h_range.min <= 320)
    help->wheel = ((double) ((cos((double) ((h_range.number_min * M_PI)
					    / 31)))) / (help->sum / 4500) * -1);
  else
    help->wheel = (double) ((cos((double) ((h_range.number * M_PI) / 31))))
      / (help->sum / 4500);
  if (help->sum < 1300)
    return (-1);
  my_putstr("wheels_dir:");
  my_put_nbr_double(help->wheel, 0);
  my_putchar('\n');
  if ((strbis = get_next_line(0)) == NULL ||
      (help->tabb = to_word_tabb_n4s(strbis)) == NULL ||
      (grep_word("Track Cleared", help->tabb) != -1))
    return (-1);
  free(help->tabb);
  return (0);
}

int	turn(t_n4s *help)
{
  if (algo_turn(help) == -1)
    return (-1);
  return (0);
}
