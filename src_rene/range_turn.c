/*
** range_turn.c for range_turn in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Wed May 18 17:33:40 2016 rodrigue rene
** Last update Sun May 29 03:11:02 2016 rodrigue rene
*/

#include <math.h>
#include "my.h"

void	range_turn(t_n4s *help, t_n4s_range *h_range)
{
  (void)help;
  if (h_range->min < 400)
    h_range->div = (double) (h_range->min * 0.5);
  else
  h_range->div = (double) (h_range->min * 0.5) / 2;
}
