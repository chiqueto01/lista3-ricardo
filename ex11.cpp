#include <iostream>
#include <iomanip>

using namespace std;

class salario{
	private:
		double valor;
	
	public:
		void ler(){
			cout << "Digite o salario da pessoa: ";
			cin >> valor;
		}
		
		void calcular_reajuste(){
			double aumento, novo_salario;
			int porcentagem;
			
			if (valor <= 1000.00){
				porcentagem = 20;
			}
			else if (valor <= 3000.00){
				porcentagem = 15;
			}
			else if (valor <= 8000.00){
				porcentagem = 10;
			}
			else {
				porcentagem = 5;
			}
			
			aumento = valor * porcentagem / 100.0;
			novo_salario = valor + aumento;
			
			cout << fixed << setprecision(2);
			cout << "Novo salario = R$ " << novo_salario << endl;
			cout << "Aumento = R$ " << aumento << endl;
			cout << "Porcentagem = " << porcentagem << " %" << endl;
		}
};


int main(){
	salario funcionario;
	funcionario.ler();
	funcionario.calcular_reajuste();
}
