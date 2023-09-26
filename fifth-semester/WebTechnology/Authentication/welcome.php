<?php
session_start(); // Start the session at the very beginning

if (isset($_SESSION['username'])) {
    $username = $_SESSION['username'];
} else {
    header("Location: login.php");
    exit(); // Ensure that no code is executed after the header redirect
}





?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Welcome</title>
</head>
<body>
    <h1>Welcome <?php echo $username; ?></h1>
    <a href="logout.php">Logout</a>
</body>
</html>
