
#include<iostream>
#include "Complex.h"
#include <fstream>

using namespace std;
int main()
{
	Complex W,U,S,R;
	//Массивы комплексных чисел
	Complex MAS[3], mas[3];
	setlocale(LC_ALL, "Russian");
	int comand=-1;
	cout << "Введите комплексное число."<<endl;
	cout << "Re: ";
	cin>>W.re;
	cout << "Im: ";
	cin>>W.im;
	cout<<"Первое комплексное число: ";
	W.Out();
	cout<<endl;
	W.Write();
	S=S.Read();
	cout<<"Первое комплексное число, считанное из двоичного файла: ";
	S.Out();
	cout<<endl;
	cout << "Введите комплексное число."<<endl;
	cout << "Re: ";
	cin>>U.re;
	cout << "Im: ";
	cin>>U.im;
	cout<<"Второе комплексное число: ";
	U.Out();
	cout<<endl;
	U.Write();
	R=R.Read();
	cout<<"Второе комплексное число, считанное из двоичного файла: ";
	R.Out();
	cout<<endl;
	Complex A,C;
	A=W+U;
	A.Write();
	C=C.Read();
	cout<<"Сумма чисел равна: ";
		A.Out();
		cout<<endl;
	cout<<"Сумма чисел, считанная из двоичного файла: ";
		C.Out();
		cout<<endl;
		MAS[0] = W;
		MAS[1] = U;
		MAS[2] = A;
		//Запись массива в двоичный файл
		ofstream f_bin("binIn.txt", ios::binary);
		f_bin.write((char*)&MAS, sizeof(Complex[3]));
		f_bin.close();
		//Считывание массива из файла
		ifstream f("binIn.txt", ios::binary | ios::app);
		f.read((char*)&mas, sizeof(Complex[3]));
		f.close();
		//Вывод массива на экран
		cout << "Массив из комплексных чисел, считанный из двоичного файла: "<<endl;
		for (int p = 0; p < 3; p++)
		{
			mas[p].Out();
		}
	system("pause");
}
