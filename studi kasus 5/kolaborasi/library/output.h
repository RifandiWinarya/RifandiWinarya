using namespace std;

class Output {
public:
  void getData() 
  {
    ambil_data.open("proses.txt");
    while (!ambil_data.eof()) 
    {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }
  void cetak() {
    cout << "LAPORAN PEMBAYARAN "<<endl;
    cout << " NAMA : " << data_file[0] << endl;
    cout << " NIM  : " << data_file[1] << endl;
    cout << " TOTAL MATKUL      : " << data_file[2] << endl;
    cout << " TOTAL SKS         : " << data_file[3] << endl;
    cout << " TOTAL PEMBAYARAN  : " << data_file[4] << endl;
  }

  void toFile() {
    tulis_data.open("output.txt");
    tulis_data << "LAPORAN PEMBAYARAN "<<endl;
    tulis_data << " NAMA : " << data_file[0] << endl;
    tulis_data << " NIM  : " << data_file[1] << endl;
    tulis_data << " TOTAL MATKUL      : " << data_file[2] << endl;
    tulis_data << " TOTAL SKS         : " << data_file[3] << endl;
    tulis_data << " TOTAL PEMBAYARAN  : " << data_file[4] << endl;
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  string data_file[30];
  int index = 0;
};
