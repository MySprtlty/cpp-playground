#include <iostream>

template <typename T1, typename T2> class Foo_c; // ���ø� Ŭ���� ���� ����
template <typename T1, typename T2> T1 foo_f(T1 a, T2 b); // ���ø� �Լ� ���� ����

// Total Template Specialization
template <>
class Foo_c<double, double>
{
	double a;
	double b;
public:
	Foo_c(double ia, double ib) :a(ia), b(ib)
	{
	}

	void prt(void)
	{
		using namespace std;
		cout << "Foo_c's Explicit Specialization " << a << " " << b << endl;
	}
};

// Total Template Specialization
template <typename T2>
class Foo_c<double, T2>
{
	double a;
	T2 b;
public:
	Foo_c(double ia, double ib) :a(ia), b(ib)
	{
	}

	void prt(void)
	{
		using namespace std;
		cout << "Foo_c's Partial Specialization " << a << " " << b << endl;
	}
};

template <typename T1, typename T2>
class Foo_c
{
	
	T1 a;
	T2 b;
public:
	Foo_c(T1 ia, T2 ib):a(ia), b(ib)
	{
	}

	void prt(void)
	{
		using namespace std;
		cout << a << " " << b << endl;
	}
};


// �Լ��� ����� Ư��ȭ
template <>
double foo_f<double, double>(double a, double b)
{
	using namespace std;
	cout << "foo_f's Explicit Specialization " << a << ' ' << b << endl;
	return a;
}

// ���ø� �Լ� �����ε�
template <typename T1, typename T2>
 T1 foo_f(T1 a, T2 b, int c)
{
	using namespace std;
	cout << "foo_f's overloading " << a << ' ' << b << ' ' << c << endl;
	return a;
}

// ù ��° ���ڸ� �����ϴ� �Լ�
template <typename T1, typename T2>
T1 foo_f(T1 a, T2 b)
{
	using namespace std;
	cout << a <<' ' << b << endl;
	return a; 
}


int main(void)
{
	Foo_c<int, int> x(10, 100); 
	x.prt();
	Foo_c<double, double> y(3.14, 5.21); // Explicit Specialization 
	y.prt();

	Foo_c<double, int> z(3.14, 23); // Partial Specialization
	z.prt();

	foo_f(10, 100); // int, int
	foo_f(3.14, 5.21); // double, double Expicit Specilization
	foo_f(3.14, 23, 16); // double, int overloading

	return 0;
}