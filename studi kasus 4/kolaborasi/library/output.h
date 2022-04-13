using namespace std;

class Output {
public:
  void getData() 
  {
    ambil_data.open("pengeluaran.txt");
    while (!ambil_data.eof()) 
    {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }
  void cetak() {
    cout << "LAPORAN KEUANGAN "<<endl;
    cout << " Uang Saku Setiap Bulan : " << data_file[0] << endl;
    cout << " Pengeluaran Bulan 1  : " << data_file[1] << endl;
    cout << " Pengeluaran Bulan 2  : " << data_file[2] << endl;
    cout << " Pengeluaran Bulan 3  : " << data_file[3] << endl;
    cout << " Pengeluaran Bulan 4  : " << data_file[4] << endl;
    cout << " Pengeluaran Bulan 5  : " << data_file[5] << endl;
    cout << " Pengeluaran Bulan 6  : " << data_file[6] << endl;
    cout << " Pengeluaran Bulan 7  : " << data_file[7] << endl;
    cout << " Pengeluaran Bulan 8  : " << data_file[8] << endl;
    cout << " Pengeluaran Bulan 9  : " << data_file[9] << endl;
    cout << " Pengeluaran Bulan 10 : " << data_file[10] << endl;
    cout << " Pengeluaran Bulan 11 : " << data_file[11] << endl;
    cout << " Pengeluaran Bulan 12 : " << data_file[12] << endl;
    cout << " Total Pengeluaran      : " << data_file[13] << endl;
    cout << " Total Uang Tabungan    : " << data_file[14] << endl;
  }

  void toFile() {
    tulis_data.open("pengeluaran.txt");
    tulis_data << "LAPORAN KEUANGAN "<<endl;
    tulis_data << " Uang Saku Setiap Bulan : " << data_file[0] << endl;
    tulis_data << " Pengeluaran Bulan 1  : " << data_file[1] << endl;
    tulis_data << " Pengeluaran Bulan 2  : " << data_file[2] << endl;
    tulis_data << " Pengeluaran Bulan 3  : " << data_file[3] << endl;
    tulis_data << " Pengeluaran Bulan 4  : " << data_file[4] << endl;
    tulis_data << " Pengeluaran Bulan 5  : " << data_file[5] << endl;
    tulis_data << " Pengeluaran Bulan 6  : " << data_file[6] << endl;
    tulis_data << " Pengeluaran Bulan 7  : " << data_file[7] << endl;
    tulis_data << " Pengeluaran Bulan 8  : " << data_file[8] << endl;
    tulis_data << " Pengeluaran Bulan 9  : " << data_file[9] << endl;
    tulis_data << " Pengeluaran Bulan 10 : " << data_file[10] << endl;
    tulis_data << " Pengeluaran Bulan 11 : " << data_file[11] << endl;
    tulis_data << " Pengeluaran Bulan 12 : " << data_file[12] << endl;
    tulis_data << " Total Pengeluaran      : " << data_file[13] << endl;
    tulis_data << " Total Uang Tabungan    : " << data_file[14] << endl;
    tulis_data.close();
  }

private:
	ifstream ambil_data;
	ofstream tulis_data;
	string data_file[30];
	int index = 0;
};
