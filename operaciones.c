#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

//se usa para indicar que una variable no puede ser modificada después de su inicialización.
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

// Espera dos int por parametro, los multiplica y devuelve el resultado. La multiplicación consiste en sumarle al int a su propio valor una cantidad b de veces.
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
