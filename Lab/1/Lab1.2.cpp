#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
int data[1000], num ;
GetSet( data, &num ) ;
return 0 ;
}//end function
void GetSet( int data[1000], int *num ) {
    printf( "Enter rows : " );
    scanf("%d", num);
    for(int i = 0 ; i < *num ; i++){
        scanf("%d", &data[i]) ;
    }//endfor
}//endgetset
    