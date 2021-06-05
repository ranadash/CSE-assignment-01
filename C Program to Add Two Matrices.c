#include<stdio.h>
int main()
    {

    int i,j,arow,acol,brow,bcol,a[100][100],b[100][100],c[100][100];

    printf("Enter the no. of rows and columns of matrix 'A': ");
    scanf("%d%d",&arow,&acol);
    printf("Enter the no. of rows and columns of matrix 'B': ");
    scanf("%d %d",&brow,&bcol);

    if(arow!=brow,acol!=bcol)
      printf("\n Sorry.This addition is not possible!\n The no. of rows and columns of both matrices should be same.");


    else{

    printf("Enter Matrix 'A': \n");
    for(i=0; i<arow; i++){

       for(j=0; j<acol; j++){
           scanf("%d",&a[i][j]);
          }
        printf("\n");
        }

    printf("Enter Matrix 'B': \n");
    for(i=0; i<brow; i++){

       for(j=0; j<bcol; j++){
          scanf("%d",&b[i][j]);

           }
        printf("\n");
        }

     printf("The result A+B is: \n");
     for(i=0; i<arow; i++){

        for(j=0; j<bcol; j++){

           c[i][j]=a[i][j]+b[i][j];
           printf("%d ",c[i][j]);
          }
        printf("\n");
       }

    }
 return 0;
}

