#include <iostream>
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
    NGAY HanSuDung;
    char LoaiSua[101];
    char XuatXu[51];
    int DonGia;
};
typedef struct HopSua HOPSUA;
void NhapMotHopSua(HOPSUA& a)
{
        cin >> a.LoaiSua;
        cin >> a.DungTich;
        cin >> a.ThuongHieu;
        cin >> a.XuatXu;
        cin >> a.HanSuDung.Ngay;
        cin >> a.HanSuDung.Thang;
        cin >> a.HanSuDung.Nam;
        cin >> a.DonGia;
}
void NhapNhieuHopSua(HOPSUA a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        NhapMotHopSua(a[i]);
    }
}
void XuatMotHopSua(HOPSUA a)
{
    cout << a.LoaiSua << ", " << a.DungTich << ", " << a.ThuongHieu << ", " << a.XuatXu << ", " << a.HanSuDung.Ngay << "/" << a.HanSuDung.Thang << "/" << a.HanSuDung.Nam << ", " << a.DungTich;
}
void XuatNhieuHopSua(HOPSUA a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        XuatMotHopSua(a[i]);
    }
}
int TimHopMax(HOPSUA a[], int n)
{
    int max = a[0].DungTich;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].DungTich > max)
        {
            max = a[i].DungTich;
            x = i;
        }
    }
    return x;
}
int main()
{
    HOPSUA a[100];
    int n;
    cin >> n;
    NhapNhieuHopSua(a, n);
    cout << n;
    XuatNhieuHopSua(a, n);
    cout << endl << "Dung tich lon nhat la:" << endl;
    XuatMotHopSua(a[TimHopMax(a, n)]);
}

