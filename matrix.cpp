#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix (int m,int n) /*CONSTRUCTOR*/
    {
      rownum = m;
      colnum = n; 
    }

void Matrix::display() /*DISPLAY FUNCTION*/
    { 
      cout <<"\nThe matrix is:";
      for(int i = 0; i < colnum; i++) 
      { 
         cout <<endl; 
         for(int j = 0; j < rownum; j++) 
         { 
            cout << p[i][j] <<" "; 
         } 
      } 
    }
void Matrix::accept() 
   { 
      cout<<"Enter matrix elements:"; 
      for(int i = 0; i < rownum; i++) 
      { 
         for(int j = 0; j < colnum; j++) 
         { 
            cin >> p[i][j]; 
         } 
      } 
   } 

void accept(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
      p[0][0] =a;
      p[0][1] =b;
      p[0][2] =c;
      p[1][0] =d;      
      p[1][1] =e;
      p[1][2] =f;
      p[2][0] =g;
      p[2][1] =h;
      p[2][2] =i;

}

    
void Matrix::add(Matrix A, Matrix B) /*ADD FUNCTION*/
{
  for ( int i = 0 ; i < rownum ; i++ ){
    for (int j = 0 ; j < colnum ; j++ )
      p[i][j]=A.p[i][j]+B.p[i][j];    
  }
}
    
void Matrix::sub(Matrix A, Matrix B) /*SUB FUNCTION*/
{
  for ( int i = 0 ; i < rownum ; i++ ){
    for (int j = 0 ; j < colnum ; j++ )
      p[i][j]=A.p[i][j]-B.p[i][j];    
  }
}
    

void Matrix::mult(Matrix A,Matrix B) /*MULTIPLICATION FUNCTION*/
{
  for ( int i = 0 ; i < rownum ; i++ )
  {
    for (int j = 0 ; j < colnum ; j++ )
    {
      p[i][j]=0;
      for (int k= 0; k < 2 ; k++)
        p[i][j] = p[i][j] + (A.p[i][k] * B.p[k][j]);
    }
  }
}
