#include <iostream>
using namespace std;
class Matrix
{
	int **matrix;
	int rows,columns;
public:
	Matrix() : rows(0),columns(0){}
	Matrix(int row, int column);
	int isSquareMatrix();
	int reverseDiagonals();
	void transpose();
	int isSymmetric();
	void setRows(int row);
	void setColumns(int column);
	int getRows();
	int getColumns();
	friend ostream& operator <<(ostream& out,Matrix& objMatrix)
	{
		cout<<"Matrix: \n";
		for(int i=0;i<objMatrix.rows;i++)
		{	
			for(int j=0;j<objMatrix.columns;j++)
			{
				out<<objMatrix.matrix[i][j]<<"  ";
			}
			cout<<endl;
		}
		return out;
	}
	friend istream& operator >>(istream& in,Matrix& objMatrix)
	{
		if(objMatrix.columns == 0 && objMatrix.rows == 0)
		{
			cout<<"No. of columns: ";
			in>>objMatrix.columns;
			cout<<"\nNo. of rows: ";
			in>>objMatrix.rows;
		}
		for(int i=0;i<objMatrix.rows;i++)
		{	
			for(int j=0;j<objMatrix.columns;j++)
			{
				cout<<"["<<i+1<<"]["<<j+1<<"]: ";
				in>>objMatrix.matrix[i][j];
			}
		}
		return in;
	}
	Matrix operator+(const Matrix& objMatrix);
	Matrix operator-(const Matrix& objMatrix);
	Matrix operator*(const Matrix& objMatrix);
	Matrix operator=(Matrix& objMatrix);
	int operator==(Matrix& objMatrix);
	~Matrix();
};