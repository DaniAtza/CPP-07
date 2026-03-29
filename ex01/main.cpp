#include "iter.hpp"

template <typename T>

void printElement(T t){
	std::cout << t << std::endl;
}

int main() {

	int arr1[] = {1, 2, 3, 4, 5};
	size_t len1 = sizeof(arr1) / sizeof(arr1[0]);

	iter(arr1, len1, printElement<int>);


	char arr2[] = {'a', 'b', 'c', 'd'};
	size_t len2 = sizeof(arr2) / sizeof(arr2[0]);

	iter(arr2, len2, printElement<char>);

	std::string arr3[] = {"Implement", "a", "function", "template", "iter"};
	size_t len3 = sizeof(arr3) / sizeof(arr3[0]);

	iter(arr3, len3, printElement<std::string>);

		return 0;
}