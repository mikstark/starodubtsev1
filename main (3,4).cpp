#include "matrix.h"

using namespace std;

/* ����� �������� ������, ������� ������ ������ Matrix � ����� ���������� = 1 */

int main()
{
	try
	{
		Matrix p(2, 2, 1);
		Matrix a = Transpose(p);
		cout << a << endl;

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