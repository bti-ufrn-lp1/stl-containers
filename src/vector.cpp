/**
 * @file	vector.cpp
 * @brief	Demonstracao do uso do container <code>vector</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/vector/vector/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

/**
 * @brief Funcao generica para imprimir os elementos de um vetor
 * @param v Vetor generico
 */
template<typename T>
void imprime(vector<T> v) {
    if (!v.empty()) {
        cout << "Elementos do vetor: ";
        for (int i = 0; i < (int)v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Vetor vazio" << endl;
    }
}

/** @brief Funcao principal */
int main() {
    vector<int> v;
    for (int i = 1; i <= 10; i++) {
       v.push_back(i);
    }

    imprime(v);
    v.clear();

    return 0;
}