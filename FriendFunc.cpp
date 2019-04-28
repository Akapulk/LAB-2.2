#include <iostream>
#include "Dimensions.h"

using namespace std;

/*далее идут операторы сравнения
все операторы возвращают true или false и основаны на сравнении базовых типов (int)
Так как здесь все перегрузки как дружественные функции, значит здесь необходимо передать сначала объект слева от знака сравнения, 
а потом объект справа. Объект типа this отсутствует.

ОПЕРАТОР != основан на том, что он является противополжностью оператора ==
ОПЕРАТОР < основан на том, что он является противополжностью оператора >=
ОПЕРАТОР > основан на том, что он является противополжностью оператора <=
Это значит, что можно просто произвести отрицание для !=, <, > операторов ==, >=, <= соответственно
*/


/*ОПЕРАТОР != основан на том, что он является противополжностью оператора ==*/
//сравнение типа (ob1 != ob2)
const bool operator!=(const Dimensions & ob1, const Dimensions & ob2)
{
	//если ob1 равен ob2, то == вернет true, а для != это false
	return !(ob1 == ob2);
}

//сравнение типа (ob1 != value)
const bool operator!=(const Dimensions & ob1, const int value)
{
	//если ob1 равен value, то == вернет true, а для != это false
	return !(ob1 == value);
}

//сравнение типа (value != ob1)
const bool operator!=(const int value, const Dimensions & ob1)
{
	//если value равен ob1, то == вернет true, а для != это false
	return !(value == ob1);
}

//сравнение типа (ob1 == ob2)
const bool operator==(const Dimensions & ob1, const Dimensions & ob2)
{
	//если значения равны, то возвращаем true иначе false
	if (ob1.height * ob1.width * ob1.depth == ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (value == ob1)
const bool operator==(const int value, const Dimensions & ob1)
{
	//если значения равны, то возвращаем true иначе false
	if (value == ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}

//сравнение типа (value > ob2)
const bool operator>(const int value, const Dimensions & ob2)
{
	//если value меньше или равен ob2, то <= вернет true, а для > это false
	return !(value <= ob2);
}

//сравнение типа (value >= ob2)
const bool operator>=(const int value, const Dimensions & ob2)
{
	//если value больше или равен объему ob2, то возвращаем true, иначе false
	if (value >= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//сравнение типа (value < ob1)
const bool operator<(const int value, const Dimensions & ob1)
{
	//если value (объект слева от знака) больше или равен ob1, то >= вернет true, а для > это false
	return !(value >= ob1);
}

//сравнение типа (value <= ob1)
const bool operator<=(const int value, const Dimensions & ob1)
{
	//если value меньше или равен объему ob1, то возвращаем true, иначе false
	if (value <= ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}
