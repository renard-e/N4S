/*
** my_putchar.c for my_putchar in /home/renard_e
**
** Made by gregoire renard
** Login   <renard_e@epitech.net>
**
** Started on  Sat Oct  3 15:03:45 2015 gregoire renard
** Last update Sun May 29 03:17:32 2016 rodrigue rene
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
