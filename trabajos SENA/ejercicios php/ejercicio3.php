<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $valor_venta=2000;
    $IVA_porcentaje=16;
    $IVA=($valor_venta*$IVA_porcentaje)/100;
    $precio_venta=$valor_venta+$IVA;

    echo"el precio a pagar es: ".$precio_venta;

    ?>
</body>
</html>