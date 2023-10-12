#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y, R;
	
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;

	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x < -6 - R)
			y = 0;
		else
			if (-6 - R <= x && x <= -6)
				y = -sqrt(pow(R, 2) - pow(x + 6, 2));
				else if (-6 < x && x <= -R)
					y = -R + (((x + 6) * R) / (-R + 6));
					else if (-R < x && x <= 0)
						y = sqrt(pow(R, 2) - pow(x, 2));
						else if (x > 0 && x <= 3)
							y = R + (-R / 3) * x;
							else
								y = (R / (6) * (x - 3));

		cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(10) << setprecision(3) << y << " |" << endl;
		x += dx;
	}

	cout << "---------------------------" << endl;
	return 0;
}