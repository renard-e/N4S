/*
** my_atof.c for my_atof in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/lib/my
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Mon May  9 19:24:10 2016 rodrigue rene
** Last update Sun May 29 03:12:46 2016 rodrigue rene
*/

#include "my.h"

int	my_getnbr_float(char *str, int i)
{
  int	nbr;
  int	ii;

  ii = 0;
  nbr = 0;
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	ii = ii + 1;
      i = i + 1;
    }
  while ((str[i] != 0 || str[i] != '.') &&
	 (str[i] >= '0' && str[i] <= '9') && i < 10)
    {
      nbr = nbr * 10 + str[i] - 48;
      i = i + 1;
    }
  if (ii % 2 != 0)
    nbr = nbr * (-1);
  return (nbr);
}

int	my_strlen_float(char *str)
{
  int	i;
  int	z;
  int	point;

  i = 0;
  z = 1;
  point = 0;
  while (str[i] != 0)
    {
      if (str[i] == '.')
	point++;
      if (point != 0)
	z = z * 10;
      i++;
    }
  return (z);
}

float	my_atof(char *str)
{
  int	i;
  float	total;

  i = 0;
  while ((str[i] != '.')  && (str[i] != 0))
    i++;
  total = (float)my_getnbr_float(str, 0);
  if (str[i] == '.')
    total = total + ((float)(my_getnbr_float(str, i + 1))
		     / ((my_strlen_float(str) / 10)));
  return (total);
}
