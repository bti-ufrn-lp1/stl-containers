/**
 * @file	list.cpp
 * @brief	Demonstracao do uso do container <code>forward_list</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/forward_list/forward_list/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <forward_list>
using std::forward_list;

/**
 * @brief Função genérica para imprimir os elementos de uma lista
 * @tparam T Tipo genérico
 * @param fl Lista
 */
template<typename T>
void imprime(forward_list<T> fl) {
    if (!fl.empty()) {
        cout << "Elementos da lista: ";
        for (auto it = fl.begin(); it != fl.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    } else {
        cout << "Lista vazia" << endl;
    }
}

/** @brief Funcao principal */
int main() {
    forward_list<int> fl;
    forward_list<int>::iterator it = fl.before_begin();
    for (int i = 1; i <= 5; i++) {
        it = fl.emplace_after(it, i);   // Insere elementos sequencialmente
    }
    imprime(fl);
    
    fl.push_front(0);                   // Insere elemento no início da lista
    imprime(fl);

    it = ++fl.begin();
    fl.insert_after(it, 2);             // Insere elemento na terceira posição da lista
    imprime(fl);
    
    fl.remove(2);                       // Remove elemento específico da lista
    imprime(fl);

    return 0;
}