<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php

$temperatura= 25;
if ($temperatura < 10) {
    $clima = "Frío";
} elseif ($temperatura >= 10 && $temperatura <= 20) {
    $clima = "Nublado";
} elseif ($temperatura >= 21 && $temperatura <= 30) {
    $clima = "Caluroso";
} else {
    $clima = "Tropical";
}

echo "La temperatura es de $temperatura  y el clima es $clima.";
?>

</body>
</html>