#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),
coord);
}

int main ()
{
	int a,i,j,k,l,m,r;
	
	do{
	gotoxy(0,0);cout<<"                                          ";
	gotoxy(0,0);cout<<"Masukan Angka : ";
	gotoxy(16,0);cin>>a;
	gotoxy(0,2);cout<<"Masukan Anka selain 0";	
	}
	while(a<1);
	gotoxy(0,2);cout<<"                                        ";
	cout<<endl;
	
	j=0;
	i=a-1;
	do{
		k=i-j;
		l=2*j+1;
		m=0;
		r=1;
		do{
			if(m<k){
				cout<<" ";
			}
			m=m+1;
		}while(m<=k);
		do{
			cout<<"*";
			r=r+1;
		}while(r<=l);
		cout<<" "<<endl;
		j=j+1;
	}while(j<i);
	
}
