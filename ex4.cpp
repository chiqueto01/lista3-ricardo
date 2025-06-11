#include <iostream>

using namespace std;

class telefone{
	private: 
		int minuto;
	public:
		void lermin(){
			cout<<"informe os minutos: ";
			cin>> this -> minuto;
		}
		void calcular(){
			
			double valorAPagar;
	        if (this->minuto <= 100) {
	            valorAPagar = 50.;
	        }else {
	            int minutosExcedentes = this-> minuto - 100;
	            valorAPagar = 50 + (minutosExcedentes * 2);
	        }
	        cout << "Valor a pagar total do plano com os acrescimos: " << valorAPagar << endl;
	    }
	
};
int main(){
	telefone numer1;
	numer1.lermin();
	numer1.calcular();
}
