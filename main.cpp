#include <stdio.h>
#define SIZE_NUMBER 20
#include <fstream>
#include <iostream>
using namespace std;
ifstream in;  // ѕоток in будем использовать дл€ чтени€
     ofstream out; // ѕоток out будем использовать дл€ записи

void print_matrix(int str,int stb,double **mass)//вывод матрицы в консоль
{
	for(int i=0;i<str;i++)
	{
		for(int j=0;j<stb;j++)
		printf("a[%d][%d]=%f \t",i,j,mass[i][j]);
		printf("\n");
	}
	printf("\n");
}


int gaus_obr(int cnt_str,double **mass,double **&M_obr)
{

return 1;
}

int main(int args,char *argv[])
{
int  n;

double **mass;double *B;double *X;
double **M_obr;
  in.open("input.txt");
     out.open("output.txt");
     in>>n; 
     mass=new double* [n];
	for(int i=0;i<n;i++)
	{
	mass[i]=new double [n];}
	
   for (int i=0; i<n; i++)
{
	for (int j=0; j<n; j++)
{
in>>mass[i][j];
}}






int i,j,k;
//создание единичной матрицы 
M_obr=new double* [n];
	for(i=0;i<n;i++)
	{
	M_obr[i]=new double [n];
	for(j=0;j<n;j++)M_obr[i][j]=0;
	M_obr[i][i]=1;
	}
//пр€мой ход методом √аусса
double a,b;
for(i=0;i<n;i++)
{
a=mass[i][i];
	for(j=i+1;j<n;j++)
	{
	b=mass[j][i];
		for(k=0;k<n;k++)
		{
		mass[j][k]=mass[i][k]*b-mass[j][k]*a;
		M_obr[j][k]=M_obr[i][k]*b-M_obr[j][k]*a;
		}
	}
}



//обратный ход нахождени€ элементов обратной матрицы
double sum;
for(i=0;i<n;i++)
{
	for(j=n-1;j>=0;j--)
	{
		sum=0;
		for(k=n-1;k>j;k--)
		sum+=mass[j][k]*M_obr[k][i];
		if(mass[j][j]==0)
		{
		for(i=0;i<n;i++)
		delete []M_obr[i];
		delete []M_obr;
		return 0;
		}
		M_obr[j][i]=(M_obr[j][i]-sum)/mass[j][j];
	}
}
//выводим посмотреть обратную матрицу
 for (int i=0; i<n; i++)
{	for (int j=0; j<n; j++){
cout<<M_obr[i][j]<<" ";}
cout<<endl;}
 
 //считываем матрицу ¬ и занул€ем ’
  B=new double [n];
    X=new double [n];
    for (int i=0; i<n; i++){
    	
for (int j=0; j<n; j++)
{
in>>B[j]; X[j]=0;
}
}

//ѕеремножаем обратную матрицу и ¬
		for (int i=0; i<n; i++)
{	for (int j=0; j<n; j++){
X[i]+=M_obr[i][j]*B[j];
}
}
		
for (int j=0; j<n; j++)
{
out<<X[j]<<" ";
}		
in.close();
     out.close();
	
return 0;
}
