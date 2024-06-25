#include <stdio.h>
int main ( void )
{
	unsigned int x,y;
	x=0;
	while ( x<=12 ) {
		y=0;
		while ( y<=11 )
		{ 
		if ( x==y )
		printf( " " );
		else 
		printf( "*" );
		
	y++;	
    }
    printf( "\n");
     x++;
}

  system("pause");
}
