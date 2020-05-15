/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:17:29 by macrespo          #+#    #+#             */
/*   Updated: 2020/05/15 02:10:01 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

static void strlen_test(const char *s, const char *test)
{
    int     or;
    int     ft;

    or = strlen(s);
    ft = ft_strlen(s);
    if (or == ft)
        printf("%s :" CGREEN "[OK]\n" CCOLOR, test);
    else
        printf("%s :" CRED "[KO]\n" CCOLOR, test);
}

static void strcpy_test(const char *src, const char *test)
{
	char	dest1[BUFFER_SIZE];
	char	dest2[BUFFER_SIZE];

	bzero(dest1, BUFFER_SIZE);
	bzero(dest2, BUFFER_SIZE);
	ft_strcpy(dest1, src);
	strcpy(dest2, src);
	if (!strcmp(dest1, dest2))
		printf("%s :" CGREEN "[OK]\n" CCOLOR, test);
	else
		printf("%s :" CRED "[KO]\n" CCOLOR, test);
}

static void strcmp_test(const char *s1, const char *s2, const char *test)
{
	int		or = strcmp(s1, s2);
	int		ft = ft_strcmp(s1, s2);

	if (ft == or)
		printf("%s :" CGREEN "[OK]\n" CCOLOR, test);
	else
		printf("%s :" CRED "[KO]\n" CCOLOR, test);
}

int main(void)
{
    /* STRLEN TEST*/ 
    printf("FT_STRLEN TEST :\n");
	strlen_test("Hello world", "basic1");
	strlen_test("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris tristique dui at tellus blandit vulputate. In hac habitasse platea dictumst. In a nibh ", "long");
	strlen_test("", "empty");
	strlen_test("\n", "new line");
	strlen_test("\n\n", "new line2");
	strlen_test("111+}Te'st!wi/th*[<<As:c2ii3", "strange string");
    printf("-------------------------------------------------\n");
    
    /* STRCPY TEST */ 
    printf("FT_STRCPY TEST :\n");
    strcpy_test("Hello world", "basic1");
	strcpy_test("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris tristique dui at tellus blandit vulputate. In hac habitasse platea dictumst. In a nibh ", "long");
	strcpy_test("", "empty");
	strcpy_test("\n", "new line");
	strcpy_test("\n\n", "new line2");
	strcpy_test("111+}Te'st!wi/th*[<<As:c2ii3", "strange string");
	printf("-------------------------------------------------\n");

	/* FT_STRCMP TEST*/	
	strcmp_test("hello World", "hello World", "test2");
    return (0);
}
