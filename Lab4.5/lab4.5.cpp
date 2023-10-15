#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;

		if ((y * y <= pow(R, 2) - pow(x, 2) && y >= pow(x - 1, 2)
			&& x >= 0)
			|| (y <= 0 && x <= 0 && R * R >= pow(x, 2) + pow(y, 3)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = ((2.0 * R * rand()) / RAND_MAX) - R;
			y = ((2.0 * R * rand()) / RAND_MAX) - R;
			if ((y * y <= pow(R, 2) - pow(x, 2) && y >= pow(x - 1, 2)
				&& x >= 0)
				|| (y <= 0 && x <= 0 && R * R >= pow(x, 2) + pow(y, 3)))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}