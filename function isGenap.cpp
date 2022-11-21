#include <iostream> //Memanggil header yang akan digunakan
using namespace std; //Mendeklarasikan kepada compiler bahwa akan menggunakan semua fungsi yang terdapat di dalamnya

int isGenap(int a){ //Subprogram fungsi int isGenap(int a)
	bool g; //Deklarasi variabel menggunakan tipe data boolean
    if(a%2==0){ //Pengkondisian 
        g = true; //Aksi apabila kondisi terpenuhi
    } else {
        g = false; //Aksi apabila kondisi tidak terpenuhi
    } //Penutup else 
    return g; //Mengembalikan nilai dari variabel genap
} //Penutup dari int isGenap(int a){
int main() { //Fungsi utama saat program pertama kali dijalankan
    int a; //Deklarasi variabel a merupakan tipe integer
    bool g; //Deklarasi variabel menggunakan tipe data boolean
    
    cout << "Masukkan bilangan : "; //Output pertama kali saat program dieksekusi
    cin >> a; //Input variabel a
    cout << endl; //Output garis baru
    
    g = isGenap(a); //Memasukkan nilai untuk variabel genap dari pemanggilan fungsi isGenap()
    
    if(g==true){ //Pengkondisian apakah variabel genap sama dengan true
        cout << a << " Adalah Genap"; //Aksi apabila kondisi terpenuhi
    } else { //Apabila kondisi tidak terpenuhi maka lakukan aksi di bawah
        cout << a << " Bukan Genap";  //Aksi apabila kondisi tidak terpenuhi
    }  //Penutup dari else {
    return 0; //Untuk memberitahu kepada compiler bahwa program telah selesai dieksekusi
} //Penutup dari int main(){
