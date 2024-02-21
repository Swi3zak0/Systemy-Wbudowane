#include <stdio.h>
#include <stdlib.h>


#define BIT_VALUE(val,no_bit) (val >> no_bit) & 1
int main(){
    int IntToGray(unsigned char input){
        return (input >> 1) ^ input;
    }

    for(int i=0;i<10000;i++){
        for(int x=0;x<=1000000000;x++){} // delay
            for(int j=7;j>=0;j--){
                printf("%d", BIT_VALUE(i,j)); // wypisywanie binarne
            }
            printf("                   ");
            for(int j=7;j>=0;j--){
                printf("%d", BIT_VALUE(IntToGray(i),j)); // wypisywanie graya
            }
        printf("\r");
    }
}
