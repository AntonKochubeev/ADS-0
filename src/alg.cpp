// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
     while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
