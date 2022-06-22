/*
  NAMA ANGGOTA :
  ANUGRAH AKBAR PRIYOGO WIRATAMA (2100018373) 
  RIFANDI WINARYA (2100018376) 
*/
#include <iostream>
using namespace std;
class node {
public :
    void linklist();
private :
    int data;
    string nama;
    node *berikut;
};

void node::linklist(){
    cout<<"DATA PESERTA LOMBA PARMATIKA BABAK FINAL\n\n";
    node *baru;
    baru = new node;
    cout<<"1. Data Mahasiswa\n";
    cout<<"Masukkan Nim  : ";
    cin>>baru->data;
    cout<<"Masukkan Nama : ";
    cin>>baru->nama;
    baru->berikut = NULL;
    // langkah dua
    node *lain;
    lain = new node;
    cout<<"2. Data Mahasiswa\n";
    cout<<"Masukkan Nim  : ";
    cin>>lain->data;
    cout<<"Masukkan Nama : ";
    cin>>lain->nama;
    lain->berikut = NULL;
    baru->berikut = lain;
    // langkah 3
    node *lain3;
    lain3 = new node;
    cout<<"3. Data Mahasiswa\n";
    cout<<"Masukkan Nim  : ";
    cin>>lain3->data;
    cout<<"Masukkan Nama : ";
    cin>>lain3->nama;
    lain3->berikut = NULL;
    lain->berikut = lain3;
    // langkah 4
    node *lain4;
    lain4 = new node;
    cout<<"4. Data Mahasiswa\n";
    cout<<"Masukkan Nim  : ";
    cin>>lain4->data;
    cout<<"Masukkan Nama : ";
    cin>>lain4->nama;
    lain4->berikut = NULL;
    lain3->berikut = lain4;
    // langkah 5
    node *lain5;
    lain5 = new node;
    cout<<"5. Data Mahasiswa\n";
    cout<<"Masukkan Nim  : ";
    cin>>lain5->data;
    cout<<"Masukkan Nama : ";
    cin>>lain5->nama;
    lain5->berikut = NULL;
    lain4->berikut = lain5;//00000000
    system("cls");
    node *kepala = baru;
    node *jalan = kepala;
    cout<<endl;
    cout<<"DATA PESERTA LOMBA PARMATIKA BABAK FINAL"<<endl;
    int i = 1;
      while (jalan != NULL) {
        cout << "Mahasiswa ke "<< i << endl;
        cout << "Nim   : " << jalan->data << endl;
        cout << "Nama  : " << jalan->nama << endl;
        i++;
        jalan = jalan->berikut;
    }
}
int main() {
  node gg;
  gg.linklist();
}