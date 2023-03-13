#include <iostream>
#include <cmath>
using namespace std;

bool armstrongCheck(int num) {
	bool res = false;

	int temp = num, toplam = 0;
	while (temp != 0) {
		toplam += pow((temp % 10), 3);
		temp = temp - (temp % 10);
		temp /= 10;
	}

	if (toplam == num) res = true;
	return res;

}

int main(){
	int num;
	cout << "Enter the number: ";
	cin >> num;

	if (armstrongCheck(num) == true) cout << "It's an armstrong number." << endl;
	else cout << "It's not an arsmtrong number." << endl;
}
