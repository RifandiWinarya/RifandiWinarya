using namespace std;

class Input {
public:
  void cetak() {
    cout << "Aplikasi Penjualan Ayam \n";
    cout << "Menu yang tersedia : \n";
    cout << "1) Ayam Geprek  Rp. 21000 \n";
    cout << "2) Ayam Goreng   Rp. 17000 \n";
    cout << "3) Udang Goreng   Rp. 19000 \n";
    cout << "4) Cumi Goreng   Rp. 20000 \n";
    cout << "5) Ayam Bakar   Rp. 25000 \n";
    cout << "Pesan Ayam Geprek -> ";
    cin >> bnyk_ayprek;
    cout << "Pesan Ayam Goreng -> ";
    cin >> bnyk_ayreng;
    cout << "Pesan Udang Goreng -> ";
    cin >> bnyk_udreng;
    cout << "Pesan Cumi Goreng -> ";
    cin >> bnyk_cureng;
    cout << "Pesan Ayam Bakar -> ";
    cin >> bnyk_aykar;
    cout << "Jarak rumah ke restoran  -> ";
    cin >> jarak;
  }

  void toFile() {
    tulis_data.open("slip_bayar.txt");
    tulis_data << bnyk_ayprek<< endl;
    tulis_data << bnyk_ayreng<< endl;
    tulis_data << bnyk_udreng<< endl;
    tulis_data << bnyk_cureng<< endl;
    tulis_data << bnyk_aykar<< endl;
    tulis_data << jarak;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int bnyk_ayprek;
  int bnyk_ayreng;
  int bnyk_udreng;
  int bnyk_cureng;
  int bnyk_aykar;
  int jarak;
};
