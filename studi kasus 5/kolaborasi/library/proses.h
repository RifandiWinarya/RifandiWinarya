using namespace std;

class Proses {
public:
  int jumlah(int a, int jumlahsebelumnya) {
    if (jumlahsebelumnya == 0) {
      return a;
    } else {
      return jumlahsebelumnya + jumlah(a, jumlahsebelumnya == 0);
    }
  }

  int perkalian(int angka, int pengali) {
    if (pengali == 0)
      return 0;
    else
      return angka + perkalian(angka, pengali - 1);
  }

  void getData() {
    ambil_data.open("input.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

  void getDataSks() {
    ambil_data.open("sks.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data_filesks[indexsks];
      indexsks += 1;
    }
    ambil_data.close();
  }

  void toFile() {
    int totpem;
    int b = 0, jumlahpertama;
    jumlahpertama = jumlah(data_filesks[0], b);
    for (int i = 2; i <= (indexsks - 1); i++) {
      jumlah(data_filesks[1], jumlahpertama);
      jumlahpertama = jumlah(data_filesks[1], jumlahpertama);
    }
    cout << jumlahpertama;

    totpem = perkalian(jumlahpertama, hsks);
    int diskon= totpem * 0.1;
    int diskon2 = totpem * 0.05;
    totpem = totpem - diskon;
    totpem = totpem - diskon2;
    
    tulis_data.open("proses.txt");
    for (int i = 0; i <= index; i++) {
      tulis_data << data_file[i] << endl;
    }
    tulis_data << jumlahpertama << endl;
    tulis_data << totpem;
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  int index = 0;
  int indexsks = 0;
  string data_file[30];
  int data_filesks[30];
  int hsks = 120000;
};
