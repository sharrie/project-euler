/* multiples of 3 and 5 */
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int getSumOfMultiples(int key)
{
	int total = 0;

	for (int i = 0; i < key ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			total = total + i;
	}
	return total;
}

void print(int sum)
{
	cout << "Sum: " << sum << endl;
}

int main(int argc, char* argv[]){

	int key, sum; 
	key = atoi(argv[1]);

	sum = getSumOfMultiples(key);
	print(sum);

	return 0;
}