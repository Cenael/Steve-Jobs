Il terminale ha delle funzioni che il sistema operativo riesce a leggere e utilizzare

ls leggo 
cd entro
tasklist
touch (crea nuovi file)
chmod (cambiare i permessi, chi li può leggere, scrivere o eseguire)
"sh" eseguibile dal sistema operativo
mkdir crea cartella
=~ ^[1-100]  -> espressione regolare 

function addizione (){
echo = console log
read legge e inserisce una variabile
somma inizializzata 
#!/bin/bash

clear

echo "Quanti valori vuoi sommare?"
read n
somma=0
for (( i=1; i<=n; i++ ))
do
echo "inserisci il valore $i:"
read val
somma=$((somma+val))
done
echo "risultato: $somma"
read -p "premi un tasto per continuare.."

}
**nano** per creare programmi

history -> !numero operazione eseguita 

/? per vedere che fa il comando