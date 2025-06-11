#include <iostream>
#include <iomanip>

using namespace std;

class temperatura{
	private:
		char escala;
		double valor;
		
	public:
		void ler(){
			cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
			cin >> escala;
			cout << "Digite a temperatura: ";
			cin >> valor;
		}
		
		void converter(){
			double resultado;
			
			if (escala == 'F' || escala == 'f'){
				resultado = (5.0 / 9.0) * (valor - 32.0);
				cout << fixed << setprecision(2);
				cout << "Temperatura equivalente em Celsius: " << resultado;
			}
			else if (escala == 'C' || escala == 'c'){
				resultado = (9.0 / 5.0) * valor + 32.0;
				cout << fixed << setprecision(2);
				cout << "Temperatura equivalente em Fahrenheit: " << resultado;
			}
		}
};

int main(){
	temperatura t;
	t.ler();
	t.converter();
}
