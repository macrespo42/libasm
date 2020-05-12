/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:17:29 by macrespo          #+#    #+#             */
/*   Updated: 2020/05/12 17:58:13 by macrespo         ###   ########.fr       */
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

int         main(void)
{
    printf("FT_STRLEN TEST :\n");
	strlen_test("Hello world");
	strlen_test("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris tristique dui at tellus blandit vulputate. In hac habitasse platea dictumst. In a nibh ");
	strlen_test("");
	strlen_test("\n");
	strlen_test("\n\n");
	strlen_test("111+}Te'st!wi/th*[<<As:c2ii3");
    printf("-------------------------------------------------\n");
    return (0);
}
