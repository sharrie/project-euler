/* Largest Palindrome Product - Problem 4
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers. */

#include <iostream>

using namespace std;

bool checkPalindrome(int value)
{
	int num = value;
	int reverse = 0;
	int digit;

	while (value > 0)
	{
	     digit = value % 10;
	     reverse = reverse * 10 + digit;
	     value = value / 10;
	}

	if(num == reverse)
		return true;
	return false;
}

int main()
{
	
	int product, maxProduct = 0;

	// first 3 digit number
	for(int x = 999; x > 99; x--)
	{
		// second 3 digit number
		for(int y = 999; y > 99; y--)
		{
			// find product
			product = x * y;

			// check if palindrome
			if(checkPalindrome(product))
			{				
				// check if largest palindrome
				if(product > maxProduct)
				{
					maxProduct = product;
				}	
			}
		}
	}
	
	cout << maxProduct << endl;
	return 0;
}