<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$numero = 12345;

// Invertir el número
$numeroOriginal = $numero;
$invertido = 0;
while ($numero > 0) {
    $invertido = $invertido * 10 + $numero % 10;
    $numero = (int)($numero / 10);
}

// Calcular la suma de los dígitos
$numero = $numeroOriginal;
$suma = 0;
while ($numero > 0) {
    $suma += $numero % 10;
    $numero = (int)($numero / 10);
}

if($numeroOriginal==$invertido){
    $escapicua="si";
}else{
    $escapicua="no";
}

echo "Número original: ".$numeroOriginal."<br>";
echo "Número invertido: ".$invertido."<br>";
echo "Suma de los dígitos: ".$suma."<br>";
echo "¿Es capicúa: ?". $escapicua;
?>

</body>
</html>