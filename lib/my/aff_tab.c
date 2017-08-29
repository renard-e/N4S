/*
** aff_tab.c for aff_tab in /home/renard_e/bin/Makefile_lib/lib/my
**
** Made by gregoire renard
** Login   <renard_e@epitech.net>
**
** Started on  Sun May  1 16:00:43 2016 gregoire renard
** Last update Tue May 10 18:29:04 2016 rodrigue rene
*/

#include <stdlib.h>
#include "my.h"

void		aff_tab(char **tabb)
{
  int		i;

  i = 0;
  while (tabb[i] != NULL)
    {
      my_puterr(tabb[i]);
      my_puterr("\n");
      i++;
    }
}
