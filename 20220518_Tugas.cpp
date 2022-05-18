#include <iostream>
using namespace std;
int main()
{
	float hasil;
	int a,b;
	string arr[3] = {"","Dollar","Rupiah"};
	cout<<"1. Dollar"<<endl;
	cout<<"2. Rupiah"<<endl;
	cout<<"Pilih Uang Awal: ";cin>>a;
	cout<<"Masukkan Uang: ";cin>>hasil;
	cout<<"1. Dollar"<<endl;
	cout<<"2. Rupiah"<<endl;
	cout<<"Pilih konversi: ";cin>>b;
	if(a==1 && b==2){
		cout<<"Hasil: "<<hasil*14691<<" Rupiah";
	}else if(a==2 && b==1){
		cout<<"Hasil: "<<hasil/14691<<" Dollar";
	}else if(a==b){
		cout<<"Hasil :"<<hasil<<" "<<arr[b];
	}
}
