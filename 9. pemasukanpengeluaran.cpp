#include<iostream>
using namespace std;

int main()
{
	int mdl1,mdl2,kmbl1,kmbl2,it1,it2,it3,it4,pmskn,pngluar,total_blj;
	cout<<"Nama  = Danu Adiputra"<<endl;
	cout<<"NIM   = 311810929"<<endl;
	cout<<"Kelas = 18.B.2"<<endl<<endl;
	cout<<"PROGRAM MENGHITUNG PEMASUKAN DAN PENGELUARAN"<<endl<<endl;
	cout<<"Modal Konsumen 1   = ";cin>>mdl1;
	cout<<"Belanja konsumen 1 :"<<endl;
	cout<<"            item 1 = ";cin>>it1;
	cout<<"            item 2 = ";cin>>it2;
	kmbl1=mdl1-it1-it2;
	cout<<"         Kembalian = "<<kmbl1;cout<<endl;
	
	cout<<"Modal Konsumen 2   = ";cin>>mdl2;
	cout<<"Belanja konsumen 2 :"<<endl;
	cout<<"            item 1 = ";cin>>it3;
	cout<<"            item 2 = ";cin>>it4;
	kmbl2=mdl2-it3-it4;
	cout<<"         Kembalian = "<<kmbl2;cout<<endl;
	cout<<endl;
	pmskn=mdl1+mdl2;
	pngluar=kmbl1+kmbl2;
	total_blj=it1+it2+it3+it4;
	cout<<"Pemasukan              = "<<pmskn;cout<<endl;
	cout<<"Pengeluaran            = "<<pngluar;cout<<endl;
	cout<<"Total belanja hari ini = "<<total_blj;
}
