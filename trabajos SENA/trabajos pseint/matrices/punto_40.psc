Proceso punto_40
	//desarrollado por manuel vañencia
	//version 1.0
	//mayo 2024
	
	definir matriz1, matriz2 Como Entero;
    Dimension matriz1[5, 5];
    Dimension matriz2[5, 5];
    Definir fila, columna, sumaDiago1, sumaDiago2, promDiago1, promDiago2 Como Entero;
    
//asigancion
    sumaDiago1D <- 0;
    sumaDiago2 <- 0;
    
//solicitando posicion
    Para fila <- 0 Hasta 4 Con Paso 1 Hacer
        Para columna <- 0 Hasta 4 Con Paso 1 Hacer
            Escribir "Ingrese el número en la posición [", fila + 1, ", ", columna + 1, "] de la matriz 1: ";
            Leer matriz1[fila, columna];
        FinPara
    FinPara
    
	//solicitando posicion
    Para fila <- 0 Hasta 4 Con Paso 1 Hacer
        Para columna <- 0 Hasta 4 Con Paso 1 Hacer
            Escribir "Ingrese el número en la posición [", fila + 1, ", ", columna + 1, "] de la matriz 2: ";
            Leer matriz2[fila, columna];
        FinPara
    FinPara
    
//suma con la matriz1
    Para fila <- 0 Hasta 4 Con Paso 1 Hacer
        sumaDiago1 <- sumaDiago1 + matriz1[fila, fila];
    FinPara
    
//suma con la matriz2
    Para fila <- 0 Hasta 4 Con Paso 1 Hacer
        sumaDiago2 <- sumaDiago2 + matriz2[fila, fila];
    FinPara
    
//asignando los promedios
    promDiago1 <- sumaDiago1 / 5;
    promDiago2 <- sumaDiago2 / 5;
    

    Si promDiago1 = promDiago2 Entonces
        Escribir "El promedio entero de los elementos de la diagonal de la primera matriz es igual al promedio de los elementos de la diagonal de la segunda matriz.";
    SiNo
        Escribir "El promedio entero de los elementos de la diagonal de la primera matriz no es igual al promedio de los elementos de la diagonal de la segunda matriz.";
    FinSi
FinProceso



