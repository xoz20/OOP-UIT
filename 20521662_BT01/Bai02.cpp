// Bài 2: Viết chương trình nhập tọa độ hai điểm trong không gian. Tính khoảng cách giữa chúng và xuất kết quả.
#include<iostream>
#include<math.h>
using namespace std;

struct point
{
	int x;
	int y;
};
typedef point Point;

void Nhap(Point& p)
{
	cout << "Nhap diem x: ";
	cin >> p.x;
	cout << "Nhap diem y: ";
	cin >> p.y;
}

float Khoang_Cach(Point p1, Point p2)
{
	float kc = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
	return kc;
}

void Xuat(Point p)
{
	cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
	Point a, b;
	cout << "Nhap diem thu nhat: " << endl;
	Nhap(a);
	cout << "Nhap diem thu hai: " << endl;
	Nhap(b);
	Xuat(a);
	Xuat(b);
	float kc = Khoang_Cach(a, b);
	cout << "Khoang cach giua hai diem = " << kc << endl;

	return 0;
}