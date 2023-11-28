//Bài 9: Viết chương trình nhập tọa độ tâm và bán kính của một đường tròn.Tính
//diện tích và chu vi đường tròn.

#include<iostream>
#include<math.h>
using namespace std;

struct tam
{
	float x;
	float y;
};
typedef tam Tam;

void Nhap_tam(Tam& s)
{
	cout << "Nhap x: ";
	cin >> s.x;
	cout << "Nhap y: ";
	cin >> s.y;
}

void Xuat_tam(Tam s)
{
	cout << "Tam 0: " << "(" << s.x << "," << s.y << ")" << endl;
}

struct tron
{
	float r;
	float const pi = 3.14;
};
typedef tron Tron;

void Nhap(Tron& a)
{
	cout << "Nhap ban kinh R: ";
	cin >> a.r;
}

void Xuat(Tron a)
{
	cout << "Ban kinh R: " << a.r << endl;
}
void ChuVi_Tron(Tron a)
{
	cout << "Chu vi hinh tron: " << 2 * a.r * a.pi << endl;
}
float DienT_Tron(Tron a)
{
	return a.pi * a.r * a.r;
}

int main()
{
	Tam s;
	cout << "Nhap tam O:" << endl;
	Nhap_tam(s);
	Xuat_tam(s);
	Tron a;
	Nhap(a);
	Xuat(a);
	ChuVi_Tron(a);
	cout << "Dien tich hinh tron: " << DienT_Tron(a);
	return 0;
}

