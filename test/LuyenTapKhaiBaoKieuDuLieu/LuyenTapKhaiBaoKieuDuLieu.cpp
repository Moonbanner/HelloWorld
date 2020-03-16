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
void Nhap(NHANVIEN &x)
{
	cout << "Nhap ma so nhan vien: ";
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
int main()
{
	NHANVIEN x;
	Nhap(x);
	Xuat(x);
	NHANVIEN a[1000];
	return 0;
}