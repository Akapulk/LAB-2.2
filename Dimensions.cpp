#include <iostream>
#include "Dimensions.h"

using namespace std;

//просто говорим, что значения в классе равны переданным значениям
Dimensions::Dimensions(int height, int width, int depth) {
	this->height = height;
	this->depth = depth;
	this->width = width;
}

// значения из объекта other (объект из которого копируем) заносим в созданный объект (объект в который копируем/созданный объект)
Dimensions::Dimensions(const Dimensions & other) {
	this->height = other.height;
	this->depth = other.depth;
	this->width = other.width;
}

//просто вывод габаритов на экран
void Dimensions::show() {
	cout << "Высота: " << height << endl;
	cout << "Ширина: " << width << endl;
	cout << "Глубина: " << depth << endl << endl;
}

/*далее идут операторы сравнения
все операторы возвращают true или false и основаны на сравнении базовых типов (int)
Так как здесь все перегрузки как методы класса, значит здесь присутствует объект, который стоит слева от знакак сравнения, 
именно для него вызовится оператор сравнеия и значит он присутствует в методах как this*/

//сравнение типа (ob1 == value)
const bool Dimensions::operator==(const int value)
{
	//если значения равны, то возвращаем true иначе false
	if (height * width * depth == value)
		return true;
	else
		return false;
}

//сравнение типа (ob1 > ob2)
const bool Dimensions::operator>(const Dimensions & ob2)
{
	//если *this (объект слева от знака) меньше или равен ob2, то <= вернет true, а для > это false
	return !(*this <= ob2);
}

//сравнение типа (ob1 > value)
const bool Dimensions::operator>(const int value)
{
	//если *this (объект слева от знака) меньше или равен value, то <= вернет true, а для > это false
	return !(*this <= value);
}

//сравнение типа (ob1 < ob2)
const bool Dimensions::operator<(const Dimensions & ob2)
{
	//если *this (объект слева от знака) больше или равен ob2, то >= вернет true, а для > это false
	return !(*this >= ob2);
}

//сравнение типа (ob1 < value)
const bool Dimensions::operator<(const int value)
{
	//если *this (объект слева от знака) больше или равен value, то >= вернет true, а для > это false
	return !(*this >= value);
}

//сравнение типа (ob1 >= ob2)
const bool Dimensions::operator>=(const Dimensions & ob2)
{
	//если объем ob1 больше или равен объему ob2, то возвращаем true, иначе false
	if (height * width * depth >= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (ob1 >= value)
const bool Dimensions::operator>=(const int value)
{
	//если объем ob1 больше или равен value, то возвращаем true, иначе false
	if (height * width * depth >= value)
		return true;
	else
		return false;
}

//сравнение типа (ob1 <= ob2)
const bool Dimensions::operator<=(const Dimensions & ob2)
{
	//если объем ob1 меньше или равен объему ob2, то возвращаем true, иначе false
	if (height * width * depth <= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (ob1 <= value)
const bool Dimensions::operator<=(const int value)
{
	//если объем ob1 меньше или равен value, то возвращаем true, иначе false
	if (height * width * depth <= value)
		return true;
	else
		return false;
}