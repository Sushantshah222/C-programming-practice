
// print the sequence 1,2,5,10,17,26 less than 500 using do-while loop


void main()
{

    int term, i;
    i=1;
    term=1;
    do{ 
        printf("%d\n",term);
        term = term +(2*i-1);
        i++;
    }
    while(term<500);
    
}
