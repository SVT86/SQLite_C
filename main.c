#include <stdio.h>
#include "./include/sqlite3.h"

int main(int arv, char **argv)
{

    sqlite3 *DDBB; // puntero a la DDBB
    const char *nombreDB = "prueba.db";

    // sqlite3_stmt *resultados; // puntero a los resultados

    int msg; // valor de retornomake

    const char *ordenesSQL; // ordenes SQL;

    // CREAR UNA DDBB

    msg = sqlite3_open_v2(nombreDB, &DDBB, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, NULL);

    if (msg != SQLITE_OK)
        puts("Error al abrir DDBB");

    return 0;
}
