#include <iostream>
using namespace std;

// nama class diganti sesuai tema studi kasus
class Praktikum6 {
  public:
  // input


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
  x.minimal();
  x.maximal();
  x.rata2();
  
}
