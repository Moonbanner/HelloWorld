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
bool SoSanh(Ngay m, Ngay n)
{
    int dem = 0;
    if (m.Nam > n.Nam)
        return 0;
    else
    {
        if (m.Nam < n.Nam)
            return 1;
        else
        {
            if (m.Thang > n.Thang)
                return 0;
            else
            {
                if (m.Thang < n.Thang)
                    return 1;
                else
                {
                    if (m.Ngay >= n.Ngay)
                        return 0;
                    else
                        return 1;
                }
            }
        }
       
    }

}
void Xuat(HOPSUA a[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        SoSanh(, n);
    }
}
int main()
{
    HOPSUA a[100];
    int n;
    cin >> n;
    NhapNhieuHopSua(a, n);
    NGAY x;
    cin >> x.Ngay >> x.Thang >> x.Nam;
    cout << n;
    int s = 0;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (SoSanh(a[i].HanSuDung, x) == false)
        {
            s = s + a[i].DonGia;
            dem = dem + 1;
        }
    }
    XuatNhieuHopSua(a, n);
    
}
