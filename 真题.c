#include <stdio.h>
	void main()
	{
		int i;
		for(i=1;i<6;i++)
		{
			if(i%2) printf("*");
			else continue;
			printf("#");
		}
	}
