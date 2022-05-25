/**
 * @file	stack.cpp
 * @brief	Demonstracao do uso do container <code>stack</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/stack/stack/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <stack>
using std::stack;

/**
 * @brief Função genérica para imprimir os elementos de uma pilha
 * @tparam T Tipo genérico
 * @param s Pilha
 */
template<typename T>
void imprime(stack<T> s) {
    if (!s.empty()) {
        cout << "Elementos da pilha:" << endl;
        while (!s.empty()){
            cout << s.top() << endl;
            s.pop();
        }
    } else {
        cout << "Pilha vazia" << endl;
    }
}

/** @brief Funcao principal */
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    imprime(s);
    return 0;
}