#My Shared Library Test
Ejemplo de como usar una biblioteca dinámica en C++ con Cmake.

Pasos:
1. Crear un proyecto como ejecutable.
2. En el archivo CmakeLists.txt agregamos la siguiente linea:
    ```
    target_link_libraries(mysharedlibrarytest ${CMAKE_SOURCE_DIR}/lib/libmysharedlib.dylib)
    ``` 
    mysharedlibrarytest: seria el nombre de nuestro proyecto.
    ${CMAKE_SOURCE_DIR}/lib/libmysharedlib.dylib seria la direccion donde se ubicaria el archivo de la biblioteca.

3. Creamos una carpeta llamada lib en el proyecto, donde se guardaría la biblioteca.
4. "Buildeamos" o creamos la biblioteca dinámica, para este ejemplo se irá a usar la biblioteca de
https://github.com/Abstractize/C-DynamicLibraryExample

5. Guardamos el archivo .dylib (MacOS), .dll (Windows) o .so (Linux) generado por el otro proyecto en la carpeta *cmake-build-debug*, dentro de la carpeta lib de nuestro proyecto.

6. Copiamos los headers de la biblioteca para usarlos como referencia en código y los colocamos junto a la biblioteca dinámica
.
![Step6](/images/Step6.png)
Ej: 
```
#include "lib/library.h"
```


