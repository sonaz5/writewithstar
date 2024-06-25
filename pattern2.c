#include <stdio.h>
int main( void )
{
	unsigned int x,y;
	x=0;
	while ( x<=10 ) {
		y=0;
		while ( y<=10 )
		{
			if ( x+y==10 )
			printf( " " );
		     else if ( x<y )
			printf( " " );
			else
			printf( "*" );
			
	  y++;
		}
		printf( "\n" );
		x++;
	}
	
	system(" pause" );
	
	
}
