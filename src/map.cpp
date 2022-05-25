/**
 * @file	map.cpp
 * @brief	Demonstracao do uso do container <code>map</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/map/map/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <map>
using std::map;

#include <string>
using std::string;

#include <utility>
using std::pair;

/**
 * @brief Função genérica para imprimir os elementos de um mapa
 * @tparam T Tipo genérico da chave
 * @tparam U Tipo genérico do valor
 * @param m Mapa
 */
template<typename T, typename U>
void imprime(map<T, U> m) {
    if (!m.empty()) {
        for (auto it = m.begin(); it != m.end(); ++it) {
            cout << it->first << " - " << it->second << endl;
        }
    } else {
        cout << "Sem entradas" << endl;
    }
}

/** @brief Função principal */
int main() {
    map<int, string> alunos;
    alunos.insert(pair<int, string>(1, "Maria"));   // Inserção de par chave-valor
    alunos.insert(pair<int, string>(2, "João"));    // Inserção de par chave-valor
    alunos[3] = "Ana";                              // Inserção de elemento via chave
    imprime(alunos);

    map<int, string>::iterator busca = alunos.find(1);
    if (busca != alunos.end()) {
        cout << "Aluno(a) encontrado(a): " << busca->second << endl;
    } else {
        cout << "Aluno(a) não encontrado(a)" << endl;
    }

    return 0;
}