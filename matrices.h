#include <stdio.h>

void matrix_sum(){

int i,j,n1,m1,n2,m2;

printf("Enter the number of rows of matrix 1:");
scanf("%d",&n1);
printf("Enter the number of columns of matrix :");
scanf("%d",&m1);
printf("Enter the number of rows of matrix 2:");
scanf("%d",&n2);
printf("Enter the number of columns of matrix 2:");
scanf("%d",&m2);
if(n1==n2&&m1==m2){

float a[n1][m1];
float b[n2][m2];
float c[n1][m1];


for(i=0;i<n1;i++){
        printf("Enter the members of matrix 1 row %d :",i+1);
    for(j=0;j<m1;j++){
        scanf("%f",&a[i][j]);
    }
}
for(i=0;i<n2;i++){
        printf("Enter the members of matrix 2 row %d :",i+1);
    for(j=0;j<m2;j++){
        scanf("%f",&b[i][j]);
    }
}
for(i=0;i<n1;i++){
    for(j=0;j<m1;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
  printf("The sum of both matrices is\n:");
        for(j=0;j<m1;j++){
            for(i=0;i<n1;i++){
                printf("\t\t %.0f",c[i][j]);}
                printf("\n");}}
    else{
        printf("\n\tThe matrices are incompatible");
    }
        }


void matrix_product(){

int i,j,n1,m1,n2,m2,l,k;

printf("Enter the number of rows of matrix 1:");
scanf("%d",&n1);
printf("Enter the number of columns of matrix :");
scanf("%d",&m1);
printf("Enter the number of rows of matrix 2:");
scanf("%d",&n2);
printf("Enter the number of columns of matrix 2:");
scanf("%d",&m2);

float a[n1][m1];
float b[n2][m2];
float c[n1][m1];
for(i=0;i<n1;i++){
        printf("Enter the members of matrix 1 row %d :",i+1);
    for(j=0;j<m1;j++){
        scanf("%f",&a[i][j]);
    }
}
for(i=0;i<n2;i++){
        printf("Enter the members of matrix 2 row %d :",i+1);
    for(j=0;j<m2;j++){
        scanf("%f",&b[i][j]);
    }
}
c[i][j]=1;
 for(i=0;i<n1;i++){
    for(j=0;j<m2;j++){
                c[i][j]=0;
                c[i][j]+=a[i][j]*b[i][j];
        }
    }


    printf("The  of the matrix is\n:");
        for(j=0;j<m1;j++){
            for(i=0;i<n2;i++){
                printf("\t\t %.0f",a[i][j]);}
                printf("\n");}


}

void matrix_transpose(){

int i,j,n,m;

printf("Enter the number of rows:");
scanf("%d",&n);
printf("Enter the number of columns:");
scanf("%d",&m);

float a[n][m];

for(i=0;i<n;i++){
        printf("Enter the members of row %d :",i+1);
    for(j=0;j<m;j++){
        scanf("%f",&a[i][j]);
    }
}

        printf("The transpose of the matrix is\n:");
        for(j=0;j<m;j++){
            for(i=0;i<n;i++){
                printf("\t\t %.0f",a[i][j]);}
                printf("\n");}
        }

