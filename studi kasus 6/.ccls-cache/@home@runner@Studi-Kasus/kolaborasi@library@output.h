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
    cout << "REKAP NILAI "<< endl;
    cout << " NAMA DOSEN  : " << data_file[0] << endl;
    cout << " MATA KULIAH : " << data_file[1] << endl;
    cout << " NILAI TERKECIL  : " << data_file[2] << endl;
    cout << " NILAI TERBESAR  : " << data_file[3] << endl;
    cout << " NILAI RATA-RATA : " << data_file[4] << endl;
    cout << " DAFTAR NILAI : " << endl;
    for(int i=5; i<index-5; i++)
    {
      cout << " NILAI KE "<< i-5 << data_file[i] << endl;
          
    }
  }

  void toFile() {
    tulis_data.open("output.txt");
    tulis_data << "REKAP NILAI "<< endl;
    tulis_data << " NAMA DOSEN  : " << data_file[0] << endl;
    tulis_data << " MATA KULIAH : " << data_file[1] << endl;
    tulis_data << " NILAI TERKECIL  : " << data_file[2] << endl;
    tulis_data << " NILAI TERBESAR  : " << data_file[3] << endl;
    tulis_data << " NILAI RATA-RATA : " << data_file[4] << endl;
    tulis_data << " DAFTAR NILAI : " << endl;
    for(int i=5; i<index-5; i++)
    {
      tulis_data << " NILAI KE "<< i-5 << data_file[i] << endl;     
    }
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  string data_file[100];
  int index = 0;
};