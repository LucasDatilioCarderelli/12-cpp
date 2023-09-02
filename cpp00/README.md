<h1 align="center"> C++ - Module 00 </h1>

<h2> Namespaces, classes, member functions, stdio streams,
initialization lists, static, const, and some other basic
stuf </h2>

Exercise  | Name
-|-
ex00   | Megaphone
ex01   | My Awesome Phonebook
ex02   | The Job of Your Dream

---

## Megaphone

Just to make sure that everybody is awake, write a program that behaves as follows:

```bash
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

### Tips
* `<iostream>`: Permite tratar fluxo de entrada e saida, possui as classes e objetos `std::cin`, `std::cout`.
* `operador '::'`: Conhecido como operador de resolução de escopo, é usado para acessar membros de uma classe ou namespace.
* `namespace`: É uma construção que permite agrupar declarações e definições de outros codigos, afim de evitar conflito de nomes.
* `using namespace std`: Permite acessar diretamente funções e objetos no escopo atual, sem precisar de `std::`. Não é permitido na 42.
* `static_cast<char>(toupper(char))`: static_cast é uma maneira segura de realizar o cast, que é nescessario pois toupper retorna um inteiro ASCII de char.

---

## My Awesome Phonebook
Welcome to the 80s and their unbelievable technology! Write a program that behaves like a crappy awesome phonebook software.

```bash
$> ./awesomePhonebook 

 _my 80's awesome Phonebook

 INSERT [ADD] [SEARCH] [EXIT]: ADD
```

### Tips

* `<string>`: É a classe que permite usar o objeto `string`.
* `<iomanip>`: Permite a manipulação de input e output, permitindo o uso da função `setw(int)` para setar o tamanho maximo de saida.
* `<sstream>`: para tratar fluxo de string, convertendo input para inteiro `std::stringstream ss(input); ss >> index;`
* `class Xpto{};` Uma classe é uma estrutura que define atributos (variaveis) e metodos (funções) para compor um objeto.
* `public: ;private:`: São niveis de acessos aos atributos e metodos da classe, sendo que o private só pode ser acessado dentro da classe e por funções getters e setters;

---

## The Job of Your Dream

On your first day at GlobalBanksters United, your task is to recreate a lost file, Account.cpp, after it was accidentally deleted. Armed with the Account.hpp header file and a log file, you take on the challenge of rebuilding the missing code, ensuring it matches the expected output from the log file tests.

### Tips
* `<ctime>`: Usada para tratar tempo em C na função `_displayTimestamp(void)` para imprimir o timestamp, utilizando as variaeis `std::time_t now` (tempo em int) e `std::tm` (estrura de tempo em data)
* `variaveis de escopo global`: Esse exercicio faz uso dessa variaveis para calcular a quantidade total de _nbAccounts, _totalAmount, _totalNbDeposits e _totalNbWithdrawals;
* `log`: Através do log é possivel entender o comportamento do codigo, fazendos com que as funções imprimen o teste.