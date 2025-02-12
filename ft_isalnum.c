/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:20:01 by molapoug          #+#    #+#             */
/*   Updated: 2025/02/12 12:30:23 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c == ft_isalpha(c)) || (c ==ft_isdigit(c)))
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>
int	main()
{
	char	str[] = "test";
	printf("%d\n", ft_isalnum(str[4]));
	printf("%d\n", isalnum(str[4]));
}
