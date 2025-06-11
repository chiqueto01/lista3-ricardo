#include <iostream>

using namespace std;

class glicose{
	private:
		double medida;
	
	public:
		void ler(){
			cout << "Digite a medida da glicose: ";
			cin >> medida;
		}
		
		void classificar(){
			if(medida <= 100){
				cout << "Classificacao Normal";
			}
			else if(medida <= 140){
				cout << "Classificacao Elevado";
			}
			else{
				cout << "Classificacao Diabetes";
			}
		}
};


int main(){
	glicose exame;
	exame.ler();
	exame.classificar();
}
