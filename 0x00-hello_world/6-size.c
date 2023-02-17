#include <stdio.h>

/**
 * main - main function
 *
 * Return:0 on successful
 */

int main(void)
{
	prinf("Size of a char: %lu byte(s)", sizeof(char));
	prinf("Size of a int: %lu byte(s)", sizeof(int));
	prinf("Size of a long int: %lu byte(s)", sizeof(long int));
	prinf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	prinf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
