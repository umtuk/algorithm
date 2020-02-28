#include<math.h>
#include<algorithm>
using namespace std;

bool doubleEqual(double a, double b)
{
	double diff = fabs(a - b);
	if (diff < 1e-10) return true;
	return diff <= 1e-8 * max(fabs(a), fabs(b));
}