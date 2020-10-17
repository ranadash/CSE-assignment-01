#include<stdio.h>
int main()
{
    int i,j,k,arow,acol,brow,bcol,a[100][100],b[100][100],c[100][100],sum=0;

    printf("Enter the no. of rows and columns of matrix 'A': ");
    scanf("%d %d",&arow,&acol);
    printf("Enter the no. of rows and columns of matrix 'B': ");
    scanf("%d %d",&brow,&bcol);

    if(acol!=brow)
    printf("\n Sorry.This multiplication is not possible!\n The no. of columns of matrix 'A' and the no. of rows of matrix 'B' should be same.");

    else{
        printf("Enter matrix 'A': \n");
        for(i=0; i<arow; i++){
           for(j=0; j<acol; j++){
              scanf("%d",&a[i][j]);
                }
            printf("\n");
           }

        printf("Enter matrix 'B': \n");
        for(i=0; i<brow; i++){
           for(j=0; j<bcol; j++){
              scanf("%d",&b[i][j]);
             }
            printf("\n");
           }

        printf("The result of multiplication (A*B) is: \n");
        for(i=0; i<arow; i++){
           for(j=0; j<bcol; j++){
              for(k=0; k<acol; k++){

                  sum=sum+a[i][k]*b[k][j];
                 }
              c[i][j]=sum;
              printf("%d ",c[i][j]);
              sum=0;
             }
            printf("\n");
          }
    }
return 0;
}
