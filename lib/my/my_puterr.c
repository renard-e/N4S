/*
** my_puterr.c for my_puterr in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/lib/my
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Mon May  9 22:11:41 2016 rodrigue rene
** Last update Fri May 13 22:20:31 2016 rodrigue rene
*/

#include "unistd.h"
#include "my.h"

void	my_putchar_err(char c)
{
  write(2, &c, 1);
}

void	my_puterr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar_err(str[i]);
      i++;
    }
}
