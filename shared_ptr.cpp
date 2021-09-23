#include <iostream>
#include <memory>

using namespace std;

int
main()
{
	/*shared_ptr Copy Constructor 호출*/
	shared_ptr<int> sp(new int); // RAII 
	*sp = 10;

	shared_ptr<int> sp2 = sp; // Copy Constructor가 정상적으로 동작한다.
	*sp2 = 20;

	cout << *sp << endl << endl; // 20 출력

	/*Reference Count를 0으로 만들기*/
	int* pp = new int; // Primitive Pointer
	*pp = 50;
	shared_ptr<int> sp3(pp);

	cout << *pp << endl;
	cout << *sp3 << endl << endl;

	sp3 = sp2; // pp's reference count가 0이 된다.
	// Copy Assignment Constructor가 정상적으로 호출된다.

	cout << *pp << endl; // Primitive Pointer가 shared_ptr's deleter에 의해 delete되었다.
	cout << *sp3 << endl;

	return 0;
}