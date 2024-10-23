int  power(int num, int pow) {
    int i, sum = 1;
    for (i = 1; i <= pow; i++) {
        sum = sum * num;
    }
    return sum;
}


int modulus(int num1, int num2) {
    return  num1 % num2;
}
