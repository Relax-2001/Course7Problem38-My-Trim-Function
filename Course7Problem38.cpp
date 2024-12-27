#include <iostream>
#include <string>

using namespace std;


string TrimLeft(string UserString)
{

	for (short i = 0 ; i < UserString.length() ; i++)
	{

		if (UserString[i] != ' ')
		{
			return UserString.substr(i, UserString.length() - i);
		}

	}
	return "";
}

string TrimRight(string UserString)
{
	
	for (short i = UserString.length() ; i > 0 ; i--)
	{
		if (UserString[i] != ' ')
		{
			return UserString.substr(0 , i);
		}
	}

	return "";
}

string Trim(string UserString)
{
	return TrimLeft(TrimRight(UserString));
}

int main()
{
	string UserString = "    Mahmoud Wahbe     ";

	cout << "Trim left = " << TrimLeft(UserString) << "\n";
	cout << "Trim right = " << TrimRight(UserString) << "\n";
	cout << "Trim = " << Trim(UserString);

	return 0;
}
