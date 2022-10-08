/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:03:47 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/08 19:17:15 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_H
#define AWESOME_H

# include <iostream>
# include <fstream>

class Awesome
{
	public:
		Awesome( void ) : __n(0) {}
		Awesome( int n ) : __n(n) {}

		Awesome & operator=(Awesome& a) {__n = a.__n; return *this; }

		bool	operator==( Awesome const & rhs ) const { return (this->__n == rhs.__n);}
		bool	operator!=( Awesome const & rhs ) const { return (this->__n != rhs.__n);}
		bool	operator>( Awesome const & rhs ) const { return (this->__n > rhs.__n);}
		bool	operator<( Awesome const & rhs ) const { return (this->__n < rhs.__n);}
		bool	operator>=( Awesome const & rhs ) const { return (this->__n >= rhs.__n);}
		bool	operator<=( Awesome const & rhs ) const { return (this->__n <= rhs.__n);}

		int	get_n() const { return __n; }

	private:
		int	__n;
};

std::ostream&	operator<<(std::ostream& o, const Awesome& a) { o << a.get_n(); return (o);}

#endif /* AWESOME_H */