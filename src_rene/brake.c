/*
** brake.c for brake in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Sat May 28 00:43:18 2016 rodrigue rene
** Last update Sat May 28 01:20:07 2016 rodrigue rene
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void	brake(void)
{
  char	*str;

  my_putstr("car_forward:0.0\n");
  if ((str = get_next_line(0)) == NULL)
    return ;
  free(str);
}
