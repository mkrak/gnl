/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrakows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 12:24:16 by mkrakows          #+#    #+#             */
/*   Updated: 2017/03/10 17:47:53 by mkrakows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 5
# define CHECKMALLOC(x) if (!x) return (-1);
# define NBFD 5000

# include <fcntl.h>
# include "libft/libft.h"

int		ft_mycpy(char **dst, char *src);
int		get_next_line(int fd, char **file);

#endif
