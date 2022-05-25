/**
 * @file	deque.cpp
 * @brief	Demonstracao do uso do container <code>deque</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/deque/deque/
 */

#include <deque>
using std::deque;

#include <iostream>
using std::cout;
using std::endl;

/**
 * @brief Função genérica para imprimir os elementos de um deque
 * @tparam T Tipo genérico
 * @param d Deque
 */
template <typename T>
void imprime(deque<T> d) {
    if (!d.empty()) {
        cout << "Elementos do deque:" << endl;
        for (deque<int>::iterator it = d.begin(); it != d.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    } else {
        cout << "Deque vazio" << endl;
    }
}

/** @brief Funcao principal */
int main() {
    deque<int> d;
    for (int i = 5; i > 0; i--) {
        d.push_front(i);                // Inserção de elementos no início (0-5)
    }
    for (int i = 6; i < 11; i++) {
        d.push_back(i);                 // Inserção de elementos no final (6-10)
    }

    d.pop_back();                       // Remoção do último elemento do deque
    d.pop_front();                      // Remoção do primeiro elemento do deque

    imprime(d);
    return 0;
}