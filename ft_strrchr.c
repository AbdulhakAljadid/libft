/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljadid <aaljadid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:28:57 by aaljadid          #+#    #+#             */
/*   Updated: 2026/11/13 20:55:15 by aaljadid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char) c)
		{
			return ((char *) & s[i]);
		}
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
char	test[] = "Hello,this,is";

printf("%s", ft_strrchr(test, ','));
}
*/
