# 🖥️ Introduzione ai Sistemi Operativi  

## 📌 Il ruolo del sistema operativo  

Il **sistema operativo (SO)** è il software che gestisce le risorse hardware e software di un computer, consentendo all'utente di interagire con la macchina in modo semplice ed efficiente.  

### ✨ Funzioni principali:  
- **Gestione dei processi** 🏃‍♂️: Controlla l'esecuzione dei programmi, assegnando loro risorse e stabilendo priorità.  
- **Gestione della memoria** 🧠: Decide come allocare la RAM ai vari processi, liberandola quando necessario.  
- **Gestione delle periferiche** ⌨️🖨️: Coordina l’uso di dispositivi come tastiere, monitor, stampanti e unità di archiviazione.  
- **Organizzazione dei file** 📂: Assicura un accesso sicuro e ordinato ai dati.  
- **Sicurezza e accesso ai dati** 🔐: Controlla chi può modificare, eseguire o leggere determinati file.  

### 🔄 Come funziona?  
Quando avviamo un programma, il SO crea un **processo**, assegnandogli memoria e stabilendo la sua **priorità** rispetto agli altri processi in esecuzione. Ad esempio, alcuni processi fondamentali, come quelli del sistema o dell’antivirus, hanno sempre la priorità più alta rispetto ad altri programmi.  

Se la memoria è occupata da troppi processi, il SO utilizza tecniche di **memoria virtuale**, spostando i dati meno usati su disco per liberare RAM.  

## 🏛️ Evoluzione storica dei sistemi operativi  

I sistemi operativi non sono sempre stati interattivi come oggi. Ecco un rapido viaggio nella loro evoluzione:  

1️⃣ **Sistemi batch** (anni ’50-’60) 🏗️  
   - I programmi venivano elaborati in serie, senza interazione diretta con l’utente.  

2️⃣ **Time-sharing e sistemi multiutente** (anni ’60-’70) ⏳  
   - Consentivano a più utenti di lavorare contemporaneamente su un unico computer.  
   - Nascita di UNIX.  

3️⃣ **Interfacce grafiche e PC** (anni ’80) 🖥️  
   - Introduzione di Windows e macOS, rendendo i computer accessibili a tutti.  

4️⃣ **Reti e sistemi distribuiti** (anni ’90-2000) 🌍  
   - Connessione tra computer e utilizzo di Internet.  

5️⃣ **Sistemi operativi moderni** (oggi) 📱  
   - Diffusione di Android, iOS e sistemi embedded in dispositivi smart.  

## 🔍 Tipologie di sistemi operativi  

I sistemi operativi possono essere suddivisi in diverse categorie in base alle loro caratteristiche e utilizzi.  

### 🏭 **1. Sistemi batch**  
- Eseguono programmi in sequenza, senza intervento dell’utente.  
- Ancora usati per grandi elaborazioni aziendali.  

### 🎮 **2. Sistemi interattivi**  
- Consentono un uso diretto da parte dell’utente (es. Windows, macOS, Linux).  

### ⏱ **3. Sistemi real-time**  
- Rispondono a eventi in tempo reale (es. software per airbag o robot chirurgici).  

### 🖥 **4. Sistemi paralleli**  
- Usano più processori per elaborare dati simultaneamente.  

### 🌐 **5. Sistemi distribuiti**  
- Più computer lavorano insieme, spesso attraverso il cloud.  

### 📲 **6. Sistemi embedded**  
- Presenti in dispositivi come smartwatch, elettrodomestici e automobili.  

## ⚙️ Il funzionamento di un sistema operativo  

Ogni volta che apriamo un programma, il SO gestisce un **processo**, stabilendo le risorse necessarie e il suo livello di priorità.  

🔹 **Gestione della memoria**: Se la RAM è piena, il sistema sposta i dati meno importanti in memoria virtuale.  

🔹 **Gestione delle periferiche**: Quando un programma vuole stampare, il SO usa tecniche come:  
   - **Buffering**: Memorizza temporaneamente i dati fino alla disponibilità della periferica.  
   - **Spooling**: Accoda le richieste, elaborandole in ordine.  

## 🔐 Sicurezza e gestione degli accessi  

La sicurezza è un aspetto fondamentale di ogni sistema operativo.  

### 🛡 **Permessi dei file**  
- **Lettura** 📖: Un file può essere visualizzato ma non modificato.  
- **Scrittura** ✏️: Il file può essere modificato.  
- **Esecuzione** 🚀: Il file può essere avviato come programma.  

### 🔑 **Crittografia**  
- Permette di proteggere i dati rendendoli leggibili solo a chi possiede la chiave di decrittazione.  
- Già utilizzata ai tempi di Giulio Cesare per cifrare i messaggi segreti.  

### 📜 **File di log**  
- Il SO registra tutte le operazioni critiche, come accessi e modifiche ai file di sistema.  

### 🚨 **Attacchi informatici**  
Un pericolo comune è il **"Man in the Middle"**, in cui un hacker intercetta la comunicazione tra due dispositivi. Per proteggersi, i moderni sistemi operativi implementano protocolli di sicurezza avanzati.  

## 📌 Conclusione  

Il sistema operativo è il cuore di ogni dispositivo, gestendo memoria, processi, periferiche e sicurezza.  

Nel tempo, si è evoluto da semplici sistemi batch a sofisticati ambienti distribuiti, permettendo oggi l'uso di computer, smartphone e dispositivi embedded.  

Comprendere il funzionamento di un SO è essenziale per chiunque voglia approfondire il mondo dell’informatica.  
