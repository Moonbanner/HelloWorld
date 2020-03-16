#include<iostream>
#define MAX 100;
using namespace std;
struct NGAY
{
	int  ngay;
	int thang;
	int nam;
};
struct HOPSUA
{
	string THUONGHIEU;
	float DUNGTICH;
	NGAY HSD;
	string LOAI, XUATXU;
	long int DONGIA;

};
int cnt{ 0 };
void Xuat(HOPSUA A);
void Nhap(HOPSUA& A);
void DungTichMax(HOPSUA* A, int n);
NGAY X;
void DungTichMax(HOPSUA* A, int n);
bool SoSanh(NGAY Y);
int KiemTraNgay2(HOPSUA* A, int n);
void KiemTraNgay(HOPSUA* A, int n);
int KiemTraNgay3(HOPSUA* A, int n);
int main() {
	int n;
	cin >> n;
	HOPSUA A[1000];
	float sum = 0;
	for (int i = 0; i < n; i++) {
		Nhap(A[i]);

	}
	cin >> X.ngay;
	cin >> X.thang;
	cin >> X.nam;

	cout << n << endl;
	for (int i = 0; i < n; i++) {
		Xuat(A[i]);

	}

	//cout << "Dung tich lon nhat: " << endl;
	//DungTichMax(A, n);

	int cnt2 = KiemTraNgay2(A, n);
	cout << endl;
	cout << "So hop sua het han sau ngay " << X.ngay << "/" << X.thang << "/" << X.nam << " la: " << cnt2 << endl;
	cout << "Tong gia tri: " << KiemTraNgay3(A, n) << endl;
	KiemTraNgay(A, n);
}

void Nhap(HOPSUA& A) {
	cin >> A.LOAI;
	cin >> A.DUNGTICH;
	cin >> A.THUONGHIEU;
	cin >> A.XUATXU;
	cin >> A.HSD.ngay;
	cin >> A.HSD.thang;
	cin >> A.HSD.nam;
	cin >> A.DONGIA;

}
void Xuat(HOPSUA A) {
	cout << A.LOAI; cout << ", ";
	cout << A.DUNGTICH; cout << ", ";
	cout << A.THUONGHIEU; cout << ", ";
	cout << A.XUATXU; cout << ", ";
	cout << A.HSD.ngay; cout << "/";
	cout << A.HSD.thang; cout << "/";
	cout << A.HSD.nam; cout << ", ";
	cout << A.DONGIA; cout << endl;
}
void DungTichMax(HOPSUA* A, int n) {
	HOPSUA KETQUA;
	float max = A[0].DUNGTICH;
	for (int i = 1; i < n; i++) {
		if (A[i].DUNGTICH > max) {
			max = A[i].DUNGTICH;

		}
	}
	for (int i = 0; i < n; i++) {
		if (A[i].DUNGTICH == max) {
			Xuat(A[i]);

		}
	}

}
void KiemTraNgay(HOPSUA* A, int n) {
	int cnt{ 0 };
	float sum{ 0 };
	for (int i = 0; i < n; i++) {
		if (SoSanh(A[i].HSD)) {
			cnt++;
			sum += A[i].DUNGTICH;
			cout << cnt << " ";
			Xuat(A[i]);
		}
	}
}
bool SoSanh(NGAY Y) {
	if (X.nam > Y.nam) {
		return true;
	}
	else if (X.nam < Y.nam) {
		return false;
	}
	else {
		if (X.thang > Y.thang) {
			return true;
		}
		else if (X.thang < Y.thang) {
			return false;
		}
		else {
			if (X.ngay > Y.ngay) {
				return true;
			}
			else {
				return false;
			}
		}
	}

}
int KiemTraNgay2(HOPSUA* A, int n) {
	int cnt{ 0 };
	float sum{ 0 };
	for (int i = 0; i < n; i++) {
		if (SoSanh(A[i].HSD)) {
			cnt++;

		}
	}
	return cnt;
}
int KiemTraNgay3(HOPSUA* A, int n) {
	int cnt{ 0 };
	float sum{ 0 };
	for (int i = 0; i < n; i++) {
		if (SoSanh(A[i].HSD)) {
			cnt++;
			sum += A[i].DONGIA;

		}
	}
	return sum;
}
