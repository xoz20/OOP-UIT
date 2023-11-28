#include <iostream> 
using namespace std;

struct ngay
{
    int ng;
    int th;
    int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
int KiemTraNamNhuan(NGAY);
long SoThuTu(NGAY);
int STTTrongNam(NGAY);
NGAY TimNgay(long);
NGAY TimNgay(int, int);
NGAY TimNgayHomQua(NGAY);

int main()
{
    NGAY x;
    Nhap(x);
    Xuat(x);
    NGAY kq = TimNgayHomQua(x);
    cout << "Ngay hom qua: ";
    Xuat(kq);
    return 1;
}

void Nhap(NGAY& x)
{
    cout << "Nhap ngay: ";
    cin >> x.ng;
    cout << "Nhap thang: ";
    cin >> x.th;
    cout << "Nhap nam: ";
    cin >> x.nm;
}

void Xuat(NGAY x) {
    cout << x.ng << "/" << x.th << "/" << x.nm << "\n";
}

int KiemTraNamNhuan(NGAY x)
{
    if (x.nm % 4 == 0 && x.nm % 100 != 0)
        return 1;
    if (x.nm % 400 == 0)
        return 1;
    return 0;
}



long SoThuTu(NGAY x)
{
    int nam = 1;
    int songay = 365;
    long stt = 0;
    for (int i = 1; i < x.nm; i++)
    {
        stt = stt + 365;
        NGAY temp = { 1, 1, i };
        if (KiemTraNamNhuan(temp) == 1)
            stt = stt + 1;
    }
    return stt + STTTrongNam(x);
}

int STTTrongNam(NGAY x)
{
    int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (KiemTraNamNhuan(x) == 1)
        ngaythang[1] = 29;
    int stt = 0;
    for (int i = 1; i < x.th; i++)
    {
        stt = stt + ngaythang[i - 1];
    }
    return stt + x.ng;
}

NGAY TimNgay(long stt)
{
    int nam = 1;
    int songay = 365;
    while (stt - songay > 0)
    {
        stt = stt - songay;
        nam++;
        NGAY temp = { 1, 1, nam };
        if (KiemTraNamNhuan(temp) == 1)
            songay = 366;
        else
            songay = 365;
    }
    return TimNgay(nam, stt);
}

NGAY TimNgay(int nam, int stt)
{
    int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    NGAY x = { 1, 1, nam };
    if (KiemTraNamNhuan(x) == 1)
        ngaythang[1] = 29;
    x.th = 1;
    while (stt - ngaythang[x.th - 1] > 0)
    {
        stt = stt - ngaythang[x.th - 1];
        x.th++;
    }
    x.ng = stt;
    return x;
}

NGAY TimNgayHomQua(NGAY x)
{
    long stt = SoThuTu(x);
    stt--;
    return TimNgay(stt);
}