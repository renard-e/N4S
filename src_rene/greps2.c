/*
** greps2.c for greps2 in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Tue May 10 19:47:09 2016 rodrigue rene
** Last update Sun May 29 14:34:40 2016 gregoire renard
*/

#include <stdlib.h>
#include "my.h"

int	grep_in_tab_2(char **tabb, char *to_find)
{
  int	i;

  i = 0;
  if (tabb == NULL || to_find == NULL)
    return (-1);
  while (tabb[i] != NULL)
    {
      if (word_word(tabb[i], to_find) == 1)
	return (i);
      i++;
    }
  return (-1);
}

int		grep_in_tab_float(float *to_find, t_n4s_range *h_range)
{
  int		i;

  i = 0;
  h_range->max = to_find[16];
  h_range->number_min = 16;
  h_range->min = to_find[16];
  h_range->number = 16;
  while (i != 31)
    {
      if (to_find[i] > h_range->max)
	{
	  h_range->max = to_find[i];
	  h_range->number = i;
	}
      if (to_find[i] < h_range->min)
	{
	  h_range->min = to_find[i];
	  h_range->number_min = i;
	}
      i++;
    }
  if (h_range->number > 13 && h_range->number < 17)
    h_range->number = 15;
  return (15);
}
