# *Standard Template Library (STL) Containers*

## Sobre
Este conjunto de programas serve à demonstração dos *containers* disponibilizados pela [*Standard Template Library* (STL)](https://en.wikipedia.org/wiki/Standard_Template_Library). A STL é um subconjunto da biblioteca padrão da linguagem de programação C++ que define *containers* genéricos, objetos e funções para manipulá-los. Em essência, esses *containers* implementam tipos abstratos de dados (TADs) utilizando *templates* de classes.

## Estrutura do repositório
Este repositório contém um conjunto de arquivos fonte demonstrando, cada um, o uso dos *containers* e dos métodos por eles disponibilizados. Os arquivos estão organizados de acordo com a seguinte estrutura:

```
+─stl-containers              ---> Nome do diretório do projeto
  ├─── bin                    ---> Diretório onde os programas executáveis serão gerados
  ├─── build                  ---> Diretório onde os arquivos objeto resultantes da compilação serão gerados
  ├─── Doxyfile               ---> Arquivo de configuração para geração de documentação com Doxygen
  ├─── doc                    ---> Diretório onde a documentação em HTML será gerada
  ├─── Makefile               ---> Arquivo Makefile para compilação
  └─── src                    ---> Diretório que contém os arquivos fonte
       └─── array.cpp         ---> Demonstração do uso do container 'array'
       └─── deque.cpp         ---> Demonstração do uso do container 'deque'
       └─── forward_list.cpp  ---> Demonstração do uso do container 'forward_list'
       └─── list.cpp          ---> Demonstração do uso do container 'list'
       └─── map.cpp           ---> Demonstração do uso do container 'map'
       └─── multimap.cpp      ---> Demonstração do uso do container 'multimap'
       └─── multiset.cpp      ---> Demonstração do uso do container 'multiset'
       └─── queue.cpp         ---> Demonstração do uso do container 'queue'
       └─── set.cpp           ---> Demonstração do uso do container 'set'
       └─── stack.cpp         ---> Demonstração do uso do container 'stack'
       └─── vector.cpp        ---> Demonstração do uso do container 'vector'
```

## Requisitos
Para a compilação e execução deste programa, os seguintes elementos devem estar devidamente instalados no ambiente de desenvolvimento:

- [Git](https://git-scm.com), como sistema de controle de versões
- [*GNU Compiler Collection*](https://gcc.gnu.org) (a qual inclui o compilador `g++`), [`clang`](https://clang.llvm.org/) ou qualquer outro compilador para a linguagem C++
- [*GNU Make*](https://www.gnu.org/software/make/), para a compilação via *makefile*
- [Doxygen](https://www.doxygen.nl), para geração automática de documentação

## Download, compilação e execução do programa
No terminal do sistema operacional, insira os seguintes comandos para realizar o *download* da implementação a partir deste repositório Git e navegar para o diretório resultante:

```bash
 # Download da implementação a partir do repositório Git
 git clone https://github.com/bti-ufrn-lp1/stl-containers.git
 
 # Navegação para o diretório
 cd stl-containers
```

O [*makefile*](Makefile) foi construído para receber um parâmetro de entrada com nome `container`, cujo valor será o nome do *container* para o qual o respectivo código fonte de demonstração (localizado dentre os arquivos no diretório [`src`](src) será compilado e executado. O seguinte comando deverá ser inserido no terminal do sistema operacional para compilar o programa associado à demonstração de um *container*:

```bash
 make container=nome
```

sendo `nome` um dos seguintes *containers*:

| Valor   | *Container*                                     |
| :---    | :---           |
| `array` | http://www.cplusplus.com/reference/array/array/ |
| `deque` | http://www.cplusplus.com/reference/deque/deque/ |
| `forward_list` | http://www.cplusplus.com/reference/forward_list/forward_list/ |
| `list` | http://www.cplusplus.com/reference/list/list/ |
| `map` | http://www.cplusplus.com/reference/map/map/ |
| `multimap` | http://www.cplusplus.com/reference/map/multimap/ |
| `multiset` | http://www.cplusplus.com/reference/set/multiset/ |
| `queue` | http://www.cplusplus.com/reference/queue/queue/ |
| `set` | http://www.cplusplus.com/reference/set/set/ |
| `stack` | http://www.cplusplus.com/reference/stack/stack/ |
| `vector` | http://www.cplusplus.com/reference/vector/vector/ |

Dessa forma, por exemplo, para compilar o programa referente à demonstração do *container* [`vector`](https://www.cplusplus.com/reference/vector/vector/), deve-se executar o comando `make` no terminal do sistema operacional da seguinte forma:

```bash
 make container=vector
```

Note que o valor para o parâmetro `container` deve ser **exatamente idêntico** aos relacionados acima. Caso esse parâmetro não seja informado, o comando `make` não fará nada e caso o valor não esteja dentre os relacionados acima, o comando `make` reportará um erro apontando que não existe regra definida para esse parâmetro. 

Finalmente, para executar o programa gerado, basta inserir o seguinte comando no terminal do sistema operacional:

```bash
 ./bin/vector
```

Nesse caso, será executado o programa de demonstração do *container* [`vector`](https://www.cplusplus.com/reference/vector/vector/).
