/**
 * @file	multimap.cpp
 * @brief	Demonstracao do uso do container <code>multimap</code>
 * @author	Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since	23/05/2022
 * @date	25/05/2022
 * @sa      http://www.cplusplus.com/reference/map/multimap/
 */

#include <iostream>
using std::cout;
using std::endl;

#include <map>
using std::multimap;

#include <string>
using std::string;

#include <utility>
using std::pair;

/**
 * @brief Função genérica para imprimir os elementos de um mapa
 * @tparam T Tipo genérico da chave
 * @tparam U Tipo genérico do valor
 * @param mm Mapa
 */
template<typename T, typename U>
void imprime(multimap<T, U> mm) {
    if (!mm.empty()) {
        for (auto it = mm.begin(); it != mm.end(); ++it) {
            cout << it->first << " - " << it->second << endl;
        }
    } else {
        cout << "Sem entradas" << endl;
    }
}

/** @brief Função principal */
int main() {
    multimap<int, string> alunos;
    alunos.insert(pair<int, string>(1, "Maria"));
    alunos.insert(pair<int, string>(2, "João"));
    alunos.insert(pair<int, string>(3, "Ana"));
    alunos.insert(pair<int, string>(4, "Pedro"));
    alunos.insert(pair<int, string>(4, "Joana"));       // Inserção de entrada para uma mesma chave
    imprime(alunos);

    // A busca retorna apenas o primeiro par chave-valor encontrado para a chave buscada
    multimap<int, string>::iterator busca = alunos.find(4);
    if (busca != alunos.end()) {
        cout << "Aluno(a) encontrado(a): " << busca->second << endl;
    } else {
        cout << "Aluno(a) não encontrado(a)" << endl;
    }

    // Remocao do registro com chave "4"
	int removidos = alunos.erase(4);
	cout << endl << "Foram removidos " << removidos << " registros" << endl;
    imprime(alunos);

    return 0;
}