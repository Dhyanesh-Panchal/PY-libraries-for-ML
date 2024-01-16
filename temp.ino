// PORT:5,6,7,8,9,10,11,12,13  are 9 -ve ends
int neg[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};

// PORT: 2,3,4 are 3 +ve ends
int pos[] = {2, 3, 4};

// the setup routine runs once when you press reset:
void setup()
{
    // initialize the 9 -ve end pin as an output.
    for (int i = 0; i < 9; i++)
    {
        pinMode(neg[i], OUTPUT);
    }

    // initialize the 3 +ve end pin as an output.
    for (int i = 0; i < 3; i++)
    {
        pinMode(pos[i], OUTPUT);
    }
}

// Function to set the digitalWrites for single light frame
void lightUp(char *pos_activation, char *neg_activation)
{
    for (int i = 0; i < 3; i++)
    {
        pos_activation[i] == '1' ? (digitalWrite(pos[i], HIGH)) : (digitalWrite(pos[i], LOW));
    }

    for (int i = 0; i < 9; i++)
    {
        neg_activation[i] == '1' ? (digitalWrite(neg[i], HIGH)) : (digitalWrite(neg[i], LOW));
    }
}

// the loop routine runs over and over again forever:
void loop()
{
    // Initialize the activation string

    //    digitalWrite(pos1, HIGH);
    //    digitalWrite(pos2, HIGH);
    //    digitalWrite(pos3, LOW);
    //
    //    digitalWrite(neg1, LOW);
    //    digitalWrite(neg2, LOW);
    //    digitalWrite(neg3, HIGH);
    //    digitalWrite(neg4, LOW);
    //    digitalWrite(neg5, LOW);
    //    digitalWrite(neg6, HIGH);
    //    digitalWrite(neg7, LOW);
    //    digitalWrite(neg8, LOW);
    //    digitalWrite(neg9, HIGH);
    //    ==> For this activation, Our function call will be: lightUp("110","001001001");

    lightUp("110", "001001001");
    delay(150);
}