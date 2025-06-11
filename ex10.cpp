#include <iostream>

using namespace std;

class multiplos{
	private:
		int v1, v2;
		
	public:
		void ler(){
			cout << "Digite dois numeros inteiros: " << endl;
			cin >> v1 >> v2;
		}
		
		void verificar(){
			int maior, menor;
			
			if (v1 > v2){
				maior = v1;
				menor = v2;
			} else {
				maior = v2;
				menor = v1;
			}
			
			if (menor == 0){
				cout << "Nao sao multiplos" << endl;
				return;
			}
			
			if (maior % menor == 0){
				cout << "Sao multiplos" << endl;
			} else {
				cout << "Nao sao multiplos" << endl;
			}
		}
};

int main(){
	multiplos m;
	m.ler();
	m.verificar();
}
