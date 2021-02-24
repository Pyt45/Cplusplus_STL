/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:45:36 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:46:32 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}
template <typename T>
T max(T const & a, T const & b)
{
	if ( a == b)
		return b;
	return (a > b ? a : b);
}
template <typename T>
T min(T const & a, T const & b)
{
	if (a == b)
		return b;
	return (a < b ? a : b);
}

#endif
