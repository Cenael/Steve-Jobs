#!/bin/bash

	echo "Inserisci il percorso del file"
read file_txt

	if [[ ! -f "$file_txt" ]]; then
	echo "Il file non esiste"
exit 1
	else


	echo "Inserisci i permessi per l'utente"
	read u        

	if [[ ! "$u" =~ ^[0-7]$ ]]; then
	echo "Permesso non valido"
exit 1
	fi 	

	echo "Inserisci i permessi per il gruppo"
	read g	

	if [[ ! "$g" =~ ^[0-7]$ ]]; then
	echo "Permesso non valido" 
exit 1
	fi
	
	echo "Inserisci i permessi per gli altri" 
	read other
	
	if [[ ! "$other" =~ ^[0-7]$ ]]; then
        echo "Permesso non valido"
exit 1
        fi


chmod $u$g$other "$file_txt"

echo "I permessi sono stati modificati"

ls -l "$file_txt"

fi
