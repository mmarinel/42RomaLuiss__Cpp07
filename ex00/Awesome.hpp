/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:03:47 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/09 17:45:59 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_H
#define AWESOME_H

# include <iostream>
# include <fstream>

class Awesome
{
	public:
		Awesome( void );
		Awesome( int n );

		Awesome & operator=(Awesome& a);

		bool	operator==( Awesome const & rhs ) const;
		bool	operator!=( Awesome const & rhs ) const;
		bool	operator>( Awesome const & rhs ) const;
		bool	operator<( Awesome const & rhs ) const;
		bool	operator>=( Awesome const & rhs ) const;
		bool	operator<=( Awesome const & rhs ) const;

		int	get_n() const;

	private:
		int	__n;
};

std::ostream&	operator<<(std::ostream& o, const Awesome& a);

#endif /* AWESOME_H */