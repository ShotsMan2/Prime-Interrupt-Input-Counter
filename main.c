#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,asal,j;

    i=0;

    for(;;){

        i++;

        printf("%d. sayiyi girin: ",i);
        scanf("%d",&sayi);

        if(sayi<2){
            asal=0;
        }
        else{
            asal=1;

            for(j=2;j<=sayi/2;j++){
                if(sayi%j==0){
                    asal=0;
                    break;
                }
            }
        }
        if(asal==1){
                break;
            }
    }
    printf("%d adet sayi girdiniz.",i);

    return 0;
}
