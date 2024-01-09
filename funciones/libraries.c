/*Las funciones declaradas en stdio.h pueden clasificarse en dos categorías: funciones de manipulación de ficheros y funciones de manipulación de entradas y salidas. fuente

Las funciones que pertenecen a conio.h declara varias funciones útiles para mejorar el rendimiento de la «entrada y salida por consola» fuente
Las funciones que pertenecen a stdlib.h pueden clasificarse en las siguientes categorías: conversión, memoria, control de procesos, ordenación y búsqueda, matemáticas. fuente

string.h es un archivo de la Biblioteca estándar del lenguaje de programación C que contiene la definición de macros, constantes, funciones y tipos y algunas operaciones de manipulación de memoria. fuente

math.h es un archivo de cabecera de la ..biblioteca estándar del lenguaje de programación C diseñado para operaciones matemáticas básicas. fuente

time.h relacionado con formato de hora y fecha es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C que contiene funciones para manipular y formatear la fecha y hora del sistema. [fuente] (https://es.wikipedia.org/wiki/Time.h)

ctype.h es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C diseñado para operaciones básicas con caracteres. fuente

signal.h es un archivo de cabecera definido en la Biblioteca estándar de C para especificar como un programa maneja señales mientras se ejecuta. fuente

locale.h fuente

errno.h fuente

assert.h proporcionar una definicion de la macro assert, que imprime un mensaje de error y aborta el programa fuente(https://es.wikipedia.org/wiki/Assert.h)*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <signal.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>

/*Reference
* https://learn.microsoft.com/en-us/cpp/c-language/c-language-reference?view=msvc-170&viewFallbackFrom=vs-2019
* https://devdocs.io/c/
*/

#include <stdio.h> //input y output teclado, para imprimir pantalla printf
#include <conio.h> //entradas y salidas comunicarnos en la consola
#include <string.h> // cuando se trabaja con cadenas de caracteres
#include <stdlib.h> // system comunicarnos afuera de c con sistema attoy convertir string a entero  adol convierte a long ran genera numeros enteros aleatorios delay para pausa
#include <math.h> // sin cosh floor ceil sqrt
#include <time.h>  // para fechas o tiempos del sistema 
#include <ctype.h> //  tipo manejo de caracteres individuales
#include <signal.h> // señales en programa por ejemplo enventos en el teclado , detectar un espacio en blanco en cadena de caracteres, detectar caracter en minuscúla lower y upper.
#include <locale.h> // cuestinones locales al software cuando se neccesita que se adapte al lugar que se use
#include <errno.h>// para debug errores.
#include <assert.h>// macro para verificar asumsiones y imprimir que esta pasando.