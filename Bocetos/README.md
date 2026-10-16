# Maniquí Geométrico Estructural

Página web que dibuja un maniquí humano en forma de líneas y polígonos a partir de medidas corporales (estatura, cuello, hombros, pecho, bíceps, cintura, cadera, muslo, entrepierna), pensada como boceto de referencia rápido en lugar de un dibujo artístico.

## Cómo usarla

1. Abrí `index1.html` con doble clic en cualquier navegador. No necesita internet ni instalar nada.
2. Cambiá los valores del panel de la izquierda; el dibujo se actualiza al instante.
3. **Guardar (.txt):** descarga las medidas actuales en un archivo `modelo_medidas.txt`.
4. **Cargar (.txt):** vuelve a cargar un archivo de medidas guardado antes.

## Archivos de ejemplo

`HOMBRE_MEDIA.txt` y `MUJER_MEDIA.txt` son dos modelos de medidas promedio, listos para cargar con el botón "Cargar (.txt)".

## Formato del archivo de medidas

Texto simple, una medida por línea, en centímetros:

```
estatura=175
cuello=42
hombros=55
pecho=105
biceps=35
cintura=90
cadera=100
muslo=60
entrepierna=85
```

## Notas

- Todo el cálculo ocurre en el navegador; no se envía ni guarda información en ningún servidor.
- El dibujo es una aproximación geométrica (óvalos y polígonos a partir de perímetros), no una silueta anatómica realista.

# Puedes descargar este módulo de forma independiente en un archivo comprimido:
* **[Descargar esta carpeta en ZIP](https://downgit.github.io/#/home?url=https://github.com/Dioni001/Helper/tree/main/Bocetos)** *(vía DownGit)*