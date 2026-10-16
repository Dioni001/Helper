# Asistente de Comandos

Página web para encontrar comandos de terminal buscando lo que querés hacer, en español, en vez de tener que acordarte la sintaxis exacta. Pensada para usarse al lado de la terminal (CMD, PowerShell, Git Bash) y copiar el comando con un clic.

## Cómo usarla

1. Poné `buscador-comandos.html` en una carpeta de la computadora.
2. Abrilo con **Chrome** o **Edge** (con otros navegadores funciona, pero sin guardar en archivo; ver abajo).
3. La primera vez, tocá **"Crear archivo nuevo"** y guardá `comandos.json` en esa misma carpeta. Arranca con dos comandos de ejemplo para que veas el formato.
4. Buscá escribiendo qué querés hacer (por ejemplo "deshacer commit" o "ver puerto ocupado") y tocá **Copiar**. Después pegás el comando en tu terminal con `Ctrl+V` (o clic derecho → Pegar en CMD).

Al volver a abrir el archivo, la página recuerda cuál es su `comandos.json` y carga los comandos solos. A veces el navegador vuelve a pedir permiso: tocá "Permitir acceso".

## Agregar tus propios comandos

Con el formulario de la izquierda: categoría, el comando, una o más descripciones (una por línea, en tus propias palabras) y tags opcionales separados por coma. Cuanto más maneras de describirlo escribas, más fácil es encontrarlo después.

Si un comando tiene una parte que cambia según el caso (un puerto, un nombre de archivo), escribila entre `< >`, por ejemplo:

```
lsof -i :<PUERTO>
```

Al buscar ese comando, la página te deja completar el valor antes de copiarlo.

## Importar comandos de otro archivo

Con **"Importar JSON"** podés sumar comandos de un archivo que te hayan pasado o que hayas armado en otra carpeta. Si un comando ya existe (mismo `id`), se omite y no se duplica; la página avisa cuántos se agregaron y cuántos se repitieron.

## Formato del archivo

Una lista de comandos en JSON:

```json
[
  {
    "id": "git-soft-reset",
    "categoria": "git",
    "comando": "git reset --soft HEAD~1",
    "descripciones": [
      "Deshacer el último commit guardando los cambios locales en staging",
      "Volver atrás un commit sin perder lo que escribí"
    ],
    "tags": ["git", "undo", "commit", "reset"]
  }
]
```

`id` es opcional al importar o editar a mano: si falta, la página genera uno a partir del comando.

## Dónde quedan los datos

Todo se guarda en el archivo `comandos.json`, en la computadora donde se usa. Para tener una copia de respaldo, basta con copiar ese archivo a otro lado.

Si se abre con un navegador que no puede guardar en archivos, los comandos quedan guardados dentro del navegador en lugar de en un archivo, y la página lo avisa en pantalla.

## Requisitos

Ninguno. Es un solo archivo HTML que corre en el navegador.

# Puedes descargar este módulo de forma independiente en un archivo comprimido:
* **[Descargar esta carpeta en ZIP](https://downgit.github.io/#/home?url=https://github.com/Dioni001/Helper/tree/main/Asistente_Comandos)** *(vía DownGit)*