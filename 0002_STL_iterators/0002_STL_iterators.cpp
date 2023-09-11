// ***********************************************************************
// Итераторы STL. Библиотека стандартных шаблонов (stl) | Уроки C++. #2
// -----------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -----------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2022-2023 @ sgiman
// ***********************************************************************

#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;

/*
 *  Библиотека стандартных шаблонов (STL)
 *  итераторы
 */

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	vector<int> myVector = { 1, 9, 44, 422, 676, 78 };

	// Цикл с вектором 

	cout << "\n=== Цикл с вектором === \n";
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << " ";
	}
	cout << "\n========================\n";

	/*
	int arr[] = { 2, 6, 9 };
	cout << arr[1] << endl;			// доступ к элементу 1 (стандарт)
	cout << *(arr + 1) << endl;		// доступ к элементу 1 (итератор): arr - адрес массива, *(arr + 1) - данные ("разименование")
	cout << myVector[1] << endl;
	*/

	// Итераторы
	vector<int>::iterator it;		// итератор вектора
	it = myVector.begin();			// установить итератор в начало вектора 
	cout << *it << endl;
	*it = 1000;
	cout << *it << endl;
	it++;
	cout << *it << endl;
	it += 2;
	cout << *it << endl;
	it--;
	cout << *it << endl;
	it -= 2;
	cout << *it << endl;

	// Цикл с обычным интаратором 
	cout << "\n===== Заполнить ======\n";
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		*i = 5;
		cout << *i << " ";
	}
	cout << "\n======================\n";

	myVector = { 1, 9, 44, 422, 676, 78 };

	// Цикл с интаратором (const)
	for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++)
	{
		// *i = 5;	// ERROR!!!
		cout << *i << " ";
	}

	// Цикл с обычным интаратором (c конца) -  вывод вектора в обратном порядке 
	cout << "\n\n====== Reverse =======\n";
	for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
		cout << *i << " ";
	cout << "\n======================\n";

	// --- advance - сдвиг ---
	myVector = { 1, 9, 44, 422, 676, 78 };
	vector<int>::iterator i = myVector.begin();
	cout << *(i + 3) << endl;							// обычное смещение на 3 поизиции
	advance(i, 3);										// сдвиг итератора на 3 позиции
	cout << *i << endl;

	// --- insert (вставить) ---
	myVector = { 1, 9, 44, 422, 676, 78 };				// заполнить вектор 
	vector<int>::iterator itr = myVector.begin();		// итератор - в начало 

	//myVector.insert(itr, 999);						// вставить начало

	//itr++;
	//myVector.insert(itr, 999);						// вставить со двигом на 1

	advance(itr, 5);
	myVector.insert(itr, 999);							// вcтавить 5-м элементом 
	cout << "\n======= Insert =======\n";
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
		cout << *i << " ";
	cout << "\n======================\n";

	// --- erase (удалить) ---
	myVector = { 1, 9, 44, 422, 676, 78 };
	vector<int>::iterator itErase = myVector.begin();	// новый итератор
	itErase++;											// cдвинуть
	myVector.erase(itErase, itErase + 3);					// удалить элементы из области 0...3

	cout << "\n======== Erase =======\n";
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
		cout << *i << " ";
	cout << "\n======================\n";


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}