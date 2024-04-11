/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-m <carlos-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:18:42 by carlos-m          #+#    #+#             */
/*   Updated: 2023/09/12 18:31:08 by carlos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	printf("%d\n%d", ft_isalnum('A'), isalnum('A'));
	return (0);
}*/
