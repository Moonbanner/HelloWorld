#include <iostream>
using namespace std;
struct diem
{
	float x;
	float y;
	float P;
	float O;
};
typedef struct diem DIEM;
struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;
void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "\n x = " << P.x;
	cout << "\n x = " << P.y;
}
float KhoangCach(DIEM O, DIEM P)
{
	return sqrt((O.x - P.x) * (O.x - P.x) + (O.y - P.y) * (O.y - P.y));
}
void NhapDiem(DIEM& P,DIEM& O)
{
	cout << "Nhap P: ";
	cin >> P.P;
	cout << "Nhap O: ";
	cin >> P.O;
}
void NhapDuongTron(DUONGTRON& C)
{
	Nhap(C.I);
	cout << "Nhap ban kinh: ";
	cin >> C.R;
}
void XuatDuongTron(DUONGTRON c)
{
	cout << c.I.x;
	cout << endl;
	cout << c.I.y;
	cout << endl;
	cout << c.R;
}
int main()
{
	DIEM p;
	DUONGTRON c;
	NhapDuongTron(c);
	XuatDuongTron(c);
	//Nhap(p);
	//Xuat(p);
	//DIEM P;
	//DIEM O;
	//NhapDiem(P, O);
	//cout << KhoangCach(P,O);
	return 0;
}
