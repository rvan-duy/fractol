/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fractals.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/08 21:57:32 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/08/08 23:14:43 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTALS_H
# define FRACTALS_H

# include "structs.h"

void	draw_fractal(t_mlx *mlx);
void	mandelbrot(t_mlx *mlx);

#endif