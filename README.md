# La Marcha de las Letras

## Descripción
El objetivo de este laboratorio es practicar el uso de estructuras de datos lineales en C++ moderno, enfocándose principalmente en:

- `std::vector`
- Índices basados en cero
- Recorridos con bucles tradicionales y bucles basados en rangos
- Modificación de valores y uso de `.size()` y `.push_back()`

Usaremos una frase corta de la canción **"La Marcha de las Letras"** de Francisco Gabilondo Soler (Cri-Cri).

---

## Instrucciones

1. Declara un `vector<char>` llamado `letras`.
   - Debe contener **al menos 10 caracteres** que formen una frase de la canción (por ejemplo: L,a, ,M,a,r,c,h,a, ).
2. Impresion tradicional: Imprime el contenido del vector en su orden original. Usa un bucle for y el metodo `.size()`.
3. Imprime el contenido en orden inverso (desde el ultimo hasta el primero) Tambien debes usar indices.
4. Usa la función `contarVocales` proporcionada para contar cuántas vocales hay en tu vector.
5. Llama la funcion e imprime el resultado con un mensaje claro.
6. Modificacion (C++ moderno): Usa un bucle for basado en rangos (range-based for loop) prar
   covertir todas las letras del vector a minusculas (investiga la funcion `.tolower() de la libreria <cctype>. 
8. Impresion moderna: Vuelve a imprimir el vector para verificar el cambio a minusculas, peru usa el range-based for loop. 
9. Usa el metodo `.push_back()` para agregar el resto de la frase de la cancion al vector (caracter por caracter).
10. Imprime el contenido completo del vector extendido.
11. Llama de nuevo a la funcion contarVocales para mostrar cuantas covales tiene el vector ahor que esta completo.
    
La función contarVocales ya está implementada y no debe modificarse.
---

## Ejemplo de salida

Original: L A M A R C H A D E
Inverso: E D A H C R A M A L
Número de vocales: 4
Vector en minusculas:
l a m a r c h a d e
Vector Extendido: l a m a r c h a d e l a s l e t r a s
Número de vocales en el vector extendido: 7
