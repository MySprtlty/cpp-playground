#include <iostream>

using namespace std;

int main()
{
	char c = 'C'; // DEC: 67, BIN: 01000011
	char h = 'H';

	char key = 32; // Capiteal <-> Small Letter 상호 전환을 위한 비트
	cout << static_cast<char>(c | key) << endl;
	cout << static_cast<char>(h | key) << endl;

	return 0;
}

