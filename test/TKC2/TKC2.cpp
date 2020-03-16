#include <iostream>
#include <string>
using namespace std;
struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;
struct HopSua
{
	char ThuongHieu[51];
	float DungTich;
	NGAY HSD;
	char LoaiSua[101];
	char XuatXu[51];
	int DonGia;
};
typedef struct HopSua HOPSUA;
void NhapHopSua(HOPSUA a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].LoaiSua;
		cin >> a[i].DungTich;
		cin >> a[i].ThuongHieu;
		cin >> a[i].XuatXu;
		cin >> a[i].HSD.Ngay;
		//out << setw(1);
		cin >> a[i].HSD.Thang;
		//cout << " ";
		cin >> a[i].HSD.Nam;
		cin >> a[i].DonGia;
	}
}
void Xuat(HOPSUA a)
{
	cout << a.LoaiSua << ", " << a.DungTich << ", " << a.ThuongHieu << ", " << a.XuatXu << ", " << a.HSD.Ngay << "/" << a.HSD.Thang << "/" << a.HSD.Nam << ", " << a.DonGia;
}
void XuatHopSua(HOPSUA a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i].LoaiSua << "," << " ";
		cout << a[i].DungTich << "," << " ";
		cout << a[i].ThuongHieu << "," << " ";
		cout << a[i].XuatXu << "," << " ";
		cout << a[i].HSD.Ngay << "/" << a[i].HSD.Thang << "/" << a[i].HSD.Nam << ", ";
		cout << a[i].DonGia;
		cout << endl;
	}
}
int XuatMax(HOPSUA a[], int n)
{
	int t=0;
	int max = a[0].DungTich;
	for (int i = 0; i < n; i++)
	{
		if (max > a[i].DungTich)
		{
			max = a[i].DungTich;
			t = i;
		}
	}
	Xuat(a[t]);
}
int main()
{
	HOPSUA a[1000];
	int n;
	cin >> n;
	NhapHopSua(a, n);
	cout << n << endl;
	XuatHopSua(a, n);
	cout << "Dung tich lon nhat:" << endl;
}