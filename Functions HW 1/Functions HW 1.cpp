#include <iostream>
#include <string>
using namespace std;

int main()
{
	int basiclist[] = { 1, 2, 3, 3, 3, 3, 4, 5 };

	int uniquelist[] = { 1, 2, 2, 4, 6, 8, 9 };

	for (int num1 : basiclist) {
		cout << num1;
	}
	cout << "\n\nThis is the first basic list\n\n";

	for (int num2 : uniquelist) {
		cout << num2;
	}
	cout << "\n\nThis is the second unique list\n\n";
	return 0;
}