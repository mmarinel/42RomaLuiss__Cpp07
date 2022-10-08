/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:17:06 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/08 19:19:58 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_H
#define AWESOME_H

# include <iostream>
# include <fstream>

class Awesome
{
	public:
		Awesome( void ) : __n(42) {}

		int	get( void ) const { return this->__n; }

	private:
		int	__n;
};

std::ostream&	operator<<(std::ostream& o, Awesome const & rhs) { o << rhs.get(); return (o);}

template <typename T>
void	print( T const & x) { std::cout << x << std::endl; return; }

#endif /* AWESOME_H */