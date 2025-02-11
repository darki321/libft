/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molapoug <molapoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:03:21 by molapoug          #+#    #+#             */
/*   Updated: 2025/02/11 11:05:15 by molapoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
