#include "matrix.h"

using namespace std;

/* Чтобы получить вектор, создать объект класса Matrix с одним измерением = 1 */

int main()
{
	try
	{
		Matrix l(2, 2, 0);
		Diagonal r(4);

		ofstream file_out("check.txt", ios_base::out);
		file_out << r;
		cout << r << endl;
		file_out.close();

		ifstream file_in("check.txt", ios_base::in);
		file_in >> l;
		file_in.close();
		cout << l << endl;
	}
	catch (const SizeError& Err) 
	{
		cout << Err.size_err << endl;
	}
	catch (const InputError& Err)
	{
		cout << Err.input_err << endl;
	}
	catch (...)
	{
		cout << "Unknown error emerged" << endl;
	}

	return 0;
}