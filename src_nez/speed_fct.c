/*
** speed_fct.c for speed_func in /home/renard_e/progElem/CPE_2015_n4s/src_nez
**
** Made by gregoire renard
** Login   <renard_e@epitech.net>
**
** Started on  Fri May 13 17:19:36 2016 gregoire renard
** Last update Sun May 29 03:21:42 2016 rodrigue rene
*/

#include <stdlib.h>
#include "my.h"

int		affect_medium(float *float_value)
{
  float		somme;
  int		i;

  somme = 0;
  i = 0;
  while (i <= 31)
    {
      somme = somme + float_value[i];
      i++;
    }
  if (somme < 80)
    return (0);
  somme = somme / i;
  return (somme);
}

void	part_one_while(t_n4s *help, t_n4s_range *h_range, float medium)
{
  float	speed;

  speed = (medium / 1800);
  if (speed > 1.0)
    speed = 1.0;
  if (help->tabb_float[h_range->number_min] <= 350)
    speed = speed / 2.5;
  my_putstr("car_forward:");
  my_put_nbr_double((double)speed, 0);
  my_putchar('\n');
}

int		speed_fct(t_n4s *help)
{
  char		*line;
  int		indic;
  float		medium;
  t_n4s_range	h_range;

  indic = 0;
  grep_in_tab_float(help->tabb_float, &h_range);
  if ((medium = affect_medium(help->tabb_float)) == 0)
    return (-1);
  while (indic != 1)
    {
      part_one_while(help, &h_range, medium) ;
      if (((line = get_next_line(0)) == NULL) ||
	  (help->tabb = to_word_tabb_n4s(line)) == NULL ||
	  (grep_word("Track Cleared", help->tabb) != -1))
	return (-1);
      if ((help->tabb = to_word_tabb_n4s(line)) == NULL)
	return (-1);
      indic = word_word("OK", help->tabb[1]);
      free_get_info_lidar(line, help);
    }
  return (0);
}
