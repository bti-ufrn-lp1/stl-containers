/**
 * @file	set.cpp
 * @brief	Demonstracao do uso do container <code>set</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/set/set/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <set>
using std::set;

#include <string>
using std::string;

/**
 * @brief Função genérica para imprimir os elementos de um conjunto
 * @tparam T Tipo genérico
 * @param s Conjunto
 */
template<typename T>
void imprime(set<T> s) {
    if (!s.empty()) {
        cout << s.size() << " elementos no conjunto: { ";
        for (auto it = s.begin(); it != s.end(); ++it) {
            cout << *it << " ";
        }
        cout << "}" << endl;
    } else {
        cout << "Conjunto vazio" << endl;
    }
}

/**
 * @brief Função genérica para buscar por um elemento em um conjunto
 * @tparam T Tipo genérico
 * @param s Conjunto
 * @param elemento Elemento a ser buscado
 * @return Verdadeiro, caso o elemento esteja presente no conjunto, falso caso contrário
 */
template<typename T>
bool busca(set<T> s, T elemento) {
    auto it = s.find(elemento);
    return (it != s.end());
}

/** @brief Funcao principal */
int main() {
    set<string> frutas;
    frutas.insert("banana");
    frutas.insert("morango");
    frutas.insert("abacaxi");
    frutas.insert("banana");        // Inserção inócua, pois o set não permite duplicatas
    imprime(frutas);

    // Busca por elemento no conjunto
    if (busca(frutas, string("morango"))) {
        cout << "Elemento \"morango\" encontrado" << endl;
    } else {
        cout << "Elemento \"morango\" nao encontrado" << endl;
    }

    return 0;
}