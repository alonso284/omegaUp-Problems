# Descripción

Santy está jugando un nuevo juego de mesa llamado Archipielago. Este juego de mesa se juega de modo solitario y se juega de la siguiente manera.

El jugador empieza desde una isla base. Esta isla está llena de recursos y riquezas. Sin embargo, es igual hogar de un volcán que está apunto de estallar, por lo que el jugador tiene que irse de la isla lo más pronto posible.

El objetivo del jugador es llevarse la mayor cantidad de riquezas de la isla como sea posible. Sin embargo, tiene que dejar espacio suficiente para poder llevar recursos y sobrevivir el viaje.

Como el jugador se encuentra en un archipielago, puede ir de isla en isla, sin necesariamente tener que ir de la isla base a la isla final (su hogar). Cada vez que el jugador llega a una isla, puede rellenar su barco de cuantos recursos quiera.

El barco de Santy cuenta con $K$ espacios. Por cada día que pasa en el barco, Santy necesita $1$ espacio de recursos. Ayuda a Santy a maximizar las riquezas que se puede llevar.

# Entrada

En la primera línea se te da $N$ y $M$, la cantidad de islas en el archipielago y la cantidad de conexiones que hay entre las islas. En la siguientes $M$ líneas, se te dan tres enteros $A$, $B$ y $C$, que son las islas y la cantidad de días que hay entre ellas.

Se asegura que $(A_i, B_i) \neq (A_j, B_j)$ para $i \neq j$.

# Salida

La mínima cantidad de espacios que Santy tiene que reservar para recursos para llegar de su base ($1$) hasta su hogar ($N$).

# Ejemplo

||input
3 3
1 2 7
2 3 8
1 3 14
||output
8
||description
Santy tiene dos caminos para llegar de la isla base $1$ hasta su hogar $3$. Una opción es ir directamente de $1$ a $3$ en un viaje de 14 días. Otra opción es hacer un viaje de 7 días de $1$ a $2$, recargar sus recursos, y hacer otro viaje de 8 días $2$ a $3$.
||input
7 9
1 2 4
1 3 5
2 4 2
3 5 7
4 5 1
4 7 8
5 7 9
5 6 7
6 7 7
||output
7
||description
$1$ -> $2$ -> $4$ -> $5$ -> $6$ -> $7$
||end

# Límites

- $1 \leq C_i \leq K \leq 10^{18}$
- $1 \leq A < B \leq N \leq 10^6$
- $1 \leq M \leq 10^6$

# Subtareas

- (80 puntos) $K \leq 10^6$
- (20 puntos) Sin restricciones extras
