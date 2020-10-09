 sort(piles.begin(),piles.end());
        int i = 0, sum = 0, n = piles.size();
        while(i++ != n/3) sum += piles[n-2*i];
        return sum;
