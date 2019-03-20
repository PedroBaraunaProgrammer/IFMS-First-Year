#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "Portuguese");

    float amountSpent,
    price,
    amount,
    getedValue;


    printf("Hello! i am pedro's program, you will invite me to this party?");
    scanf("%f", &amountSpent);

    amountSpent = 0;

    printf("well done ! so put the amount you need to the party:");
    scanf("%f", &amountSpent);

    printf("Now, put the price of each raffle: ");
    scanf("%f", &price);

    printf("and the amount of raffle sold:");
    scanf("%f", &amount);

    getedValue= price * amount;

    if (amountSpent == getedValue)
        printf("You can make this party with no margin of error.");
    else {
        if (getedValue < amountSpent)
            printf("there will still be more raffle tickets sold to make the party ... don't let me down!");
        else
            printf("will left over to the tody!");
    }

}

