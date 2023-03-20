#include <iostream>
using namespace std;

int main()
{

	int a[5];
	cout << "mengisi Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Data ke- " << (i) << ": ";
		cin >> a[i];
	}

cout << "membaca Array" << endl;
for (int i = 0; i < 5; i++) {
	cout << "Data ke-" << (i) << ": " << a[i] << endl;
}
}