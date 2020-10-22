#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	int s = a - b;
	return s;
}
int tich(int a, int b);
float thuong(int a, int b)
{
	return a / b;
}
int main()

{

	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout << "tong la :" << tong(6, 5);
	cout << "Hieu la: " << hieu(6, 5);
	cout << "Tich la: " << tich(6, 5);
	cout << "Thuong la: " << thuong(6, 5);
	system("pause");
	return 0;
}
int tong(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}
int tich(int a, int b) {
	return a * b;
}