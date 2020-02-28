#include<math.h>

bool absoluteEqual(double a, double b)
{
	return fabs(a - b) < 1e-10;
}