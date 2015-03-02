class Matrix {

 
  
public:
    int p[3][3];
    int rownum, colnum;
    
    Matrix (int m,int n);
    void display();
    void accept();
    //function overloaded for testing purposes
    void accept(int a, int b, int c, int d, int e, int f, int g, int h, int i);     
    

    void add(Matrix A, Matrix B);
    void sub(Matrix A, Matrix B);
    void mult(Matrix A, Matrix B);

};






