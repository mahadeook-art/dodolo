//cari error dari blok kode dibawah ini

#include <iostream> //tidak ada include iostream
using namespace std;
int main(){
int htm[6]={2000, 10000, 15000, 45000, 75000}; //tidak ada angka dalam kurung
string namaTempat[6]={"Puncak Sosok", "Kaliurang", "Pantai Pandansari", "Candi Prambanan", "Gembira Loka"}; // tidak diakhiri titik koma
cout << "Harga Tiket Wisata Tempat Wisata Jogja" << endl;
for(int i = 0; i < 5; i++){
cout << i+1 << "." << htm[i] << " - " << namaTempat[i] << //tidak ada i dalam kurung
endl;}
cout << endl;
int pilihan;   // tidak mendeklarasikan pilihan
cout << "Masukkan angka pilihan tempat wisata(1-5) : ";
cin >> pilihan;
cout << "Nama Tempat Wisata = " << namaTempat[pilihan-1]
<< endl;
cout << "HTM yang perlu dibayar = " << htm[pilihan-1] <<
endl;
}

