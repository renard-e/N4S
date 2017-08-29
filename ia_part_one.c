/*
** ia_part_one.c for ia_part_one in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Tue May 10 21:04:38 2016 rodrigue rene
** Last update Sun May 29 01:44:58 2016 rodrigue rene
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	part_two(t_n4s *help)
{
  while (1)
    {
      if (get_info_lidar(help) == -1 ||
	  speed_fct(help) == -1 ||
	  turn(help) == -1)
	{
	  stop_function();
	  return (-1);
	}
      free(help->tabb_float);
    }
}

int		part_one(void)
{
  t_n4s		help;
  char		*str;
  int		indic;

  indic = 0;
  while (indic != 1)
    {
      my_putstr("start_simulation\n");
      if ((str = get_next_line(0)) == NULL)
	return (-1);
      if ((help.tabb = to_word_tabb_n4s(str)) == NULL)
	return (-1);
      indic = word_word("OK", help.tabb[1]);
      free_get_info_lidar(str, &help);
    }
  if (part_two(&help) == -1)
    return (-1);
  return (0);
}
