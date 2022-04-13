using namespace std;

class Input {
public:
  void cetak() {
    cout << "Aplikasi Penghitungan Pengeluaran \n";
    cout << "Uang Saku = " << uang_saku << endl;
    cout << "Input Pengeluaran \n";
    for(int x = 0; x < 12; x++){
    	cout << "Pengeluaran bulan ke-" << x+1 << ": ";
    	cin >> penglu[x];
    }
  }

  void toFile() {
	tulis_data.open("pengeluaran.txt");
    tulis_data << penglu[0]<< endl;
    tulis_data << penglu[1]<< endl;
    tulis_data << penglu[2]<< endl;
    tulis_data << penglu[3]<< endl;
    tulis_data << penglu[4]<< endl;
    tulis_data << penglu[5]<< endl;
    tulis_data << penglu[6]<< endl;
    tulis_data << penglu[7]<< endl;
    tulis_data << penglu[8]<< endl;
    tulis_data << penglu[9]<< endl;
    tulis_data << penglu[10]<< endl;
    tulis_data << penglu[11]<< endl;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int uang_saku = 50000;
  int penglu[11];
};
