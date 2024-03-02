/*
Exercise 8:
Suppose we create a structure to store individual's data and another structure to store data for multiple individuals as a database.

typedef struct Person{
    int rg;
    int cpf;
    char name[80];
} Person;

typedef struct Database{
    int stored; // Should always correspond to the number of individuals in the database
    Person individuals[100];
} Database;

Create functions for each of the operations below:
    
    > Create Database: This function returns a Database where the 'stored' field is initialized to 0.
        
        Database createDatabase();

    > Include Person: This function takes a parameter of type Person and includes it in the database (also passed as a parameter) 
    if there is no person with the same ID in the database. The function returns 1 if the inclusion occurred, 
    returns 0 if the Database is full, and returns -1 if a person with the provided ID already exists.
        
        int addPerson(Person p, Database database);

    > Exclude Person: This function takes an int parameter representing the ID of a person and removes it from the database if present. 
    The function returns 1 if the exclusion occurred and returns 0 if there is no person with the provided ID.
        
        int removePerson(int rg, Database database);




(PT-BR)
Exercício 8:
Suponha que criamos uma estrutura para armazenar dados de pessoas e uma outra estrutura para armazenar dados de várias pessoas
como uma base de dados.

typedef struct Pessoa{
int rg;
char nome[80];
}Pessoa;

typedef struct Base{
int armazenado; //Deve sempre corresponder ao número de pessoas na base
Pessoa pessoas[100];
}Base;

Crie funções para cada uma das operações abaixo:
• Cria base: esta função devolve uma Base onde o campo armazenado é inicializado
com 0.
Base cria_base();
• Inclui Pessoa: esta função recebe como parâmetro um dado do tipo Pessoa e o inclui
na base (também passada por parâmetro) caso já não exista na base uma pessoa com
o mesmo RG. A função devolve 1 caso a inclusão tenha ocorrido, devolve 0 caso a
Base esteja cheia e devolve -1 caso já exista uma pessoa com o RG informado.
int insere_base(Pessoa p, Base base);
• Exclui Pessoa: esta função recebe como parâmetro um dado do tipo int representando
o RG de uma pessoa e o exclui da base caso esteja presente. A função devolve 1 caso a
exclusão tenha ocorrido, e devolve 0 caso não exista uma pessoa com o RG informado.
int remove_base(int rg, Base base);
*/

#include <stdio.h>

typedef struct {
    int id;
    char name[80];
} Person;

typedef struct {
    int stored; // Corresponds to the number of people in the database
    Person people[100];
} Database;

Database createDatabase();
int addPerson(Person person, Database *data);
int removePerson(int id, Database *data);

int main() {
    Database data = createDatabase();

    // Testing addPerson()):
    Person person1 = {123, "Julia"};
    if (addPerson(person1, &data) == 1) {
        printf("Person %s added to the database\n", person1.name);
    } else if (addPerson(person1, &data) == -1) {
        printf("Person %s is already in the database\n", person1.name);
    } else {
        printf("The database is full\n");
    }

    Person person2 = {189, "Pedro"};
    if (addPerson(person2, &data) == 1) {
        printf("Person %s added to the database\n", person2.name);
    } else if (addPerson(person2, &data) == -1) {
        printf("Person %s is already in the database\n", person2.name);
    } else {
        printf("The database is full\n");
    }

    Person person3 = {123, "Julia"};
    if (addPerson(person3, &data) == 1) {
        printf("Person %s added to the database\n", person3.name);
    } else if (addPerson(person3, &data) == -1) {
        printf("Person %s is already in the database\n", person3.name);
    } else {
        printf("The database is full\n");
    }

    // Testing removePerson():
    if (removePerson(189, &data)) {
        printf("Person with ID 189 removed from the database\n");
    } else {
        printf("Person with ID 189 not found in the database\n");
    }

    // Print the current database
    printf("Current database:\n");
    for (int i = 0; i < data.stored; i++) {
        printf("Person: %s\nID: %d\n", data.people[i].name, data.people[i].id);
    }

    return 0;
}

Database createDatabase() {
    Database data = {0, {0}};
    return data;
}

int addPerson(Person person, Database *data) {
    // Check if the database is full
    if (data->stored == 100) {
        return 0;
    }
    // Check if the person is already in the database
    for (int i = 0; i < data->stored; i++) {
        if (person.id == data->people[i].id) {
            return -1;
        }
    }
    // Include the new person
    data->people[data->stored] = person;
    data->stored++;
    return 1;
}

int removePerson(int id, Database *data) {
    // Check if the id is in the database
    for (int i = 0; i < data->stored; i++) {
        if (data->people[i].id == id) {
            if (i == data->stored - 1) {
                data->stored--;
                return 1;
            }
            // Move elements to cover the gap
            for (int j = i; j < data->stored - 1; j++) {
                data->people[j] = data->people[j + 1];
            }
            data->stored--;
            return 1;
        }
    }
    return 0;
}