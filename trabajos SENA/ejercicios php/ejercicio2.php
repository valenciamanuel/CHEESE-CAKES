<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $dividiendo=10;
    $divisor=3;

    $cociente=intdiv($dividiendo,$divisor);
    $residuo=$dividiendo % $divisor;

    echo "cociente: ".$cociente . "<br>";
    echo "residuo: " .$residuo;
    ?>
</body>
</html>