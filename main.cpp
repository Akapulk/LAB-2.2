/*В начале будет необходимо вести три габарита и значение для сравнения. Само сравнение реализовано так:
мы будем сравнивать объемы объектов или объем объекта и значения, объем - перемножение всех трех габаритов

В меню 8 пунктов: 6 операторов сравнения, 1 - изменение значения для сравнения, 1 - выход из программы

При выборе пунктов 1-6 будут выведены все данные: габариты 2 объектов и введенное значение. После будет предложено 3 
варианта значения (* - 1 из 6 операторов сравнения): 
					value * ob1
					ob1 * value
					ob1 * ob2
	первые два пункта сравнивают объект с веденным int значением, разбирается два варианта: число слева и справа
	последний сравниваем два объекта
При выборе одного из трех пунктов будет выведа надпись True или False в зависимости правильности неравенства
Например, если value = 10, а объем ob1 = 15, то при value > ob1 будет выведено False, так как 10 не больше 15.
Но при value < ob1 будет выведено True, так как 10 меньше 15*/



#include <locale>
#include <iostream>
#include "Dimensions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); //локализация

	int height; //высота
	int width; //ширина
	int depth; //глубина

	//вводим начальные габариты
	cout << "Введите высоту: ";
	cin >> height;
	cout << "Введите ширину: ";
	cin >> width;
	cout << "Введите глубину: ";
	cin >> depth;

	//создаем объект и передаем ему введенные значения
	Dimensions ob1(height, width, depth);

	//создаем объект и передаем ему только одно значение, для отсальных значений будут использованы параметры по умолчанию
	Dimensions ob2(height);

	int value; //значение для сравнение
	cout << "Введите число для сравнения: ";
	cin >> value;

	int menu; //переменная для switch
	bool flag = true; //bool переменная для цикла while

	//цикл работает пока значение в while true
	while (flag)
	{
		//вывод меню
		system("cls");
		cout << "1) ==" << endl;
		cout << "2) !=" << endl;
		cout << "3) >" << endl;
		cout << "4) >=" << endl;
		cout << "5) <" << endl;
		cout << "6) <=" << endl;
		cout << "7) Поменять число для сравнения" << endl;
		cout << "0) Выход" << endl;
		cout << "Выберите команду: ";
		cin >> menu;
		if (cin.fail()) { //проверка на некорректный ввод
			menu = -1; //устанавливаем значение figure равным -1
			cin.clear(); //очищает флаг ошибки cin (так что будущие операции ввода-вывода будут работать правильно)

			/*КОД НИЖЕ: переходит к следующей новой строке(чтобы игнорировать что - либо еще в той же строке,
			чтобы оно не вызывало другого сбоя анализа). Он будет пропускать только до 10000 символов,
			поэтому код предполагает, что пользователь не будет вводить очень длинную недопустимую строку. */
			cin.ignore(10000, '\n');
		}
		if (menu > 0 && menu < 7) //выводим данные только тогда, когда выбраны пункты 1-6
		{
			//после выбора пункта очищаем консоль и выводим всю информацию об объектах и введенному значению
			system("cls");
			cout << "Объект ob1: " << endl;
			ob1.show();
			cout << "Объект ob2: " << endl;
			ob2.show();
			cout << "Числовое значение: " << value << endl << endl;
		}

		//ниже приведены все примеры использования перегурженных операторов сравнения
		switch (menu)
		{
		//1-6 case отличаются лишь знаком сравнения

		//ОПЕРАТОР ==
		case 1:	
			cout << "1) value == ob1" << endl; //пользовательское значение слева, объект справа
			cout << "2) ob1 == value" << endl; //объект справа, пользовательское значение
			cout << "3) ob1 == ob2" << endl; //сравниваются два объекта
			cin >> menu; //выбираем пункт
			switch (menu)
			{
			/*ниже тернарные операторы и демонстрация работы перегруженных операторов
			(условное выражение) ? (ветка "да") : (ветка "нет"); */
			case 1: (value == ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 == value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 == ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//ОПЕРАТОР !=
		case 2:
			cout << "1) value != ob1" << endl; 
			cout << "2) ob1 != value" << endl; 
			cout << "3) ob1 != ob2" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: (value != ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 != value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 != ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//ОПЕРАТОР >
		case 3: 
			cout << "1) value > ob1" << endl; 
			cout << "2) ob1 > value" << endl; 
			cout << "3) ob1 > ob2" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: (value > ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 > value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 > ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//ОПЕРАТОР >=
		case 4:
			cout << "1) value >= ob1" << endl;
			cout << "2) ob1 >= value" << endl; 
			cout << "3) ob1 >= ob2" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: (value >= ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 >= value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 >= ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//ОПЕРАТОР <
		case 5:
			cout << "1) value < ob1" << endl;
			cout << "2) ob1 < value" << endl;
			cout << "3) ob1 < ob2" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: (value < ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 < value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 < ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;

		//ОПЕРАТОР <=
		case 6:
			cout << "1) value <= ob1" << endl; 
			cout << "2) ob1 <= value" << endl; 
			cout << "3) ob1 <= ob2" << endl;
			cin >> menu; 
			switch (menu)
			{
			case 1: (value <= ob1) ? cout << "True" : cout << "False"; break;
			case 2: (ob1 <= value) ? cout << "True" : cout << "False"; break;
			case 3: (ob1 <= ob2) ? cout << "True" : cout << "False"; break;
			}
			cout << endl;
			system("pause");
			break;
		
		//изменение пользовательского значения
		case 7:
			cout << "Введите новое значение value: ";
			cin >> value; //перезаписываем пользовательское значение
			system("pause");
			break;
		case 0: flag = false; break; //для прекращения работы цикла while меняем флаг на false
		default: cout << "Некорректный ввод" << endl; system("pause");
		}
		
	}
	return 0;
}