
#include<iostream>
#include "Complex.h"
#include <fstream>

using namespace std;
int main()
{
	Complex W,U,S,R;
	//������� ����������� �����
	Complex MAS[3], mas[3];
	setlocale(LC_ALL, "Russian");
	int comand=-1;
	cout << "������� ����������� �����."<<endl;
	cout << "Re: ";
	cin>>W.re;
	cout << "Im: ";
	cin>>W.im;
	cout<<"������ ����������� �����: ";
	W.Out();
	cout<<endl;
	W.Write();
	S=S.Read();
	cout<<"������ ����������� �����, ��������� �� ��������� �����: ";
	S.Out();
	cout<<endl;
	cout << "������� ����������� �����."<<endl;
	cout << "Re: ";
	cin>>U.re;
	cout << "Im: ";
	cin>>U.im;
	cout<<"������ ����������� �����: ";
	U.Out();
	cout<<endl;
	U.Write();
	R=R.Read();
	cout<<"������ ����������� �����, ��������� �� ��������� �����: ";
	R.Out();
	cout<<endl;
	Complex A,C;
	A=W+U;
	A.Write();
	C=C.Read();
	cout<<"����� ����� �����: ";
		A.Out();
		cout<<endl;
	cout<<"����� �����, ��������� �� ��������� �����: ";
		C.Out();
		cout<<endl;
		MAS[0] = W;
		MAS[1] = U;
		MAS[2] = A;
		//������ ������� � �������� ����
		ofstream f_bin("binIn.txt", ios::binary);
		f_bin.write((char*)&MAS, sizeof(Complex[3]));
		f_bin.close();
		//���������� ������� �� �����
		ifstream f("binIn.txt", ios::binary | ios::app);
		f.read((char*)&mas, sizeof(Complex[3]));
		f.close();
		//����� ������� �� �����
		cout << "������ �� ����������� �����, ��������� �� ��������� �����: "<<endl;
		for (int p = 0; p < 3; p++)
		{
			mas[p].Out();
		}
	system("pause");
}
