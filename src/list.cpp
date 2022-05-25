/**
 * @file	list.cpp
 * @brief	Demonstracao do uso do container <code>list</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/list/list/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <list>
using std::list;

/**
 * @brief Função genérica para imprimir os elementos de uma lista
 * @tparam T Tipo genérico
 * @param l Lista
 */
template<typename T>
void imprime(list<T> l) {
    if (!l.empty()) {
        cout << "Elementos da lista: ";
        for (auto it = l.begin(); it != l.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    } else {
        cout << "Lista vazia" << endl;
    }
}

/** @brief Funcao principal */
int main() {
    list<int> l;
    for (int i = 1; i <= 5; i++) {
        l.push_back(i);
    }
    imprime(l);
    
    l.insert(l.begin(), 0);         // Insere elemento no início da lista
    imprime(l);
    
    l.erase(--l.end());             // Remove o último elemento da lista
    imprime(l);

    return 0;
}