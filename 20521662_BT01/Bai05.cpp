//Bài 5: Viết chương trình nhập vào 2 số phức.Tính tổng,
//hiệu, tích và xuất kết quả.

#include<iostream>
#include<math.h>
using namespace std;

struct sophuc
{
	float a;
	float  b;
};
typedef  sophuc   Sophuc;

void Nhap(Sophuc&);
void Xuat(Sophuc);
Sophuc Tong(Sophuc, Sophuc);
Sophuc Hieu(Sophuc, Sophuc);
Sophuc Tich(Sophuc, Sophuc);
Sophuc Thuong(Sophuc, Sophuc);

void Nhap(Sophuc& sp)
{
	cout << "Nhap phan thuc: ";
	cin >> sp.a;
	cout << "Nhap phan ao: ";
	cin >> sp.b;
}

void Xuat(Sophuc sp)
{
	cout << sp.a << " + " << sp.b << "i" << endl;
}

Sophuc Tong(Sophuc sp_1, Sophuc sp_2)
{
	Sophuc sp;
	sp.a = sp_1.a + sp_2.a;
	sp.b = sp_1.b + sp_2.b;
	return sp;
}

Sophuc Hieu(Sophuc sp_1, Sophuc sp_2)
{
	Sophuc sp;
	sp.a = sp_1.a - sp_2.a;
	sp.b = sp_1.b - sp_2.b;
	return sp;
}

Sophuc Tich(Sophuc sp_1, Sophuc sp_2)
{
	Sophuc sp;

	sp.a = sp_1.a * sp_2.a - sp_1.b * sp_2.b;
	sp.b = sp_1.a * sp_2.b + sp_1.b * sp_2.a;
	return sp;
}

Sophuc Thuong(Sophuc sp_1, Sophuc sp_2)
{
	Sophuc sp;
	sp.a = (sp_1.a * sp_2.a + sp_1.b * sp_2.b) / (sp_2.a * sp_2.a + sp_2.b * sp_2.b);
	sp.b = ((sp_1.b * sp_2.a) - (sp_1.a * sp_2.b)) / (sp_2.a * sp_2.a + sp_2.b * sp_2.b);
	return sp;
}

int main()
{
	Sophuc A;
	Nhap(A);
	Sophuc B;
	Nhap(B);
	Xuat(A);
	Xuat(B);
	Sophuc tong = Tong(A, B);
	cout << "Tong = " << tong.a << " + " << tong.b << "i" << endl;
	Sophuc hieu = Hieu(A, B);
	cout << "Hieu = " << hieu.a << " + " << hieu.b << "i" << endl;
	Sophuc tich = Tich(A, B);
	cout << "Tich = " << tich.a << " + " << tich.b << "i" << endl;
	Sophuc thuong = Thuong(A, B);
	cout << "Thuong = " << thuong.a << " + " << thuong.b << "i" << endl;

	return 0;
}
