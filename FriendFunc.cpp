#include <iostream>
#include "Dimensions.h"

using namespace std;

/*����� ���� ��������� ���������
��� ��������� ���������� true ��� false � �������� �� ��������� ������� ����� (int)
��� ��� ����� ��� ���������� ��� ������������� �������, ������ ����� ���������� �������� ������� ������ ����� �� ����� ���������, 
� ����� ������ ������. ������ ���� this �����������.

�������� != ������� �� ���, ��� �� �������� ����������������� ��������� ==
�������� < ������� �� ���, ��� �� �������� ����������������� ��������� >=
�������� > ������� �� ���, ��� �� �������� ����������������� ��������� <=
��� ������, ��� ����� ������ ���������� ��������� ��� !=, <, > ���������� ==, >=, <= ��������������
*/


/*�������� != ������� �� ���, ��� �� �������� ����������������� ��������� ==*/
//��������� ���� (ob1 != ob2)
const bool operator!=(const Dimensions & ob1, const Dimensions & ob2)
{
	//���� ob1 ����� ob2, �� == ������ true, � ��� != ��� false
	return !(ob1 == ob2);
}

//��������� ���� (ob1 != value)
const bool operator!=(const Dimensions & ob1, const int value)
{
	//���� ob1 ����� value, �� == ������ true, � ��� != ��� false
	return !(ob1 == value);
}

//��������� ���� (value != ob1)
const bool operator!=(const int value, const Dimensions & ob1)
{
	//���� value ����� ob1, �� == ������ true, � ��� != ��� false
	return !(value == ob1);
}

//��������� ���� (ob1 == ob2)
const bool operator==(const Dimensions & ob1, const Dimensions & ob2)
{
	//���� �������� �����, �� ���������� true ����� false
	if (ob1.height * ob1.width * ob1.depth == ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//��������� ���� (value == ob1)
const bool operator==(const int value, const Dimensions & ob1)
{
	//���� �������� �����, �� ���������� true ����� false
	if (value == ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}

//��������� ���� (value > ob2)
const bool operator>(const int value, const Dimensions & ob2)
{
	//���� value ������ ��� ����� ob2, �� <= ������ true, � ��� > ��� false
	return !(value <= ob2);
}

//��������� ���� (value >= ob2)
const bool operator>=(const int value, const Dimensions & ob2)
{
	//���� value ������ ��� ����� ������ ob2, �� ���������� true, ����� false
	if (value >= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//��������� ���� (value < ob1)
const bool operator<(const int value, const Dimensions & ob1)
{
	//���� value (������ ����� �� �����) ������ ��� ����� ob1, �� >= ������ true, � ��� > ��� false
	return !(value >= ob1);
}

//��������� ���� (value <= ob1)
const bool operator<=(const int value, const Dimensions & ob1)
{
	//���� value ������ ��� ����� ������ ob1, �� ���������� true, ����� false
	if (value <= ob1.height * ob1.width * ob1.depth)
		return true;
	else
		return false;
}
