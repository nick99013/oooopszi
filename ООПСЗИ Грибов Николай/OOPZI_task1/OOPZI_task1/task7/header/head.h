#pragma once

//������ ��������������� ���������� ��� ���������� �������
#include <stdio.h>
#include <math.h>

//������ ���������� ���������
#include <string.h>
double x, y, result;

void f(void)
{
	result = (sqrt(x) - sqrt(y)) / x;
}