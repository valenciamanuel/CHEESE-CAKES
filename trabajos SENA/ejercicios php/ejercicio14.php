<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$numero = 15;

$numerosEnLetras = [
    "cero", "uno", "dos", "tres", "cuatro", "cinco",
    "seis", "siete", "ocho", "nueve", "diez",
    "once", "doce", "trece", "catorce", "quince",
    "dieciséis", "diecisiete", "dieciocho", "diecinueve", "veinte"
];

if ($numero >= 0 && $numero <= 20) {
    echo $numerosEnLetras[$numero];
} else {
    echo "Número fuera del rango permitido.";
}
?>

</body>
</html>