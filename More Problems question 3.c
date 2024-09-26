#include <stdio.h>

int main() {
    char ch, Encrypted_Character, Decrypted_Character;
    int key = 7; // we used key=7 for simplicity as XOR works on 8 bit(1byte) for char 
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    //Using XOR as it's reversibility makes it ideal for encryption-decryption. 
    Encrypted_Character = ch ^ key; // it will convert both into binary(8 bits!!!!(1byte)). Hence operation can be used between them.
    printf("Encrypted character: %c\n", Encrypted_Character);

    Decrypted_Character = Encrypted_Character ^ key;
    printf("Decrypted character: %c\n", Decrypted_Character);

    return 0;
}

