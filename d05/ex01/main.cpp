/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub <ayoub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:57 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/01 22:02:16 by ayoub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	try {
		Bureaucrat	bob("bob", 2);
		Bureaucrat	jim("jim", 60);
		Form		state("state", 12, 10);
		Form		province("province", 13, 20);
		bob.signForm(state);
		std::cout << state;
		std::cout << province;
		jim.signForm(province);
		std::cout << std::endl;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n===================================\n";

	try {
		Bureaucrat jimmy("jimmy", 3);
		Form	   college("college", 15, 30);
		std::cout << jimmy;
		jimmy.incrementGrade();
		std::cout << jimmy;
		college.beSigned(jimmy);
		std::cout << college;
		std::cout << std::endl;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}