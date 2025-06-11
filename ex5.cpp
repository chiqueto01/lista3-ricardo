#include <iostream>

using namespace std;

class venda{
	private:
	double preco;
	int quant;
	double dinheiro;
	
	public:
	void ler(){
		cout << "preco do produto: ";
		cin >> preco;
		cout << "quantidade: ";
		cin >> quant;
		cout << "dinheiro pago: ";
		cin >> dinheiro;
	}
	
	void calcular(){
		double total = preco * quant;
		if(dinheiro >= total){
			double troco = dinheiro - total;
			cout << "Troco: " << troco;
		} else {
			double falta = total - dinheiro;
			cout << "Dinheiro insuficiente. Falta: " << falta;
		}
	}
};

int main(){
	venda v1;
	v1.ler();
	v1.calcular();
}
