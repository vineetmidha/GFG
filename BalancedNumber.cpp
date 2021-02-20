// https://practice.geeksforgeeks.org/problems/check-if-the-number-is-balanced3014/1/?category[]=Mathematical&category[]=Mathematical&difficulty[]=0&page=1&query=category[]Mathematicaldifficulty[]0page1category[]Mathematical#

// number as string

	bool balancedNumber(string n)
	{
	    int mid = n.size()/2;
	    int sum = 0;
	    
	    for (int i=0; i<n.size(); i++){
	        if (i < mid)
	            sum += n[i]-'0';
            else if (i > mid)
                sum -= n[i]-'0';
	    }
	    
	    return sum==0;
	}

// number as integer

  bool balancedNumber(int n){
    int digits = int(log10(n))+1;

    if (digits == 1) return true;

    int mid = digits / 2;
    int count = 0;
    int sum = 0;

    while (n != 0) {
        if (count < mid)
            sum += n % 10;
        else if (count != mid)
            sum -= n % 10;

        n /= 10;
        count++;
    }

    return sum==0;
}
