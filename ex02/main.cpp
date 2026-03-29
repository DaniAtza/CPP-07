/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datienza <datienza@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 12:54:05 by datienza          #+#    #+#             */
/*   Updated: 2026/03/29 13:44:40 by datienza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int main() {

	std::cout << "\n--- Testing Default Constructor (Empty Array) ---" << std::endl;
	Array<int> emptyArray;
	std::cout << "emptyArray size: " << emptyArray.size() << std::endl;
	
	try {
		std::cout << "Trying to access emptyArray[0]..." << std::endl;
		std::cout << emptyArray[0] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n--- Testing Parameterized Constructor and Default Initialization ---" << std::endl;
	unsigned int n = 5;
	Array<int> intArray(n);
	std::cout << "intArray size: " << intArray.size() << std::endl;
	
	std::cout << "Default values (should be 0): ";
	for (unsigned int i = 0; i < intArray.size(); i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	for (unsigned int i = 0; i < intArray.size(); i++) {
		intArray[i] = (i + 1) * 10;
	}


	std::cout << "\n--- Testing Copy Constructor (Deep Copy) ---" << std::endl;
	Array<int> copyArray(intArray);
	
	std::cout << "Modifying copyArray[0] to 999..." << std::endl;
	copyArray[0] = 999;

	std::cout << "intArray[0] (Original): " << intArray[0] << " (Should be 10)" << std::endl;
	std::cout << "copyArray[0] (Copy)   : " << copyArray[0] << " (Should be 999)" << std::endl;


	std::cout << "\n--- Testing Assignment Operator (Deep Copy) ---" << std::endl;
	Array<int> assignedArray;
	assignedArray = intArray;

	std::cout << "Modifying assignedArray[1] to 888..." << std::endl;
	assignedArray[1] = 888;

	std::cout << "intArray[1] (Original): " << intArray[1] << " (Should be 20)" << std::endl;
	std::cout << "assignedArray[1] (Assigned): " << assignedArray[1] << " (Should be 888)" << std::endl;


	std::cout << "\n--- The Intern fails to recognize an index (Out of Bounds) ---" << std::endl;
	try {
		std::cout << "Trying to access intArray[5] (max index is 4)..." << std::endl;
		std::cout << intArray[5] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
		std::cout << "Trying to access intArray[-1]..." << std::endl;
		std::cout << intArray[-1] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}


	std::cout << "\n--- Testing with Complex Types (std::string) ---" << std::endl;
	Array<std::string> strArray(3);
	strArray[0] = "Hello";
	strArray[1] = "World";
	strArray[2] = "Templates";

	for (unsigned int i = 0; i < strArray.size(); i++) {
		std::cout << "strArray[" << i << "]: " << strArray[i] << std::endl;
	}

	int * a = new int(); 
    std::cout << "\n--- Value of *a (with parentheses): " << *a << std::endl;
    delete a;

	return 0;
}
