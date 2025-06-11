#include <iostream>
#include <math.h>

using namespace std;

class baskhara{
	private:
		double a;
		double b;
		double c;
		
	public:
		void ler(){
			cout<<"informe o valor de a";
			cin>>this -> a;
				cout<<"informe o valor de b";
			cin>>this -> b;
				cout<<"informe o valor de c";
			cin>>this -> c;
		}
		void calcular(){
			if(a == 0){
				cout<<"nao é uma equacao de segundo grau ";
				return;
			}
			double delta = (b * b) - (4 * a * c);
			if(delta < 0){
				cout<<"raiz é igual a 0";
			}else{
				double x1 = (-b + sqrt(delta)) / (2 * a);
            	double x2 = (-b - sqrt(delta)) / (2 * a);
            	cout<<"x1 : "<<x1;
            	cout<<" x2: "<<x2;
			}
		
		}
};
int main(){
	baskhara novo;
	novo.ler();
	novo.calcular();
}
