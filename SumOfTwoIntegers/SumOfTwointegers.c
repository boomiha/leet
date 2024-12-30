int getSum(unsigned int a, unsigned int b) 
{
    unsigned int carry;
    while (b != 0) 
    {
        carry = (a & b) << 1;                       
        a = a ^ b;                       
        b = carry; 
    }
    return a;
    
}