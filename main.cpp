#include <iostream>
#include <cmath>

using namespace std;

int main() {

	float x, y;

	wcout << "Proszę podać wartość x: ";
	cin >> x;

	if (x > 0)
	{
		y = 2 * sin(x);
	}
	else
	{
		y = 6 - x;
	}

	cout << "f(x) = " << y;

	return 0;
}
