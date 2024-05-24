#include <locale>
#include <iostream>
//1 – Faça um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcule o salário desse funcionário.A seguir, mostre o número e o salário do funcionário.

/*using namespace std;

int salario(int a, int b);

int main() {
	locale::global(locale("pt_BR.UTF-8"));
	int num1, num2, num3;

	cout << "Qual é o seu número de funcionário? ";
	cin >> num1;
	cout << "Quantas horas vocâ trabalha? ";
	cin >> num2;
	cout << "Qual o valor que você recebe? ";
	cin >> num3;

	int resultado = salario(num2, num3);

	cout << "Número do Funcionário: " << num1;
	cout << "\nSalário: " << resultado;
}

int salario(int a, int b) {
	return a * b;
}*/

//2 – Fazer um programa para ler, a quantidade e o valor unitário de dois produtos e mostre quanto no final a pessoa deve pagar :

/*using namespace std;

float salario(float a, float b, float c, float d);

int main() {
	locale::global(locale("pt_BR.UTF-8"));
	float num1, num2, num3, num4;

	cout << "Qual é o valor do produto? ";
	cin >> num1;
	cout << "Quantidade: ";
	cin >> num2;
	cout << "Qual é o valor do produto? ";
	cin >> num3;
	cout << "Quantidade: ";
	cin >> num4;


	float resultado = salario(num1, num2, num3, num4);

	cout << "VALOR A PAGAR: " << resultado;
}

float salario(float a, float b, float c, float d) {
	return (a * b) + (c * d);
}*/

//3 - Fazer um programa que leia três valores: A, B e C. Em seguida, calcule e mostre :
//a) a área do triângulo retângulo que tem A por base e C por altura.
//Fórmula: A * C / 2.0
//b) a área do círculo de raio C. (pi = 3.14159)
//Fórmula: 3.14159 * C * C
//c) a área do trapézio que tem A e B por bases e C por altura.
//Fórmula: (A + B) / 2.0 * C
//d) a área do quadrado que tem lado B.
//Fórmula: B * B
//e) a área do retângulo que tem lado A e altura B.
//Fórmula: A * B

/*using namespace std;

float triangulo(float a, float c);
float circulo(float c);
float trapezio(float a, float b, float c);
float quadrado(float b);
float retangulo(float a, float c);

int main() {
	locale::global(locale("pt_BR.UTF-8"));
	float num1, num2, num3;

	cout << "Informe o valor de A: ";
	cin >> num1;
	cout << "Informe o valor de B: ";
	cin >> num2;
	cout << "Informe o valor de C: ";
	cin >> num3;

	float resultadoTriangulo = triangulo(num1, num3);
	float resultadoCirculo = circulo(num3);
	float resultadoTrapezio = trapezio(num1, num2, num3);
	float resultadoQuadrado = quadrado(num2);
	float resultadoRetangulo = retangulo(num1, num2);

	cout << "Triângulo: " << resultadoTriangulo;
	cout << "\nCírculo: " << resultadoCirculo;
	cout << "\nTrapézio: " << resultadoTrapezio;
	cout << "\nQuadrado: " << resultadoQuadrado;
	cout << "\nRetângulo: " << resultadoRetangulo;

}

float triangulo(float a, float c) {
	return a * c / 2.0;
}

float circulo(float c) {
	return 3.14159 * c * c;
}

float trapezio(float a, float b, float c) {
	return (a + b) / 2.0 * c;
}

float quadrado(float b) {
	return b * b;
}

float retangulo(float a, float b) {
	return a * b;
}*/