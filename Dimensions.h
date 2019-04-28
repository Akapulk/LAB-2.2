#pragma once

/*Ѕудет присутствовать очень много перегрузок, но сами по себе они короткие

–аспределины они на методы класса и на дружественные функции 50 на 50 в соответствии с заданием

const говорит нам о том, что значение или объект в ходе выполнени€ функции мен€тс€ не будет

¬ конструкторе по умолчанию продемонстрирована работа параметров по умолчанию, то есть мы можем передать 1, или 2, или 3 параметра, 
главное, чтобы параметры по умолчанию шли последними (запрещена запись! Dimensions(int height, int width = 5, int depth);). 
¬ main при создании объекта ob2 передан только один параметр, а значит дл€ оставшихс€ переменных будут использованы значени€ 5 и 10
соответствено. ¬ объект ob1 мы передали все значени€, а значит значени€ параметров будут перезаписаны при вызове конструктора*/

//класс √абариты
class Dimensions {
	int height; //высота
	int width; //ширина
	int depth; //глубина
public:
	Dimensions() {}; //конструктор по умолчанию (здесь он пустой)
	Dimensions(int height, int width = 5, int depth = 10); //конструктор с параметрами
	Dimensions(const Dimensions& other); //конструктор копировани€
	void show();

	//ћетоды класса
	const bool operator == (const int value);
	const bool operator > (const Dimensions& ob2);
	const bool operator > (const int value);

	const bool operator < (const Dimensions& ob2);
	const bool operator < (const int value);

	const bool operator >= (const Dimensions& ob2);
	const bool operator >= (const int value);

	const bool operator <= (const Dimensions& ob2);
	const bool operator <= (const int value);

	//ƒружественные функции	
	friend const bool operator != (const Dimensions& ob1, const Dimensions& ob2);
	friend const bool operator != (const Dimensions& ob1, const int value);
	friend const bool operator != (const int value, const Dimensions& ob1);

	friend const bool operator == (const Dimensions& ob1, const Dimensions& ob2);
	friend const bool operator == (const int value, const Dimensions& ob1);

	friend const bool operator > (const int value, const Dimensions& ob2);
	friend const bool operator >= (const int value, const Dimensions& ob2);

	friend const bool operator < (const int value, const Dimensions& ob1);
	friend const bool operator <= (const int value, const Dimensions& ob1);
};