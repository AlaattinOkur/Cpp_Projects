#include <iostream>
using namespace std;

float combination(int n, int k){
	// This func for calculation C(n,k)
	float topOfDiv = 1;
	for (int index = n; index > 0; index--) topOfDiv *= index;

	float bottomOfDivLeft = 1;
	for (int index = (n - k); index > 0; index--) bottomOfDivLeft *= index;

	float bottomOfDivRight = 1;
	for (int index = k; index > 0; index--) bottomOfDivRight *= index;

	return (topOfDiv/(bottomOfDivLeft*bottomOfDivRight));
}

int main(){
	int N, K;
	cout << "What's n for C(n, k)? ";
	cin >> N;
	cout << "What's k for C(n, k)? ";
	cin >> K;

	cout << "Result: " << combination(N, K) << endl;
}
