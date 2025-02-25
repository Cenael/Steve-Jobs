comandi linux per manipolare file

**touch**: crea un file vuoto.
**cat**: visualizza il contenuto di un file 
**wc**: conta righe, parole, caratteri di un file
**cp**: copia un file in un'altra posizione
**>** : Sovrascrive il contenuto del file
**>>**: Aggiunge il contenuto senza eliminare il precedente



!-f : non esiste
">" : salva il contenuto nel file 

chmod +x  : lo rende eseguibile 

"<" trasferisce il contenuto nella variabile $(<$file_txt")

0-7 permessi 
4 = solo lettura
2= scrittura
1= eseguibile 

si sommano ( 4+2 = leggo e scrivo; 4+1 = leggo e eseguo; 2+1 scrivo e eseguo; 7= tutto)

permessi gruppo 

dato il file, inserisci permessi per l'utente, se il permesso è valido
inserisci permessi per il gruppo 
inserisci permessi per gli altri 
combina i permessi = scegli numero totale di permessi dei gruppi (3 cifre)