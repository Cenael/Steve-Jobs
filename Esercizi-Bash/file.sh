#!/bin/bash

echo "Inserire il nome del nuovo file"
read file_name

if [[ -e "$file_name"$ ]]; then
echo "Il file esiste già."
exit 1

else 

touch $file_name

echo "File creato."

fi 

while [ "$riga" != "fine" ]
do
 
echo "Aggiungi una riga al file. (Digita 'fine' per terminare)"

read riga
echo "$riga" >> "$file_name"
if [[ "$riga" != "fine" ]]; then
echo "Riga aggiunta"
else

echo "Contenuto del file:"
echo "--------------"
cat "$file_name"
echo "-----------"


echo "Righe:$(wc -l <"$file_name")"
echo "Caratteri:$(wc -m <"$file_name")"
echo "Parole:$(wc -w <"$file_name")"


echo "-------------"

echo "Inserisci un nuovo nome per la copia del file"
read copy_name

cp "$copy_name"
echo "Il nome della copia è $copy_name"
echo "$riga" >> "$copy_name"

echo "Inserisci il nuovo nome per il file originale"
read new_name

mv $file_name $new_name 

echo "Eliminare il file copiato?"
read answer

if [[ "$answer" == "y" ]]; then

rm $copy_name

else

echo "Copia non eliminata"
exit 1

fi
fi
done



