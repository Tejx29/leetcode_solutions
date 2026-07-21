int reverse = 0;
    
    while (n > 0) {

        int lastdigit = n % 10;
        
        n = n / 10;

        reverse = (reverse * 10) + lastdigit;
    }

    cout << "Reverse: " << reverse;