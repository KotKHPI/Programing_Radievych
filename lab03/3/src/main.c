#include "lib.h"
int main()
{
	float a = 2.2f; // змінная "а"
	float a4, a6, a8, a10; // змінні а^4, a^6, a^8 та a^10
	a4 = a*a;
	a4 = a4*a*a;
	
	a6 = a*a;
	a6 = a6*a*a;
	a6 = a6*a*a;
	
	a8 = a*a*a;
	a8 = a8*a*a*a;
	a8 = a8*a*a;
	
	a10 = a*a*a;
	a10 = a10*a*a;
	a10 = a10*a*a;
	a10 = a10*a*a*a;
		
	return 0;
}
