# Descripción

Kaitlyn invitó a Matthew a su casa a jugar Just Dance. Kaitlyn tiene el record mundial por la mayor racha de canciones bailadas con puntuación perfecta. En cambio, Matthew es un holgazán que se la pasa viendo Twitch todo el día que con trabajo logra terminar una canción sin quedar tendido en el suelo.

Kaitlyn, siendo la buena amiga que es, quiere idear un plan para que Matthew pueda bailar la mayor cantidad de canciones seguidas sin cansarse. Sin embargo, hay un problema. Kaitlyn tiene la versión pirata de Just Dance, por lo que solo puede reproducir canciones en un orden predeterminado.

Matthew tiene una estamina total de $M$. El Just Dance de Katlyn tiene $N$ canciones. Cada canción requiere un mínimo de $k_i$ de estamina para poder bailarla. Matthew pierde kᵢ de estamina después de bailar una canción, ¿Cuál es la mayor cantidad de canciones seguidas que podría bailar Matthew?

# Entrada

En la primera línea, dos enteros positivos $M$ y $N$, la estamina de Matthew y la cantidad de canciones respectivamente.
En la segunda línea, $N$ enteros $k_i$, las estaminas requeridas por cada canción.

# Salida

La mayor cantidad de canciones seguidas que puede bailar Matthew.

# Ejemplo

||input
15 6
3 3 5 4 9 1
||output
4
||end

# Límites

$1 \leq M \leq 10^{16}$

$1 \leq N \leq 10^6$

$1 \leq k_i \leq 10^{16}$

# Subtarea

- (20 puntos) $1 \leq N \leq 10^2$
- (20 puntos) $1 \leq N \leq 10^4$
- (20 puntos) $1 \leq M \leq 10^8$ y $1 \leq k_i \leq 10^2$