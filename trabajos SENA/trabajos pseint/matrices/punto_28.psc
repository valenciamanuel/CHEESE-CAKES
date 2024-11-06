Proceso punto_28
	//desarrollado por manuel vañencia
	//version 1.0
	//mayo 2024
	
	//definiendo variables
	Definir mat1,mat2 , f,c,contadormat1,contadormat2  Como real;
	Dimension mat1[4,5];
	Dimension mat2[4,5];
	contadormat1<-0;
	contadormat2<-0;
	//generano los datos de la mattriz1 aleatoriamnete
	Escribir "Generando los datos de la matriz 1.";
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer		
			mat1[f,c]<-azar(50)+1;//sacando los numeros al azar
		FinPara
	FinPara
	//generano los datos de la mattriz2 aleatoriamnete
	Escribir "Generando los datos de la matriz 2.";
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer		
			mat2[f,c] <- azar(60)+1;
		FinPara
	FinPara
	
	//mostrando los datos de la matriz1
	Escribir "Datos de la matriz 1";
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <-0 hasta 4 con paso 1 hacer		
			Escribir Sin Saltar mat1[f,c] ," -  ";
		FinPara
		Escribir "  ";//espacio  de linea
	FinPara
	//mostrando los datos de la matriz2
	Escribir "Datos de la matriz 2";
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer		
			Escribir Sin Saltar mat2[f,c] ," -  ";
		FinPara
		Escribir "  ";
	FinPara
	//numeros con el penltimo=5 de la matriz 1
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer
			si mat1[f,c]>10 Entonces
				mat1[f,c]<- mat1[f,c]/10;
				mat1[f,c]<- trunc(mat1[f,c]);
				si mat1[f,c]=5 Entonces
					contadormat1<-contadormat1+1;
				FinSi
				
			FinSi
		FinPara
	FinPara
	//numeros con el penltimo=5 de la matriz 2
	Para f <- 0 hasta 3 con paso 1 hacer   
		Para c <- 0 hasta 4 con paso 1 hacer
			si mat2[f,c]>10 Entonces
				mat2[f,c]<- mat2[f,c]/10;
				mat2[f,c]<- trunc(mat2[f,c]);
				si mat2[f,c]=5 Entonces
					contadormat2<-contadormat2+1;
				FinSi
				
			FinSi
		FinPara
	FinPara
	Escribir "la matriz 1 tiene ", contadormat1, " numeros con el penltimo = 5";//mostando la cantidad de numeros con el penltimo=5
	Escribir "la matriz 2 tiene ", contadormat2, " numeros con el penltimo = 5";
	
FinProceso
