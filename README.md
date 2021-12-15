# gem5_project

## ΑΘΑΝΑΣΙΑΔΗΣ ΧΑΡΑΛΑΜΠΟΣ 

## **Ερώτημα 1**

### Βασικά χαρακτηριστικά του συστήματος με βάση το αρχείο starter_se.py:

- Voltage domain: 3.3V
- Clock domain: 1GHz
- Private L1 cache
- Shared L2 cache
- Model of CPU: Atomic
- Number of cores: 1
- Number of memory channels: 2
- Memory type: DDR3_1600_8x8
- Number of memory ranks per channel: none
- Physical memory size: 2GB

### Πώς θα μπορούσατε να αλλάξετε τη συχνότητα λειτουργίας του συστήματος;

Ένας τροπος να αλλάξουμε την συχνότητα λειτουργείας του συστήματος είναι αλλάζοντας τον αριθμό μέσα στην εντολή self.clk.domain 
που είναι μεσα στο class SimpleSeSystem (System), η οποία κλάσση βρίσκεται στο αρχείο starter_se.py. 

## **Ερώτημα 2**

### Τα πιο σημαντικά στοιχεία είναι τα sim_seconds, sim_insts και host_inst_rate. Τι
μέτρηση παρουσιάζει το καθένα από αυτά?

- sim_seconds: Number of seconds simulated : 0.000035
- sim_insts: Number of instructions simulated : 5027 
- host_inst_rate: Simulator instruction rate (inst/s) : 32824

## **Ερώτημα 3**

### Χρησιμοποιήστε τις αντίστοιχες παραμέτρους από τα config και stats αρχεία και υπολογίστε το CPI
### σύμφωνα με την εξίσωση:
### 𝐶𝑃𝐼 = 1 + ((𝐼𝐿1. 𝑚𝑖𝑠𝑠_𝑛𝑢𝑚 + 𝐷𝐿1. 𝑚𝑖𝑠𝑠_𝑛𝑢𝑚) × 6 + 𝐿2. 𝑚𝑖𝑠𝑠_𝑛𝑢𝑚 × 50) / Total_inst_num

Σύμφωνα με τα στοιχεία των παραπάνω αρχείων έχουμε τα παρακάτω αποτελέσματα:
- **overall misses L2: 474**
- **icache overall misses: 327**
- **dcache overall misses: 177**
- **total inst num: 5027**

- **CPI = 6,3160931**

## **Ερώτημα 4**

### Aναζητήστε πληροφορίες για τα διαφορετικά μοντέλα in-order CPUs που χρησιμοποιεί ο gem5
### και παραθέστε μια συνοπτική παράγραφο για καθένα από αυτά.

**Simple CPU model:** Το Simple CPU model είναι ένα λειτουργικό in-order μοντέλο το οποίο χρησιμοποιείται σε κυρίως








