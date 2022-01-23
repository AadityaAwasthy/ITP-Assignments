#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int Is_sparse_matrix(int row,int col,int arr[row][col]){
    int cnt=0;
    int s=0;
    for(int i=0;i<row;i++){
          for(int j=0;j<col;j++){
            if(arr[i][j]==0)
            cnt++;
          }
      }
      if(cnt>((row*col)/2))
         s=1;
      else
         s=0;
    
    return s;
}
int Is_identical_matrix(int row,int col, int arr[row][col]){
    int h=1;
    for(int i=0;i<row;i++){
          for(int j=0;j<col;j++){
            if(i==j && arr[i][j]!=1 || i!=j && arr[i][j]!=0){
             h=0;
             break;
            }
          }
      }
       
      return h;
}
int Is_symmetric_matrix(int row,int col,int arr[row][col]){
    int k=1;
    for(int i=0;i<row;i++){
          for(int j=i+1;j<col;j++){
            if(arr[i][j]!=arr[j][i])
             k=0;
             break;
            
          }
      }
       
      return k;
    
}
int main()
{   // Variable declaration and initialization
    int row,col;
    int i,s,sm=0;
    int prom;

    //___________________________________________________________________________________________________________________

    system("cls");

    //Taking input for number of rows and columns.
    printf("Please enter ROW X COL (with a space) :");
    scanf("%d %d",&row,&col);
    system("cls");

    //____________________________________________________________________________________________________________________

    //Initializing 2D array
    int arr[row][col];

    do
    {
    system("cls");

    //Taking inputs for elements of the matrix
    printf("Please enter the matrix below : \n");
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);}
        }

    printf("\nPlease confirm the matrix given above :-");
    printf("\n1.Confirm.");
    printf("\n2.Re-enter matrix.");
    printf("\nEnter Response (1 or 2) :");
    scanf("%d",&prom);

    }while(prom != 1);

    //_________________________________________________________________________________________________________________________

    //If-Else condition to check for square matrix

    clock_t start,end;
    double cpu_time_used;

    start=clock();
    if(row==col)
    {
        //Nested If-Else condition to check for Identity
        if(Is_identical_matrix(row,col,arr)==0)      
        {
            i=0;
            s=Is_sparse_matrix(row,col,arr);
            sm=Is_symmetric_matrix(row,col,arr);
        }
        else
        {
            i=1;
            if(row==2&&col==2)
               s=0;
            else
               s=1;
            sm=1;
        }
    }
    else //If not square matrix
    {
        i=0;
        sm=0;
        s=Is_sparse_matrix(row,col,arr);
    }

    //___________________________________________________________________________________________________________________________
    
    //If-Else conditions to print output.
    if(i==1)
       printf("\n\nThe given matrix IS an Identity matrix\n");
    else
       printf("\n\nThe given matrix IS NOT an identity matrix\n");
    
    if(s==1)
       printf("The given matrix IS a Sparse matrix\n");
    else 
       printf("The given matrix IS NOT a Sparse matrix\n");
    
    if(sm==1)
       printf("The given matrix IS a Symmetrical matrix\n");
    else
       printf("The given matrix IS NOT a Symmetrical matrix\n");

    end=clock();
    cpu_time_used=((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\n\n the code took %f seconds to execute .",cpu_time_used);
 
    return 0;
}
