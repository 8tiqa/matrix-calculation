#include <limits.h>
#include "matrix.h"
#include "gtest/gtest.h"

//Testing Matrix Addition
TEST(Test1, Matrix ){

	Matrix A;
	A.accept(1,1,1,1,1,1,1,1,1);

	Matrix B;
	B.accept(1,1,1,1,1,1,1,1,1);

	Matrix C;
	C.add(A,B);

	EXPECT_EQ(C.p[0][0], 2 );
	EXPECT_EQ(C.p[0][1], 2 );
	EXPECT_EQ(C.p[0][2], 2 );

	EXPECT_EQ(C.p[1][0], 2 );
	EXPECT_EQ(C.p[1][1], 2 );
	EXPECT_EQ(C.p[1][2], 2 );

	EXPECT_EQ(C.p[2][0], 2 );
	EXPECT_EQ(C.p[2][1], 2 );
	EXPECT_EQ(C.p[2][2], 2 );
}


//Testing Matrix Multiplication
TEST(Test2, Matrix ){

	Matrix A;
	A.accept(1,1,1,1,1,1,1,1,1);

	Matrix B;
	B.accept(1,1,1,1,1,1,1,1,1);

	Matrix C;
	C.mult(A,B);

	EXPECT_EQ(C.p[0][0], 3 );
	EXPECT_EQ(C.p[0][1], 3 );
	EXPECT_EQ(C.p[0][2], 3 );

	EXPECT_EQ(C.p[1][0], 3 );
	EXPECT_EQ(C.p[1][1], 3 );
	EXPECT_EQ(C.p[1][2], 3 );

	EXPECT_EQ(C.p[2][0], 3 );
	EXPECT_EQ(C.p[2][1], 3 );
	EXPECT_EQ(C.p[2][2], 3 );
}


//Testing Matrix Multiplication followed by Addition
TEST(Test3, Matrix){

	Matrix A;
	A.accept(1,1,1,1,1,1,1,1,1);

	Matrix B;
	B.accept(1,1,1,1,1,1,1,1,1);

	Matrix C;
	C.accept(1,1,1,1,1,1,1,1,1);

	Matrix D;
	D.add(A,B);

	Matrix E;
	E.mult(C,D);


	EXPECT_EQ(E.p[0][0], 6 );
	EXPECT_EQ(E.p[0][1], 6 );
	EXPECT_EQ(E.p[0][2], 6 );

	EXPECT_EQ(E.p[1][0], 6 );
	EXPECT_EQ(E.p[1][1], 6 );
	EXPECT_EQ(E.p[1][2], 6 );

	EXPECT_EQ(E.p[2][0], 6 );
	EXPECT_EQ(E.p[2][1], 6 );
	EXPECT_EQ(E.p[2][2], 6 );
}