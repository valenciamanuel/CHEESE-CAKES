<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $numero1=2;
    $numero2=3;
    $numero3=4;
    $numeros=[$numero1,$numero2,$numero3];

    sort($numeros);

    $menor=$numeros[0];
    $medio=$numeros[1];
    $mayor=$numeros[2];

    echo "el numero menor es: $menor <br>";
    echo "el numero del medio es: $medio <br>";
    echo "el numero mayor es: $mayor <br>";

    ?>
</body>
</html>