#include <iostream>
#include <string>
using namespace std;

struct NGAY
{
    int ngay;
    int thang;
    int nam;
};

struct HOPSUA
{
    char ThuongHieu[50];
    float DungTich;
    NGAY HanDung;
    char LoaiSua[100];
    char XuatXu[50];
    int GiaTien;
};

void Nhap(HOPSUA& hs)
{
    cin >> hs.LoaiSua;
    cin >> hs.DungTich;
    cin >> hs.ThuongHieu;
    cin >> hs.XuatXu;

    cin >> hs.HanDung.ngay;
    cin >> hs.HanDung.thang;
    cin >> hs.HanDung.nam;

    cin >> hs.GiaTien;
}

void Xuat(HOPSUA hs)
{
    cout << hs.LoaiSua << ", " << hs.DungTich << ", " << hs.ThuongHieu << ", " << hs.XuatXu << ", " << hs.HanDung.ngay << "/" << hs.HanDung.thang << "/" << hs.HanDung.nam << ", " << hs.GiaTien;
}

void Nhap(HOPSUA hs[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Nhap(hs[i]);
    }
}

void Xuat(HOPSUA hs[], int n)
{
    cout << n;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        Xuat(hs[i]);

    }
}

int DungTichLonNhat(HOPSUA hs[], int n)
{
    int temp = hs[0].DungTich;
    int MAX = 0;
    for (int i = 0; i < n; i++)
    {
        if (hs[i].DungTich > temp)
        {
            temp = hs[i].DungTich;
            MAX = i;
        }
    }
    return MAX;
}
int HetHan(HOPSUA a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].HanDung.ngay > 3 && a[i].HanDung.thang >2);
    }
}
int main()
{
    HOPSUA hs[100];
        int n;
        Nhap(hs, n);
        Xuat(hs, n);
        //DungTichLonNhat(hs, n);
        cout << endl;

        //cout << "Dung tich lon nhat:";
        //cout << endl;
        //Xuat(hs[DungTichLonNhat(hs, n)]);
        cout << "So hop sua het han sau ngay ";

}
