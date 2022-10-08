/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:56:22 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/08 20:14:24 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_c(va_list arg)
{
	char	letter;
	int		count;

	letter = va_arg(arg, int);
	count = ft_putstr(letter);
	return (count);
}
