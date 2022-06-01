#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class sort{
public:

  int barang(){
  	cout << "\n   ==> Inputkan banyak barang yang ingin di input : ";
	cin >> n;
	cout << "\n";
	for(int i=1; i<=n; i++)
	{
		cout<<"\tId Barang ke "<<i<<" = ";
	    cin>>id[i];
	    cout<<"\tNama Barang ke "<<i<<" = ";
	    cin>>nama[i];
	    cout<<"\tStok Barang ke "<<i<<" = ";
	    cin>>stok[i];
	    cout<<endl;
	}
    return 0;
  }

  int searching(){
    cout << "\n\nMasukkan Id Barang Yang Dicari = ";
    cin >> Bilangan;
    do {
      if (id[i] == Bilangan)
        ketemu = true;
        i++;
    } while (!(ketemu));
    if (ketemu){
    cout << "ID : " << Bilangan << endl;
    cout << "Nama Barang : " << nama[i] << endl;
    cout << "Stok Barang : " << stok[i] << endl;
    }else{ 
    cout << "Bilangan " << Bilangan << " tidak ditemukan";
    }
    return 0;
}

	int sorting(){
    for(int i=1; i<=n; i++)
	{
	       for(int j=i; j<=n; j++)
	       {
	              if(stok[i] < stok[j])
	              {
	                     tmp1 = stok[j];
	                     stok[j] = stok[i];
	                     stok[i] = tmp1;
	              }
	       }
	}
	cout <<endl;
	cout << "Hasil Pengurutan stok Secara Descending "<<endl;
	cout <<endl;
	for(int i=1;i<=n;i++)
	{
	       cout<<stok[i]<<endl;
	    //    for(int a=n;a>=1;a--)
	    //    {
	    //    		urut[i]=stok[a];
		   // }
	       
	}
    return 0;
}



private:
  int tmp1,tmp3, pilih, cari, n,Bilangan;
  string tmp2,nama[100];
  int b=0,i=0 , stok[100], id[100],urut[100];
  bool ketemu;
};

int main(){
	sort gg;
	gg.barang();
	gg.searching();
  gg.sorting();
  return 0;
}