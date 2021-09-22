#include <iostream>

class Base
{
public:
	Base() // Default Constructor
	{
		std::cout << "Base's Default Constructor is called." << std::endl;
	}

	~Base() // Default Destructor
	{
		std::cout << "Base's Default Destructor is called." << std::endl;
	}

	Base(const Base& b) // Copy Constructor (C.C.)
	{
		std::cout << "Base's Default Copy Constructor is called." << std::endl;
	}

	Base& operator=(const Base& rhs) // Copy Assignment Operator (C.A.O.)
	{
		std::cout << "Base's Default Copy Assignment Operator is called." << std::endl;
		return *this;
	}
};

class Derived :Base
{
public:
	Derived() // Default Constructor
	{
		std::cout << "Derived's Default Constructor is called." << std::endl;
	}

	~Derived() // Default Destructor
	{
		std::cout << "Derived's Default Destructor is called." << std::endl;
	}

	/*
	Derived(const Derived& d) // User-Defiend Copy Constructor (C.C.)
	{
		std::cout << "Derived's Copy Constructor is called." << std::endl;
	}
	*/

	/*
	Derived& operator=(const Derived& rhs) // User-Defined Copy Assignment Operator (C.A.O.)
	{
		std::cout << "Derived's Copy Assignment Operator is called." << std::endl;
		return *this;
	}
	*/
};

class Derived2 :Base
{
public:
	Derived2() // Default Constructor
	{
		std::cout << "Derived2's Default Constructor is called." << std::endl;
	}

	~Derived2() // Default Destructor
	{
		std::cout << "Derived2's Default Destructor is called." << std::endl;
	}

	Derived2(const Derived2& d) // User-Defiend Copy Constructor (C.C.)
	{
		std::cout << "Derived2's Copy Constructor is called." << std::endl;
	}
	
	Derived2& operator=(const Derived2& rhs) // User-Defined Copy Assignment Operator (C.A.O.)
	{
		std::cout << "Derived2's Copy Assignment Operator is called." << std::endl;
		return *this;
	}
};

int
main()
{
	Derived* d1 = new Derived();
	Derived* d2 = new Derived(*d1); // Base's Copy Constructor is called.
	*d1 = *d2; // Base's Copy Assignment Operator is called.

	std::cout << std::endl;

	delete d1;
	delete d2;

	std::cout << std::endl;
	
	Derived2 d3;
	Derived2 d4(d3); // Base's Default Constructor is called but, Base's Copy Constructor isn't.
	d3 = d4; // Base's Copy Assignment Operator isn't called.

	std::cout << std::endl;

	return 0;
}