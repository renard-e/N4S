/*
** my.h for my.h in /home/renard_e/systeme_unix/PSU_2015_my_printf
**
** Made by gregoire renard
** Login   <renard_e@epitech.net>
**
** Started on  Fri Nov 13 14:28:11 2015 gregoire renard
** Last update Sat May 28 03:12:30 2016 rodrigue rene
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_list
{
  char		**tetri;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;

typedef struct	s_all
{
  int		s;
  int		e;
  int		dif;
  int		remp;
  int		i;
  int		dimen;
}		t_all;

typedef struct	s_n4s
{
  float		*tabb_float;
  char		**tabb;
  double	wheel;
  double	medium[17];
  float		sum;
}		t_n4s;

typedef struct	s_n4s_range
{
  float		div;
  int		number;
    int		number_min;
  float		max;
  float		min;
}		t_n4s_range;

int	speed_fct(t_n4s *help);

int	new_front_add(t_list *elem, char *line);

t_list *create_list(void);

char	**my_str_to_word_tab(char *arg);

char	**to_wordtab(char *arg);

void	my_double(int ac, t_list **list);

void	my_circu(t_list **list);

t_list	*my_params_in_list(t_list *list, char **piece);

int	my_tr(char **file);

char	*convert_in_char(int nb);

char	*get_next_line(const int fd);

void	my_putchar(char c);

void	my_isneg(int nb);

void	my_put_nbr(int nb);

int	my_swap(int *a, int *b);

void	my_putstr(char *str);

int	my_strlen(char *str);

int	my_getnbr(char *str);

void	my_sort_int_tab(int *tab, int size);

int	my_power_rec(int nb, int power);

int	my_square_root(int nb);

int	my_is_prime(int nombre);

char	*my_strcpy(char *dest, char *src);

void	my_puterr(char *str);

char	*my_strncpy(char *dest, char *src, int nb);

char	*my_revstr(char *str);

char	*my_strstr(char *str, char *to_find);

int	my_strcmp(char *s1, char *s2);

int	my_strncmp(char *s1, char *s2, int nb);

char	*my_strupcase(char *str);

char	*my_strdup(char *str);

char	*my_strlowcase(char *str);

char	*my_strcapitalize(char *str);

int	my_str_isalpha(char *str);

int	my_str_isnum(char *str);

int	my_str_islower(char *str);

int	my_str_isupper(char *str);

int	my_str_isprintable(char *str);

int	my_showstr(char *str);

int	my_showmem(char *str, int size);

char	*my_strcat(char *dest, char *src);

char	*my_strncat(char *dest, char *src, int nb);

float	my_atof(char *str);

char	**to_word_tabb_n4s(char *arg);

void	aff_tab(char **tabb);

int	my_strlen_tab(char **tabb);

void	init_value_to_zero(int *i, int *ii, int *iii, int *iiii);

int	grep_in_tab_2(char **tabb, char *to_find);

int	word_word(char *str_one, char *str_two);

int	grep_word(char *str, char **tabb);

int	grep_in_tab(char **tabb, char *to_find);

int	grep_in_str(char *str, char *to_find);

int	grep_in_list(char *str, t_list **list);

int	part_one(void);

int	get_info_lidar(t_n4s *help);

void	free_get_info_lidar(char *s, t_n4s *help);

int	go_in_tabb_float(t_n4s *help);

void	aff_tabb_float(float *tabb);

int     speed(t_n4s *help);

int	turn(t_n4s *help);

void    my_put_nbr_double(double nb, int witness);

void	my_putchar_err(char c);

int	grep_in_tab_float(float *to_find, t_n4s_range *h_range);

void    range_turn(t_n4s *help, t_n4s_range *h_range);

void	brake(void);

void	stop_function(void);

#endif /* !MY_H_ */
