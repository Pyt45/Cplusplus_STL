/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <aaqlzim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:44:44 by aaqlzim           #+#    #+#             */
/*   Updated: 2021/04/28 14:04:24 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <list>
# include <ctime>
# include <vector>

class Span {
    public:
        class FullSpanException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "Span is full";
                }  
        };
        Span( void );
        Span( unsigned int n );
        Span( Span const & );
        Span & operator=( Span const & );
        ~Span( void );

        void    addNumber(int num);
        long int     shortestSpan( void ) const;
        long int     longestSpan( void ) const;
        template < template < typename > class T >
        void addNumber(T<int *> begin, T<int *> end)
        {
            long int range = end - begin;
            if (range < 0)
                throw std::invalid_argument("begin adress is bigger than the end adress");
            if (range + this->_v.size() > this->_n)
                throw FullSpanException();
            this->_v.insert(this->_v.end(), begin, end);
        }
    private:
        std::vector<int> _v;
        unsigned int _n;
};

#endif
