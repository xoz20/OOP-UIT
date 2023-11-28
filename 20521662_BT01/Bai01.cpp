//  1: Viết chương trình nhập vào một phân số.Hãy cho biết phân số đó là phân số âm hay dương hay bằng không.
#include<iostream>
using namespace std;

struct PhanSo
{
	float tu, mau;
};
typedef PhanSo Ps;

void Nhap(Ps&);
void Xuat(Ps);
int Check(Ps);

void Nhap(Ps& a)
{
	cout << "Nhap tu so ";
	cin >> a.tu;
	cout << "Nhap mau so ";
	cin >> a.mau;
}

void Xuat(Ps a)
{
	cout << "Phan so " << a.tu << " / " << a.mau << endl;
}

int Check(Ps a)
{
	if (a.tu * a.mau > 0)
	{
		return 1;
	}
	else if (a.tu * a.mau < 0)
	{
		return -1;
	}
	return 0;
}

int main()
{
	Ps a;
	Nhap(a);
	int kq = Check(a);
	switch (kq)
	{
	case 1:
		cout << "Phan so > 0 " << endl;
		break;
	case -1:
		cout << "Phan so < 0 " << endl;
		break;
	case 0:
		cout << "Phan so = 0 " << endl;
		break;
	}
	Xuat(a);
	return 0;
}
