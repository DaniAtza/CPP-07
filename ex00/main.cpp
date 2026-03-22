#include <iostream>
#include "whatever.hpp"

class TestClass
{
private:
	int _n;
public:
	TestClass(void) : _n(0) {}
	TestClass( int n ) : _n( n ) {}
	TestClass & operator= (TestClass & a) { _n = a._n; return *this; }
	
	bool operator==( TestClass const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( TestClass const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( TestClass const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( TestClass const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( TestClass const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( TestClass const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
	void set_n(int v) { this->_n = v; }
};

std::ostream & operator<<(std::ostream & o, TestClass const & c){ return o << c.get_n();}


int main( void ) {
	
	std::cout << "Subject test" << std::endl;

	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "swap" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "swap" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << "Class test" << std::endl;

	TestClass ClassA;
	TestClass ClassB(42);

	std::cout << "ClassA = " << ClassA << ", ClassB = " << ClassB << std::endl;
	std::cout << "swap" << std::endl;
	::swap(ClassA, ClassB);
	std::cout << "ClassA = " << ClassA << ", ClassB = " << ClassB << std::endl;
	std::cout << "min( ClassA, ClassB ) = " << ::min( ClassA, ClassB ) << std::endl;
	std::cout << "max( ClassA, ClassB ) = " << ::max( ClassA, ClassB ) << std::endl;

	ClassB.set_n(42);
	std::cout << "ClassA = " << ClassA << ", ClassB = " << ClassB << std::endl;
	std::cout << "Address ClassA = " << &ClassA << ", Address ClassB = " << &ClassB << std::endl;

	std::cout << "min( ClassA, ClassB ) = " << ::min( ClassA, ClassB ) << std::endl;
	TestClass const & res = ::min( ClassA, ClassB);
	std::cout << "min Returned address = " << &res << std::endl;

	std::cout << "max( ClassA, ClassB ) = " << ::max( ClassA, ClassB ) << std::endl;
	TestClass const & res2 = ::max( ClassA, ClassB);
	std::cout << "max Returned address = " << &res2 << std::endl;

	return 0;
}