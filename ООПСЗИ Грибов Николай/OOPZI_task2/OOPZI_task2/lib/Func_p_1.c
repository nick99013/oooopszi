#include <math.h>
//������� 21. ������� 6.
_Bool isInArea(double x, double y)
{
	//�������� �� ���������� ����� � 3 �������������
	if (!((x>0) & (y< 0)))
	{
		if (fabs(x) <= 1 & fabs(y) <= 1)
		{
			//����� �������� � �������
			return 1;
		}

	}
	return 0;
}