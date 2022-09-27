/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguillam <nguillam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:42:49 by nguillam          #+#    #+#             */
/*   Updated: 2022/09/22 16:05:59 by nguillam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// int	ft_atoi(const char *str);
// void	ft_bzero(void *s, size_t n);
// int	ft_isalnum(int c);
// int	ft_isalpha(int c);
// int	ft_isascii(int c);
// int	ft_isdigit(int c);
// int	ft_isprint(int c);
// void	*ft_memchr(const void *s, int c, size_t n);
// int	ft_memcmp(const void *s1, const void *s2, size_t n);
// void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
// void    *ft_memset(void *b, int c, size_t len);
// char	*ft_strchr(const char *s, int c);
// size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
// size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
// size_t	ft_strlen(const char *s);
// int	ft_strncmp(const char *s1, const char *s2, size_t n);
// char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
// char	*ft_strrchr(const char *s, int c);
// int	ft_tolower(int c);
// int	ft_toupper(int c);

int main(void)
{
	// ISALPHA
    // printf ("%d", isalpha('a'));
    // printf ("\n%d", ft_isalpha('a'));
	// printf ("\n%d", isalpha('A'));
    // printf ("\n%d", ft_isalpha('A'));
	// printf ("\n%d", isalpha('1'));
    // printf ("\n%d", ft_isalpha('1'));

	// ISDIGIT
    // printf ("%d", isdigit('a'));
    // printf ("\n%d", ft_isdigit('a'));
	// printf ("\n%d", isdigit('A'));
    // printf ("\n%d", ft_isdigit('A'));
	// printf ("\n%d", isdigit('1'));
    // printf ("\n%d", ft_isdigit('1'));
	
	// ISALNUM
    // printf ("%d", isalnum('a'));
    // printf ("\n%d", ft_isalnum('a'));
	// printf ("\n%d", isalnum('A'));
    // printf ("\n%d", ft_isalnum('A'));
	// printf ("\n%d", isalnum('1'));
    // printf ("\n%d", ft_isalnum('1'));
	// printf ("\n%d", isalnum('&'));
    // printf ("\n%d", ft_isalnum('&'));
	
	// ISASCII
    // printf ("%d", isascii('a'));
    // printf ("\n%d", ft_isascii('a'));
	// printf ("\n%d", isascii(157));
    // printf ("\n%d", ft_isascii(157));
	// printf ("\n%d", isascii('1'));
    // printf ("\n%d", ft_isascii('1'));
	// printf ("\n%d", isascii('&'));
    // printf ("\n%d", ft_isascii('&'));
	
	// ISPRINT
    // printf ("%d", isprint('a'));
    // printf ("\n%d", ft_isprint('a'));
	// printf ("\n%d", isprint(127));
    // printf ("\n%d", ft_isprint(127));
	// printf ("\n%d", isprint('1'));
    // printf ("\n%d", ft_isprint('1'));
	// printf ("\n%d", isprint('&'));
    // printf ("\n%d", ft_isprint('&'));
	
	// STRLEN
    // printf("%zu", strlen("hola"));
    // printf("\n%zu", ft_strlen("hola"));
	
	// MEMSET
	// char b[] = "hola cambia hola por &";
    // puts(memset(b, '&', 4));
	// puts(ft_memset(b, '&', 4));
	
	// BZERO
	// char b1[] = "hola";
	// char b2[] = "hola";
	// bzero(b1, 2);
	// ft_bzero(b2, 2);
    // printf("o %c", b1[2]);
	// printf("\nn %c ", b2[2]);
	// printf("\no %c", b1[1]);
	// printf("\nn %c", b2[1]);
	
	// MEMCPY
	// char dst[] = "hola cambia hola por &";
    // char src[] = "chau cambia hola por # ";
    // puts(memcpy(dst, src, 4));
	// puts(ft_memcpy(dst, src, 4));

	// MEMMOVE
	char dst1[] = "hola cambia hola por &";
    char src1[] = "chau cambia hola por # ";
	char dst2[] = "hola cambia hola por &";
    char src2[] = "chau cambia hola por # ";
    puts(memmove(dst1, src1, 4));
	puts(ft_memmove(dst2, src2, 4));
	
	// STRLCPY

	// STRLCAT

	// TOUPPER

	// TOLOWER

	// STRCHR

	// STRRCHR

	// MEMCHR

	// MEMCMP
	// char s1[] = "12345";
    // char s2[] = "12346";
	// int result;
	// result = memcmp(s1, s2, 4);
    // printf ("%d", result);
	// result = memcmp(s1, s2, 5);
    // printf ("\n%d", result);

	// STRNSTR

	// ATOI
}