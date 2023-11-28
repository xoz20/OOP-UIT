//Bài 3: Viết chương trình nhập vào hai phân số.Tìm phân số lớn nhất và xuất kết
//quả.

#include<iostream>
#include<math.h>
using namespace std;

struct phanso {
	float tu;
	float mau;
};
typedef phanso PhanSo;

void Nhap(PhanSo&);
void Xuat(PhanSo);
//oat Check_Max(PhanSo, PhanSo);
void Nhap(PhanSo& a)
{
	cout << "Nhap tu so ";
	cin >> a.tu;
	cout << "Nhap mau so ";
	cin >> a.mau;
}

float Check_Max(PhanSo a, PhanSo b)
{
	if (a.tu / a.mau > b.tu / b.mau)
		return 1;
	else if (a.tu / a.mau < b.tu / b.mau)
		return -1;

	return 0;
}

void Xuat(PhanSo a)
{
	cout << "Phan so " << a.tu << " / " << a.mau;
}

int main()
{
	PhanSo a, b;
	Nhap(a);
	Nhap(b);
	float kq = Check_Max(a, b);
	switch (kq)
	{
	case 1:
		cout << "Phan so a > Phan so b";
		break;
	case -1:
		cout << "Phan so a < Phan so b";
		break;

	case 0:
		cout << "Phan so a = phan so b";
		break;
	}
	return 0;
}

