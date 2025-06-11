#include <iostream>

using namespace std;

class dardo{
	private:
		double d1;
		double d2;
		double d3;
	
	public:
		void ler(){
			cout << "Digite as tres distancias:\n";
			cin >> d1;
			cin >> d2;
			cin >> d3;
		}
		
		void verificar_maior(){
			if (d1 > d2 && d1 > d3){
				cout << "MAIOR DISTANCIA = " << d1;
			}
			else if (d2 > d3){
				cout << "MAIOR DISTANCIA = " << d2;
			}
			else {
				cout << "MAIOR DISTANCIA = " << d3;
			}
		}
};

int main(){
	dardo atleta;
	atleta.ler();
	atleta.verificar_maior();
}
