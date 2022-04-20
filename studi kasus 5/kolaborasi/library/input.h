using namespace std;

class Input {
public:
  void cetak() {
    cout << "\t\tStudi Kasus 5\n";
    cout << "Nama Mahasiswa: ";
    cin >> nama;
    cout << "NIM: ";
    cin >> nim;
    cout << "Total Mata Kuliah: ";
    cin >> totalmk;
    for(int x = 0; x < totalmk; x++){
      cout << "Mata Kuliah " << x+1 << ": ";
      cin >> mk[x];
      cout << "Jumlah SKS " << x+1 << ": ";
      cin >> sks[x];
      }
}

  void toFile() {
    tulis_data.open("input.txt");
    tulis_data << nama << endl;
    tulis_data << nim << endl;
    tulis_data << totalmk;
    tulis_data.close();
}
  void toFileSks() {
      tulis_data.open("sks.txt");
      for(int x = 0; x < totalmk; x++){
        tulis_data << sks[x] << endl;
      }
      tulis_data.close();
  }

private:
  ofstream tulis_data;
  string nama;
  string nim;
  string mk[15];
  int totalmk;
  int sks[15];
};
