/**
 * @file	array.cpp
 * @brief	Demonstracao do uso do container <code>array</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/array/array/
 */

#include <array>
using std::array;

#include <iostream>
using std::cout;
using std::endl;

/** @brief Tamanho do <i>array</i> */
#define SIZE 10

/** @brief Função principal */
int main() {
    array<int, SIZE> a;
    for (int i = 0; i < SIZE; i++) {
        a[i] = i+1;
    }

    cout << "Elementos do array: ";
    for (int i = 0; i < (int)a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}