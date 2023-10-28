#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>

	using namespace std;

	int main()
	{
		float a = 1112212.212121;
		float b = 1112212.212122;
		float c;


				for( int i = 0; i < 1000000; i ++ )
				{
					c = ( a + b ) / b;
					a = a + 1;
					b = b + 1;
					c = ( c + 1 ) / i;
						
						cout << "\tUnsigned:::***::: \t" << setprecision(20)  << hexfloat <<  c << "\ta::" << a << "\tb::" << b << "\tc::" << c << endl;

				}


	}
