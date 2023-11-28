//Bài 4: Viết chương trình nhập vào hai phân số.Tính tổng, hiệu, tích, thương giữa
//chúng và xuất kết quả.

#include<iostream>
#include<math.h>
using namespace std;

struct phanso
{
	int tu;
	int  mau;
};
typedef phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
void RutGon(PHANSO&);

void Nhap(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.tu;
	cout << "Nhap mau: ";
	cin >> a.mau;
}

void Xuat(PHANSO a)
{
	cout << a.tu << "/" << a.mau << endl;
}

PHANSO Tong(PHANSO a, PHANSO b)
{
	PHANSO temp;
	temp.tu = a.tu * b.mau + a.mau * b.tu;
	temp.mau = a.mau * b.mau;
	return temp;
}

PHANSO Hieu(PHANSO ps1, PHANSO ps2)
{
	PHANSO temp;
	temp.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	temp.mau = ps1.mau * ps2.mau;
	return temp;

}

PHANSO Tich(PHANSO a, PHANSO b)
{
	PHANSO temp;
	temp.tu = a.tu * b.tu;
	temp.mau = a.mau * b.mau;
	return temp;
}
void RutGon(PHANSO& ps)
{
	int  a = abs(ps.tu);
	int  b = abs(ps.mau);
	while (a * b != 0)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	ps.tu = ps.tu / (a + b);
	ps.mau = ps.mau / (a + b);
}


int main()
{
	PHANSO ps1, ps2;
	cout << "Nhap phan so thu nhat: \n";
	Nhap(ps1);
	cout << "Nhap phan so thu hai: \n";
	Nhap(ps2);
	PHANSO tong = Tong(ps1, ps2);
	PHANSO hieu = Hieu(ps1, ps2);
	PHANSO tich = Tich(ps1, ps2);
	//PHANSO thuong = Thuong(ps1, ps2);
	RutGon(tong);
	RutGon(hieu);
	RutGon(tich);
	//RutGon(thuong);
	Xuat(ps1);
	Xuat(ps2);
	cout << "Tong = ";
	Xuat(tong);
	cout << "Hieu = ";
	Xuat(hieu);
	cout << "Tich = ";
	Xuat(tich);


	return 0;
}