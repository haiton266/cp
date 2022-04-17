#include <bits/stdc++.h>

using namespace std;

struct NV
{
	string ten; // tên
	int tuoi;	// tuôi
	string cv;	// chuc vu
	double hsl; // he so luong -> Có thể lẻ nên phải là double ( double > float )
	double luong;
	void nhap(NV &a);		// ham nhap
	void In(NV &a);			// ham in
	void tinh_luong(NV &a); // ham tinh luong
};
double tinh_luong(NV &a)
{
	int lcb = 1499000;
	double luong = 0;
	if (a.cv[0] == 'g')
	{
		luong = lcb * a.hsl + lcb * 0.5;
	}
	if (a.cv[0] == 't')
	{
		luong = lcb * a.hsl + lcb * 0.3;
	}
	if (a.cv[0] == 'n')
	{
		luong = lcb * a.hsl + lcb * 0.2;
	}
	return luong;
}
void nhap(NV &a)
{
	cout << "\nNhap ho va ten: ";
	fflush(stdin); // Xóa bộ nhớ đệm
	getline(cin, a.ten);
	cout << "Nhap tuoi: ";
	cin >> a.tuoi;
	cout << "Nhap vi tri lam viec: ";
	cin.ignore();
	getline(cin, a.cv);
	cout << " Nhap he so luong: ";
	cin >> a.hsl;
}
void In(NV &a)
{
	cout << " \n Ho va ten la: " << a.ten;
	cout << " \n Tuoi la: " << a.tuoi;
	cout << "\n Vi tri lam viec la: " << a.cv;
	cout << "\n He so luong la: " << a.hsl;
	a.luong = tinh_luong(a);
	cout << "\n Luong la: " << fixed << setprecision(0) << a.luong;
}

int main()
{
	NV nv[50];
	int n; // n la so nhan vien
	cout << " So luong nhan vien la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap nhan vien thu: " << i + 1;
		nhap(nv[i]);
	}
	double res = 0;
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		double temp = tinh_luong(nv[i]); // temp: biến tạm thời
		if (temp > res)
		{
			vt = i;
			res = temp;
		}
	}
	cout << "Nhan vien co luong cao nhat la: ";
	In(nv[vt]);
	return 0;
}