/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusekim <yusekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:03:03 by yusekim           #+#    #+#             */
/*   Updated: 2024/01/04 13:41:49 by yusekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>
# include "structures.h"
# include "../libft/libft.h"
# include "mlx.h"

t_vec3		vec3(double x, double y, double z);
t_point3	point3(double x, double y, double z);
t_color3	color3(double r, double g, double b);
double		vlength2(t_vec3 vec);
double		vlength(t_vec3 vec);
t_vec3		vplus(t_vec3 vec, t_vec3 vec2);
t_vec3		vminus(t_vec3 vec, t_vec3 vec2);
t_vec3		vmult(t_vec3 vec, double t);
t_vec3		vmult_(t_vec3 vec, t_vec3 vec2);
t_vec3		vdivide(t_vec3 vec, double t);
double		vdot(t_vec3 vec, t_vec3 vec2);
t_vec3		vcross(t_vec3 vec, t_vec3 vec2);
t_vec3		vunit(t_vec3 vec);
t_vec3		vmin(t_vec3 vec1, t_vec3 vec2);
void		oadd(t_object **list, t_object *new);
t_object	*olast(t_object *list);
t_vec3		rotate_y(t_vec3 vec, double theta);
void		rotate_h(t_camera *cam, double theta);
void		ft_perror(char *msg);
int			rt_ft_atoi(const char *str);
char		*free_n_gnl(char **split, char *temp, int fd);

#endif
