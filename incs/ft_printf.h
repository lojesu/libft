/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lojesu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 14:37:41 by lojesu            #+#    #+#             */
/*   Updated: 2019/12/06 14:37:46 by lojesu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>

typedef struct	s_flg
{
	size_t		i;
	size_t		acc;
	size_t		k;
	size_t		count;
	char		tab[30];
	char		buff[4096];
}				t_flg;

int				ft_parse_diouxx(const char *fmt, t_flg *flg, int mod);
int				ft_parse_csp(const char *fmt, t_flg *flg, int mod);
int				ft_parse_lh(const char *fmt, t_flg *flg, int mod);
int				ft_putstr_printf(char *s, t_flg *flg);
char			*ft_dispatcher(va_list ap, const char *fmt, t_flg *flg);
char			*ft_accuracy(va_list ap, const char *fmt, t_flg *flg);
char			*ft_number_flag(va_list ap, const char *fmt, t_flg *flg);
char			*ft_csp(va_list ap, const char *fmt, t_flg *flg);
char			*ft_diouxx(va_list ap, const char *fmt, t_flg *flg);
char			*ft_plus_flag(va_list ap, const char *fmt, t_flg *flg);
char			*ft_minus_flag(va_list ap, const char *fmt, t_flg *flg);
char			*ft_space_flag(va_list ap, const char *fmt, t_flg *flg);
char			*ft_binary_flag(va_list ap, const char *fmt, t_flg *flg);
char			*ft_bin_to_nb(va_list ap, const char *fmt, t_flg *flg);
char			*ft_lh_flags(va_list ap, const char *fmt, t_flg *flg);
char			*ft_hashtag(va_list ap, const char *fmt, t_flg *flg);
char			*ft_hash_oxx(char *tmp, t_flg *flg, const char *fmt);
char			*ft_float(va_list ap, char flag, t_flg *flg);
char			*ft_printf_error(va_list ap, t_flg *flg);
char			*ft_percent(t_flg *flg);
char			*ft_itoa_printf(long int nb, int base, size_t mod);
char			*ft_realloc(char *s, size_t size, size_t mod);
char			*ft_add_str(char *s1, char *s2, int mod);
char			*ft_mul_str(char *s1, char *s2, int mod);
char			*ft_power_str(size_t power, size_t base);
char			*ft_str_binary_to_nb(char *bin, int mod);
char			*ft_str_mantisse_to_nb(char *m, int mod);
char			*ft_dtoa(double d);
char			*ft_ldtoa(long double ld);
char			*ft_strsub_free(char *s, unsigned int start,
		size_t len, size_t mod);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_uitoa(unsigned long int n);
char			*ft_itoa_base(int n, int base);
double			ft_power(double nb, int power);
char			*ft_strrchr(const char *s, int c);
void			ft_strrev(char **str);
long int		ft_atol(const char *str);
void			ft_putstr_free(char *s);
char			*ft_str_toupper(char *s);
size_t			ft_strchr_count(char *s, int c);

#endif
