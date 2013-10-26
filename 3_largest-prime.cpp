/* largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ? */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	long long num = 600851475143;
	long long current;

	current = 2;

	while(num > current)
	{
		if(num % current == 0)
		{
			num = num/current;
			current = 2;
		}
		else
		{
			current++;
		}
	}

	cout << "Largest: " << current << endl;

	return 0;
}