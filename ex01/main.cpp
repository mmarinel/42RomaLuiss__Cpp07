/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:01:51 by mmarinel          #+#    #+#             */
/*   Updated: 2022/10/08 15:06:11 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../colors.hpp"
# include "templates.hpp"

# include <iostream>
# include <string>

# define TEST_ARRAY_SIZE 4

int main( void )
{
	{	//*...............  INT TESTS.......................//
	
	
		int	array[TEST_ARRAY_SIZE] = {0, 1, 11, 22};
		
		std::cout << YELLOW << "\nFIRST TESTS (int)\n" << RESET;
		iter(array, TEST_ARRAY_SIZE, print_el<int>);
		std::cout << YELLOW << "\nAFTER TESTS -(doubling with int map)\n" << RESET;
		iter(array, TEST_ARRAY_SIZE, elDouble<int>);
		iter(array, TEST_ARRAY_SIZE, print_el<int>);
		std::cout << std::endl;
	}
	{	//*...............  std::string TESTS.......................//
	

		std::string	array[TEST_ARRAY_SIZE] = {"life", "is", "just", "pain"};
		
		std::cout << YELLOW << "\nFIRST TESTS (std::string)\n" << RESET;
		iter(array, TEST_ARRAY_SIZE, print_el<std::string>);
		std::cout << YELLOW << "\nAFTER TESTS -(doubling with int map)\n" << RESET;
		iter(array, TEST_ARRAY_SIZE, elDouble<std::string>);
		iter(array, TEST_ARRAY_SIZE, print_el<std::string>);
		std::cout << std::endl;
	}
	return 0;
}
