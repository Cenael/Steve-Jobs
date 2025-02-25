#!/bin/bash

	echo "Inserisci il percorso del file .txt"
	read file_txt

if [[ ! -f "$file_txt" ]]; then
	echo "Il file non esiste."

exit 1

fi

	contenuto=$(<"$file_txt")
	
	echo "$contenuto"

	echo "Premi invio per salvare il file in .sh"

read

	echo "$contenuto" > script_generato.sh

chmod +x script_generato.sh

	echo "File generato"

sleep 1

	echo "Eseguo il file.."

./script_generato.sh
