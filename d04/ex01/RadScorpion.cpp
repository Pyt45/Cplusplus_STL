/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:08:33 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/24 11:17:21 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}


RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & src )
{
	static_cast<void>(src);
	return *this;
}

RadScorpion::RadScorpion( RadScorpion const & src ) : Enemy(src)
{
	return ;
}
