#include "Conversion.h"

int main()
{
	double speed = 0, result = 0;
	string sUnit = "", nUnit = "";

	cout << "Conversion App\n\n";
	cout << "Units Used: ms | kmph | mph | kn | ft |\nFormat: Speed StartUnit NewUnit || Example: 100 mph kmph\n\n";

	while (true)
	{
		cout << "Enter Conversion: ";
		cin >> speed >> sUnit >> nUnit;

		if (speed <= 0)
		{
			cout << "ERROR: Speed needs to be above 0.";
			continue;
		}
		else
		{
			Conversion conv;
			result = conv.ConvertSpeed(speed, sUnit, nUnit);
			cout << "Result: " << result << nUnit << "\n\n";
		}
	}
	return 0;
}