<?php
class Prodotto {
public $nome;
public $quantita;
public $prezzo;
public function __construct($nome, $quantita, $prezzo) {
$this->nome = $nome;
$this->quantita = $quantita;
$this->prezzo = $prezzo;
}
public function getInfo() {
return "$this->quantita x $this->nome (€" . number_format($this->prezzo, 2) . " cad.)";
}
}
?>

<?php
class ListaSpesa {
private $prodotti = [];
// Aggiunge un prodotto alla lista
public function aggiungiProdotto(Prodotto $prodotto) {
$this->prodotti[] = $prodotto;
}
// Rimuove un prodotto per nome
public function rimuoviProdotto($nome) {
foreach ($this->prodotti as $index => $prodotto) {
if (strtolower($prodotto->nome) === strtolower($nome)) {
unset($this->prodotti[$index]);
$this->prodotti = array_values($this->prodotti); // Riordina l'array
return true;
}
}
return false;
}
// Calcola il totale della spesa
public function calcolaTotale() {
$totale = 0;
foreach ($this->prodotti as $prodotto) {
$totale += $prodotto->quantita * $prodotto->prezzo;
}
return $totale;
}
// Mostra la lista della spesa
public function mostraLista() {
if (empty($this->prodotti)) {
return "La lista della spesa è vuota.";
}
$output = "� **Lista della Spesa:**\n";
foreach ($this->prodotti as $prodotto) {
$output .= "- " . $prodotto->getInfo() . "\n";
}
$output .= "� Totale: €" . number_format($this->calcolaTotale(), 2);
return nl2br($output); // Formatta il testo con interruzioni di riga HTML
}
}
?>

<?php
require_once 'Prodotto.php';
require_once 'ListaSpesa.php';
// Creiamo una nuova lista della spesa
$lista = new ListaSpesa();
// Aggiungiamo alcuni prodotti
$lista->aggiungiProdotto(new Prodotto("Latte", 2, 1.50));
$lista->aggiungiProdotto(new Prodotto("Pane", 1, 2.00));
$lista->aggiungiProdotto(new Prodotto("Uova", 1, 3.50));
$lista->aggiungiProdotto(new Prodotto("Pasta", 3, 1.20));
// Visualizziamo la lista della spesa
echo $lista->mostraLista();
// Rimuoviamo un prodotto
$lista->rimuoviProdotto("Pane");
echo "<br><br>� Dopo la rimozione di 'Pane':<br>";
echo $lista->mostraLista();

**serialize**

sessioni, pdo, oggetti 