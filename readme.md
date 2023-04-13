# Compilador de  Manu Lenguaje

## Bienvenido a la documentacion de Manu Lenguaje en español

Este proyecto es simple. Crear un simple lenguaje compilado, con una sintaxis bastante memeable.


## Como usar el compilador

En primer lugar, asegurarse de tener un archivo .ma escrito con la sintaxis correcta de este lenguaje.
Una vez todo este preparado, podremos ejecutar el compilador. Este toma como argumento el nombre del archivo.ma

Ej:

        ./out archivo.ma
>       "Archivo compilado!"

Tambien podremos añadir un numero de parametros extra, los cuales vienen implementados en el compilador.

Hasta el momento esta incluido:
* Nombre del archivo de salida: Este parametro tiene como argumento un string, el cual correspendera al archivo
de salida. Ej:
        ./out archivo.ma -o programa.exe


## Sintaxis:
# ownLanguageProject
