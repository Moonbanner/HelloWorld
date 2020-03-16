#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct nhanvien
{
	string MaSo;
	string HoTen;
	float Luong;
};
typedef struct nhanvien NHANVIEN;
void Nhap(NHANVIEN& x)
{
	cout << "Nhap ma so nhan vien ";
	getline(cin, x.MaSo);
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, x.HoTen);
	cout << "Nhap luong nhan vien: ";
	cin >> x.Luong;
}
void Xuat(NHANVIEN x)
{
	cout << "Nhap ma so nhan vien: " << x.MaSo << endl;
	cout << "Nhap ho ten nhan vien: " << x.HoTen << endl;
	cout << "Nhap luong nhan vien: " << x.Luong << endl;
}
void NhapMang(int a[], NHANVIEN& x, int n)
{
	for (int i = 0; i < n; i++)
	{
		Nhap(x);
	}
}
int main()
{
	NHANVIEN x;
	Nhap(x);
	Xuat(x);
	int a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		Nhap(x);
	}
	return 0;
}

