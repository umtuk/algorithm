#include<math.h>
#include<algorithm>
using namespace std;

bool relativeEqual(double a, double b)
{
	return fabs(a - b) <= 1e-8 * max(fabs(a), fabs(b));
}