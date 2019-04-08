#include <iostream.h>
#include <conio.h>

main()
{
char nama[30];
float nk,nt,nu,nmk,nmt,nmu,na;
cout<<"Program Hitung Nilai Akhir Siswa"<<endl<<endl;
cout<<"Masukkan Nama Siswa : ";cin>>nama;
cout<<"Nilai Keaktifan : ";cin>>nk;
cout<<"Nilai Tugas : ";cin>>nt;
cout<<"Nilai Ujian : ";cin>>nu;
nmk=nk*0.2;
nmt=nt*0.3;
nmu=nu*0.5;
na=nmk+nmt+nmu;
cout<<"Siswa Yang Bernama "<<nama<<endl;
cout<<"Degan nilai prestasi yang dihasilkan"<<endl;
cout<<"Nilai Murni Kreatifan x20% :"<<nmk<<endl;
cout<<"Nilai Murni Tugas x30% :"<<nmt<<endl;
cout<<"Nilai Murni Ujian x50% :"<<nmu<<endl;
cout<<"Memperoleh Nilai Akhiri Sebesar :"<<na<<endl;
getch();
}
