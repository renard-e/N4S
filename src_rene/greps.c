/*
** greps.c for greps in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/src_rene
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Tue May 10 19:47:38 2016 rodrigue rene
** Last update Sun May 29 14:31:57 2016 gregoire renard
*/

#include <stdlib.h>
#include "my.h"

int	word_word(char *str_one, char *str_two)
{
  int	i;
  int	len1;

  i = 0;
  if (str_one == NULL || str_two == NULL)
    return (-1);
  if ((len1 = my_strlen(str_one)) == my_strlen(str_two))
    {
      while (str_one[i] != '\0' && str_one[i] == str_two[i])
	i++;
    }
  if (i == len1)
    return (1);
  return (-1);
}

int	grep_word(char *str, char **tabb)
{
  int	y;

  y = 0;
  while (tabb[y] != NULL)
    {
      if (word_word(str, tabb[y]) == 1)
	return (y);
      y++;
    }
  return (-1);
}

int	grep_in_tab(char **tabb, char *to_find)
{
  int	i;

  i = 0;
  while (tabb[i] != NULL)
    {
      if (grep_in_str(tabb[i], to_find) == 1)
	return (i);
      i++;
    }
  return (-1);
}

int	grep_in_str(char *str, char *to_find)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && to_find[i] != '\0' && str[i] == to_find[i])
    i++;
  if (i == my_strlen(str) && i != 0)
    return (1);
  return (0);
}
