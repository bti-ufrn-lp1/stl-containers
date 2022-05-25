/**
 * @file	queue.cpp
 * @brief	Demonstracao do uso do container <code>queue</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/queue/queue/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <queue>
using std::queue;

#include <string>
using std::string;

/**
 * @brief Função genérica para imprimir os elementos de uma fila
 * @tparam T Tipo genérico
 * @param q Fila
 */
template <typename T>
void imprime(queue<T> q) {
    if (q.empty()) {
        cout << "Elementos da fila:" << endl;
        while (!q.empty()) {
            cout << q.front();
            if (q.size() != 1) {
                cout << ", ";
            }
            q.pop();
        }
        cout << endl;
    } else {
        cout << "Fila vazia" << endl;
    }
}

/** @brief Funcao principal */
int main() {
    queue<string> q;
    q.push("Roberto");
    q.push("Antonio");
    q.push("Maria");

    imprime(q);
    return 0;
}