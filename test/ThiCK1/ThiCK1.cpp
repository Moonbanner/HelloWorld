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
void XuatHopSua(HOPSUA a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i].LoaiSua << "," << " ";
		cout << a[i].DungTich << "," << " ";
		cout << a[i].ThuongHieu << "," << " ";
		cout << a[i].XuatXu << "," << " ";
		cout << a[i].HSD.Ngay << "/" << a[i].HSD.Thang <<"/" << a[i].HSD.Nam <<", ";
		cout << a[i].DonGia;
		cout << endl;

	}
}
/* TimMax(HOPSUA a[], int n)
{
	string LoaiSuaMax = a[0].LoaiSua;
	float DungTichMax = a[0].DungTich;
	string ThuongHieuMax = a[0].ThuongHieu;
	string XuatXuMax = a[0].XuatXu;
	char NgayMax = a[0].HSD.Ngay;
	char ThangMax = a[0].HSD.Thang;
	char NamMax = a[0].HSD.Nam;
	int GiaMax = a[0].DonGia;
	for (int i = 0; i < n; i++)
	{
		if (a[i].DungTich > DungTichMax)
			DungTichMax > a[i].DungTich;
		    LoaiSuaMax = a[i].LoaiSua;
			DungTichMax = a[i].DungTich;
			ThuongHieuMax = a[i].ThuongHieu;
			XuatXuMax = a[i].XuatXu;
			NgayMax = a[i].HSD.Ngay;
			ThangMax = a[i].HSD.Thang;
			NamMax = a[i].HSD.Nam;
			GiaMax = a[i].DonGia;
	}
	cout << LoaiSuaMax << "," << " ";
	cout << DungTichMax << "," << " ";
	cout << ThuongHieuMax << "," << " ";
	cout << XuatXuMax << "," << " ";
	cout << NgayMax << "/" << ThangMax << "/" << NamMax << ", ";
	cout << GiaMax;


}*/
int XuatMax(HOPSUA a[], int n)
{
	int t;
	HOPSUA max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max.DungTich > a[i].DungTich)
		{
			max = a[i];
			t = i;
		}
	}
	cout << max.DungTich;
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
	cout << XuatMax(a, n);

}