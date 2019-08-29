#include "header.h"
	Matrix::Matrix(int row, int column) : rows(row),columns(column)
	{
		matrix=new int*[rows];
		for(int i=0;i<rows;i++)
		{
			matrix[i]=new int[columns];
		}
	} 
	int Matrix::isSquareMatrix()
	{
		if (rows==columns)
			return 1;
		else
			return -1;
	}
	int Matrix::reverseDiagonals()
	{
		int num;
		num=isSquareMatrix();
		if(num==1)
		{
			for(int i=0;i<rows;i++)
				for(int j=0;j<rows;j++)
					for(int k=0;k<columns;k++)
					{
							
					}
		}
		return 1;
	}
	void Matrix::transpose()
	{
		int num;
		num=isSquareMatrix();
		if(num==1)
		{
			Matrix objTemp(rows,rows);
			cout<<"Matrix: \n";
			for(int i=0;i<rows;i++)
			{	
				for(int j=0;j<columns;j++)
				{
					objTemp.matrix[j][i]=matrix[i][j];
					cout<<objTemp.matrix[i][j]<<"  ";
				}
			cout<<endl;
			}
		}
	}
	int Matrix::isSymmetric()
	{
		int num;
		num=isSquareMatrix();
		if(num==1)
		{
			Matrix objTemp(rows,rows);
			cout<<"Matrix: \n";
			for(int i=0;i<rows;i++)
			{	
				for(int j=0;j<columns;j++)
				{
					objTemp.matrix[j][i]=matrix[i][j];
				}
			}
			int numTemp;
			for(int i=0;i<rows;i++)
			{	
				for(int j=0;j<columns;j++)
				{
					if (objTemp.matrix[i][j]==matrix[i][j])
						numTemp++;
				}
			}
			if (numTemp == rows*columns)
				return 1;
			else
				return 0;
		}
		else
			return -1;
	}
	void Matrix::setRows(int row)
	{
		rows=row;	
	}
	void Matrix::setColumns(int column)
	{
		columns=column;
	}
	int Matrix::getRows()
	{
		return rows;
	}
	int Matrix::getColumns()
	{
		return columns;
	}	
	Matrix Matrix::operator+(const Matrix& objMatrix)
	{
		Matrix objTemp(rows,columns);
		for (int i = 0 ; i < rows ; i++)
		{
			for( int j = 0; j < columns ; j++)
			{
				objTemp.matrix[i][j] = objMatrix.matrix[i][j] + matrix[i][j];
			}
		}
		return objTemp;
	}
	Matrix Matrix::operator-(const Matrix& objMatrix)
	{
		Matrix objTemp(rows,columns);
		for (int i = 0 ; i < rows ; i++)
		{
			for( int j = 0; j < columns ; j++)
			{
				objTemp.matrix[i][j] = objMatrix.matrix[i][j] - matrix[i][j];
			}
		}
		return objTemp;
	}
	Matrix Matrix::operator*(const Matrix& objMatrix)
	{
		Matrix objTemp(rows,columns);
		int num;
		return objTemp;
	}
	Matrix Matrix::operator=(Matrix& objMatrix)
	{
		Matrix objTemp(rows,columns);
		for (int i = 0 ; i < rows ; i++)
		{
			for( int j = 0; j < columns ; j++)
			{
				objTemp.matrix[i][j]=objMatrix.matrix[i][j];
			}
		}
		return objTemp;
	}
	int Matrix::operator==(Matrix& objMatrix)
	{
		int inc=0;
		for (int i = 0 ; i < rows ; i++)
		{
			for( int j = 0; j < columns ; j++)
			{
				if (matrix[i][j]==objMatrix.matrix[i][j])
					inc++;
			}
		}
		if(inc==rows*columns)
			return 1;
		else 
			return 0;
	}
	Matrix::~Matrix()
	{
		for(int i=0;i<rows;i++)
			delete matrix[i];
		delete []matrix;
	}