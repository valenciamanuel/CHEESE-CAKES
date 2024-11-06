Proceso puntp_39
	//desarrollado por manuel vañencia
	//version 1.0
	//mayo 2024
	Definir fila, columna como entero;
	definir matriz1 Como Entero;
	definir matriz2 Como Entero;
    Dimension matriz1[4, 6];
    Dimension matriz2[4, 6];
    Definir promedioEsqui1, promedioEsqui2 Como Real;
    Definir esquinaSupIzq1, esquinaSupDer1, esquinaInfIzq1, esquinaInfDer1 Como Entero;
    Definir esquinaSupIzq2, esquinaSupDer2, esquinaInfIzq2, esquinaInfDer2 Como Entero;
    
    //solicitando la posicion
    Para fila <- 0 Hasta 3 Con Paso 1 Hacer
        Para columna <- 0 Hasta 5 Con Paso 1 Hacer
            Escribir "Ingrese el número en la posición [", fila + 1, ", ", columna + 1, "] de la matriz 1: ";
            Leer matriz1[fila, columna];
        FinPara
    FinPara
    
	//solicitando la posicion
    Para fila <- 0 Hasta 3 Con Paso 1 Hacer
        Para columna <- 0 Hasta 5 Con Paso 1 Hacer
            Escribir "Ingrese el número en la posición [", fila + 1, ", ", columna + 1, "] de la matriz 2: ";
            Leer matriz2[fila, columna];
        FinPara
    FinPara
    
  //asignancion
    esquinaSupIzq1 <- matriz1[0, 0];
    esquinaSupDer1 <- matriz1[0, 5];
    esquinaInfIzq1 <- matriz1[3, 0];
    esquinaInfDer1 <- matriz1[3, 5];
    
	//asignancion
    esquinaSupIzq2 <- matriz2[0, 0];
    esquinaSupDer2 <- matriz2[0, 5];
    esquinaInfIzq2 <- matriz2[3, 0];
    esquinaInfDer2 <- matriz2[3, 5];
//promedio
    promedioEsqui1 <- (esquinaSupIzq1 + esquinaSupIzq1 + esquinaInfIzq1 + esquinaInfDer1) / 4.0;
    promedioEsqui2 <- (esquinaSupIzq2 + esquinaSupDer2 + esquinaInfIzq2 + esquinaInfDer2) / 4.0;
    

    Si promedioEsqui1 = promedioEsqui2 Entonces
        Escribir "El promedio de las esquinas de la primera matriz es igual al promedio de las esquinas de la segunda matriz.";
    SiNo
        Escribir "El promedio de las esquinas de la primera matriz no es igual al promedio de las esquinas de la segunda matriz.";
    FinSi
FinProceso


