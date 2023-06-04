#include <iostream>
#include<string>
using namespace std;

void Opcion1()
{
    system("cls");
    int A = 0;

    while (A < 101) {
        cout << "Los numeros del 1 al 100 son: " << A << endl;
        A++;
    }
}

void Opcion2()
{
    system("cls");

    int B = 100;

    while (B >= 0) {
        cout << " Los numeros del 100 al 0 son: " << B << endl;
        B--;
    }
}

void Opcion3()
{
    system("cls");
    
    int C = 2;

    while (C < 101) {
        cout << " Los numeros pares hasta el 100 son: " << C << endl;
        C += 2;
    }
}

void Opcion4()
{
    system("cls");

    int D = 1;
    int Suma = 0;

    while (D <= 100) {
        Suma += D;
        D++;
    }

    cout << "La suma de los 100 primeros numeros es: " << Suma << endl;
}

void Opcion5()
{
    system("cls");

    int E = 1;
    int Son = 0;

    while (E < 100) {
        cout << E << endl;
        E += 2;
        Son++;
    }

    cout << "La cantidad de numeros impares es: " << Son << endl;
}

void Opcion6()
{
    system("cls");

    int F = 0;
    int G = 0;

    cout << "Introduce un numero: ";
    cin >> G;

    while (F < G) {
        F++;
        cout << F << endl;
    }
}

void Opcion7()
{
    system("cls");

    std::string Ress = "S";
    std::string Frases = "";
    int c = 0;

    while (Ress == "S") {
        std::cout << "Frase: ";
        std::getline(std::cin >> std::ws, Frases);

        c++;

        std::cout << "¿Deseas introducir otra frase (S/N)?: ";
        std::getline(std::cin >> std::ws, Ress);
    }

    std::cout << "El numero de frases introducidas es: " << c << std::endl;
}

void Opcion8()
{
    system("cls");

    std::string res = " ";

    while (res != "S" && res != "N") {
        std::cout << "Introduce S o N: ";
        std::getline(std::cin >> std::ws, res);
        res = std::toupper(res[0]);
    }
}

void Opcion9()
{
    system("cls");

    int num = 0;

    cout << "Introduce un número: ";
    cin >> num;

    if (num >= 0) {
        cout << "Es positivo" << endl;
    }
    else {
        cout << "Es negativo" << endl;
    }
}

void Opcion10()
{
    system("cls");

    int i = 3;
    int n = 0;
    int c = 0;

    cout << "Numero: ";
    cin >> n;

    while (i <= n) {
        if (i == (i / 3) * 3) {
            cout << i << std::endl;
            c++;
        }

        i++;
    }

    cout << "El numero de multiplos de 3 son: " << c << endl;
}

void Opcion11()
{
    system("cls");

    int i = 1;
    int Suma_par = 0;
    int Suma_imp = 0;

    while (i < 101) {
        if (i == (i / 2) * 2) {
            Suma_par += i;
        }
        else {
            Suma_imp += i;
        }

        i++;
    }

    cout << "La suma de los pares es: " << Suma_par << endl;
    cout << "La suma de los impares es: " << Suma_imp << endl;
}

void Opcion12()
{
    system("cls");

    int i = 1;
    int c = 0;

    while (i < 101) {
        if (i == (i / 2) * 2 || i == (i / 3) * 3) {
            c++;
            cout << i << endl;
        }

        i++;
    }

    cout << "El numero de multiplos es de: " << c << endl;
}

void Opcion13()
{
    system("cls");

    int con = 0;
    int n = 0;
    int maximo = 0;
    int minimo = 99999;

    while (con <= 5) {
        std::cout << "Número: ";
        std::cin >> n;

        if (n > maximo) {
            maximo = n;
        }

        if (n < minimo) {
            minimo = n;
        }

        con++;
    }

    cout << "El mayor de los números es: " << maximo << endl;
    cout << "El menor de los números es: " << minimo << endl;
}

void Opcion14()
{
    system("cls");

    int num1 = 0;
    int num2 = 0;
    int aux = 0;
    int son = 0;
    int pares = 0;
    int sumaimpa = 0;

    cout << "Número: ";
    cin >> num1;

    cout << "Número: ";
    cin >> num2;

    if (num1 > num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    while (num1 <= num2) {
        cout << num1 << endl;
        son++;

        if (num1 == (num1 / 2) * 2) {
            pares++;
        }
        else {
            sumaimpa += num1;
        }

        num1++;
    }

    cout << "Números visualizados: " << son << endl;
    cout << "Pares hay: " << pares << endl;
    cout << "La suma de los impares es: " << sumaimpa << endl;
}

void Opcion15()
{
    system("cls");

    int Serie = 0;

    while (Serie <= 10) {
        int numero = 1;

        while (numero <= 10) {
            std::cout << numero << std::endl;
            numero++;
        }

        Serie++;
    }
}

int main() {
    int OPC;

    do {
        cout << "=== Menu seleccione un ejercicio, para salir escriba 00.===\n";
        cout << "1. Imprima los numeros del 1 al 100.\n";
        cout << "2. Imprima los numeros del 100 al 0, en orden decreciente.\n";
        cout << "3. Imprima los numeros pares entre 0 y 100.\n";
        cout << "4. Imprima la suma de los 100 primeros numeros.\n";
        cout << "5. Imprima los numeros impares hasta el 100 y que imprima cuantos impares hay.\n";
        cout << "6. Imprima todos los numeros naturales que hay desde la unidad hasta un numero que introducimos por teclado.\n";
        cout << "7. Introducir tantas frases como queramos y contarlas.\n";
        cout << "8. Hacer un algoritmo que solo nos permita introducir S o N.\n";
        cout << "9. Caso 9\n";
        cout << "10. Introducir un numero por teclado. Que nos diga si es positivo o negativo.\n";
        cout << "11. Imprimir y contar los multiplos de 3 desde la unidad hasta un numero que introducimos por teclado.\n";
        cout << "12. imprima los numeros del 1 al 100. Que calcule la suma de todos los numeros pares por un lado, y por otro, la de todos los impares.\n";
        cout << "13. Imprimir y contar los numeros que son multiplos de 2 o de 3 que hay entre 1 y 100.\n";
        cout << "14. Imprima el mayor y el menor de una serie de cinco numeros que vamos introduciendo por teclado.\n";
        cout << "15. Imprimir los numeros naturales que hay entre ambos numeros empezando por el m s pequeño, contar cuantos hay y cuantos de ellos son pares.Calcular la suma de los impares.\n";
        cout << "00. Salir.\n";
        cout << "Ingrese el numero de opcion que desea seleccionar: ";
        cin >> OPC;

        switch (OPC) {
        case 0:
            cout << "Saliendo del programa...\n";
            break;
        case 1:
            Opcion1();
            break;
        case 2:
            Opcion2();
            break;

        case 3:
            Opcion3();
            break;

        case 4:
            Opcion4();
            break;

        default:
            cout << "Opción inválida. Por favor, ingrese un número válido.\n";
            break;
        }

        cout << endl;

    } while (OPC != 0);
}