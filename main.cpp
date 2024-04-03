#include <iostream> //bib padrão c++ e/s de dados
#include <math.h> //Biblioteca de ações matematicas
#include <locale.h>//Corrigi aberrações de escrita
#include "calculadora.h" //bib própria!
#include "calculadora_av.h" //Biblioteca da Avaliação
#include "test_num.h" //Bibioteca de teste condicional e numeros


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu(){
	cout << "\n\n/////////////////////////////////////////////////////\n\n";
	cout << "Calculadora:\n";
	cout << "1-Soma\n";
	cout << "2-Subtracão\n";
	cout << "3-Multiplicação\n";
	cout << "4-Divisão\n";
	cout << "5-Potência\n";
	cout << "6-Raiz\n";
	cout << "7-Testar se o número é par ou ímpar\n";
	cout << "8-Testar se o número é primo\n";
	cout << "? ";	
	int op;
	cin >> op; //lendo opção do usuário
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
				cout << "Soma é: " << resp << endl;
				break;
				
			case 2:
				//subtracao
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = subtracao(n1, n2);
				cout << "Subtração é: " << resp << endl;
				break;
					
			case 3:
				//multiplicacao
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = multiplicacao(n1, n2);
				cout << "Multiplicação é: " << resp << endl;
				break;
				
			case 4:
				//divisão
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = divisao(n1, n2);
				cout << "Divisão é: " << resp << endl;
				break;
				
			case 5:
				//potência
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = potencia(n1, n2);
				cout << "Potência é: " << resp << endl;
				break;
							
			case 6:
				//raiz
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = raiz(n1, n2);
				cout << "Raiz é: " << resp << endl;
				break;	
					
			case 7:
				//Teste de Par ou Ímpar
				n1 = obter_num(1);
				resp = test_num_tipo((int)n1);

				if(resp == 0){	
					cout << "O número "<< n1 << " é Par" << endl;
			    }
			    
			    else{
			    	cout << "O número "<< n1 << " é Ímpar" << endl;
				}
				
				break;	
				
			case 8:
				//Teste de Primo
				n1 = obter_num(1);
				resp = test_num_primo((int)n1);
	
				if(resp == 2){
				cout << "O número " << n1 << " é primo!" << endl;
				}
				
				else{
					cout << "O número " << n1 << " Não é primo!" << endl;
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
