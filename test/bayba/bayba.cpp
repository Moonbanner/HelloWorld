#include <iostream>
using namespace std;
struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;
void NhapHonSo(HONSO& n)
{
	cout << "Nhap phan nguyen: ";
	cin >> n.Nguyen;
	cout << "Nhap tu: ";
	cin >> n.Tu;
	cout << "Nhap mau: ";
	cin >> n.Mau;
}
void XuatHonSo(HONSO n)
{
	cout << n.Nguyen;
	cout << n.Tu;
	cout << n.Mau;
}
int main()
{
	HONSO a;
	NhapHonSo(a);
	XuatHonSo(a);

}