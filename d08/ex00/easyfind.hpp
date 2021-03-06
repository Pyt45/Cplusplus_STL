/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:14 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/03/31 12:51:28 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <stdexcept>
# include <algorithm>

class NotFound : public std::exception {
	public:
		virtual const char * what() const throw() {
			return "Not Found";
		}
};

template<typename T>
int		easyfind(T & arr, int find)
{
	typename T::iterator it;

	it = std::find(arr.begin(), arr.end(), find);
	if (it != arr.end())
		return 1;
	throw NotFound();
}

#endif
