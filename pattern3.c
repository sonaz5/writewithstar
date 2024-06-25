#include <stdio.h>
int main ( void )
{
	unsigned int x,y;
	x=0;
	while ( x<10 ) {
		y=0;
		while ( y<10 )
		{
			if ( y%2==0 && x%2==0 )
			printf( " " );
			else if	( y%2!=0 && x%2!=0)
			printf( " " );
			else
			printf( "*" );
			
		y++;
		
	}
	printf( "\n" );
	x++;
	}
	
	system("pause");
	
	
	
}
