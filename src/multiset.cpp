/**
 * @file	multiset.cpp
 * @brief	Demonstracao do uso do container <code>multiset</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/set/multiset/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <set>
using std::multiset;

#include <string>
using std::string;

/**
 * @brief Função genérica para imprimir os elementos de um conjunto
 * @tparam T Tipo genérico
 * @param ms Conjunto
 */
template<typename T>
void imprime(multiset<T> ms) {
    if (!ms.empty()) {
        cout << ms.size() << " elementos no conjunto: { ";
        for (auto it = ms.begin(); it != ms.end(); ++it) {
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
 * @param ms Conjunto
 * @param elemento Elemento a ser buscado
 * @return Verdadeiro, caso o elemento esteja presente no conjunto, falso caso contrário
 */
template<typename T>
bool busca(multiset<T> ms, T elemento) {
    auto it = ms.find(elemento);
    return (it != ms.end());
}

 /** @brief Funcao principal */
int main() {
    multiset<string> frutas;
    frutas.insert("banana");
	frutas.insert("morango");
	frutas.insert("abacaxi");
	frutas.insert("uva");
    frutas.insert("uva");
	frutas.insert("morango");
    imprime(frutas);

	frutas.erase("morango");			// Remocao de todas as ocorrencias do elemento
    return 0;
}