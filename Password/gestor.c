#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "10k-most-common.txt"

// Función para buscar si una palabra ya existe
int searchWord(const char* target) {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        return 0; // Si no existe el archivo, asumimos que no está
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        // Limpiar el salto de línea
        line[strcspn(line, "\r\n")] = 0;
        
        // Comparación exacta
        if (strcmp(line, target) == 0) {
            fclose(file);
            return 1; // Encontrada
        }
    }
    
    fclose(file);
    return 0; // No encontrada
}

// Función para agregar una palabra al final del archivo
void addWord(const char* new_word) {
    // "a" abre el archivo para hacer "append" (agregar al final)
    FILE *file = fopen(FILENAME, "a");
    if (!file) {
        printf("Error: No se pudo abrir o crear el archivo para escribir.\n");
        return;
    }
    
    fprintf(file, "%s\n", new_word);
    fclose(file);
    printf("[+] La palabra '%s' ha sido agregada con exito al diccionario.\n", new_word);
}

int main() {
    char inputWord[100];
    char choice;

    printf("======================================\n");
    printf("   GESTOR DE DICCIONARIO DE CRACKING  \n");
    printf("======================================\n");
    printf("Escribe 'salir' para cerrar el programa.\n\n");

    while (1) {
        printf("Ingresa una palabra a buscar: ");
        scanf("%99s", inputWord);

        // Condición de salida
        if (strcmp(inputWord, "salir") == 0) {
            printf("Cerrando gestor...\n");
            break;
        }

        if (searchWord(inputWord)) {
            printf("[✓] La palabra '%s' YA EXISTE en el diccionario.\n\n", inputWord);
        } else {
            printf("[X] La palabra '%s' NO se encuentra.\n", inputWord);
            printf("¿Deseas agregarla? (s/n): ");
            
            // Limpiar el buffer antes de leer el caracter
            while ((getchar()) != '\n'); 
            scanf("%c", &choice);

            if (choice == 's' || choice == 'S') {
                addWord(inputWord);
            } else {
                printf("Ignorada.\n");
            }
            printf("\n");
        }
    }

    return 0;
}