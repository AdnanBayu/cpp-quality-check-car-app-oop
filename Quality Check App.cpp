#include <iostream>
using namespace std;

//mendeclare variabel masing-masing komponen dari mobil di luar agar dapat diakses semua class
//mendeclare komponen interior mobil
float kursidepan, kursibelakang, sabukpengaman, kacafilm, headunit, daskboard, karpet;
//mendeclare komponen exterior mobil
float lampuutama, lampusein, lampubelakang, pintudepan, pintubelakang, roda, kapdepan;
//mendeclare komponen mesin mobil
float radiator, olimesin, oligearbox, minyakrem, aki, remabs, sistempendingin;
//mendeclare variabel yang akan menyimpan nilai rata-rata error dari tiap divisi
float totalInterior, totalExterior, totalMesin;

//membuat class Mobil sebagai induk dari semua class
class Mobil{
private:
	//nilai totalQC dibuat menjadi private dan dapat diubah dengan memanfaatkan konsep enkapsulasi
    float totalQC;
public:
	//fungsi hasilQC berguna untuk mengubah nilai totalQC yang di enkapsulasi
	float hasilQC(){
		return totalQC = totalInterior + totalExterior + totalMesin;
	}
	//fungsi hasilQC akan menampilkan nilai error total dan masing-masing divisi, 
	//menampilkan keputusan apakah mobil lolos tes QC atau tidak, serta menampilkan semua data 
	//tersebut dalam bentuk UI yang rapi
	void hasilQC(string neo){
		//disini nilai error ditampilkan dengan tampilan UI yang rapi
		cout<<"__________________________________________________"<<endl;
		cout<<"|              Quality Control Result            |"<<endl;
		cout<<"|__________________PT NEO-SANTARA________________|\n"<<endl;
		cout<<"Nilai error rata-rata interior : "<<totalInterior<<" %"<<endl;
		cout<<"Nilai error rata-rata eksterior : "<<totalExterior<<" %"<<endl;
		cout<<"Nilai error rata-rata mesin : "<<totalMesin<<" %"<<endl;
		cout<<"Nilai error rata-rata total : "<<totalQC<<" %"<<endl;
		cout<<"\n___________________________________________________"<<endl;
		//apabila nilai total rata-rata error dibawah 2 persen maka mobil lolos tes quality control, 
		//jika lebih tidak lolos
		if(totalQC>2){
			cout<<"|         Mobil Tidak Lolos Quality Control       |"<<endl;
			cout<<"|_________________________________________________|\n"<<endl;
		}
		else{
			cout<<"|            Mobil Lolos Quality Control          |"<<endl;
			cout<<"|_________________________________________________|\n"<<endl;
		}
		cout<<"|\tAplikasi Dibuat Oleh:\t|\n"<<neo<<endl;
		//pada bagian ini aplikasi akan dipause dan user diminta untuk melakukan press key "enter"
		system("pause");
		system("cls");
		//screen pada bagian ini akan terhapus dan berganti ke tahap selanjutnya
	}
};

//dibuat class Interior sebagai subclass dari class Mobil
class Interior: public Mobil{
public:
	//dengan menggunakan fungsi, user diminta untuk melakukan input nilai error masing-masing komponen
	void cekKursiDepan(){
		cout<<"Nilai error (dalam %) pemasangan kursi depan :";
		cin>>kursidepan;
	}
	void cekKursiBelakang(){
		cout<<"Nilai error (dalam %) pemasangan kursi belakang :";
		cin>>kursibelakang;
	}
	void cekSabukPengaman(){
		cout<<"Nilai error (dalam %) pemasangan sabuk pengaman :";
		cin>>sabukpengaman;
	}
	void cekKacaFilm(){
		cout<<"Nilai error (dalam %) pemasangan kaca film :";
		cin>>kacafilm;
	}
	void cekHeadUnit(){
		cout<<"Nilai error (dalam %) pemasangan head unit :";
		cin>>headunit;
	}
	void cekDaskboard(){
		cout<<"Nilai error (dalam %) pemasangan daskboard :";
		cin>>daskboard;
	}
	void cekKarpet(){
		cout<<"Nilai error (dalam %) pemasangan karpet :";
		cin>>karpet;
	}
	//nilai error total pada class ini akan dimasukkan pada variabel totalInterior menggunakan fungsi
	//hasilInterior
	void hasilInterior(){
	    totalInterior = 0;
		totalInterior = (kursidepan + kursibelakang + sabukpengaman + kacafilm + headunit + daskboard + karpet)/7;
	}
}Mobil1;

//dibuat class Exterior sebagai subclass dari class Mobil
class Exterior: public Mobil{
public: 
	//dengan menggunakan fungsi, user diminta untuk melakukan input nilai error masing-masing komponen
	void cekLampuUtama(){
		cout<<"Nilai error (dalam %) pemasangan lampu utama :";
		cin>>lampuutama;
	}
	void cekLampuSein(){
		cout<<"Nilai error (dalam %) pemasangan lampu sein :";
		cin>>lampusein;
	}
	void cekLampuBelakang(){
		cout<<"Nilai error (dalam %) pemasangan lampu belakang :";
		cin>>lampubelakang;
	}
	void cekPintuDepan(){
		cout<<"Nilai error (dalam %) pemasangan pintu depan :";
		cin>>pintudepan;
	}
	void cekPintuBelakang(){
		cout<<"Nilai error (dalam %) pemasangan pintu belakang :";
		cin>>pintubelakang;
	}
	void cekRoda(){
		cout<<"Nilai error (dalam %) pemasangan roda :";
		cin>>roda;
	}
	void cekKapDepan(){
		cout<<"Nilai error (dalam %) pemasangan kap depan :";
		cin>>kapdepan;
	}
	//nilai error total pada class ini akan dimasukkan pada variabel totalInterior menggunakan fungsi
	//hasilExterior
	void hasilExterior(){
	    totalExterior = 0;
		totalExterior = (lampuutama + lampusein + lampubelakang + pintudepan + pintubelakang + roda + kapdepan)/7;
	}
}Mobil2;

class Mesin: public Mobil{
public:
	//dengan menggunakan fungsi, user diminta untuk melakukan input nilai error masing-masing komponen
	void cekRadiator(){
		cout<<"Nilai error (dalam %) pemasangan radiator :";
		cin>>radiator;
	}
	void cekOliMesin(){
		cout<<"Nilai error (dalam %) pemasangan oli mesin :";
		cin>>olimesin;
	}
	void cekOliGearbox(){
		cout<<"Nilai error (dalam %) pemasangan oli gearbox :";
		cin>>oligearbox;
	}
	void cekMinyakRem(){
		cout<<"Nilai error (dalam %) pemasangan minyak rem :";
		cin>>minyakrem;
	}
	void cekPemasanganAki(){
		cout<<"Nilai error (dalam %) pemasangan aki :";
		cin>>aki;
	}
	void cekremABS(){
		cout<<"Nilai error (dalam %) pemasangan ABS :";
		cin>>remabs;
	}
	void cekSistemPendingin(){
		cout<<"Nilai error (dalam %) pemasangan sistem pendingin :";
		cin>>sistempendingin;
	}
	//nilai error total pada class ini akan dimasukkan pada variabel totalInterior menggunakan fungsi
	//hasilMesin
	void hasilMesin(){
	    totalMesin = 0;
		totalMesin = (radiator + olimesin + oligearbox + minyakrem + aki + remabs + sistempendingin)/7;
	}
}Mobil3;

//dibuat sebuah fungsi diluar class untuk melakukan check username dan password input dari user
//jika username atau password yang diinput user merupakan angka (bukan alfabet) maka program
//akan memberikan error message dengan menggunakan konsep exception handling
string checkAkun(string unameakun, string passakun){
    for(int i=0;i<unameakun.length()-1;i++){
        if(isdigit(unameakun[i])){
            throw "Username bukan angka numeric";
        }
    }
    for(int i=0;i<passakun.length()-1;i++){
        if(isdigit(passakun[i])){
            throw "Password bukan angka numeric";
        }
    }
    return "Press enter..........";
}
void loginSystem(){
	//berikut adalah database username dan password dari aplikasi QC ini
	//username dan password ini juga akan menentukan keluaran UI yang akan 
	//ditampilkan pada user aplikasi
	const char* databaseusername[3] = {"interiorr", "exteriorr", "mesinn"};
	const char* databasepassword[3]= {"interiorrr", "exteriorrr", "mesinnn"};
	string uname;
	string pass;
	//Welcome screen pada login screen untuk memperbagus tampilan
	cout<<"__________________________________________________"<<endl;
	cout<<"|               Portal Login Karyawan            |"<<endl;
	cout<<"|__________________PT NEO-SANTARA________________|\n"<<endl;
	//user diminta memasukkan username serta password pada aplikasi
	cout<<"Masukkan username : ";
	cin>>uname;
	cout<<"Masukkan password : ";
	cin>>pass;
	system("cls");
	//disini digunakan konsep exception handling yang akan melempar error message
	try{checkAkun(uname, pass);}catch(const char *salahinput){cout<<salahinput<<endl;}
	system("pause");
	system("cls");
	//disini ditentukan apakah user adalah QC divisi interior, eksterior, atau mesin
	if(uname==databaseusername[0] && pass==databasepassword[0]){
	cout<<"___________________________________________________"<<endl;
	cout<<"|             Input Data Quality Control           |"<<endl;
	cout<<"|_____________________INTERIOR_____________________|\n"<<endl;
		Mobil1.cekKursiDepan();
		Mobil1.cekKursiBelakang();
		Mobil1.cekSabukPengaman();
		Mobil1.cekKacaFilm();
		Mobil1.cekHeadUnit();
		Mobil1.cekDaskboard();
		Mobil1.cekKarpet();
		Mobil1.hasilInterior();
		system("cls");
	}
	else if(uname==databaseusername[1] && pass==databasepassword[1]){
	cout<<"___________________________________________________"<<endl;
	cout<<"|             Input Data Quality Control           |"<<endl;
	cout<<"|_____________________EXTERIOR_____________________|\n"<<endl;
		Mobil2.cekLampuUtama();
		Mobil2.cekLampuSein();
		Mobil2.cekLampuBelakang();
		Mobil2.cekPintuDepan();
		Mobil2.cekPintuBelakang();
		Mobil2.cekRoda();
		Mobil2.cekKapDepan();
		Mobil2.hasilExterior();
		system("cls");
	}
	else if(uname==databaseusername[2] && pass==databasepassword[2]){
	cout<<"___________________________________________________"<<endl;
	cout<<"|             Input Data Quality Control           |"<<endl;
	cout<<"|_______________________MESIN______________________|\n"<<endl;
		Mobil3.cekRadiator();
		Mobil3.cekOliMesin();
		Mobil3.cekOliGearbox();
		Mobil3.cekMinyakRem();
		Mobil3.cekPemasanganAki();
		Mobil3.cekremABS();
		Mobil3.cekSistemPendingin();
		Mobil3.hasilMesin();
		system("cls");
	}
	else{
		cout<<"\n !! username atau password anda salah !! \n"<<endl;
		system("pause");
		system("cls");
	}
}

int main(){
	Mobil Santara;
	int op;
	//welcome screen aplikasi untuk memperbagus tampilan
	cout<<"__________________________________________________"<<endl;
	cout<<"|             Aplikasi Quality Control           |"<<endl;
	cout<<"|__________________PT NEO-SANTARA________________|"<<endl;
	do{
		//menu screen dengan opsi login, menampilkan nilai QC, dan exit aplikasi
		cout<<"________"<<endl;
		cout<<"| Menu |"<<endl;
		cout<<"1. Login"<<endl;
		cout<<"2. Cek Hasil QC"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"\npilihan : ";
		cin>>op;
		system("cls");
		if(op==1){
			loginSystem();
		}
		else if(op==2){
			//disini diterapkan konsep polimorfisme yakni overloading
		    Santara.hasilQC();
			Santara.hasilQC("|\tKelompok Satu\t\t|");
		}
		else if(op==0){
			cout<<"Menutup aplikasi...\n";
			system("pause");
			system("cls");
		}
		else{
			cout<<"Tidak ada opsi tersebut dalam menu!\n\n\n"<<endl;
			system("pause");
			system("cls");
		}
	//menu screen memanfaatkan fitur do while loop
	}while(op!=0);
}

