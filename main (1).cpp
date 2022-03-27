#include "matrix.h"

using namespace std;

/* Чтобы получить вектор, создать объект класса Matrix с одним измерением = 1 */

int main()
{
	try
	{
		Matrix p(2, 2, 1);
		Matrix z(2, 2, 1);
		Matrix y = Adamar(p,z);
		ofstream file_out("check.txt", ios_base::out);
		file_out << y;
		cout << y << endl;
		file_out.close();

	}
	catch (const SizeError& Err) 
	{
		cout << Err.size_err << endl;
	}

	catch (...)
	{
		cout << "Unknown error emerged" << endl;
	}
	return 0;
}