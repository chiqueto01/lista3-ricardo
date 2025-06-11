#include <iostream>

using namespace std;

class jogo{
	private:
		int inicial;
		int final;
		
	public:
		void ler(){
			cout << "Hora inicial: ";
			cin >> inicial;
			cout << "Hora final: ";
			cin >> final;
		}
		
		void calcular_duracao(){
			int duracao;
			
			if (inicial < final) {
				duracao = final - inicial;
			}
			else {
				duracao = (24 - inicial) + final;
			}
			
			cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
		}
};

int main(){
	jogo partida;
	partida.ler();
	partida.calcular_duracao();
}
