#include <iostream>
#include <string>
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
/*void TimNguoiTreNhat(NHANVIEN a[], int n)
{
	int tuoimax = a[0].Tuoi;
	string masomax = a[0].MaSo;
	string hotenmax = a[0].HoTen;
	string gioitinhmax = a[0].GioiTinh;
	float luongmax = a[0].Luong;
	for (int i = 0; i < n; i++)
	{
		if (a[i].Tuoi < tuoimax)
		{
			tuoimax = a[i].Tuoi;
			masomax = a[i].MaSo;
			hotenmax = a[i].HoTen;
			gioitinhmax = a[i].GioiTinh;
			luongmax = a[i].Luong;
		}
	}
	cout << masomax << ",";
	cout << hotenmax << ",";
	cout << tuoimax << ",";
	cout << luongmax << ",";
	cout << gioitinhmax ;
}*/
NHANVIEN TimNguoiTreNhat(NHANVIEN a[], int n)
{
	NHANVIEN Tre = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i].Tuoi < Tre.Tuoi)
			Tre = a[i];
	}
	return Tre;
}
int main()
{
	int n;
	NHANVIEN a[100];
	cin >> n;
	NhapNhanVien(a, n);
	cout << n << endl;
	XuatNhanVien(a, n);
	cout << "Nhan vien tre nhat:" << endl;
	//TimNguoiTreNhat(a, n);
	TimNguoiTreNhat(a, n);
}

