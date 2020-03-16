#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	/*int a = 10;
	int *p = &a;
	cout << "\n gia tri tai dia chi vien con tro p dang giu la:" << *p;
	*p = 15;
	cout << "\nBien a: " << a << "."  ;
	cout << "\nGia tri tai dia chi bien con tro p dang guy la: " << *p  ;
	return 0;
	*/
	int* a;
	int n;
	cout << "Nhap n:";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		cin >> a[i];

	}
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << a[i] ;
	}
	for (int i = 0; i < n; i++)
	{
		cout  <<&a[i]<< endl;
	}
	delete[]a;
	return 0;
}


