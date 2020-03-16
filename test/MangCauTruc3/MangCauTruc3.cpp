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
void NhapNhanVien(NHANVIEN a[], int n)
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
void XuatNhanVien(NHANVIEN a[], int n)
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
float TongLuong(NHANVIEN a[], int n)
{
	float S = 0;
	for (int i = 0; i < n; i++)
	{
		S = S + a[i].Luong;
	}
	return S;
}
int main()
{
	int n;
	NHANVIEN a[100];
	cin >> n;
	NhapNhanVien(a, n);
	cout << n << endl;
	XuatNhanVien(a, n);
	cout << "Tong luong: " << TongLuong(a, n);
	return 0;
}

