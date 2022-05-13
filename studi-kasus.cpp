#include <iostream>
using namespace std;

// nama class diganti sesuai tema studi kasus
class Praktikum6 {
  public:
  // input
	void input(){
	    cout<<"Masukkan nama dosen = ";
	    cin >> dosen;
	    cout << "masukkan matakuliah = ";
	    cin >> matkul;
	    cout << "masukkan banyak nilai yang di masukkan = "; cin>>banyak_nilai;
	    for(int i=0;i<banyak_nilai;i++){
	      cout<<"Masukkan nilai ke-"<<i+1<<" = "; cin>>nilai[i];
	      
	  	}
	}

  // proses
  int minimal(){
			min=nilai[0];
			for(int i=0;i<banyak_nilai;i++){
				if(nilai[i]<min){
					min=nilai[i];
				}
			}
			return min;
		}
		
		int maximal(){
			max=nilai[0];
			for(int i=0;i<banyak_nilai;i++){
				if(nilai[i]>max){
					max=nilai[i];
				}
			}
			return max;
		}
		
		double rata2(){
			double jumlah=0;
			for(int i=0;i<banyak_nilai;i++){
				jumlah+=nilai[i];
			}
			rata=jumlah/banyak_nilai;
			return rata;
		}
  // output
void output(){
system("cls");
 // nama dosen
   cout<<"+-----------------------------------------------+\n";
   cout<<"|		DAFTAR NILAI 	 		|\n";
   cout<<"+-----------------------------------------------+\n";
   cout << "| Nama dosen: " << dosen<<"\t\t\t\t|"<<endl;
 // nama mata kuliah
   cout<<"+-----------------------------------------------+\n";
   cout << "| Nama Mata Kuliah: "<< matkul<<"\t\t\t\t|"<<endl;
 // daftar nilai
   for(int i=0;i<banyak_nilai;i++){
      cout<<"| Nilai ke-"<<i+1<<" = "<<nilai[i]<<"\t\t\t\t|"<<endl;
   }
   cout<<"+-----------------------------------------------+\n";
 // nilai min
   cout << "| Nilai Minimal: " << min <<"\t\t\t\t|"<<endl;
   cout<<"+-----------------------------------------------+\n";
 // nilai max
   cout << "| Nilai Maksimal: " << max <<"\t\t\t\t|"<< endl;
   cout<<"+-----------------------------------------------+\n";
 // nilai rata rata
   cout << "| Nilai Rata-rata: " << rata<<"\t\t\t\t|"<<endl;
   cout<<"+-----------------------------------------------+\n";
 }


  private:
    string dosen;
    string matkul;
    int banyak_nilai;
    int nilai[50];
    int min, max;
    double rata;
};

int main(){
  Praktikum6 x;
  x.input();
  x.minimal();
  x.maximal();
  x.rata2();
  x.output();
  
}
