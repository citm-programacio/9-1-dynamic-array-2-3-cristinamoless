#include <iostream>
using namespace std;

int main()
{
	int num;
	int len = 0;
	int* numbers = new int[len];

	for (int i = 0; i <= len; i++) {
		cout << "add a number to an array: " << endl;
		cin >> num;
		len++;
		int* newnumbers = new int[len];
		for (int i = 0; i < len - 1; i++) {
			newnumbers[i] = numbers[i];
		}
		newnumbers[len - 1] = num;
		delete[] numbers;
		numbers = newnumbers;

		cout << "[";
		for (int j = 0; j < len; j++) {
			cout << numbers[j] << ",";
		}
		cout << "]" << endl;

		if (len == 5) {
			break;
		}
			
 }
}
