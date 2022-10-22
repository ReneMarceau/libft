/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:17:00 by rmarceau          #+#    #+#             */
/*   Updated: 2022/10/22 13:34:40 by rmarceau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_isalpha(argv[1][0]));
// 		printf("%d\n", isalpha(argv[1][0]));
// 	}
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_isdigit(argv[1][0]));
// 		printf("%d\n", isdigit(argv[1][0]));
// 	}
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_isalnum(argv[1][0]));
// 		printf("%d\n", isalnum(argv[1][0]));
// 	}
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_isascii(argv[1][0]));
// 		printf("%d\n", isascii(argv[1][0]));
// 	}
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%d\n", ft_isprint(argv[1][0]));
// 		printf("%d\n", isprint(argv[1][0]));
// 	}
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
//  		printf("%zu\n", ft_strlen(argv[1]));
// 		printf("%zu\n", strlen(argv[1]));
//  	}
//  	return (0);
// }

// int	main(void)
// {
// 	char str1[] = "Wesh la zone!";
// 	char str2[] = "Wesh la zone!";
// 	int character = '$';
// 	size_t len = 3;

// 	printf("%s\n", ft_memset(str1, character, len));
// 	printf("%s\n", memset(str2, character, len));
// 	return (0);
// }

// int	main(void)
// {
// 	char str1[] = "Wesh la zone!";
// 	char str2[] = "Wesh la zone!";
// 	size_t len = 3;

// 	ft_bzero(str1, len);
// 	bzero(str2, len);
// 	printf("%s\n",str1);
// 	printf("%s\n", str2);
// 	return (0);
// }

// int	main(void)
// {
// 	// char dst1[100] = "bite";
// 	// char src1[] = "Wesh la zone!";
// 	// char dst2[100] = "bite";
// 	// char src2[] = "Wesh la zone!";
// 	size_t len = 7;

// 	printf("%s\n", ft_memcpy(((void *)0), ((void *)0), len));
// 	printf("%s\n", memcpy(((void *)0), ((void *)0), len));
// 	return (0);
// }

// int	main(void)
// {
// 	char str[100] = "Learningisfun";
// 	char *first;
// 	char *second;

// 	first = str;
// 	second = str;
// 	printf("Original string : %s\n ",str);
// 	ft_memmove(first + 8, first, 10);
// 	printf("my memmove overlap : %s\n ", str);
// 	memmove(second + 8, second, 10);
// 	printf("real memmove overlap : %s\n ", str);
// }

// int	main(void)
// {
// 	char dst1[100] = "bite";
// 	char src1[] = "Wesh la zone!";
// 	char dst2[100] = "bite";
// 	char src2[] = "Wesh la zone!";
// 	size_t len = 7;

// 	printf("%zu\n", ft_strlcpy(dst1, src1, len));
// 	printf("%lu\n", strlcpy(dst2, src2, len));
// 	return (0);
// }

// int	main(void)
// {
// 	// char dst1[100] = "bite";
// 	// char src1[] = "Wesh la zone!";
// 	// char dst2[100] = "bite";
// 	// char src2[] = "Wesh la zone!";
// 	// size_t len = 7;

// 	char b[0xF] = "nyan !";
// 	char c[0xF] = "nyan !";
// 	printf("real function : %lu\n", strlcat(((void *)0), c, 0));
// 	printf("my function : %zu\n", ft_strlcat(((void *)0), b, 0));
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%c\n", ft_toupper(argv[1][0]));
// 		printf("%c\n", toupper(argv[1][0]));
// 	}
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("%c\n", ft_tolower(argv[1][0]));
// 		printf("%c\n", tolower(argv[1][0]));
// 	}
// 	return (0);
// }