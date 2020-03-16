#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct NhanVien
{
	char MaSo[100];
	char HoTen[100];
	float Luong;
	char GioiTinh[100];
	int Tuoi;
};
typedef struct NhanVien NHANVIEN;
NHANVIEN NhapNhanVien(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> (a[i].MaSo);
		//cout << endl;
		cin >> (a[i].HoTen);
		//cout << endl;
		cin >> (a[i].GioiTinh);
		//cout << endl;
		cin >> (a[i].Tuoi);
		//cout << endl;
		cin >> (a[i].Luong);
		//cout << endl;
	}
}
NHANVIEN XuatNhanVien(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i].MaSo << ",";
		cout << a[i].HoTen << ",";
		cout << a[i].Tuoi << ",";
		cout << a[i].Luong << ",";
		cout << a[i].GioiTinh << endl;
	}
}
int main()
{
	int n;
	NHANVIEN a[100];
	cin >> n;
	NhapNhanVien(a, n);
	cout << n << endl;
	XuatNhanVien(a, n);
	return 0;
}
