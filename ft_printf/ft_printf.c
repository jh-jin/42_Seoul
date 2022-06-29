/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:41:24 by jjin              #+#    #+#             */
/*   Updated: 2022/06/29 17:06:28 by jjin             ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

//cspdiuxX%
//malloc, free, write,
//va_start, va_arg, va_copy, va_end

int	ft_printformat(const char f, va_list vl)
{
	int		len;

	len = 0;
	if (f == 'c')
		len += ft_print_char(va_arg(vl, int));
	else if (f == 's')
		len += ft_print_str(va_arg(vl, char *));
	else if (f == 'p')
		len += ft_print_ptr(va_arg(vl, void *));
	else if (f == 'd' || f == 'i')
		len += ft_print_dec(va_arg(vl, int));
	else if (f == 'u')
		len += ft_print_unsigned(va_arg(vl, unsigned int));
	else if (f == 'x' || f == 'X')
		len += ft_print_hex(va_arg(vl, unsigned int));
	else if (f == '%')
		len += ft_print_char('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	vl;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_printformat(str[++i], vl);
		else
			len += ft_print_char(str[i]);
		i++;
	}
	va_end(vl);
	return (len);
}
