
#include <iostream>
#include <cstdio> // Library required to use printf

using namespace std;

int main()
{
	int Page = 1, TotalPages = 100;

	// -------------------------------------------------------------
	// 1. Basic Variable Printing (%d)
	// %d is a format specifier used to insert signed integer values into the string.
	// -------------------------------------------------------------

	// Replaces %d with the value of 'Page' (1)
	printf("The Page Number : %d \n", Page);

	// Replaces the first %d with 'Page' (1) and the second %d with 'TotalPages' (100)
	printf("You Are In Page %d of %d \n", Page, TotalPages);


	// -------------------------------------------------------------
	// 2. Dynamic Width Specification (%0*d)
	// The '*' acts as a placeholder for the width, which is passed 
	// as an extra argument before the actual variable.
	// -------------------------------------------------------------

	// Sets total width to 2, pads missing spaces with leading zeros -> Output: 01
	printf("The Page Number = %0*d \n", 2, Page);

	// Sets total width to 5, pads missing spaces with leading zeros -> Output: 00001
	printf("The Page Number = %0*d \n", 5, Page);


	// -------------------------------------------------------------
	// 3. Static Zero-Padding (%02d, %05d)
	// The number after '0' hardcodes the minimum field width.
	// -------------------------------------------------------------

	// Fixed width of 2 digits with zero padding -> Output: 01
	printf("The Page Number = %02d \n", Page);

	// Fixed width of 5 digits with zero padding -> Output: 00001
	printf("The Page Number = %05d \n", Page);


	// -------------------------------------------------------------
	// 4. Width Specification with Spaces (%5d)
	// -------------------------------------------------------------

	// Fixed width of 5 characters, right-aligned, padded with empty spaces (no '0') -> Output: '    1'
	printf("The Page Number : %5d \n", Page);


	// -------------------------------------------------------------
	// 5. Printing Expressions Directly
	// printf can evaluate math expressions inside arguments.
	// -------------------------------------------------------------
	int number1 = 100, number2 = 50;

	// Evaluates (number1 + number2) and replaces the 3rd %d with the result (150)
	printf("The Result Of %d + %d = %d \n", number1, number2, number1 + number2);

	int day = 8, month = 9, year = 2026;
	printf("Todat Is %02d / %02d / %d \n", day, month, year);
	
}






