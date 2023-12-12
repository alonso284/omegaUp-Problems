# Descripción

La panadería OMI ha sido tan exitosa y se ha expandido tanto que la Secretaría de Seguridad y Protección Ciudadana ha informado a la panadería que tiene que instalar unas escaleras de evacuación para asegurar el bienestar de los panaderos en caso de alguna emergencia.

La panadería OMI es un edificio simple de $N$ pisos con $M$ cocinas cada uno. Cada habitación tiene una capacidad de $c_{ij}$ panaderos. La escalera se instalará reemplazando todas las habitaciones que estén sobre la misma columna por escaleras, esto es, sea $k$ una constante $1 \leq k \leq M$, todas las habitaciones con coordenadas $c_ik$ serán reemplazadas con escaleras.

Como la panadería OMI quiere mucho a sus panaderos, te pidió que les ayudes a instalar la escalera de tal manera que el tiempo de evacuación del edificio sea el mínimo. El tiempo de evacuación del edificio es igual al máximo de entre los tiempos de evacuación de entre todos los pisos. El tiempo de evacuación de cada piso es igual al máximo entre la cantidad de personas que hay a la derecha de la escalera y a la izquierda de la escalera.

Por ejemplo, si se tiene un piso con 6 habitaciones con capacidades $[3, 4, 6, 3, 4, 8]$, y se instala la escalera en la segunda habitación, el tiempo de evacuación sería igual a el $max(3 + 4, 3 + 4 + 8) = 15$.

# Entrada

En la primera línea se te dan dos números $N$ y $M$, la cantidad de pisos y la cantidad de habitaciones por piso respectivamente. En las siguientes $N$ líneas, $M$ números, cada una representando la capacidad de la habitación $c_{ij}$.

# Salida

El tiempo de evacuación mínimo que se puede obtener.

# Ejemplos

||input
1 6
3 4 6 3 4 8
||output
13
||input 
3 6
3 4 6 3 4 8
1 5 4 2 5 2
5 2 4 1 4 5
||output
13

## Para 10% de lo casos

- $N = 1$
- $1 \leq M \leq 10^{3}$
- $1 \leq  c_{ij} \leq 10^{3}$

## Para 10% de los casos

- $N = 1$
- $1 \leq M \leq 10^{4}$
- $1 \leq  c_{ij} \leq 10^{6}$

## Para 20% e de los casos

- $N = 1$
- $1 \leq M \leq 10^{6}$
- $1 \leq  c_{ij} \leq 10^{3}$

## Para 40% de los casos

- $N = 1$
- $1 \leq M \leq 10^{6}$
- $1 \leq  c_{ij} \leq 10^{6}$

## Para 20% de los casos

- $1 \leq N \leq 10^{3}$
- $1 \leq M \leq 10^{3}$
- $1 \leq  c_{ij} \leq 10^{6}$
