#include <iostream> //bib padr�o c++ e/s de dados
#include <math.h> //Biblioteca de a��es matematicas
#include <locale.h>//Corrigi aberra��es de escrita
#include "calculadora.h" //bib pr�pria!
#include "calculadora_av.h" //Biblioteca da Avalia��o
#include "test_num.h" //Bibioteca de teste condicional e numeros


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu(){
	cout << "\n\n/////////////////////////////////////////////////////\n\n";
	cout << "Calculadora:\n";
	cout << "1-Soma\n";
	cout << "2-Subtrac�o\n";
	cout << "3-Multiplica��o\n";
	cout << "4-Divis�o\n";
	cout << "5-Pot�ncia\n";
	cout << "6-Raiz\n";
	cout << "7-Testar se o n�mero � par ou �mpar\n";
	cout << "8-Testar se o n�mero � primo\n";
	cout << "? ";	
	int op;
	cin >> op; //lendo op��o do usu�rio
	return op;
}

float obter_num(int n){
	cout << "Digite n" << n << ": ";
	float r;
	cin >> r;
	return r; 
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int op(0);
	float resp, n1, n2;
	do{
		op = menu();
		switch (op){
			case 1:
				//soma
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = soma(n1, n2);
				cout << "Soma �: " << resp << endl;
				break;
				
			case 2:
				//subtracao
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = subtracao(n1, n2);
				cout << "Subtra��o �: " << resp << endl;
				break;
					
			case 3:
				//multiplicacao
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = multiplicacao(n1, n2);
				cout << "Multiplica��o �: " << resp << endl;
				break;
				
			case 4:
				//divis�o
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = divisao(n1, n2);
				cout << "Divis�o �: " << resp << endl;
				break;
				
			case 5:
				//pot�ncia
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = potencia(n1, n2);
				cout << "Pot�ncia �: " << resp << endl;
				break;
							
			case 6:
				//raiz
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = raiz(n1, n2);
				cout << "Raiz �: " << resp << endl;
				break;	
					
			case 7:
				//Teste de Par ou �mpar
				n1 = obter_num(1);
				resp = test_num_tipo((int)n1);

				if(resp == 0){	
					cout << "O n�mero "<< n1 << " � Par" << endl;
			    }
			    
			    else{
			    	cout << "O n�mero "<< n1 << " � �mpar" << endl;
				}
				
				break;	
				
			case 8:
				//Teste de Primo
				n1 = obter_num(1);
				resp = test_num_primo((int)n1);
	
				if(resp == 2){
				cout << "O n�mero " << n1 << " � primo!" << endl;
				}
				
				else{
					cout << "O n�mero " << n1 << " N�o � primo!" << endl;
				}
				
				break;	
			default:
				//fim de programa
				cout << "Fim de programa!\n";			
		}	
	} while((op<=8) && (op>=1));
	
	system("pause");
	
	return 0;
}
