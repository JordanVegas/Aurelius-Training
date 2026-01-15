void reverse_string(char *str, int n) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}
