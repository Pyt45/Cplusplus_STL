/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:37:24 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/02/05 16:37:25 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde *z = new ZombieHorde(5);

	z->announce();
	delete z;
}