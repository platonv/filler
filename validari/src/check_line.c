/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaha <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 13:01:50 by azaha             #+#    #+#             */
/*   Updated: 2015/12/12 14:18:59 by azaha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fillit.h"

void	check_line(char *line)		/* verificare daca linia este valida */
{
	if (ft_strlen(line) != 4)
		exit_program();
 	if (!ft_strchr(line, '.') && !ft_strchr(line, '#'))
		exit_program();
}
