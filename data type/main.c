#include <msp430.h> 


int main(void)
{
	unsigned char z;
	for(z=0; z<=255; z++){
	    P1DIR = z;
	}
	return 0;
}
