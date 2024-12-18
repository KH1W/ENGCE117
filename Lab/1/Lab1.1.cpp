#include <stdio.h>
int main() {
    int n ;
    printf( "Enter N : " ) ;
    scanf( "%d", &n ) ;
	for( int i = 0 ; i < n ; i++ ){
	    printf( "[%d] Hello world\n", i + 1 ) ;
	}//endfor
    
    return 0;  

}//endfunction
