/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_triangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:50:26 by mwagner           #+#    #+#             */
/*   Updated: 2022/02/07 13:55:45 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	valid_triangle(float x, float y, float z)
{
	// check for all positive sides
	if (x <= 0 || y <= 0 || z <= 0)
		return (false);
	// check that sum of any two sides greater than third
	if ((x + y <= z) || (x + z <= y) || (y + z <= x))
		return (false);
	// if we passed both tests, we're good
	return (true);
}
