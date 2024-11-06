<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$a = 1;
$b = -3;
$c = 2;

$discriminante = $b * $b - 4 * $a * $c;

if ($discriminante > 0) {
    $raiz1 = (-$b + sqrt($discriminante)) / (2 * $a);
    $raiz2 = (-$b - sqrt($discriminante)) / (2 * $a);
    echo "Las raíces reales son: $raiz1 y $raiz2";
} elseif ($discriminante == 0) {
    $raiz = -$b / (2 * $a);
    echo "La raíz real es: $raiz";
} else {
    echo "No hay raíces reales.";
}
?>


</body>
</html>