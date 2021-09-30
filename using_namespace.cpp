#include <iostream>

// using namespace std; // 전역 스코프에서 using namespace를 하는 것은 금한다.
// 유지 보수 과정에서 충돌이 이러날 수 있다.
// 예를 들면 foo namespace에 func1이 선언되어 있고,
// bar namespace func2가 선언되어 있다고 가정하자.
//
// Global namespace에 using namespace foo;와 using namespace bar;를했다.
// 처음 사용할때는 문제가 없다.
// 그러나 만약foo namespace에 func2가 추가된다면 컴파일러가 어떤 함수를 호출해야하는지 알 수 없으므로 충돌이 발생한다.
// 따라서 웬만하면 개발할 때 std::vector처럼 namespace::를 붙여주는 것이 좋고,
// 정 사용하고 싶으면 함수 스코프 내부에서 using namespace문을 사용하여 범위를 함수 스코프 내로 한정하면 된다.

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

