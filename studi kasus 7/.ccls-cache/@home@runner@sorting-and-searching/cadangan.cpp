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
  }

	int sorting(){
    for(int i=1; i<=n; i++)
	{
	       for(int j=i; j<=n; j++)
	       {
	              if(stok[i] < stok[j])
	              {
	                     tmp = stok[j];
	                     stok[j] = stok[i];
	                     stok[i] = tmp;
	              }
	       }
	}
	cout <<endl;
	cout << "Hasil Pengurutan stok Secara Descending "<<endl;
	cout <<endl;
	for(int i=1;i<=n;i++)
	{
	       cout<<stok[i]<<endl;
	}
}

  int searching(){
    //Mencetak Elemen Array
    
    
    cout<<"\n\nMasukkan Id Barang Yang Dicari = ";
    cin>>cari;

    cout<<"Nama Barang : "<<nama[cari]<<endl;
    cout<<"Stok Barang : "<<stok[cari]<<endl;
    
}

private:
  int tmp, pilih, cari, n;
  string nama[100];
  int b=0, stok[100], id[100];
};

int main(){
	sort gg;
	gg.barang();
	gg.sorting();
	gg.searching();
  return 0;
}