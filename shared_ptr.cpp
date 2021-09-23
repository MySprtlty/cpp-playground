#include <iostream>
#include <memory>

using namespace std;

int
main()
{
	/*shared_ptr Copy Constructor ȣ��*/
	shared_ptr<int> sp(new int); // RAII 
	*sp = 10;

	shared_ptr<int> sp2 = sp; // Copy Constructor�� ���������� �����Ѵ�.
	*sp2 = 20;

	cout << *sp << endl << endl; // 20 ���

	/*Reference Count�� 0���� �����*/
	int* pp = new int; // Primitive Pointer
	*pp = 50;
	shared_ptr<int> sp3(pp);

	cout << *pp << endl;
	cout << *sp3 << endl << endl;

	sp3 = sp2; // pp's reference count�� 0�� �ȴ�.
	// Copy Assignment Constructor�� ���������� ȣ��ȴ�.

	cout << *pp << endl; // Primitive Pointer�� shared_ptr's deleter�� ���� delete�Ǿ���.
	cout << *sp3 << endl;

	return 0;
}