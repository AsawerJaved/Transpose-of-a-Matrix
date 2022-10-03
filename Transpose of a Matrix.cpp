#include<iostream>
using namespace std;
int main()
{
	int matrix[3][3];
	for(int i=0;i<3;i++)                // Taking matrix inputs from user
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter a value for index ["<<i<<"]["<<j<<"]: ";
			cin>>matrix[i][j];
		}
		cout<<endl;
	}
	cout<<"\n------Before------"<<endl;          // displaying the original matrix
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	int temp=0;
	for(int i=0;i<3;i++)
	{
		for(int j=i;j<3;j++)                 // taking transpose by swapping rows with columns
		{
			temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
		}
	}
	cout<<"\n------After------"<<endl;          // displaying trasnposed matrix
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
