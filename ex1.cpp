#include <iostream>

using namespace std;

class Aluno{
	private:
		double n1;
		double n2;
	
	public:
		void ler(){
			cout<<"informe a primeira nota do aluno: ";
			cin>>this -> n1;
			cout<<"informe a segunda nota do aluno: ";
			cin>>this -> n2;
		}
		double getNotaFinal(double n1; double n2){ return	this -> n1 + this -> n2;}
		void imprimir(){
			double notafinal = getNotaFinal();
			cout<<"nota final: "<< notafinal;
			if(notafinal < 60){
				cout<<"aluno reprovado";
			}
			else{
				cout<<"aluno reprovado ";
			}
		}
};
int main(){
	 Aluno aluno1;
	 aluno1.ler();
	 aluno1.imprimir();
}
