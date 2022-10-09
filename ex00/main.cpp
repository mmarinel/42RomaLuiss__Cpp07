/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:59:30 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/09 17:51:00 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "templates.hpp"
# include "Awesome.hpp"
# include "../colors.hpp"

# include <iostream>
# include <string>

int	main ( void ) {
	{
		int	a = 2;
		int	b = 3;
	
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		//*...........................................................*//
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
		std::cout << std::endl;
	}
	{
		std::cout << YELLOW << " testing complex types" << RESET << std::endl;
		Awesome	a(2), b(4);

		swap(a, b);
		
		std::cout << "Awesome a = "  << a << ", Awesome b = " << b << std::endl;
		std::cout << "max( a, b ) = "  << max(a, b) << std::endl;
		std::cout << "min( a, b ) = "  << min(a, b) << std::endl;
		std::cout << std::endl;
	}
	return 0;
}
