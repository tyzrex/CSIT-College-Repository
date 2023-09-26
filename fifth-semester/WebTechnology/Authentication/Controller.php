<?php  
session_start();

class Connection {
    private $servername = "db";
    private $username = "root";
    private $password = "root";
    private $dbname = "csit";

    protected $conn;

    public function __construct(){
        $this->conn = mysqli_connect($this->servername, $this->username, $this->password, $this->dbname);
        if(!$this->conn){
            die("Connection failed: " . mysqli_connect_error());
        }
    }
}

class Controller extends Connection{
    public function register($form_data){
        $uname = $form_data['username'];
        $password = $form_data['password'];
        $email = $form_data['email'];
        $dob = $form_data['dob'];
        
        $hash = password_hash($password, PASSWORD_DEFAULT);

        $sql = "INSERT INTO login(username, password, email, dob) VALUES ('$uname', '$hash', '$email', '$dob')";

        if(mysqli_query($this->conn, $sql)){
            header("Location: login.php?success=true");
            exit; // Ensure that no code is executed after the header redirect
        }else{
            echo "Error: " . $sql . "<br>" . mysqli_error($this->conn);
        }
    }

    public function login($uname, $password){


        $sql = "SELECT * FROM login WHERE username = '$uname'";
        $result = mysqli_query($this->conn, $sql);

        if (mysqli_num_rows($result) > 0) {
            $row = mysqli_fetch_assoc($result);
            $hash = $row['password'];
            if (password_verify($password, $hash)) {
                $_SESSION['username'] = $uname;
                header("Location: welcome.php?success=true");
                exit;
            } else {
                header("Location: login.php?error=Invalid password");
                echo "Invalid password";
            }
        } else {
            echo "Invalid username";
        }
    }

    public function logout(){
        session_destroy();
        header("Location: login.php");
        exit;
    }
}

?>