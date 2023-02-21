#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
using std::pow;
int main()
{
    //Variables;
    int lis1[5], size = 0;
    int numero;
    int i, j;
    int AC, BC, CC = 0;
    int opus;
    /// Menú del programa que contiene la serie de ejericios, te permite escoje uno de los ejercicios disponibles. 
    cout << 
        "///Hola, bienvenido a los ejercicios programados por C.G.M.G/// \n"
        "Escoje que programa quieres correr, introduce el valor corresponiente \n"
        "1. Altura y Perimetro de un rectangulo. \n"
        "2. Suma de enteros y promedio.  \n"
        "3. Distancias entre dos puntos. \n"
        "4. Entrar numeros del 8 al 23. \n"
        "5. Altura y Perimetro usando while.\n"
        "6. Entrar nuemeros enteros y que indique el valor mas bajo. \n"
        << std::endl;
    cout << "opcion seleccionada:" << std::endl;
    cin >> opus;

    // Serie de ejercicios
    if (opus == 1) {
        int Altura = 0;
        int Base = 0; 
        int Total= 0;
        cout << "Ingrese un valor de altura: ";
        cin >> Altura;
        cout << "Ingrese un valoe de base: ";
        cin >> Base;
        cout << "La area de la figura es: " << (Total = (Altura * Base)) << std::endl;
        cout << "El Perimetro de la figura es:" << (Total = (2 * Altura) + (2 * Base)) << std::endl;
    }
    //
    else  if (opus == 2){

        double dato, suma = 0.0;


        for (int i = 0; i < 5; i++) {
            cout << "Introduce el dato " << i + 1 << ": ";
            cin >> dato;
            suma = suma + dato;
        }

        cout << "La suma de los 5 datos introducidos es: " << suma<< " Y el promedio es: " << (suma/5) << endl;

        return 0;
    }
    
    ////
    else if (opus == 3){
        double x1 = 0, x2=0, y1=0, y2=0, d=0;
            cout << "Introducir Punto x1 ";
            cin >> x1;
            cout << "introducir y1 ";
            cin >> y1;
            cout << "introducir x2 ";
            cin >> x2;
            cout << "introducir y2 ";
            cin >> y2;
            d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

            cout << "Distancia " << d << std::endl;
        }
    ////
    if (opus == 4) {
        for (i = 8; i <= 23; i++) {
            cout << "pon el numero " << i << ":";
            cin >> j;
            if (j != i) {
                cout << "numero equivocado " << i << " puso " << j <<"\n" << std::endl;
                cout << "Intentar de nuevo \n";
                cout << "pon el numero " << i << ":";
                cin >> j;
            }
        }
    }
    ////
    if (opus == 5) {
        int i = 8;
        int j = 0;
        while (i <= 23) {
            cout << "pon el numero: " << i << " ";
            cin >> j;
            if (j != i) {
               cout << "numero equivocado " << i << " puso " << j << "\n" << std::endl;
               cout << "Intentar de nuevo \n";
               cout << "pon el numero " << i << ":";
               cin >> j;
            }
            i++;
        }
    }
    ///
    if (opus == 6) {
        int valorpe = std::numeric_limits<int>::max();
        int datoNuevo;
        for (int i = 0; i < 10; i++) {
            std::cout << "Agrega un valor entero " << i << ": ";
            std::cin >> datoNuevo;

            if (datoNuevo < valorpe) {
                valorpe = datoNuevo;
            }
        }

        std::cout << "El Valor más pequeño: " << valorpe << std::endl;
    }
    ///
    if (opus == 7) {
        int n, u0 = 1, u1 = 1, u;

            cout << "Ingrese variable entera: ";
          cin >> n;

        if (n == 0) {
            u = u0;
        }
        else if (n == 1) {
            u = u1;
        }
        else {
            for (int i = 2; i <= n; i++) {
                u = u0 + u1;
                u0 = u1;
                u1 = u;
            }
        }

        cout << "El valor es "<< "u(" << n << ") = " << u << endl;
    }
    ///
    if (opus == 8) {
        int N;
        int C = 1;
        int A;
        cout << "Ingrese numero: ";
        cin >> N;
        for (A = 1; A <= N; A++) {
            C = C * A;
        }
        cout << "El factorial de numero " << N << " es " << C << std::endl;
    }
    ///
    if (opus = 9) {
        srand(time(0));  // seed the random number generator with the current time
        int secretNumber = rand() % 100 + 1;  // generate a random number between 1 and 100
        int guess;
        int numGuesses = 0;
        do {
            cout << "Guess a number between 1 and 100: ";
            cin >> guess;
            numGuesses++;
            if (guess < secretNumber) {
                cout << "Too low! Guess again." << endl;
            }
            else if (guess > secretNumber) {
                cout << "Too high! Guess again." << endl;
            }
            else {
                cout << "Congratulations, you guessed the number in " << numGuesses << " guesses." << endl;
                char playAgain;
                cout << "Do you want to play again? (y/n) ";
                cin >> playAgain;
                if (playAgain == 'y') {
                    secretNumber = rand() % 100 + 1;
                    numGuesses = 0;
                }
                else {
                    break;
                }
            }
        } while (true);
        return 0;
    }
    if (opus > 10) {
        cout << "Opcion no valida" << std::endl;
    }


    return 0;
}
 
//int r=rand()%100+1