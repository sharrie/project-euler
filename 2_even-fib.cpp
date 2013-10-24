/* even fibonacci numbers */
#include <iostream>
#include <cstdlib>

using namespace std;

long fib()
{
	long sum, tmp = 0;
	long a = 0;
	long b = 1;

	while(b < 4000000)
	{
		tmp = a + b;
		a = b;
		b = tmp;

		if(b % 2 == 0)
			sum = sum + b;
	}

	return sum;
}

void print(long sum){
	cout << "Sum: " << sum << endl;
}

int main()
{
	long sum = fib();
	print(sum);
}