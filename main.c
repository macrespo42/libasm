/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:17:29 by macrespo          #+#    #+#             */
/*   Updated: 2020/03/30 16:44:00 by macrespo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  main(int ac, char **av)
{
    if (ac == 2)
    {
	    printf("strlen : mine [%d] | original [%d]", ft_strlen(av[1]), strlen(av[1]));       
    }
    return (0);
}
