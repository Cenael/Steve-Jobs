$conn = new mysqli ($host, $user, $pass, §$dbname);

if ($conn->connect_error) { 

    **die**("Connessione fallita: " . $conn ->connect_error);
}

Ogni volta che si apre una connessione va chiusa subito dopo la Query

include => "riscrive" il pezzo di codice 
require once => 