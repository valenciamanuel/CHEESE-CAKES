<link rel="stylesheet" href="stylereseñas.css">
<?php
// Conexión a la base de datos
$servername = "localhost";
$username = "root";  // Usuario predeterminado de XAMPP
$password = "";      // Contraseña vacía por defecto en XAMPP
$dbname = "mercado_campesino";  // Nombre de la base de datos

// Crear la conexión
$conn = new mysqli($servername, $username, $password, $dbname);

// Verificar la conexión
if ($conn->connect_error) {
    die("Conexión fallida: " . $conn->connect_error);
}

// Recoger los datos del formulario
$id_resena = $_POST['id_resena'];
$id_articulo = $_POST['id_articulo'];
$id_vendedor = $_POST['id_vendedor'];
$calificacion = $_POST['calificacion'];
$descripcion = $_POST['descripcion'];
$fecha = $_POST['fecha'];

// Preparar la consulta SQL para insertar los datos en la tabla "reseñas"
$sql = "INSERT INTO reseñas (id_resena, id_articulo, id_vendedor, calificacion, descripcion, fecha)
        VALUES ('$id_resena', '$id_articulo', '$id_vendedor', '$calificacion', '$descripcion', '$fecha')";

// Ejecutar la consulta y verificar si fue exitosa
if ($conn->query($sql) === TRUE) {
    echo " <p class='style2'>Nuevo usuario agregado exitosamente.</p> ";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

// Cerrar la conexión
$conn->close();
?>
<script>
        // Función que redirige a la página anterior después de 2 segundos
        function redirectToPreviousPage() {
            setTimeout(function() {
                window.location.href = 'home.html'; 
            }, 2000); // 2000 milisegundos = 2 segundos
        }

        // Ejecuta la función cuando la página se ha cargado
        window.onload = redirectToPreviousPage;
    </script>