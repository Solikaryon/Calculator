#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cctype>
using namespace std;

// Código creado por Monjaraz Briseño Luis Fernando

// Función que valida que los datos ingresados por el usuario sean números (enteros o decimales)
bool ValidaNumeros(char *dato) {
    bool ban = true;
    int i = 0;
    int puntosDecimales = 0;
    while (*(dato + i) != '\0') {
        if (*(dato + i) != '.' && (*(dato + i) < '0' || *(dato + i) > '9')) {
            ban = false;
            break;
        }
        if (*(dato + i) == '.') {
            puntosDecimales++;
        }
        i++;
    }
    if (puntosDecimales > 1) {
        ban = false;
    }
    return ban;
}

// Función que valida que los datos ingresados por el usuario sean números (enteros)
bool ValidaNumerosEnteros(char *dato) {
    bool ban = true;
    int i = 0;
    if (*dato == '-' || *dato == '+') {
        i++;
    }
    while (*(dato + i) != '\0') {
        if (*(dato + i) < '0' || *(dato + i) > '9') {
            ban = false;
            break;
        }
        i++;
    }
    return ban;
}

// Función que valida que los datos ingresados por el usuario sean números (binarios 0 y 1)
bool ValidaBinario(char *dato) {
    bool ban = true;
    int i = 0;
    while (*(dato + i) != '\0') {
        if (*(dato + i) != '0' && *(dato + i) != '1') {
            ban = false;
            break;
        }
        i++;
    }
    return ban;
}

// Función que valida que los datos ingresados por el usuario sean números (hexadecimales)
bool ValidaHexadecimal(char *dato) {
    bool ban = true;
    int i = 0;
    while (*(dato + i) != '\0') {
        if ((*(dato + i) < '0' || *(dato + i) > '9') && (*(dato + i) < 'A' || *(dato + i) > 'F')) {
            ban = false;
            break;
        }
        i++;
    }
    return ban;
}

// 1 Función que realiza la suma de dos números
double suma(char *n1, char *n2) {
    double numero1 = 0, numero2 = 0, suma = 0;
    if (ValidaNumeros(n1) && ValidaNumeros(n2)) {
        numero1 = strtod(n1, NULL);
        numero2 = strtod(n2, NULL);
        suma = numero1 + numero2;
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return suma;
}

// 2 Función que realiza la resta de dos números
double resta(char *n1, char *n2) {
    double numero1 = 0, numero2 = 0, resta = 0;
    if (ValidaNumeros(n1) && ValidaNumeros(n2)) {
        numero1 = strtod(n1, NULL);
        numero2 = strtod(n2, NULL);
        resta = numero1 - numero2;
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return resta;
}

// 3 Función que realiza la multiplicación de dos números
double multi(char *n1, char *n2) {
    double numero1 = 0, numero2 = 0, multiplicacion = 0;
    if (ValidaNumeros(n1) && ValidaNumeros(n2)) {
        numero1 = strtod(n1, NULL);
        numero2 = strtod(n2, NULL);
        multiplicacion = numero1 * numero2;
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return multiplicacion;
}

// 4 Función que realiza la división de dos números
double div(char *n1, char *n2) {
    double numero1 = 0, numero2 = 0, division = 0;
    if (ValidaNumeros(n1) && ValidaNumeros(n2)) {
        numero1 = strtod(n1, NULL);
        numero2 = strtod(n2, NULL);
        division = numero1 / numero2;
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return division;
}

// EXTRA Función que realiza la división entera de dos números (Modulo)
int rd(char *n1, char *n2) {
    int numero1 = 0, numero2 = 0, residuo = 0;
    if (ValidaNumerosEnteros(n1) && ValidaNumerosEnteros(n2)) {
        numero1 = atoi(n1);
        numero2 = atoi(n2);
        residuo = numero1 % numero2;
    } else {
        cout << "Ingrese solo números enteros." << endl;
        return 0;
    }
    return residuo;
}

// 5 Función que realiza el porcentaje de un número respecto a otro
double porcentaje(char *n1, char *n2) {
    double numero1 = 0, numero2 = 0, porcentaje = 0;
    if (ValidaNumeros(n1) && ValidaNumeros(n2)) {
        numero1 = strtod(n1, NULL);
        numero2 = strtod(n2, NULL);
        porcentaje = (numero1 * numero2) / 100;
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return porcentaje;
}


// 6 Función que realiza la potencia de un número a la 2
double potencia(char *n1) {
    double numero1 = 0, potencia = 0;
    if (ValidaNumeros(n1)) {
        numero1 = strtod(n1, NULL);
        potencia = pow(numero1, 2);
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return potencia;
}

// 7 Función que realiza el factorial de un número
double factorial(char *n1) {
    double numero1 = 0, facto = 0;
    if (ValidaNumeros(n1)) {
        numero1 = strtod(n1, NULL);
        facto = tgamma(numero1+1);
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return facto;
}

// 8 Función que realiza la potencia de un número a la n
double potencia2(char *n1, char *n2) {
    double numero1 = 0, numero2 = 0, potencia2 = 0;
    if (ValidaNumeros(n1) && ValidaNumeros(n2)) {
        numero1 = strtod(n1, NULL);
        numero2 = strtod(n2, NULL);
        potencia2 = pow(numero1, numero2);
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return potencia2;
}

// 9 Función que realiza la raíz cuadrada de un número
double raiz(char *n1) {
    double numero1 = 0, raiz = 0;
    if (ValidaNumeros(n1)) {
        numero1 = strtod(n1, NULL);
        raiz = sqrt(numero1);
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return raiz;
}

// 10 Función que realiza el coseno de un número
double coseno(char *n1) {
    double numero1 = 0, coseno = 0;
    if (ValidaNumeros(n1)) {
        numero1 = strtod(n1, NULL);
        double rad = numero1 * M_PI / 180.0;
        coseno = cos(rad);
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return coseno;
}

// 11 Función que realiza el seno de un número
double seno(char *n1) {
    double numero1 = 0, seno = 0;
    if (ValidaNumeros(n1)) {
        numero1 = strtod(n1, NULL);
        double rad = numero1 * M_PI / 180.0;
        seno = sin(rad);
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return seno;
}

// 12 Función que realiza la tangente de un número
double tangente(char *n1) {
    double numero1 = 0, tangente = 0;
    if (ValidaNumeros(n1)) {
        numero1 = strtod(n1, NULL);
        double rad = numero1 * M_PI / 180.0;
        tangente = tan(rad);
    } else {
        cout << "Ingrese solo números." << endl;
        return 0;
    }
    return tangente;
}

// Desde aqui inicio lo feo para mi, me costo mucho esta parte :c.

// 13 Función que realiza la conversión de decimal a binario
string decbin(char *nb, int *decimal) {
    if (ValidaNumerosEnteros(nb)) {
        *decimal = atoi(nb);
        string resul = "";
        int aux = *decimal;
        int restante;
        while (aux > 0) {
            restante = aux % 2;
            resul = to_string(restante) + resul;
            aux = aux / 2;
        }
        return resul;
    }
    else {
        return "Invalido";
    }
}

// 14 Función que realiza la conversión de binario a decimal
int bindec(char *binario, int *decimal) {
    if (ValidaBinario(binario)) {
        int len = strlen(binario);
        *decimal = 0;
        int exp = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (*(binario + i) == '1') {
                *decimal += pow(2, exp);
            }
            exp++;
        }
        return *decimal;
    }
    else {
        cout << "El número ingresado no es binario" << endl;
        return 0;
    }
}

// 15 Función que realiza la conversión de decimal a octal
string decoct(char *nb) {
    if (ValidaNumerosEnteros(nb)) {
        int decimal = 0;
        decimal = atoi(nb);
        string resul = "";
        int aux = decimal;
        int restante;
        while (aux > 0) {
            restante = aux % 8;
            resul = to_string(restante) + resul;
            aux = aux / 8;
        }
        return resul;
    }
    else {
        return "Invalido";
    }
}

// 16 Función que realiza la conversión de octal a decimal
int octdec(char *octal, int *decimal) {
    if (ValidaNumerosEnteros(octal)) {
        int len = strlen(octal);
        *decimal = 0;
        int exp = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (*(octal + i) >= '0' && *(octal + i) <= '7') {
                *decimal += (*(octal + i) - '0') * pow(8, exp);
                exp++;
            } else {
                cout << "El número ingresado no es octal" << endl;
                return 0;
            }
        }
        return *decimal;
    } else {
        cout << "El número ingresado no es un número entero" << endl;
        return 0;
    }
}

// 17 Función que realiza la conversión de decimal a hexadecimal
void dechex(char *numero){
    int *co = NULL, *re = NULL;
    string *hexa = NULL;
    if (ValidaNumerosEnteros(numero)) {
        int ne = atoi(numero);
        int cociente = ne;
        int residuo = 0;
        co = &cociente;
        re = &residuo;
        string hexadecimal = "";
        char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
        hexa = &hexadecimal;
        while (*co > 0) {
            *re = *co % 16;
            *hexa = hex[*re] + *hexa;
            *co = *co / 16;
        }
        cout << "El número hexadecimal de " << ne << " es: " << hexadecimal << endl;
    }
    else {
        cout << "El número ingresado no es un número entero" << endl;
    }
}

// 18 Función que realiza la conversión de hexadecimal a decimal
void hexdec(char *numero) {
    if (ValidaHexadecimal(numero)) {
        int numeroDecimal = 0;
        int longitud = strlen(numero) - 1;
        for (int i = 0; i <= longitud; i++) {
            char c = *(numero + i);
            if (c >= '0' && c <= '9') {
                numeroDecimal += (c - '0') * pow(16, longitud - i);
            }
            if (c >= 'A' && c <= 'F') {
                numeroDecimal += (c - 'A' + 10) * pow(16, longitud - i);
            }
        }
        cout << "El número decimal de " << numero << " es: " << numeroDecimal << endl;
    }
    else {
        cout << "El número ingresado no es hexadecimal" << endl;
    }
}

// 19 Función que realiza la conversión de binario a octal
string decoctBINOCT(int *decimal) {
    string resul = "";
    int aux = *decimal;
    int restante;
    while (aux > 0) {
        restante = aux % 8;
        resul = to_string(restante) + resul;
        aux = aux / 8;
    }
    return resul;
}

// 20 Función que realiza la conversión de octal a binario
string decbinOCTBIN(int *decimal) {
    string resul = "";
    int aux = *decimal;
    int restante;
    while (aux > 0) {
        restante = aux % 2;
        resul = to_string(restante) + resul;
        aux = aux / 2;
    }
    return resul;
}

// 21 Función que realiza la conversión de binario a hexadecimal
string dechexBINOHEX(int *decimal) {
    int cociente = *decimal;
    int residuo = 0;
    string hexadecimal = "";
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while (cociente > 0) {
        residuo = cociente % 16;
        hexadecimal = hex[residuo] + hexadecimal;
        cociente = cociente / 16;
    }
    return hexadecimal;
}

// 22 Funciónes que realizan la conversión de hexadecimal a binario
int hexdecHEXBIN(char *numero) {
    if (ValidaHexadecimal(numero)) {
        int numeroDecimal = 0;
        int longitud = strlen(numero) - 1;
        for (int i = 0; i <= longitud; i++) {
            char c = *(numero + i);
            if (c >= '0' && c <= '9') {
                numeroDecimal += (c - '0') * pow(16, longitud - i);
            }
            if (c >= 'A' && c <= 'F') {
                numeroDecimal += (c - 'A' + 10) * pow(16, longitud - i);
            }
        }
        return numeroDecimal;
    }
    else {
        cout << "El número ingresado no es hexadecimal" << endl;
        return 0;
    }
}

string decbinHEXBIN(int *decimal) {
    int cociente = *decimal;
    int residuo = 0;
    string binario = "";
    while (cociente > 0) {
    residuo = cociente % 2;
        binario = to_string(residuo) + binario;
        cociente = cociente / 2;
    }
    return binario;
}

// Menu de opciones
int main() { 
    cout << endl;
    char opc[100];
    char reme[100];
    cout << "Iniciar menu de opciones?" << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;
    cout << "Respuesta: ";
    cin >> reme;
    if (ValidaNumerosEnteros(reme)){
        int RM = stoi(reme);
        if (RM==1){
            while (RM==1){
                system("cls");
                cout << endl;
                cout << "Menu de opciones" << endl;
                cout << "1. Suma +" << endl;
                cout << "2. Resta -" << endl;
                cout << "3. Multiplicacion *" << endl;
                cout << "4. Division /" << endl;
                cout << "5. Porcentaje de un n" << endl;
                cout << "6. Potencia de un numero elevado a 2 n^2" << endl;
                cout << "7. Factorial de un numero n!" << endl;
                cout << "8. Potencia de un numero elevado por otro. x^y" << endl;
                cout << "9. Raiz cuadrada de un numero. sqrt" << endl;
                cout << "10. Coseno de un numero. Cos(n)" << endl;
                cout << "11. Seno de un numero. Sin(n)" << endl;
                cout << "12. Tanjente de un numero. Tan(n)" << endl;
                cout << "13. Decimal a binario. Dec-Bin" << endl;
                cout << "14. Binario a decimal. Bin-Dec" << endl;
                cout << "15. Decimal a octal. Dec-Oct" << endl;
                cout << "16. Octal a decimal. Oct-Dec" << endl;
                cout << "17. Decimal a hexadecimal. Dec-Hex" << endl;
                cout << "18. Hexadecimal a decimal. Hex-Dec" << endl;
                cout << "19. Binario a octal. Bin-Oct" << endl;
                cout << "20. Octal a binario. Oct-Bin" << endl;
                cout << "21. Binario a hexadecimal. Bin-Hex" << endl;
                cout << "22. Hexadecimal a binario. Hex-Bin" << endl;
                cout << "23. Residuo de una división entera %" << endl;
                cout << "24. Salir" << endl;
                cout << endl;
                cout << "Ingrese una opcion: ";
                cin >> opc;
                if (ValidaNumerosEnteros(opc)){
                    int opt = 0;
                    int *pOpc = &opt;
                    *pOpc = atoi(opc);
                    if (*pOpc >= 1 && *pOpc <= 24){
                        int opc = *pOpc;
                        switch (opc) {
                            case 1:{
                                cout << "Bienvenido a suma" << endl;
                                char numeros1[100], numeros2[100];
                                cout << "Ingrese el primer numero: ";
                                cin >> numeros1;
                                cout << "Ingrese el segundo numero: ";
                                cin >> numeros2;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = suma(numeros1, numeros2);
                                if (*pResultado != 0) {
                                    cout << "Suma: " << *pResultado << endl;
                                }      
                            }break;
                            case 2: {
                                cout << "Bienvenido a resta" << endl;
                                char numeros1[100], numeros2[100];
                                cout << "Ingrese el primer numero: ";
                                cin >> numeros1;
                                cout << "Ingrese el segundo numero: ";
                                cin >> numeros2;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = resta(numeros1, numeros2);
                                if (*pResultado != 0) {
                                    cout << "Resta: " << *pResultado << endl;
                                }
                            }break;
                            case 3:{
                                cout << "Bienvenido a multiplicacion" << endl;
                                char numeros1[100], numeros2[100];
                                cout << "Ingrese el primer numero: ";
                                cin >> numeros1;
                                cout << "Ingrese el segundo numero: ";
                                cin >> numeros2;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = multi(numeros1, numeros2);
                                if (*pResultado != 0) {
                                    cout << "Multiplicación: " << *pResultado << endl;
                                }        
                            }break;
                            case 4:{
                                cout << "Bienvenido a division" << endl;
                                char numeros1[100], numeros2[100];
                                cout << "Ingrese el primer numero: ";
                                cin >> numeros1;
                                cout << "Ingrese el segundo numero: ";
                                cin >> numeros2;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = div(numeros1, numeros2);
                                if (*pResultado != 0) {
                                    cout << "División: " << *pResultado << endl;
                                }        
                            }break;
                            case 5:{
                                cout << "Bienvenido a porcentaje" << endl;
                                char numeros1[100], numeros2[100];
                                cout << "Ingrese el primer numero: ";
                                cin >> numeros1;
                                cout << "Ingrese el porcentaje que desea conocer: ";
                                cin >> numeros2;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = porcentaje(numeros1, numeros2);
                                if (*pResultado != 0) {
                                    cout << "Porcentaje: " << *pResultado << "%" << endl;
                                }  
                            }break;
                            case 6:{
                                cout << "Bienvenido a potencia" << endl;
                                char numeros1[100];
                                cout << "Ingrese el numero: ";
                                cin >> numeros1;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = potencia(numeros1);
                                if (*pResultado != 0) {
                                    cout << "Potencia: " << *pResultado << endl;
                                }
                            }break;
                            case 7:{
                                cout << "Bienvenido a factorial" << endl;
                                char numeros1[100];
                                cout << "Ingrese el numero: ";
                                cin >> numeros1;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = factorial(numeros1);
                                if (*pResultado != 0) {
                                    cout << "Factorial: " << *pResultado << endl;
                                }
                            }break;
                            case 8:{
                                cout << "Bienvenido a potencia de un numero elevado por otro" << endl;
                                char numeros1[100], numeros2[100];
                                cout << "Ingrese el primer número: ";
                                cin >> numeros1;
                                cout << "Ingrese el segundo número: ";
                                cin >> numeros2;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = potencia2(numeros1, numeros2);
                                if (*pResultado != 0) {
                                    cout << "Potencia: " << *pResultado << endl;
                                }
                            }break; 
                            case 9:{
                                cout << "Bienvenido a raiz cuadrada de un numero" << endl;
                                char numeros1[100];
                                cout << "Ingrese el numero: ";
                                cin >> numeros1;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = raiz(numeros1);
                                if (*pResultado != 0) {
                                    cout << "Raiz: " << *pResultado << endl;
                                }
                            }break;
                            case 10:{
                                cout << "Bienvenido a coseno de un numero" << endl;
                                char numeros1[100];
                                cout << "Ingrese el numero (En grados): ";
                                cin >> numeros1;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = coseno(numeros1);
                                if (*pResultado != 0) {
                                    cout << "Coseno: " << *pResultado << endl;
                                }
                            }break;
                            case 11:{
                                cout << "Bienvenido a seno de un numero" << endl;
                                char numeros1[100];
                                cout << "Ingrese el numero (En grados): ";
                                cin >> numeros1;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = seno(numeros1);
                                if (*pResultado != 0) {
                                    cout << "Seno: " << *pResultado << endl;
                                }
                            }break;
                            case 12:{
                                cout << "Bienvenido a tangente de un numero" << endl;
                                char numeros1[100];
                                cout << "Ingrese el numero (En grados): ";
                                cin >> numeros1;
                                double resultado = 0;
                                double *pResultado = &resultado;
                                *pResultado = tangente(numeros1);
                                if (*pResultado != 0) {
                                    cout << "Tangente: " << *pResultado << endl;
                                }
                            }break;
                            case 13:{
                                cout << "Bienvenido a decimal a binario" << endl;
                                char numeros1[100];
                                cout << "Ingrese el numero: ";
                                cin >> numeros1;
                                int resultado = 0;
                                int *pResultado = &resultado;
                                string numbinario = decbin(numeros1, pResultado);
                                if (numbinario == "Invalido"){
                                    cout << "Ingrese solo números enteros." << endl;
                                }
                                else if (numbinario != "0") {
                                    cout << "Binario: " << numbinario << endl;
                                }

                            }break;
                            case 14: {
                                cout << "Bienvenido a binario a decimal" << endl;
                                char numeros[100];
                                cout << "Ingrese el número binario: ";
                                cin >> numeros;
                                int resultado = 0;
                                int *pResultado = &resultado;
                                int res = bindec(numeros, pResultado);
                                if (res != 0) {
                                    cout << "Decimal: " << res << endl;
                                }
                            }break;
                            case 15:{
                                cout << "Bienvenido a decimal a octal" << endl;
                                char numeros1[100];
                                cout << "Ingrese el número: ";
                                cin >> numeros1;
                                int resultado = 0;
                                int *pResultado = &resultado;
                                string octal = decoct(numeros1);
                                if (octal == "Invalido"){
                                    cout << "Ingrese solo números enteros." << endl;
                                }
                                else if (octal != "0") {
                                    cout << "Octal: " << octal << endl;
                                }
                            }break;
                            case 16:{
                                cout << "Bienvenido a octal a decimal" << endl;
                                char numeros[100];
                                cout << "Ingrese el número octal: ";
                                cin >> numeros;
                                int resultado = 0;
                                int *pResultado = &resultado;
                                int res = octdec(numeros, pResultado);
                                if (res != 0) {
                                    cout << "Decimal: " << res << endl;
                                }
                            }break;
                            case 17:{
                                cout << "Bienvenido a decimal a hexadecimal" << endl;
                                char numero[100];
                                cout << "Ingresa un numero entero: ";
                                cin >> numero;
                                dechex(numero);
                            }break;
                            case 18:{
                                cout << "Bienvenido a hexadecimal a decimal" << endl;
                                char numero[100];
                                cout << "Ingresa un numero hexadecimal: ";
                                cin >> numero;
                                for (int i = 0; i < strlen(numero); i++) {
                                    numero[i] = toupper(numero[i]);
                                }
                                hexdec(numero);
                            }break;
                            case 19:{
                                cout << "Bienvenido a binario a octal" << endl;
                                char binario[100];
                                int decimal = 0;
                                cout << "Ingrese un numero binario: ";
                                cin >> binario;
                                if (bindec(binario, &decimal) > 0) {
                                    cout << "El numero decimal es: " << decimal << endl;
                                    string octal = decoctBINOCT(&decimal);
                                    if (octal != "0") {
                                        cout << "Octal: " << octal << endl;
                                    }
                                }
                            }break;
                            case 20:{
                                cout << "Bienvenido a octal a binario" << endl;
                                char octal[100];
                                int decimal = 0;
                                cout << "Ingrese un numero octal: ";
                                cin >> octal;
                                if (octdec(octal, &decimal) > 0) {
                                    cout << "El numero decimal es: " << decimal << endl;
                                    string binario = decbinOCTBIN(&decimal);
                                    if (binario != "0") {
                                        cout << "Binario: " << binario << endl;
                                    }
                                }
                            }break;
                            case 21:{
                                cout << "Bienvenido a binario a hexadecimal" << endl;
                                char binario[100];
                                int decimal = 0;
                                cout << "Ingrese un numero binario: ";
                                cin >> binario;
                                if (bindec(binario, &decimal) > 0) {
                                    cout << "El numero decimal es: " << decimal << endl;
                                    string hexadecimal = dechexBINOHEX(&decimal);
                                    if (hexadecimal != "0") {
                                        cout << "Hexadecimal: " << hexadecimal << endl;
                                    }
                                }
                            }break;
                            case 22:{
                                cout << "Bienvenido a hexadecimal a binario" << endl;
                                char hexadecimal[100];
                                int decimal = 0;
                                cout << "Ingrese un numero hexadecimal: ";
                                cin >> hexadecimal;
                                for (int i = 0; i < strlen(hexadecimal); i++) {
                                    hexadecimal[i] = toupper(hexadecimal[i]);
                                }
                                decimal = hexdecHEXBIN(hexadecimal);
                                if (decimal > 0) {
                                    cout << "El numero decimal es: " << decimal << endl;
                                    string binario = decbinHEXBIN(&decimal);
                                    if (binario != "0") {
                                        cout << "Binario: " << binario << endl;
                                    }
                                }
                            }break;
                            case 23:{
                                cout << "Bienvenido a residuo" << endl;
                                char numeros1[100], numeros2[100];
                                cout << "Ingrese el primer numero: ";
                                cin >> numeros1;
                                cout << "Ingrese el segundo numero: ";
                                cin >> numeros2;
                                int resultado = 0;
                                int *pResultado = &resultado;
                                *pResultado = rd(numeros1, numeros2);
                                if (*pResultado != 0) {
                                    cout << "Residuo: " << *pResultado << endl;
                                }
                            }break;
                            case 24:{
                                cout << "Requerimos confirmacion para salir" << endl;
                            }break;
                        }
                    }   
                    else {
                        cout << "Opcion no valida" << endl;
                    }
                }
                else {
                    cout << "El numero que usted ingreso no es entero" << endl;
                }
                cout << endl;
                cout << "Continuar en el codigo? \n [1] = Si \n [Cualquier otra tecla] = No" << endl << "Respuesta: ";
                cin >> RM;
                cout << endl;
            }
        }
        else if (RM == 2)
        {
            cout << "Vuelva pronto" << endl;
        }
            
        else {
            cout << "Usted ingreso un numero invalido" << endl;
            system("pause");
            main();
        }
    }
    return 0;
} 