/*
  NAMA ANGGOTA :
  ANUGRAH AKBAR PRIYOGO WIRATAMA (2100018373) 
  RIFANDI WINARYA (2100018376) 
*/
#include <iostream>

using namespace std;

class BubbleSort {
public:
	void input_buku();
  void bubble_sort();
  void output_sort();
  void pindah();
  void output();
private:	
	int Buku[24];
	int Rak_Buku[4][6];
	int temp,d=0;
};

void BubbleSort::input_buku (){ 
  cout<<"Masukkan Angka buku secara acak : "<<endl;
  for(int i=0;i<24;i++){
    cout<<"Buku Ke - "<<i<<" = ";
    cin>>Buku[i];
  }
  cout<<endl;
  cout<<"Angka buku yang anda masukkan : "<<endl;
  for(int i=0;i<24;i++){
    cout<<Buku[i]<<" ";
  }
  cout<<endl<<endl;
}

void BubbleSort::bubble_sort (){
  cout<<"Bubble Sorting....."<<endl<<endl;
	for(int i = 0; i<24; i++) {
		for(int j = i+1; j<24; j++){
			if(Buku[j] < Buku[i]) {
				temp = Buku[i];
				Buku[i] = Buku[j];
				Buku[j] = temp;
			}
    }
	}
}

void BubbleSort::output_sort (){ /*xxxxxxxxxxxxxxxxx*/
  cout<<"Hasil Urutan buku : "<<endl;
  for(int i=0;i<24;i++){
    cout<<Buku[i]<<" ";
  }
  cout<<endl<<endl;
}

void BubbleSort::pindah (){
	for(int i=0;i<4;i++){
    for(int j=0;j<6;j++){
      Rak_Buku[i][j]=Buku[d];
      d++;
    }
  }
}

void BubbleSort::output (){ 
	for(int i=0;i<4;i++){
    cout<<"Rak Buku Ke "<<i+1<<endl;
    for(int j=0;j<6;j++){
      cout<<Rak_Buku[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main(){
	BubbleSort sort;
  sort.input_buku();
  sort.bubble_sort();
  sort.output_sort();
  sort.pindah();
  sort.output();
}