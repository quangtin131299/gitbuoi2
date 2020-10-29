#include <iostream>

#include <cstdlib>

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
float chuvitron(int a)
{
	return (float)a  *2 * 3.14;
}
float dttron(int a)
{
	return (float)a*a *3.14;
}
int cvvuong(int a) {
	return a * 4;
}
int dtvuong(int a)
{
	return a * a;
}
int cvcn(int a, int b)
{
	return (a + b) * 2;
}
int dtcn(int a, int b)
{
	return a * b;
}

int main()

{


	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout << "tong la :" << tong(6, 5);
	cout << "Hieu la: " << hieu(6, 5);
	cout << "Tich la: " << tich(6, 5);
	cout << "Thuong la: " << thuong(6, 5);
	cout <<" ket qua random cong la "<<randomcong(); 

	cout<<"Random tru la"<<randomtru();
	cout  <<"chu vi tron la "<< chuvitron(3);
	cout << "Dien tich tron la" << dttron(3);
	cout << "Chu vi vuong la" << cvvuong(5);
	cout  <<"Dien tich vuong la" << dtvuong(5);
	cout  <<"Chu vi hinh chu nhat la"  << cvcn(3, 5);
	cout << "dien tich hinh chu nhat la"  << dtcn(3, 5);
	system(pause);
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
int randomcong()
{
	int kq=0;
	return kq = rand()+rand();
int randomtru()
{
	int kq=0;
	return kq-=rand();
}

