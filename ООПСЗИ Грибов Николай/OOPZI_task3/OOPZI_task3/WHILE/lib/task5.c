#include <math.h>
//int findFirstNegativeElement(double eps)
//{
//	double end = 0;
//	int u = 0;
//	for(;;)
//	{
//		end -= u;
//		++u;
//		if (fabs(end) <= eps)
//		{
//			break;
//		}
//	}
//	return end;
//}
int findFirstNegativeElement(double eps)
{
	double end = 0;
	int u = 0;
	while (1)
	{
		end += pow(-1, u) / ((u + 1)*(u + 2)*(u + 3));
		++u;
		if (fabs(end) <= eps
			& end < 0)
		{
			break;
		}
	}
	return u;
}
//int findFirstNegativeElement(double eps)
//{
//	double end = 0;
//	int u = 0;
//	do
//	{
//		end -= u;
//		++u;
//		if (fabs(end) <= eps)
//		{
//			break;
//		}
//	} while (1);
//	return end;
//}