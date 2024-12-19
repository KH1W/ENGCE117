#include <stdio.h>
int *GetSet( int data[], int *num ) ;

int main() {
    int data[1000], num ;
    int *result ;
    
    result = GetSet(data, &num ) ;
    printf("\n");
    printf( "Number of elements : %d\n", num);
    for(int j = 0 ; j < num ; j++ ){
        printf("%d ", result[j]);
        
    }//endfor
    printf("\n");
    return 0 ;
}//end function
int *GetSet( int data[1000], int *num){
    printf( "Enter the number of elements : ");
    scanf("%d", num);
    for(int i = 0 ; i < *num ; i++){
        printf( "Enter the elements : ");
        scanf("%d", &data[i]);
    }//endfor
return data ;
}//endgetset
