using namespace std;

class Proses {
public:
  void getData1(){
			ambil_data.open("input.txt");
			bool nama = true;
			while(!ambil_data.eof()){
				if (nama){
					ambil_data >> nama;
					nama = false;
				} else{
					ambil_data >> mk;
				}
			}
			ambil_data.close();
		}

  void getData2() {
    ambil_data.open("input.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

  void toFile() {
    int jumlahn = index-2;//var terbesar terkecil
    int total,rata,jumlah;//var rata2
    int terkecil, terbesar;
    for (int i = 0; i <= jumlahn; i++) { // menghitung n terbesar terkecil
      if (i == 1) {
        terkecil = data_file[i];
        terbesar = data_file[i];
      } else if (data_file[i] < terkecil) {
        terkecil = data_file[i];
      } else if (data_file[i] > terbesar) {
        terbesar = data_file[i];
      } else {
        
      }
    }

    for (int i = 0; i <= jumlahn; i++) {// menghitung rata2
      total = total + angka;
    }
    rata = total / jumlah;

    tulis_data.open("proses.txt");
    tulis_data << nama << endl;
    tulis_data << nim << endl;
    tulis_data << terkecil << endl;
    tulis_data << terbesar << endl;
    tulis_data << rata << endl;
    for (int i = 2; i <= index; i++) {
      tulis_data << data_file[i] << endl;
    }
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  int index = 0;
  string nama, nim;
  int data_file[30];
};