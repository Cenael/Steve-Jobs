#!/bin/bash

function addizione(){

clear

echo "Quanti valori vuoi sommare?"
read n
if [[ "$n" =~ ^[0-9]+$ ]]; then
somma=0
for (( i=1; i<=n; i++ ))
do
echo "inserisci il valore $i:"
read val
if [[ "$val" =~ ^[0-9]+$ ]]; then
somma=$((somma + val))
else
echo "Valore non valido. Inserisci un numero."
sleep 2
addizione
fi
done
echo "risultato: $somma"
read -p "Premi un tasto per continuare.."

else
echo "Valore non valido. Inserisci un numero."
fi
sleep 3
addizione
}

function divisione(){
clear


echo "Inserisci il primo valore"
read val1
if [[ "$val1" =~ ^[0-9]+$ ]]; then
echo "Inserisci il secondo valore"
read val2
if [[ "$val2" =~ ^[0-9]+$ ]]; then
divisione=$((val1/val2))
else 
echo "Valore non valido. Inserisci un numero."
fi
echo "Risultato: $divisione"
read -p "Premi un tasto per continuare.."

else 
echo "Valore non valido. Inserisci un numero."

fi
sleep 2
divisione
}


function moltiplicazione(){

clear

echo "Quanti valori vuoi moltiplicare?"
read n
if [[ "$n" =~ ^[0-9]+$ ]]; then
molt=1
for (( i=1; i<=n; i++ ))
do
echo "inserisci il valore $i:"
read val
if [[ "$val" =~ ^[0-9]+$ ]]; then
molt=$((molt * val))
else
echo "Valore non valido. Inserisci un numero."
fi
done
echo "risultato: $molt"
read -p "Premi un tasto per continuare.."

else
echo "Valore non valido. Inserisci un numero."


fi
sleep 2
moltiplicazione

}




function sottrazione (){
clear
echo "Quanti valori vuoi sottrarre?"
read n
if [[ "$n" =~ ^[0-9]+$ ]]; then
echo "inserisci il primo valore:"
read val
sottrazione=$val
for (( i=2; i<=n; i++ )) 
do
echo "Inserisci il valore $i:" 
read val
if [[ "$val" =~ ^[0-9]+$ ]]; then
sottrazione=$((sottrazione - val))
else
echo "Valore non valido. Inserisci un numero."
fi
done
echo "risultato: $sottrazione"
read -p "Premi un tasto per continuare.."

else
echo "Valore non valido. Inserisci un numero."


fi
sleep 2
sottrazione

}


function menu (){ 
clear 
echo "Scegli un'operazione da eseguire:" 
echo "1) Addizione" 
echo "2) Sottrazione"
echo "3) Moltiplicazione"
echo "4) Divisione"
echo "5) Esci"
}


# Ciclo principale del programma
while true
do
menu
read -p "Inserisci la tua scelta (1-5):" operazione

# Controllo dell'input per la validità
if [[ "$operazione" =~ ^[1-5]$ ]]; then
case $operazione in
1) addizione
;;
2) sottrazione
;;
3) moltiplicazione
;;
4) divisione
;;
5) 
echo "Uscita dal programma"
break
;;
esac
else
echo "Scelta non valida. Inserisci un numero tra 1 e 5."
sleep 2
fi
done
