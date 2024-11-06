<link rel="stylesheet" href="styleuser.css">
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
$id_usuario = $_POST['id_usuario'];
$nombre = $_POST['nombre'];
$email = $_POST['email'];
$contrasena = password_hash($_POST['contrasena'], PASSWORD_DEFAULT);  // Cifrar la contraseña
$fecha_registro = $_POST['fecha_registro'];
$tipo_vendedor = isset($_POST['tipo_vendedor']) ? 1 : 0;
$tipo_comprador = isset($_POST['tipo_comprador']) ? 1 : 0;

// Preparar la consulta SQL para insertar los datos
$sql = "INSERT INTO usuarios (id_usuario, nombre, email, contrasena, fecha_registro, tipo_vendedor, tipo_comprador)
        VALUES ('$id_usuario', '$nombre', '$email', '$contrasena', '$fecha_registro', '$tipo_vendedor', '$tipo_comprador')";

// Ejecutar la consulta y verificar si fue exitosa
if ($conn->query($sql) === TRUE) {
    echo " <p class='style1'>Nuevo usuario agregado exitosamente.</p> ";
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
            }, 3000); // 2000 milisegundos = 2 segundos
        }

        // Ejecuta la función cuando la página se ha cargado
        window.onload = redirectToPreviousPage;
    </script>