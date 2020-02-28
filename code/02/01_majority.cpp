#include <vector>
using namespace std;

// 주어진 배열에서 가장 많이 등장하는 숫자를 반환하기

// N^2
// 주어진 배열 A에서가장 많이 등장하는 숫자를 반환한다.
// 만약 두 가지 이상 있을 경우 아무것이다 반환한다.
int majority1(const vector<int>& A)
{
	int N = A.size();
	int majority = -1, majorityCount = 0;

	for (int i = 0; i < N; i++) {
		int V = A[i], count = 0;
		
		for (int j = 0; j < N; j++) {
			if (A[j] == V) {
				count++;
			}
		}
		if (count > majorityCount) {
			majorityCount = count;
			majority = V;
		}
	}

	return majority;
}

// N^1
// A의 각 원소가 0부터 100 사이의 값일 경우 가장 많이 등장하는 숫자를 반환한다.
int majority2(const vector<int>& A)
{
	int N = A.size();
	vector<int> count(101, 0);

	for (int i = 0; i < N; i++) {
		count[A[i]]++;
	}

	int majority = 0;
	for (int i = 1; i < 101; i++) {
		if (count[i] > count[majority]) {
			majority = i;
		}
	}

	return majority;
}