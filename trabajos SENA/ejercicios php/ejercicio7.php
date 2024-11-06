<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$n = 10;
$suma = 0;
for ($i = 1; $i <= $n; $i++) {
    $suma += $i;
}
echo "La suma de los primeros $n números enteros positivos es: $suma";
?>
</body>
</html>