#include <iostream>

// using namespace std; // ���� ���������� using namespace�� �ϴ� ���� ���Ѵ�.
// ���� ���� �������� �浹�� �̷��� �� �ִ�.
// ���� ��� foo namespace�� func1�� ����Ǿ� �ְ�,
// bar namespace func2�� ����Ǿ� �ִٰ� ��������.
//
// Global namespace�� using namespace foo;�� using namespace bar;���ߴ�.
// ó�� ����Ҷ��� ������ ����.
// �׷��� ����foo namespace�� func2�� �߰��ȴٸ� �����Ϸ��� � �Լ��� ȣ���ؾ��ϴ��� �� �� �����Ƿ� �浹�� �߻��Ѵ�.
// ���� �����ϸ� ������ �� std::vectoró�� namespace::�� �ٿ��ִ� ���� ����,
// �� ����ϰ� ������ �Լ� ������ ���ο��� using namespace���� ����Ͽ� ������ �Լ� ������ ���� �����ϸ� �ȴ�.

void func();

int
main(int argc, char** argv)
{
	std::string s1("Hello World");
	std::cout << s1 << std::endl;
	func();
	string s3;
}

void func()
{
	using namespace std;
	string s2("Hello World");
	cout << s2 << endl;
}

