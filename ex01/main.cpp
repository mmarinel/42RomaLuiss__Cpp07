/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:01:51 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/07 11:49:50 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "types.hpp"
# include "../colors.hpp"

# include <iostream>
# include <string>
# include <cstdint>

void	fee(int x) {
	std::cout << x << std::endl;
}

int	faa(int y) {
	return (y);
}

template <typename T>
void	foo(T f) {
	f(11111);
}

int	main( void )
{
	foo(faa);
	foo(fee);

	return (0);
}
