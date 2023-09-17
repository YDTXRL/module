#include <REGX52.H>
#include <INTRINS.H>




void Delay(unsigned char xms)	//@11.0592MHz
{
	unsigned char data i, j;

	while(xms)
	{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	
		xms--;
	
	
	}
	
}