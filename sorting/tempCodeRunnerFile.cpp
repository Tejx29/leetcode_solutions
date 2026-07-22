int maxi;

    for(int i = 0; i < n - 1; i++) {

        maxi = i;

        for(int j = i + 1; j < n; j++) {

            if(arr[j] > arr[maxi]) {

                maxi = j;
            }
            
            i += 1;

        }

        int temp = arr[maxi];
        arr[maxi] = arr[i];
        arr[i] = temp;
    }