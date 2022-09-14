/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:10:23 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/14 15:19:01 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
	{
		return (a - 32);
	}
	return (a);
}

int main(void)
{
	char r;
	char c;
	char d;

	r = 'z';
	c = ft_toupper(r);
	d = toupper(r);
	printf("%c\n", c);
	printf("%c", d);
}