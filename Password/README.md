# Módulo: Password

Conjunto de utilidades experimentales orientadas al análisis de contraseñas, simulación de vectores de ataque por fuerza bruta/diccionario y gestión de corpus de palabras para pruebas de seguridad local.

---

## 🛠️ Herramientas e Instrumentación

El módulo contiene scripts y recursos diseñados para evaluar la robustez de credenciales e ilustrar la complejidad computacional asociada a ataques defensivos y ofensivos:

1. **Diccionario de Credenciales (+10k términos)**:
   * Lista masiva de términos, combinaciones y patrones frecuentes compilados para pruebas de auditoría y benchmark de algoritmos de hashing/cifrado.
2. **Simulador de Fuerza Bruta**:
   * Algoritmo de generación e iteración combinatoria para medir el tiempo y número de intentos requeridos para colisionar contraseñas bajo distintos alfabetos (numérico, alfanumérico, símbolos).
3. **Simulador de Ataque por Diccionario**:
   * Script de comprobación secuencial diseñado para evaluar la tasa de peticiones/segundo o comparaciones en memoria frente a una base de datos de hashes o texto plano.

---

## ⚠️ Advertencia Legal y Deontológica

> **ATENCIÓN**: Este módulo incluye recursos capaces de ser empleados en actividades de cracking y auditoría ofensiva.

* **Ámbito de aplicación restrictivo**: Este código debe ser ejecutado exclusivamente en entornos controlados de laboratorio, sobre sistemas propios o bajo la autorización explícita y documentada del propietario de la infraestructura.
* **Prohibición de uso malicioso**: Queda estrictamente prohibido el uso de estas utilidades para el acceso no autorizado, vulneración de credenciales ajenas o cualquier actividad ilegal.
* **Exención de responsabilidad**: El desarrollador declina cualquier responsabilidad derivada de la negligencia, uso indebido o daños directos e indirectos causados por el uso de los scripts o los diccionarios incluidos en esta carpeta.

---

## 🚀 Uso y Requisitos

Para conocer los requisitos específicos del lenguaje de ejecución y los parámetros de los scripts, revisa directamente los comentarios en la cabecera de cada archivo antes de su ejecución.