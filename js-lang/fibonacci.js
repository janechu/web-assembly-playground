(function() {
    var i, n, t1 = 0, t2 = 1, nextTerm;
    n = 1000;
    console.log("Fibonacci Series: ");
    for (var i = 1; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    console.log(t1);
})()