#include <iostream> 
using namespace std; 

int main() 
{ 
	int x = 0; 
	for (int i = 0; i < 10; i++) 
	{ 
      	// int temp1 = x++;
      	// int temp2 = ++x;
        x = x++ + ++x;
	// 	x = temp1 + temp2 ; 
		if (x > 100) 
			break; 
	} 

	cout << x; 
	return 1; 
} 
