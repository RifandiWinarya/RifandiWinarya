using namespace std;

class Input {
public:
  void cetak() {
    cout << "\t\tStudi Kasus 6\n";
    cout << "Nama Dosen: ";
    cin >> nama;
    cout << "Mata Kuliah: ";
    cin >> mk;
    cout << "Jumlah Mahasiswa: ";
    cin >> m;
    for(int x = 0; x < m; x++){
      cout << "Nilai " << x+1 << ": ";
      cin >> n[x];
      }
}

  void toFile1() {
    tulis_data.open("input1.txt");
    tulis_data << nama << endl;
    tulis_data << mk << endl;
    tulis_data.close();
}

void toFile2() {
   tulis_data.open("input2.txt");
  for(int x = 0; x < m; x++){
      tulis_data << n[x] << endl;
    }
  tulis_data.close();
}

private:
  ofstream tulis_data;
  string nama;
  string mk;
  int m;
  int n[50];
};