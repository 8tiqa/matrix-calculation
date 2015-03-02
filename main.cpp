#include <iostream>
#include "matrix.h"
using namespace std;
int main()
{
	Matrix A(3,3);
	Matrix B(3,3);
	Matrix result(3,3);

	int choice;

	cout<<"First Matrix"<<endl;
	A.accept();
	cout<<"Second Matrix"<<endl;
	B.accept();

	cout<<"Please Choose From the Following\n1. Add\n2. Subtract\n3. Multiply"<<endl;
	cin>>choice;
	
	switch (choice){
		case 1:
		{
			result.add(A,B);
			break;
		}
		case 2:
		{
			result.sub(A,B);
			break;
		}
		case 3:
		{
			result.mult(A,B);
			break;
		}
	}
	result.display();
	return 0;
}