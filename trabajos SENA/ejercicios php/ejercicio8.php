<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$segundos = 99999;

$horas = floor($segundos / 3600);
$minutos = floor(($segundos % 3600) / 60);
$segundosRestantes = $segundos % 60;

echo $horas . " horas, " . $minutos . " minutos, " . $segundosRestantes . " segundos";
?>

</body>
</html>