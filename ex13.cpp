#include <iostream>

using namespace std;

class plano{
	private:
		double x;
		double y;
		
	public:
		void ler_ponto(){
			cout << "Valor de X: ";
			cin >> x;
			cout << "Valor de Y: ";
			cin >> y;
		}
		
		void achar_quadrante(){
			if (x == 0.0 && y == 0.0){
				cout << "Origem" << endl;
			}
			else if (x == 0.0){
				cout << "Eixo Y" << endl;
			}
			else if (y == 0.0){
				cout << "Eixo X" << endl;
			}
			else if (x > 0.0 && y > 0.0){
				cout << "Q1" << endl;
			}
			else if (x < 0.0 && y > 0.0){
				cout << "Q2" << endl;
			}
			else if (x < 0.0 && y < 0.0){
				cout << "Q3" << endl;
			}
			else {
				cout << "Q4" << endl;
			}
		}
};


int main(){
	plano ponto;
	ponto.ler_ponto();
	ponto.achar_quadrante();
}
