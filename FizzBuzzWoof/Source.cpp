#include <iostream>
using namespace std;

int main()
{
	for (int num = 1; num <= 50; num++)
	{

		if (num % 3 == 0 && num % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (num % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (num % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else if (num % 7 == 0)
		{
			cout << "Woof" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
}