#include <stdio.h>
#include <stdlib.h>

int main()
{
    //δηλωσεις μεταβλητων
    double athroisma, mean, a1=25, a2=586, a3=2003;

    // υπολογισμος αθροισματος και αντιστοιχηση μεταβλητης
    athroisma= a1 + a2 + a3;

    //υπολογισμος μεσου ορου και αντιστοιχηση μεταβλητης
    mean= (a1 + a2 +a3) / 3;

    //εκτύπωση αποτελεσμάτων
    printf("Sum is: %f,mean is: %f \n", athroisma, mean);

    return 0;
}
