#include <iostream>

using namespace std;

class Numero{
	private:
		int a;
		int b;
		int c;
	public:
		void ler(){
			cout<<"informe o valor de a";
			cin>>this -> a;
				cout<<"informe o valor de b";
			cin>>this -> b;
				cout<<"informe o valor de c";
			cin>>this -> c;
		}
		void verificar (){
			int menor = this->a;

        	if(this->b < menor){
            menor= this->b;
        }
        if(this->c < menor){
            menor= this->c;
		}
		cout<<"menor valor: "<< menor;
	}
};

int main(){
	Numero novo;
	novo.ler();
	novo.verificar();
}

