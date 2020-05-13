/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:17:29 by macrespo          #+#    #+#             */
/*   Updated: 2020/05/13 18:28:13 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

static void strlen_test(const char *s)
{
    int     or;
    int     ft;

    or = strlen(s);
    ft = ft_strlen(s);
    printf("ft [%u] | original [%u]", ft, or);
    if (or == ft)
    {
        printf("\033[1;32m");
        printf(" [OK]\n");
    }
    else
    {
        printf("\033[1;31m");
        printf(" [KO]\n");
    }
    printf("\033[0m");
}

static void strcpy_test(char *dest, const char *src, char *test)
{
    char *dest2 = strdup(dest);
    const char *src2 = strdup(src);

    char    *or = strcpy(dest2, src2);
    char    *ft = ft_strcpy(dest2, src2);

    printf("test: %s", test);
    if (strcmp(or, ft) == 0)
    {
        printf("\033[1;32m");
        printf(" [OK]\n");
    }
    else
    {
        printf("\033[1;31m");
        printf(" [KO]\n");
    }
    printf("\033[0m");
    int i = 0;
    while (dest[i++])
        dest[i] = 0;
}

int main(void)
{
    printf("FT_STRLEN TEST :\n");
	strlen_test("Hello world");
	strlen_test("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris tristique dui at tellus blandit vulputate. In hac habitasse platea dictumst. In a nibh ");
	strlen_test("");
	strlen_test("\n");
	strlen_test("\n\n");
	strlen_test("111+}Te'st!wi/th*[<<As:c2ii3");
    printf("-------------------------------------------------\n");
    printf("FT_STRCPY TEST :\n");
    char dest[4098];
    strcpy_test(dest, "Hello world", "basic1");
    strcpy_test(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris tristique dui at tellus blandit vulputate. In hac habitasse platea dictumst. In a nibh ", "long text");
    strcpy_test(dest, "", "empty string");
    strcpy_test(dest, "\n", "new line 1");
    strcpy_test(dest, "\n\n", "new line 2");
    strcpy_test(dest, "111+}Te'st!wi/th*[<<As:c2ii3", "strange string");
    return (0);
}
