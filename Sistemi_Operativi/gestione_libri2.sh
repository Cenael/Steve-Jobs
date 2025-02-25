#!/bin/bash

# Funzione per aggiungere libri all'archivio
aggiungi_libri() { 
    echo " "
    echo "Inserisci il numero di libri che desideri aggiungere:"
    read numeri

    if [[ ! $numeri =~ ^[0-9]+$ ]]; then # Verifica se l'input è un numero
        echo "Inserisci un numero."
        sleep 1
        return
    fi    

    libri=() # Array per memorizzare i libri

    for ((i = 0; i < numeri; i++)); do
        n=$((i+1)) # Contatore per il numero del libro
        echo " "
        echo "Inserisci il titolo del $n° libro (utilizza solo lettere e numeri):"
        read titolo

        while [[ ! $titolo =~ ^[a-zA-Z0-9\ ]+$ ]]; do # Verifica se il titolo contiene solo lettere e numeri
            echo "Titolo non valido. Inserisci un titolo valido:"
            read titolo
        done

        echo " "
        echo "Inserisci l'autore del libro (utilizza solo lettere e numeri):"
        read autore

        while [[ ! $autore =~ ^[a-zA-Z\ ]+$ ]]; do # Verifica se l'autore contiene solo lettere
            echo "Autore non valido. Inserisci un autore valido:"
            read autore
        done

        echo " "
        echo "Inserisci l'anno di pubblicazione (4 numeri):"
        read anno

        while [[ ! $anno =~ ^[0-9]{4}$ ]]; do # Verifica se l'anno è composto da 4 numeri
            echo "Anno non valido. Inserisci un anno valido:"
            read anno
        done

        nuovo_libro="- $titolo, $autore, $anno" # Formato del libro da aggiungere
        
        # Verifica duplicati nell'array temporaneo
        # Se trova una corrispondenza esatta, imposta duplicato=true
        duplicato=false
        for libro in "${libri[@]}"; do
            if [[ "$libro" == "$nuovo_libro" ]]; then 
                duplicato=true
                break
            fi
        done

        if [[ "$duplicato" == true ]]; then # Se è un duplicato, mostra un messaggio
            echo " "
            echo "Nota: Il libro '$titolo' di $autore ($anno) è già presente nell'array temporaneo."
            echo "Verrà comunque aggiunto e potrai rimuovere i duplicati usando l'ottimizzazione dell'archivio."
            sleep 1
        fi

        libri+=("$nuovo_libro") # Aggiungi il libro all'array
    done

    # Scrittura di tutti i libri nel file
    for libro in "${libri[@]}"; do
        echo "$libro" >> archivio_libri.txt
    done

    if [ $numeri == 1 ]; then 
        echo " "
        echo "Libro aggiunto con successo."
    else
        echo " "
        echo "Libri aggiunti con successo."
    fi
    sleep 1
}

# Funzione per cercare un libro per titolo o autore nel file archivio_libri.txt
# Utilizza grep -i per una ricerca case-insensitive della parola chiave nel file
cerca_libro() {
    echo " "
    echo "Inserisci una parola chiave (titolo o autore):"
    read keyword
    echo " "
    echo "Risultati della ricerca:"
    grep -i "$keyword" archivio_libri.txt
    sleep 2
}

# Funzione per visualizzare tutti i libri presenti nell'archivio
# Utilizza cat per mostrare il contenuto completo del file
visualizza_libri() {
    echo " "
    echo "Libri presenti nell'archivio:" 
    cat archivio_libri.txt 
    sleep 2
}

# Funzione per ottimizzare l'archivio: ordinare i libri per anno di pubblicazione e rimuovere i duplicati
ottimizza_archivio() {
    # Sort con -t ',' per specificare la virgola come separatore di campo
    # -k3,3n  per ordinare per anno di pubblicazione (terzo campo) in modo numerico
    # uniq rimuove le righe duplicate
    sort -t ',' -k3,3n archivio_libri.txt | uniq > temp.txt
    mv temp.txt archivio_libri.txt # Sostituisce il file originale con il file temporaneo

    echo " "
    echo "Archivio ottimizzato con successo. (Ordinato per anno di pubblicazione e rimossi i duplicati)"
    sleep 1

    cat archivio_libri.txt
    sleep 2
}

# Main

# Verifica se il file archivio_libri.txt esiste, altrimenti lo crea
# touch crea un nuovo file vuoto se non esiste
if [ ! -f archivio_libri.txt ]; then
    touch archivio_libri.txt
fi

# Menu principale
while true; do
    echo "----------------"
    echo " "
    echo "Benvenuto nel gestore di libri!"
    echo " "
    echo "Scegli un'opzione:"
    echo "1. Aggiungi libri"
    echo "2. Cerca libro"
    echo "3. Visualizza libri"
    echo "4. Ottimizza archivio"
    echo "5. Esci"
    echo " "
    echo "----------------"

    read scelta

    # Verifica che l'input sia un numero tra 1 e 5
    if [[ ! $scelta =~ ^[1-5]$ ]]; then
        echo "Scelta non valida. Riprova."
        continue
    fi

    case $scelta in
        1)
            aggiungi_libri
            ;;
        2)
            cerca_libro
            ;;
        3)
            visualizza_libri
            ;;
        4)
            ottimizza_archivio
            ;;
        5)
            echo "Arrivederci!"
            sleep 1
            break
            ;;
    esac
done

# Fine