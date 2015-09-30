#include <stdio.h>
int main()
{
	printf("master");
	printf("commit1");
	func2();
	func1();
	printf("commit2");
}
