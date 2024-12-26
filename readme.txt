El código es, de manera resumida, una pequeña aplicación que muestra un listado de marcas de coches hecho en C++.

Bisect:

Con tal de realizar una prueba del comando git bisect y documentarlo se ha cometido un error en el código a proposito (no incluir un punto y coma)
Para poder encontrar el commit en el que se ha introducido el commit erroneo se ha 
A continuación se explicarán los comandos realizados:

1. git bisect start : Inicializa el bisect
2. git bisect bad : Marca la cabeza indicando que tiene un error
3. git bisect good 350b1868e0ce26f9e159136b4a6b51ffdb78aa48 : Usando un commit que funciona comenzamos a buscar el commit que falla. Esto nos colocará casualmente en el commit 49e72cfe34195553c338e69e63ca5d4ef73c4e23 que resulta ser el que falla
4. gcc -o CarList ./carlist.cc : Compilamos el código para ver que resulta que tenemos que falla aquí presente
5. git bisect reset: Hemos encontrado el commit que falla por lo que dejamos todo como estaba y procedemos a arreglar el fallo

En conclusión, el commit en el que se introdujo el fallo es 49e72cfe34195553c338e69e63ca5d4ef73c4e23

Alias:

- co: checkout (git config --global alias.co checkout)
- ci: commit (git config --global alias.ci commit)
- st: status (git config --global alias.st status)
- br: branch (git config --global alias.br branch)

Ramas:

- main: Rama principal. Podría considerarse la rama en la que hay uan versión "estable"
- develop: Rama en la que se juntarían los merges del resto de ramas antes de juntarlos todos en main
- als140: Rama de trabajo personal. La idea sería que cada desarrolador tenga una rama propia en la que desarrollar su código

Enlace al GitHub:

https://github.com/als140-ua/dca-p9

Aclaraciones:

En github aparece un commit hecho por root. Por algún motivo en el subsistema de linux no me aparecían correctmente los ficheros y me he visto forzado a hacer un commit extra.