# Registro de Ventas

Página web para que un pequeño comercio de ropa registre sus ventas del día y pueda buscar si una prenda ya fue vendida. Pensada para un solo local, sin conexión a internet ni servidores externos.

## Cómo usarla

1. Poné `registro-de-ventas.html` en una carpeta de la computadora donde se va a usar.
2. Abrilo con **Chrome** o **Edge** (con Firefox funciona, pero sin guardar en archivo; ver abajo).
3. La primera vez, tocá **"Crear archivo nuevo"** y guardá `ventas.json` en esa misma carpeta. Ahí quedan todas las ventas.
4. Cargá cada venta: fecha, prenda, detalles opcionales (talle, color, código), precio, cantidad, cliente opcional y forma de pago.
5. Para saber si algo ya se vendió, escribí en el buscador (prenda, detalle o nombre de cliente).

Al volver a abrir el archivo, la página recuerda cuál es su `ventas.json` y carga las ventas solas. A veces el navegador vuelve a pedir permiso: tocá "Permitir acceso".

## Funciones

- Totales del día y del mes.
- Ventas agrupadas por día, con total por día.
- Búsqueda por prenda, detalle o cliente (ignora tildes y mayúsculas).
- Editar y eliminar ventas.
- Exportar todo a un `.csv` para abrir en Excel.

## Dónde quedan los datos

Todo se guarda en el archivo `ventas.json`, en la computadora donde se usa — no en ningún servidor. Para tener una copia de respaldo, basta con copiar ese archivo a otro lado de vez en cuando.

Si se abre con un navegador que no puede guardar en archivos (como Firefox), las ventas quedan guardadas dentro del navegador en lugar de en un archivo, y la página lo avisa en pantalla.

## Requisitos

Ninguno. Es un solo archivo HTML que corre en el navegador.

# Puedes descargar este módulo de forma independiente en un archivo comprimido:
* **[Descargar esta carpeta en ZIP](https://downgit.github.io/#/home?url=https://github.com/Dioni001/Helper/tree/main/registro_de_ventas)** *(vía DownGit)*