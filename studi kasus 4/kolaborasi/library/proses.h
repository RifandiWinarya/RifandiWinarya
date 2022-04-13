using namespace std;

class Proses {
	public :

		void getData(){
			ambil_data.open("pengeluaran.txt");
			bool penglu = true;
			while(!ambil_data.eof()){
				if (penglu){
					ambil_data >> penglu1;
					penglu = false;
				} else{
					ambil_data >> penglu2;
          ambil_data >> penglu3;
          ambil_data >> penglu4;
          ambil_data >> penglu5;
          ambil_data >> penglu6;
          ambil_data >> penglu7;
          ambil_data >> penglu8;
          ambil_data >> penglu9;
          ambil_data >> penglu10;
          ambil_data >> penglu11;
          ambil_data >> penglu12;
				}
			}
			ambil_data.close();
		}

		void toFile(){
      	int total_penge = penglu1 + penglu2 + penglu3 + penglu4 + penglu5 + penglu6 + penglu7 + penglu8 + penglu9 + penglu10 + penglu11 + penglu12;
      	int total_tabung = (uang_saku * 12) - total_penge;

      
		tulis_data.open("pengeluaran.txt");
		tulis_data << uang_saku << endl;//0
		tulis_data << penglu1 << endl;//1
		tulis_data << penglu2 << endl;//2
      	tulis_data << penglu3 << endl;//3
		tulis_data << penglu4 << endl;//4
		tulis_data << penglu5 << endl;//5
      	tulis_data << penglu6 << endl;//6
      	tulis_data << penglu7 << endl;//7
      	tulis_data << penglu8 << endl;//8
      	tulis_data << penglu9 << endl;//9
      	tulis_data << penglu10 << endl;//10
      	tulis_data << penglu11 << endl;//11
      	tulis_data << penglu12 << endl;//12
      	tulis_data << total_penge << endl;//13
      	tulis_data << total_tabung << endl;//14
		tulis_data.close();
		}

private :
	ifstream ambil_data;
	ofstream tulis_data;
    int penglu1;
    int penglu2;
    int penglu3;
    int penglu4;
    int penglu5;
    int penglu6;
    int penglu7;
    int penglu8;
    int penglu9;
    int penglu10;
    int penglu11;
    int penglu12;
	int uang_saku = 500000;
};
