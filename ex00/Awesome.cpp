/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:36:38 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/09 17:43:56 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Awesome.hpp"

//* Constructors

Awesome::Awesome( void ) : __n(0) {}

Awesome::Awesome( int n ) : __n(n) {}

//*......Operators

std::ostream&	operator<<(std::ostream& o, const Awesome& a) {
	o << a.get_n();

	return (o);
}

Awesome&	Awesome::operator=(Awesome& a) {
	__n = a.__n;

	return (*this);
}

bool	Awesome::operator==( Awesome const & rhs) const {
	return (this->__n == rhs.__n);
}

bool	Awesome::operator!=( Awesome const & rhs) const {
	return (this->__n != rhs.__n);
}

bool	Awesome::operator>( Awesome const & rhs) const {
	return (this->__n > rhs.__n);
}

bool	Awesome::operator<( Awesome const & rhs) const {
	return (this->__n < rhs.__n);
}

bool	Awesome::operator>=( Awesome const & rhs) const {
	return (this->__n >= rhs.__n);
}

bool	Awesome::operator<=( Awesome const & rhs) const {
	return (this->__n <= rhs.__n);
}

//* getters and setters

int	Awesome::get_n() const {
	return (__n);
}