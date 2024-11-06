<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$caracter = 'a';

$vocales = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'];

if (in_array($caracter, $vocales)) {
    echo "$caracter es una vocal.";
} else {
    echo "$caracter no es una vocal.";
}
?>

</body>
</html>