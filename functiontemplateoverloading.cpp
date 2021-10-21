#include <iostream>

template <typename T1, typename T2>
void foo(T1 a, T2 b) // // 우선순위: 4
{
	using namespace std;
	cout << "Original Function Template is called!" << endl;
}

// Explicit Specialization보다 위에 정의되어야 제대로 동작한다.
template <typename T1> 
void foo(T1 a, double b) // 우선순위: 3
{
	using namespace std;
	cout << "Function Template Overloading!" << endl;
}

template <>
void foo(int a, double b) // 우선순위: 2
{
	using namespace std;
	cout << "Function Template Explicit Specialization!" << endl;
}

void foo(int a, double b) // 우선순위: 1
{
	using namespace std;
	cout << "Normal Function Overloading!" << endl;
}


int main(void)
{
	foo(1, 1); // (int, int)
	foo(1, 1.1); // (int, double)

	return 0;
}