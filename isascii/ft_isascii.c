/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:36:03 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/14 15:17:54 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int a)

{
	if (a >= 0 && a <= 127)
	{
		return (1);
	}
	return (0);
}

int main(void)
{
	char r;
	int c;
	int d;

	r = "a";
	c = ft_isascii(r);
	d = isascii(r);
	printf("%d\n", c);
	printf("%d", d);
}