<link rel="stylesheet" href="stylearticulo.css">
<?php
// Conexión a la base de datos
$servername = "localhost";
$username = "root";
$password = ""; // Por defecto, sin contraseña en XAMPP
$dbname = "mercado_campesino";

// Crear conexión
$conn = new mysqli($servername, $username, $password, $dbname);

// Verificar la conexión
if ($conn->connect_error) {
    die("Conexión fallida: " . $conn->connect_error);
}

// Recoger datos del formulario
$id_vendedor = $_POST['id_vendedor'] ?? '';
$nombre = $_POST['nombre'] ?? '';
$descripcion = $_POST['descripcion'] ?? '';
$precio = $_POST['precio'] ?? '';
$categoria = $_POST['categoria'] ?? '';
$imagen_url = $_POST['imagen_url'] ?? '';
$fecha_publicacion = $_POST['fecha_publicacion'] ?? '';

// Insertar datos en la base de datos
$sql = "INSERT INTO articulos (id_vendedor, nombre, descripcion, precio, categoria, imagen_url, fecha_publicacion)
        VALUES ('$id_vendedor', '$nombre', '$descripcion', '$precio', '$categoria', '$imagen_url', '$fecha_publicacion')";

if ($conn->query($sql) === TRUE) {
    echo " <p class='style3'>Nuevo usuario agregado exitosamente.</p> ";
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