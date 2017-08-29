/*
** to_word_tabb_n4s.c for to_word_tabb_n4s.c in /media/dieu/2337a639-4d85-4f36-ade6-cdcedffd0cf2/rene_r/Cours/Semestre_2/C_prog_elem/CPE_2015_n4s/lib/my
**
** Made by rodrigue rene
** Login   <rene_repitech.net>
**
** Started on  Tue May 10 15:59:31 2016 rodrigue rene
** Last update Tue May 10 16:38:45 2016 rodrigue rene
*/

#include <stdlib.h>
#include "my.h"

static void	remp_2d_n4s(t_all *all, char **cmd, char *arg)
{
  while (all->remp < all->e)
    {
      cmd[all->dimen][all->i] = arg[all->remp];
      all->i = all->i + 1;
      all->remp = all->remp + 1;
    }
  all->i = 0;
  all->dimen = all->dimen + 1;
}

static int	all_cmd_di_2_n4s(char *arg, char **cmd, int cpt)
{
  t_all		all;

  all.s = 0;
  all.i = 0;
  all.dimen = 0;
  while (all.dimen <= cpt && arg[all.s] != '\0')
    {
      while (arg[all.s] == ':' && arg[all.s] != '\0')
        all.s++;
      all.e = all.s;
      while (arg[all.e] != ':' && arg[all.e] != '\0')
        all.e = all.e + 1;
      all.dif = all.e - all.s;
      if ((cmd[all.dimen] = malloc(all.dif + 1)) == NULL)
        return (0);
      cmd[all.dimen][all.dif] = '\0';
      all.remp = all.s;
      remp_2d_n4s(&all, cmd, arg);
      all.s = all.e;
    }
  return (1);
}

char		**to_word_tabb_n4s(char *arg)
{
  int		i;
  int		cpt;
  char		**cmd;

  i = 0;
  cpt = 0;
  while (arg[i] != '\0')
    {
      while (arg[i] == ':' && arg[i] != '\0')
        i = i + 1;
      cpt = cpt + 1;
      while (arg[i] != ':' && arg[i] != '\0')
        i = i + 1;
    }
  if ((cmd = malloc((cpt + 1) * sizeof(char *))) == NULL)
    return (NULL);
  cmd[cpt] = NULL;
  if ((all_cmd_di_2_n4s(arg, cmd, cpt)) == 0)
    return (NULL);
  return (cmd);
}
