Proceso punto_48
	//desarrollado por manuel vañencia
	//version 1.0
	//mayo 2024
	
	Definir prom1, prom2 Como Real;
	Definir fila, columna Como Entero;
	Definir suma1, suma2, cont1, cont2 Como Entero;
	Definir num1, num2, num3 Como Entero;
	Definir esFibonacci1, esFibonacci2 Como Logico;
	definir mayorFibonacci1, mayorFibonacci2 Como Entero;
	Dimension matriz1[5, 5];
	Dimension matriz2[5, 5];
	Dimension mayorFibonacci1[5];
	Dimension mayorFibonacci2[5];
	definir matriz1, matriz2 Como Entero;
	

	//solicitando numeros matriz 1
	Para fila <- 0 Hasta 4 Con Paso 1 Hacer
		Para columna <- 0 Hasta 4 Con Paso 1 Hacer
			Escribir "Ingrese el número en la posición [", fila + 1, ", ", columna + 1, "] de la primera matriz: ";
			Leer matriz1[fila, columna];
		FinPara;
	FinPara;
	//solicitando numeros matriz 2
	Para fila <- 0 Hasta 4 Con Paso 1 Hacer
		Para columna <- 0 Hasta 4 Con Paso 1 Hacer
			Escribir "Ingrese el número en la posición [", fila + 1, ", ", columna + 1, "] de la segunda matriz: ";
			Leer matriz2[fila, columna];
		FinPara;
	FinPara;
	
	suma1 <- 0;
	suma2 <- 0;
	cont1 <- 0;
	cont2 <- 0;
	//promedio de los mayores elememtos matriz1
	Para fila <- 0 Hasta 4 Con Paso 1 Hacer
		mayorFibonacci1[fila] <- -1;
		Para columna <- 0 Hasta 4 Con Paso 1 Hacer
			Si matriz1[fila, columna] > mayorFibonacci1[fila] Entonces
				num1 <- 0;
				num2 <- 1;
				num3 <- 1;
				esFibonacci1 <- Falso;
				Mientras num3 <= matriz1[fila, columna] Hacer
					Si num3 = matriz1[fila, columna] Entonces
						esFibonacci1 <- Verdadero;
					FinSi;
					num1 <- num2;
					num2 <- num3;
					num3 <- num1 + num2;
				FinMientras;
				Si matriz1[fila, columna] > mayorFibonacci1[fila] Y esFibonacci1 Entonces
					mayorFibonacci1[fila] <- matriz1[fila, columna];
				FinSi;
			FinSi;
		FinPara;
		Si mayorFibonacci1[fila] <> -1 Entonces
			suma1 <- suma1 + mayorFibonacci1[fila];
			contador1 <- contador1 + 1;
		FinSi;
	FinPara;
	//promedio de los mayores elememtos matriz2
	Si contador1 > 0 Entonces
		promedio1 <- suma1 / contador1;
	Sino
		promedio1 <- 0;
	FinSi;
	
	Para fila <- 0 Hasta 4 Con Paso 1 Hacer
		mayorFibonacci2[fila] <- -1;
		Para columna <- 0 Hasta 4 Con Paso 1 Hacer
			Si matriz2[fila, columna] > mayorFibonacci2[fila] Entonces
				num1 <- 0;
				num2 <- 1;
				num3 <- 1;
				esFibonacci2 <- Falso;
				Mientras num3 <= matriz2[fila, columna] Hacer
					Si num3 = matriz2[fila, columna] Entonces
						esFibonacci2 <- Verdadero;
					FinSi;
					num1 <- num2;
					num2 <- num3;
					num3 <- num1 + num2;
				FinMientras;
				Si matriz2[fila, columna] > mayorFibonacci2[fila] Y esFibonacci2 Entonces
					mayorFibonacci2[fila] <- matriz2[fila, columna];
				FinSi;
			FinSi;
		FinPara;
		Si mayorFibonacci2[fila] <> -1 Entonces
			suma2 <- suma2 + mayorFibonacci2[fila];
			contador2 <- contador2 + 1;
		FinSi;
	FinPara;
	
	Si contador2 > 0 Entonces
		promedio2 <- suma2 / contador2;
	Sino
		promedio2 <- 0;
	FinSi;
	//mostrando datos
	Si promedio1 = promedio2 Entonces
		Escribir "El promedio de los mayores elementos que pertenecen a la serie de Fibonacci de cada fila de ambas matrices es igual.";
	Sino
		Escribir "El promedio de los mayores elementos que pertenecen a la serie de Fibonacci de cada fila de ambas matrices no es igual.";
	FinSi;

    
FinProceso




