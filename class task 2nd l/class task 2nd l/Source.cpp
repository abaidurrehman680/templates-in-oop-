#include<iostream>
using namespace std;
template<typename t>
bool searchElement(t* arrr, t data, t size) {
	for (int a = 0; a <= size; a++) {
		if (arrr[a]==data) {
			return true;
		}
	}
}
template<typename T>
void printArray(T* ar, T sz) {
	for (int i = 0; i <= sz; i++) {
		cout << ar[i]<<",";
	}
}
int main()
{
	const int size = 10;
	int int_arr[size] = { 34,65,11,7,28,90,53,13,54,43 };
	double double_arr[size] = { 4.3,55.2,87.9,90.3,57.3,3.4,78.6,44.4,29.3,38.6 };
	char char_arr[size] = { 'd', '#', 'O', 'H', 'w', '@', '&', 'm', '2', 'L' };
	cout << searchElement<int>(int_arr, 13, size) << endl;
	cout << searchElement<double>(double_arr, 78.6, size) << endl;
	cout << searchElement<char>(char_arr, 'H', size) << endl;
	printArray<int>(int_arr, size);
	cout << endl;
	printArray<double>(double_arr, size);
	cout << endl;
	printArray<char>(char_arr, size);
	cout << endl;
	return 0;
}