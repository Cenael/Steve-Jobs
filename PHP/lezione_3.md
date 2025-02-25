<?php

// Abilita la visualizzazione degli errori
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Stampa il contenuto della variabile POST per debug
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    echo "<pre>";
    print_r($_POST);
    echo "</pre>";
}

// Impostazioni database
$host = "localhost";
$user = "root";
$password = "Arduino76!";
$dbname = "test_db_inizio";

// Connessione al database con gestione degli errori
try {
    $conn = new mysqli($host, $user, $password, $dbname);
    if ($conn->connect_error) {
        throw new Exception("Connessione fallita: " . $conn->connect_error);
    }
} catch (Exception $e) {
    die("Errore: " . $e->getMessage());
}

// Funzione per inserire i dati nel database
function insertData($conn, $nome, $email) {
    try {
        $query = "INSERT INTO utenti (nome, email) VALUES ('$nome', '$email')";
        if (!$conn->query($query)) {
            throw new Exception("Errore nell'inserimento: " . $conn->error);
        }
        echo "Dati inseriti con successo!";
    } catch (Exception $e) {
        echo "Errore: " . $e->getMessage();
    }
}

// Gestione del form
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (isset($_POST['nome'])) {
        $nome = $_POST['nome'];
    } else {
        $nome = '';
    }
    
    if (isset($_POST['email'])) {
        $email = $_POST['email'];
    } else {
        $email = '';
    }
    
    if (!empty($nome) && !empty($email)) {
        insertData($conn, $nome, $email);
    } else {
        echo "Tutti i campi sono obbligatori.";
    }
}

// Chiudi connessione
$conn->close();
?>