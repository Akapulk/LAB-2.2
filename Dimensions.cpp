#include <iostream>
#include "Dimensions.h"

using namespace std;

//������ �������, ��� �������� � ������ ����� ���������� ���������
Dimensions::Dimensions(int height, int width, int depth) {
	this->height = height;
	this->depth = depth;
	this->width = width;
}

// �������� �� ������� other (������ �� �������� ��������) ������� � ��������� ������ (������ � ������� ��������/��������� ������)
Dimensions::Dimensions(const Dimensions & other) {
	this->height = other.height;
	this->depth = other.depth;
	this->width = other.width;
}

//������ ����� ��������� �� �����
void Dimensions::show() {
	cout << "������: " << height << endl;
	cout << "������: " << width << endl;
	cout << "�������: " << depth << endl << endl;
}

/*����� ���� ��������� ���������
��� ��������� ���������� true ��� false � �������� �� ��������� ������� ����� (int)
��� ��� ����� ��� ���������� ��� ������ ������, ������ ����� ������������ ������, ������� ����� ����� �� ������ ���������, 
������ ��� ���� ��������� �������� �������� � ������ �� ������������ � ������� ��� this*/

//��������� ���� (ob1 == value)
const bool Dimensions::operator==(const int value)
{
	//���� �������� �����, �� ���������� true ����� false
	if (height * width * depth == value)
		return true;
	else
		return false;
}

//��������� ���� (ob1 > ob2)
const bool Dimensions::operator>(const Dimensions & ob2)
{
	//���� *this (������ ����� �� �����) ������ ��� ����� ob2, �� <= ������ true, � ��� > ��� false
	return !(*this <= ob2);
}

//��������� ���� (ob1 > value)
const bool Dimensions::operator>(const int value)
{
	//���� *this (������ ����� �� �����) ������ ��� ����� value, �� <= ������ true, � ��� > ��� false
	return !(*this <= value);
}

//��������� ���� (ob1 < ob2)
const bool Dimensions::operator<(const Dimensions & ob2)
{
	//���� *this (������ ����� �� �����) ������ ��� ����� ob2, �� >= ������ true, � ��� > ��� false
	return !(*this >= ob2);
}

//��������� ���� (ob1 < value)
const bool Dimensions::operator<(const int value)
{
	//���� *this (������ ����� �� �����) ������ ��� ����� value, �� >= ������ true, � ��� > ��� false
	return !(*this >= value);
}

//��������� ���� (ob1 >= ob2)
const bool Dimensions::operator>=(const Dimensions & ob2)
{
	//���� ����� ob1 ������ ��� ����� ������ ob2, �� ���������� true, ����� false
	if (height * width * depth >= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//��������� ���� (ob1 >= value)
const bool Dimensions::operator>=(const int value)
{
	//���� ����� ob1 ������ ��� ����� value, �� ���������� true, ����� false
	if (height * width * depth >= value)
		return true;
	else
		return false;
}

//��������� ���� (ob1 <= ob2)
const bool Dimensions::operator<=(const Dimensions & ob2)
{
	//���� ����� ob1 ������ ��� ����� ������ ob2, �� ���������� true, ����� false
	if (height * width * depth <= ob2.height * ob2.width * ob2.depth)
		return true;
	else
		return false;
}

//��������� ���� (ob1 <= value)
const bool Dimensions::operator<=(const int value)
{
	//���� ����� ob1 ������ ��� ����� value, �� ���������� true, ����� false
	if (height * width * depth <= value)
		return true;
	else
		return false;
}