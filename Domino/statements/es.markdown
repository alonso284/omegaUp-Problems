# Descripción

Dom es un apasionado del dominó y juega en modo solitario. En su variante especial del juego, intenta formar ciclos con las fichas disponibles. Un ciclo válido es aquel en el que cualquier par de fichas adyacentes dentro del ciclo tiene sus extremos coincidentes con el mismo número y, además, el extremo izquierdo coincide con A y el lado derecho coincide con B.

# Entrada

Se te darán dos enteros no negativos, A y B, que representan los valores que necesitas "unir" para cerrar el ciclo. A continuación, se entregará un entero N que representa la cantidad de fichas disponibles para Dom. Las siguientes N líneas contendrán dos enteros, Q y R, que representan las fichas disponibles para jugar. Se garantiza que no habrá fichas repetidas en la colección. Las fichas se pueden voltear.

# Salida

Debes imprimir la cantidad de formas en las que Dom puede cerrar el ciclo utilizando dos fichas diferentes de las disponibles. Cada ficha solo se puede usar una vez en la combinación.

# Ejemplo

||input
1 5
3
4 1
2 4
4 5
||output
1
||end

Explicación del ejemplo:
En este caso, solo hay una forma de que Dom cierre el ciclo con las fichas disponibles:

$1|4, 4|5$

El ciclo se cierra y es válido porque cualquier par de fichas adyacentes dentro del ciclo (1|4 y 4|5) tienen sus extremos coincidentes con el mismo número (4), cumpliendo así con las condiciones requeridas. Además, el extremo izquierdo coincide con A (1) y el lado derecho coincide con B (5).

# Límites

- $0 \leq A, B, Q, R \leq 10^6$
- $2 \leq N \leq 10^6$
