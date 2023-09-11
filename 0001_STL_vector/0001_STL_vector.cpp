// ***************************************************************
// vector - Библиотека стандартных шаблонов (STL) | Уроки C++ #1 
// ---------------------------------------------------------------
// С++ | Visual Studio 2022 
// ---------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// ***************************************************************

#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;

/*
 *	Библиотека стандартных шаблонов (STL)
 *
 *	VECTOR (самый популярный контейнер в C++)
 *
 */

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	vector<int> myVector;		// динамический массив
	myVector.reserve(100);		// зарезевировать 100 элементов 
	myVector.push_back(2);		// index 0
	myVector.push_back(44);		// index 1
	myVector.push_back(77);		// index 2
	myVector.push_back(9);		// index 3

	myVector[0] = 1000;
	cout << "Кол-во элементов в векторе: " << myVector.size() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	// cout << myVector[10];	// ERROR !!!
	// cout << myVector.at(10); // ERROR !!!

	try
	{
		cout << myVector.at(10) << endl;
	}
	catch (const std::out_of_range& ex)
	{
		cout << ex.what() << endl << endl;
	}

	myVector.shrink_to_fit();		// использоватаь область памяти только для текущих элементов массива 
	cout << "shrink_to_fit()" << endl;
	cout << "Кол-во элементов в векторе: " << myVector.size() << endl;
	cout << "capacity = " << myVector.capacity() << endl;	// резервирование 


	vector<int> myVector2(20, 55);		// динамический массив 2
	cout << "\nКол-во элементов в векторе-2: " << myVector2.size() << endl;
	for (int i = 0; i < myVector2.size(); i++)
	{
		cout << myVector2[i] << " ";
	}

	cout << "\nmyVector.empty(): " << myVector.empty() << endl;	// myVector.empty() - проверка наличия элементов в векторе 

	myVector.resize(20);	//  изменить размер вектора 
	cout << "\nКол-во элементов в векторе - myVector.resize(20): " << myVector.size() << endl;

	// myVector.insert() // вставка элемента в любое место вектора 
	// myVector.erase()  // стереть выбранный элемент 

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}