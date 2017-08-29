/*
** get_info_lidar.c for get_info_lidar in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Tue May 10 21:58:27 2016 rodrigue rene
** Last update Sun May 29 03:10:08 2016 rodrigue rene
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void	free_get_info_lidar(char *s, t_n4s *help)
{
  int	i;

  i = 0;
  free(s);
  while (help->tabb[i] != NULL)
    {
      free(help->tabb[i]);
      i++;
    }
  free(help->tabb);
}

int	get_info_lidar(t_n4s *help)
{
  char	*str;
  int	indic;

  indic = 0;
  while (indic != 1)
    {
      my_putstr("get_info_lidar\n");
      if ((str = get_next_line(0)) == NULL)
	return (0);
      if ((help->tabb = to_word_tabb_n4s(str)) == NULL)
	return (0);
      indic = word_word("OK", help->tabb[1]);
      if (grep_word("First CP Cleared", help->tabb) != -1 ||
	  grep_word("CP Cleared", help->tabb) != -1)
	indic = 0;
      if (grep_word("Track Cleared", help->tabb) != -1)
	return (-1);
      if (indic != 0)
	if (go_in_tabb_float(help) == -1)
	  return (0);
      free_get_info_lidar(str, help);
    }
  return (0);
}
