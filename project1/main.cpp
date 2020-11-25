#include <iostream>

using namespace std;

int main()
{
	double a, b, c, d, n, x, y, z, res;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> n;
	cin >> x;
	cin >> y;
	cin >> z;
	double tmp; //temporary
	//formula #8
	//tmp = abs(b) / (pow(10, n + 3) + log10(b) / (c - d));
	//res = 0.25 * (a - b) / (1.0 / 8.0 - tmp);

	res = (3 + pow(2.78, y - 1)) / (abs(y - tan(z)) * x * 2 + 1);

	cout << "Result =" << res << endl;

	system("pause");
	return 0;
}