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
	int i, hrgBaju, cicilan, kembalian, bayar, jmlBayar, byrTerakhir, x, angsuran, a;
	gotoxy(0,0);cout<<"Harga Baju        : Rp.";
	gotoxy(23,0);cin>>hrgBaju;
	gotoxy(0,1);cout<<"Berapa kali cicil : ";
	gotoxy(20,1);cin>>cicilan;
	jmlBayar=0;
	x=0;
	a=0;
	
	for(i=1; i<= cicilan-1;i++){
		x=x+1;
		gotoxy(0,3+a);cout<<"Cicilan ke "<<x<<"      : Rp.";
		gotoxy(23,3+a);cin>>bayar;
		jmlBayar=jmlBayar+bayar;
		if(jmlBayar>=hrgBaju)
		{
			i=cicilan;
			a=a-3;
		}
		else{
			angsuran=hrgBaju-jmlBayar;
			gotoxy(0,4+a);cout<<"Sisa Angsuran     : Rp."<<angsuran;
		}
		a=a+3;	
	}
	do{
		if(jmlBayar>=hrgBaju);
		else{
			x=x+1;
				gotoxy(0,3+a);cout<<"Cicilan ke "<<x<<"      : Rp.";
				gotoxy(23,3+a);cin>>byrTerakhir;
				jmlBayar=jmlBayar+byrTerakhir;
				if(jmlBayar<hrgBaju){
					jmlBayar=jmlBayar-byrTerakhir;
					gotoxy(0,4+a);cout<<"Sisa Angsuran     : Rp."<<angsuran<<", harus lunas cicilan ke "<<x;
					gotoxy(23,3+a);cout<<"                                ";
					x=x-1;
					}
				else{
					gotoxy(0,4+a);cout<<"                                                                                              ";
				}
		}
	}while(jmlBayar<hrgBaju);
	a=a-2;
	kembalian=jmlBayar-hrgBaju;
	gotoxy(0,7+a);cout<<"Kembalian         : Rp. "<<kembalian;						
}

