#include <stdio.h>
int main(){
 for(int i = 4 ; i>=1 ; i--){
    for(int j=1 ; j<=i ; j++){
        printf(" ");
    }
    for(int m = 4 ; m>=i ; m--){
        printf("*");
    }
    printf("\n");
}  
return 0;
    
}