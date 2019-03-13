#include <iostream>
#include <clocale>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <io.h>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	ofstream fout("out2.txt");
	ifstream fin("out4.txt");

	//2 задача и 4 задача
	/*ofstream my_file;
	char str[100];
	my_file.open("out.txt", ios::app);
	cin >> str;

	my_file << "Hello, World!" << endl;
	my_file << "Привет, Мир!" << endl;
	my_file << str << endl;

	int a[5] = { 4,78,12,34,21 };
	for (size_t i = 0; i < 5; i++)
	my_file << a[i] << endl;



	my_file << "До свиданья люди!" << endl;
	my_file.close();*/

	/*ifstream in_file;
	in_file.open("out.txt");

	int var;
	int sum = 0, count = 0;

	while (in_file >> var)
	{
	cout << var << endl;
	count++;
	sum += var;
	}
	cout << sum << " " << count << " " << endl;*/

	//5-6 задачи
	/*ifstream in_file;
	ofstream out_file;
	char str[100];

	in_file.open("Source.cpp");
	out_file.open("Out.cpp");

	char var;
	int count = 0, count1 = 0;
	while (in_file.getline(str, 50)) {
		cout << str << endl;
		count++;
	}
	cout << count << " " << endl;
	in_file.close();
	in_file.open("out.txt");
	while (in_file >> str) {
		count1++;
	}
	cout << count1 << " " << endl;*/

	//3 задача
	/*char ss[20][30];
	ofstream out_file("out.txt");

	for (size_t i = 0; i < 5; i++)
	{
	cin.getline(ss[i], 30);
	}
	for (size_t i = 0; i < 5; i++)
	{
	cout << ss[i] << endl;
	}*/

	//8
	/*ifstream ifs("out.txt");
	string cur_str, max_str;

	while (getline(ifs, cur_str))
	{
		if (cur_str.size() > max_str.size())
			max_str = cur_str;
	}

	cout << "Max size: " << max_str.size() << " - " << max_str << endl;*/

	/*
	2.	Создать текстовый файл и записать в него фразу «Здесь был, <Ваше_имя>!».
	*/
	/*
	3.	Записать массив строк в файл, 
	расположив каждый элемент массива на отдельной строке с сохранением порядка.
	*/
	/*
	4.	Дан текстовый файл. 
	Необходимо создать новый файл, 
	в который переписать из исходного файла все слова, 
	состоящие не менее чем из семи букв.
	*/
	/*ofstream my_file1;
	ifstream fin("out2.txt");
	my_file1.open("out1.txt");
	my_file1 << "Здесь был, Олжас!" << endl;
	char ss[20][30];
	char str1[100];
	for (size_t i = 0; i < 5; i++)
	{
		cin.getline(ss[i], 30);
	}
	my_file1 << *ss << endl;*/
	//4
	/*ofstream fout("out2.txt");
	ifstream fin("out3.txt");

	char str1[100];
	while (fin >> str1)
	{
		if (strlen(str1) >= 7)
		{
			fout << str1 << " ";
		}
	}
	fin.close();
	fout.close();*/
	
	/*
	6.	Дан текстовый файл.
	Необходимо переписать его строки в другой файл. 
	Порядок строк во втором файле должен быть обратным
	по отношению к порядку строк в заданном файле.
	*/
	
	/*char str1[50][100];
	int count = 0;
	while (!fin.eof())
	{
		fin.getline(str1[count++], 100);
	}

	for (size_t i = count - 1; i >= 0; i--)
	{
		cout << str1[i] << endl;
		fout << str1[i] << endl;
	}*/
	

	//8
	/*
	8.	Дано два текстовых файла.
	Выяснить, совпадают ли их строки. 
	Если нет, то вывести несовпадающую строку из каждого файла.
	*/
	/*ifstream in_file1("in.txt");
	ifstream in_file2("out5.txt");

	char buffer1[100], buffer2[100];

	while (!in_file1.eof() || !in_file2.eof())
	{
		in_file1.getline(buffer1, 100);
		in_file2.getline(buffer2, 100);
	
		if ((strcmp(buffer1, buffer2) != 0))
			cout << buffer1 << " " << buffer2 << endl;
	}*/
	
	
	
	system("pause");
	return 0;
}