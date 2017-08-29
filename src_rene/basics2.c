/*
** basics2.c for basics2 in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Tue May 10 19:46:38 2016 rodrigue rene
** Last update Tue May 10 19:53:18 2016 rodrigue rene
*/

#include <stdlib.h>
#include "my.h"

void	aff_tab(char **tabb)
{
  int	i;

  i = 0;
  while (tabb[i] != NULL)
    {
      my_putstr(tabb[i]);
      my_putchar('\n');
      i++;
    }
}

int	my_strlen_tab(char **tabb)
{
  int	i;

  i = 0;
  while (tabb[i] != NULL)
    i++;
  return (i);
}

void	init_value_to_zero(int *i, int *ii, int *iii, int *iiii)
{
  (*i) = 0;
  (*ii) = 0;
  (*iii) = 0;
  (*iiii) = 0;
}
