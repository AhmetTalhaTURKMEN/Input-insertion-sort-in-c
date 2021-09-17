#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sirasiz[10][51];
    char sirali[10][51];

    printf("Please enter the input to be sorted\n");
    for(int i=0;i<10;i++){
      printf("%d.input:",i+1);
        gets(sirasiz[i]);
      
    }

    printf("\nSorted inputs:\n");

    int enkucukindis;
    char enkucukkelime[51];
    enkucukkelime[50]='\0';

    for(int i=0;i<10;i++){ 
        enkucukindis==-1;

        for(int k=0;k<50;k++)
            enkucukkelime[k]='{';

        for(int j=0;j<10;j++){  
            if(strcmp(sirasiz[j],enkucukkelime)<0){
                strcpy(enkucukkelime,sirasiz[j]);
                enkucukindis=j;
            }
        }
        for(int k=0;k<50;k++)
            sirasiz[enkucukindis][k]='{';

        strcpy(sirali[i],enkucukkelime);

    }



    for(int i=0;i<10;i++)
        puts(sirali[i]);

    sleep(2);
    return 0;
}
