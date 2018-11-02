/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pt_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:26:43 by achavez           #+#    #+#             */
/*   Updated: 2018/11/01 20:51:57 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_function_test1()
{
	/* function memset */

	printf("memeset() -- fill a byte string with a byte value:\n\n");
	char str[50] = "This function is called ft_memset.";
	printf("before memset(): %s\n", str);
	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("after memset(): %s\n\n", str);

	/* fucntion bzero */

	printf("bzero() -- write zeros to a byte string: \n\n");

	int i;
	int arr[5];
	ft_bzero(arr, 5 * sizeof(int));
	for (i = 0; i < 5; i++)
		printf("arr[%i] = %i\n", i, arr[i]);

	/* fucntion memcpy */

	printf("\nmemcpy() -- copies a memory area: \n\n");
	const char src[50] = "This function is called ft_memset()";
	char dest[50];
	ft_strcpy(dest, "Goodbye crule world");
	printf("Before memset dest = %s\n", dest);
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	printf("After memset dest = %s\n\n", dest);

	/* function memccpy */

	printf("memccpy() -- copies a string untill a character is found: \n\n");
	char buffer[61];
	char *pdest;
	char str1[60] = "memccpy up to 42 characters or untill 'c' is reached";
	printf("Before memccpy: %s\n", str1);
	pdest = ft_memccpy(buffer, str1, 'c', 42);
	printf("After memccpy: %s\n\n", pdest);

	/* fucntion memmove */

	printf("memmove() -- copys a byte string: \n\n");
	char dest1[] = "oldstring";
	char const src1[] = "newstring";
	printf("before memove dest = %s, src = %s\n", dest1, src1);
	ft_memmove(dest1, src1, 9);
	printf("after memmove dest = %s, src = %s\n\n", dest1, src1);

	/* function memchr */

	printf("memchr() -- locate byte in byte string: \n\n");
	const char string[] = "This fucntion is called ft_memchr!";
	const char ch = 's';
	char *ret1;
	ret1 = ft_memchr(string, ch, strlen(string));
	printf("string = %s\n", string);
	printf("the string after |%c| is = |%s|\n\n", ch, ret1);

	/* function memcmp */

	printf("memcmp() -- compare byte strings: \n\n");
	char str2[15];
	char str3[15];
	int ret;
	ft_memcpy(str2, "abcdef", 6);
	ft_memcpy(str3, "ABCDEF", 6);
	ret = ft_memcmp(str2, str3, 5);
	if (ret > 0) 
      printf("str2 is less than str1\n\n");
	else if (ret < 0)
	   	printf("str1 is less than str2\n\n");
	else
		printf("str1 is equal to str2\n\n");

	/* fucntion strlen */

	printf("strlen() -- find the length of a string: \n\n");
	char string1[50];
	int len;
	ft_strcpy(string1, "This function is called ft_strlen!");
	len = ft_strlen(string1);
	printf("The length of |%s| is |%i|\n\n", string1, len);

	/* function strdup */

	printf("strdup() -- save a copy of a string: \n\n");
	char src2[] = "This string has been coppied!!";
	char *target = " ";
	printf("Before strdup: %s\n", target);
	target = ft_strdup(src2);
	printf("After strdup: %s\n\n", target);

	/* function strcpy */

	printf("strcpy() -- copies strings: \n\n");
	char src3[50];
	char dest3[100];
	printf("Before strcpy: %s\n", dest3);
	ft_bzero(dest3, sizeof(dest3));
	ft_strcpy(src3, "This fucntion is called ft_strcpy()");
	ft_strcpy(dest3, src3);
	printf("After strcpy: %s\n\n", dest3);

	/* function strncpy */

	printf("strncpy() -- copies at most len chars from src into dst:\n\n");
	char src4[40];
	char dest4[12];
	printf("Before strncpy: %s\n", dest4);
	ft_bzero(dest4, sizeof(dest4));
	ft_strcpy(src4, "This is called ft_strncpy!!");
	ft_strncpy(dest4, src4, 11);
	printf("After strncpy: %s\n\n", dest4);

	/* function strcat */

	printf("strcat() -- concatenates strings: \n\n");
	char src5[50], dest5[50];
   	ft_strcpy(src5,  "This is source");
   	ft_strcpy(dest5, "This is destination ");
	ft_strcat(dest5, src5);
	printf("Final string: |%s|\n\n", dest5);

	/* function strncat */

	printf("strncat() -- concatenates not more than n characters from src to dest:\n\n");
	char src6[50], dest6[50];
    ft_strcpy(src6,  "This is source");
    ft_strcpy(dest6, "This is destination");
	ft_strncat(dest6, src6, 3);
	printf("Final destination string : |%s|\n\n", dest6);

	/* function strchr */

	printf("strchr() -- looks for first occurance of ch in string: \n\n");
	const char *string2 = "This string is called . ft_strchr()";
	printf("string = %s\n", string2);
	char *ret2 = ft_strchr(string2, '.');
	printf("String after |.| is - |%s|\n\n", ret2);

	/* function strrchr */

	printf("strrchr() -- looks for last occurance of ch in string: \n\n");
	const char *string3 = "This function is called ft_strrchr()";
	printf("string = %s\n", string3);
	char *ret3 = ft_strrchr(string3, 's');
	printf("String after |s| is - |%s|\n\n", ret3);

	/* fucntion strstr */

	printf("strstr() -- locate a substring in a string: \n\n");
	const char needle[10] = "needle", haystack[50] = "you will neverneedlever find it!";
	printf("needle = %s\nhaystack = %s\n", needle, haystack);
	char *ret4 = ft_strstr(haystack, needle);
	printf("The substring is: %s\n\n", ret4);

	/* function strnstr */

	printf("strnstr() -- locate a substring in a string up to n characters:\n\n");
	const char nedl[10] = "find", hay[50] = "you can find this needle";
	printf("needle = %s\nhaystack = %s\n", nedl, hay);
	char *ret5 = ft_strnstr(hay,nedl,5);
	printf("The substring is: %s\n\n", ret5);

	/* function strcmp */

	printf("strcmp() -- compare strings: \n\n");
	char str4[15];
   	char str5[15];
   	int ret6;
    ft_strcpy(str4, "abcdef");
    ft_strcpy(str5, "ABCDEF");
    ret6 = ft_strcmp(str4, str5);
	if (ret6 < 0)
		printf("str1 is less than str2\n\n");
	else if (ret6 > 0)
		printf("str2 is less than str1\n\n");
	else
		printf("str1 is equal to str2\n\n");

	/* function strncmp */

	printf("strncmp() -- function compares not more than n characters:\n\n");
	char str6[15];
	char str7[15];
	int ret7;
	ft_strcpy(str6, "abcdef");
	ft_strcpy(str7, "ABCDEF");
	ret7 = strncmp(str6, str7, 4);
	if (ret7 < 0)
		printf("str1 is less than str2\n\n");
	else if (ret7 > 0)
		printf("str2 is less than str1\n\n");
	else
		printf("str1 is equal to str2\n\n");

	/* function atoi */

	printf("atoi() -- conver ASCII string to integer:\n\n");
	int val;
	char str8[20];
	ft_strcpy(str8, "98993489");
	val = ft_atoi(str8);
	printf("String value = %s, Int value = %d\n", str8, val);
	ft_strcpy(str8, "This is not a number");
	val = ft_atoi(str8);
	printf("String value = %s, Int value = %d\n\n", str8, val);

	/* function isalpha */

	printf("isalpha() -- alphabetic character test: \n\n");
	int atest = 'a';
	int atest1 = '2';
	if (ft_isalpha(atest))
		printf("var1 = |%c| is an alphabet\n", atest);
	else
		printf("var1 = |%c| is not an alphabet\n", atest);
	if (ft_isalpha(atest1))
		printf("var2 = |%c| is an alphabet\n\n", atest1);
	else
		printf("var2 = |%c| is not alphabet\n\n", atest1);

	/* function isdigit */

	printf("isdigit() -- digit character test:\n\n");
	int atest2 = 'a';
	int atest3 = '3';
	if (ft_isalpha(atest2))
		printf("var1 = |%c| is an alphabet\n", atest2);
	else
		printf("var1 = |%c| is not an alphabet\n", atest2);
	if (ft_isalpha(atest3))
		printf("var2 = |%c| is an alphabet\n\n", atest3);
	else
		printf("var2 = |%c| is not an alphabet\n\n", atest3);

	/* function isalnum */

	printf("isdigit() -- digit character test:\n\n");
	int atest4 = '2';
	int atest5 = 'a';
	int atest6 = '@';
	if (ft_isalnum(atest4))
		printf("var1 = |%c| is alphanumeric\n", atest4);
	else
		printf("var1 = |%c| is not alphanumeric\n", atest4);
	if (ft_isalnum(atest6))
		printf("var2 = |%c| is alphanumeric\n", atest6);
	else
		printf("var2 = |%c| is not alphanumeric\n", atest6);
	if (ft_isalnum(atest5))
		printf("var3 = |%c| is alphanumeric\n\n", atest5);
	else
		printf("var3 = |%c| is not alphanumeric\n\n", atest5);

	/* function isascii */

	printf("isascii() -- test for ASCII character:\n\n");
	char test = 'a', test1 = 0x80, test2 = 'Z';
	if (ft_isascii(test))
		printf("var1 = |%c| is ASCII char\n", test);
	else
		printf("var1 = |%c| is not ASCII char\n", test);
	if (ft_isascii(test1))
		printf("var1 = |%c| is ASCII char\n", test1);
	else
		printf("var1 = |%c| is not ASCII char\n", test1);
	if (ft_isascii(test2))
		printf("var1 = |%c| is ASCII char\n\n", test2);
	else
		printf("var1 = |%c| is not ASCII char\n\n", test2);

	/* function toupper */

	printf("toupper() -- lower case to upper case letter conversion:\n\n");
	char *str9 = "this is not in UPPER case 0k!!";
	int i1 = 0;
	printf("Before toupper: %s\nAfter: \n", str9);
	while (str9[i1])
	{
		ft_putchar(ft_toupper(str9[i1]));
		i1++;
	}
	printf("\n\n");

	/* function isprint */

	printf("isprint() -- printing character test (space character inclusive)\n\n");
	int atest7 = 'k', atest8 = '\t', atest9 = '7';
	if (ft_isprint(atest7))
		printf("var1 = |%c| can be printed\n", atest7);
	else
		printf("var1 = |%c| can not be printed\n", atest7);
	if (ft_isprint(atest8))
		printf("var2 = |%c| can be printed\n", atest8);
	else
		printf("var2 = |%c| can not be printed\n", atest8);
	if (ft_isprint(atest9))
		printf("var3 = |%c| can be printed\n\n", atest9);
	else
		printf("var3 = |%c| can not be printed\n\n", atest9);

	/* function tolower */

	printf("tolower() -- upper case to lower case letter conversion:\n\n");
	char *str10 = "THIS IS NOT IN lower CASE 0K!!";
	int i2 = 0;
	printf("Before tolower: %s\nAfter: \n", str10);
	while (str10[i2])
	{
		ft_putchar(ft_tolower(str10[i2]));
		i2++;
	}
	printf("\n\n");
}
