#include <string>

using namespace std;

class HelperBot
{
private:

public:
	static bool IsNumeric(string);
	static bool IsNumericDouble(string);
	static int ConvertToInt(string);
	static double ConvertToDouble(string);
	static bool TryParse(string, int&);
	static string ToCurrency(double);
	static string PrintArray(int[], int);
};