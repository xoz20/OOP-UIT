//Bài 8: Viết chương trình nhập tọa độ 3 đỉnh A, B, C của 1 tam giác trong mặt
//phẳng Oxy.Tính chu vi, diện tích và tìm tọa độ trọng tâm.

#include<iostream>
#include<math.h>
using namespace std;

struct dinh
{
	float x;
	float y;
};
typedef dinh Dinh;

struct TamGiac {
	Dinh A;
	Dinh B;
	Dinh C;
};

void Nhap(Dinh&);
void Xuat(Dinh);

void Nhap(Dinh& a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}

void Xuat(Dinh a)
{
	cout << "(" << a.x << ", " << a.y << ")" << endl;
}

double Distance(Dinh p1, Dinh p2)
{
	return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

double ChuVi(TamGiac t)
{
	double a = Distance(t.A, t.B);
	double b = Distance(t.A, t.C);
	double c = Distance(t.B, t.C);
	return a + b + c;
}

double DienTich(TamGiac t)
{
	double a = Distance(t.A, t.B);
	double b = Distance(t.A, t.C);
	double c = Distance(t.B, t.C);
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

Dinh ToaDo_G(TamGiac t)
{
	Dinh dinh;
	dinh.x = (t.A.x + t.B.x + t.C.x) / 3;
	dinh.y = (t.A.y + t.B.y + t.C.y) / 3;
	return dinh;
}

int main()
{
	TamGiac tg;
	cout << "Nhap diem A:" << endl;
	Nhap(tg.A);
	Dinh B;
	cout << "Nhap diem B:" << endl;
	Nhap(tg.B);
	Dinh C;
	cout << "Nhap diem C:" << endl;
	Nhap(tg.C);
	cout << "Chu vi = " << ChuVi(tg) << endl;
	cout << "Dien tich = " << DienTich(tg) << endl;
	Dinh toa_do = ToaDo_G(tg);
	cout << "Toa do G " << toa_do.x << ", " << toa_do.y << endl;
	return 0;
}