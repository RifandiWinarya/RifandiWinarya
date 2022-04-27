using namespace std;

class Proses {
public:
  void getData1() {
    ambil_data.open("input2.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data_filea[indexa];
      indexa += 1;
    }
    ambil_data.close();
  }

  void getData2() {
    ambil_data.open("input1.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

  void toFile() {
    int jumlahn = indexa;//var terbesar terkecil
    int total,rata,jumlah;//var rata2
    int terkecil, terbesar;
    for (int i = 0; i <= jumlahn; i++) { // menghitung n terbesar terkecil
      if (i == 0) {
        terkecil = data_filea[i];
        terbesar = data_filea[i];
      } else if (data_filea[i] < terkecil) {
        terkecil = data_filea[i];
      } else if (data_filea[i] > terbesar) {
        terbesar = data_filea[i];
      } else {
        
      }
    }

    for (int i = 0; i <= jumlahn; i++) {// menghitung rata2
      total = total + data_filea[i];
    }
    rata = total / jumlah;

    tulis_data.open("proses.txt");
    tulis_data << data_file[0] << endl;
    tulis_data << data_file[1] << endl;
    tulis_data << terkecil << endl;
    tulis_data << terbesar << endl;
    tulis_data << rata << endl;
    for (int i = 0; i <= indexa; i++) {
      tulis_data << data_filea[i] << endl;
    }
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  int index = 0;
  int indexa = 0;
  int data_filea[30];
  string data_file[30];
};