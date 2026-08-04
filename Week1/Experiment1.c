// Develop a menu-driven C program to perform various matrix operations using userdefined
// functions. The program should demonstrate modular programming, parameter passing,
// and parameter safety by validating all inputs before invoking the corresponding functions.
// Problem Statement: Implement a menu-driven program using the switch statement to perform
// the following matrix operations:
// 1. Read Matrix
// 2. Matrix Addition
// 3. Matrix Subtraction
// 4. Matrix Multiplication
// 5. Matrix Transpose
// 6. Display Matrix
// 7. Exit
// Functions to Implement
// • readMatrix()
// • addMatrix()
// • subtractMatrix()
// • multiplyMatrix()
// • transposeMatrix()
// • displayMatrix()

#include<stdio.h>
#define max 10
void readMatrix(int mat[max][max], int rows, int cols){
int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}
void addMatrix(int a[max][max], int b[max][max], int result[max][max], int rows, int cols){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
        }
    }
}
void subtractMatrix(int a[max][max], int b[max][max], int result[max][max], int rows, int cols){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            result[i][j]=a[i][j]-b[i][j];
        }
    }
}
void multiplyMatrix(int a[max][max], int b[max][max], int result[max][max], int r1, int c1,int c2){
    int i,j,k;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            result[i][j]=0;
            for(k=0;k<c1;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
void transposeMatrix(int mat[max][max], int trans[max][max], int rows, int cols){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            trans[j][i]=mat[i][j];
        }
    }
}
void displayMatrix(int mat[max][max], int rows, int cols){
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%4d",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int A[max][max], B[max][max], C[max][max], T[max][max];
    int r1, c1, r2, c2;
    int choice;
    int matrixRead = 0;
    while(1){
        printf("Enter your choice \n 1. Read Matrix \n 2. Matrix Addition \n 3. Matrix Subtraction \n 4. Matrix Multiplication \n 5. Matrix Transpose \n 6. Display Matrix \n 7. Exit\n");
        
        if (scanf("%d", &choice) != 1){
            printf("Invalid input\n");
            while(getchar()!='\n');
            continue;
        }
        if (choice < 1 || choice > 7){
            printf("Invalid menu choice!\n");
            continue;
        }
        switch (choice){
            case 1:
                printf("Enter rows and columns of Matrix A: ");
                if(scanf("%d%d",&r1,&c1)!=2){
                    printf("Invalid input!\n");
                    return 0;
                }
                if(r1<=0 || c1<=0 || r1>max || c1>max){
                    printf("Invalid dimensions for Matrix A!\n");
                    break;
                }
                printf("Enter rows and columns of Matrix B: ");
                if(scanf("%d%d",&r2,&c2)!=2){
                    printf("Invalid input!\n");
                    return 0;
                }
                if(r2<=0 || c2<=0 || r2>max || c2>max){
                    printf("Invalid dimensions for Matrix B!\n");
                    break;
                }
                printf("\nEnter Matrix A:\n");
                readMatrix(A,r1,c1);
                printf("\nEnter Matrix B:\n");
                readMatrix(B,r2,c2);
                matrixRead=1;
                break;
            case 2:
                if(matrixRead==0){
                    printf("Read matrices first!\n");
                    break;
                }
                if(r1!=r2 || c1!=c2){
                    printf("Addition not possible.\n");
                    break;
                }
                addMatrix(A,B,C,r1,c1);
                printf("\nResult of Addition:\n");
                displayMatrix(C,r1,c1);
                break;
            case 3:
                if(matrixRead==0){
                    printf("Read matrices first!\n");
                    break;
                }
                if(r1!=r2 || c1!=c2){
                    printf("Subtraction not possible.\n");
                    break;
                }
                subtractMatrix(A,B,C,r1,c1);
                printf("\nResult of Subtraction:\n");
                displayMatrix(C,r1,c1);
                break;
            case 4:
                if(matrixRead==0){
                    printf("Read matrices first!\n");
                    break;
                }
                if(c1!=r2){
                    printf("Multiplication not possible.\n");
                    break;
                }
                multiplyMatrix(A,B,C,r1,c1,c2);
                printf("\nResult of Multiplication:\n");
                displayMatrix(C,r1,c2);
                break;
            case 5:
                if(matrixRead==0){
                    printf("Read Matrix A first!\n");
                    break;
                }
                transposeMatrix(A,T,r1,c1);
                printf("\nTranspose of Matrix A:\n");
                displayMatrix(T,c1,r1);
                break;
            case 6:
                if(matrixRead==0){
                    printf("Read matrices first!\n");
                    break;
                }
                printf("\nMatrix A:\n");
                displayMatrix(A,r1,c1);
                printf("\nMatrix B:\n");
                displayMatrix(B,r2,c2);
                break;
            case 7:
                printf("Program Terminated.\n");
                return 0;
        };
    }
    return 0;
}
