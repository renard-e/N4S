/*
** stop.c for stop in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Sat May 28 01:23:04 2016 rodrigue rene
** Last update Sat May 28 04:02:59 2016 rodrigue rene
*/

#include <stdlib.h>
#include "my.h"

void	stop_function(void)
{
  char	*str;
  char	**tabb;

  brake();
  while (1)
    {
      my_putstr("stop_simulation\n");
      if ((str = get_next_line(0)) == NULL ||
	  (tabb = to_word_tabb_n4s(str)) == NULL)
	return ;
      if (word_word("OK", tabb[1]) != -1)
	return ;
      free(str);
      free(tabb);
    }
}
