int x=min(solve(a+1,b),solve(a,b+1));
    return 1+min(x,solve(a|b,b));