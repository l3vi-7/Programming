for _ in range (int (input())):
    n = int(input())
    s = input()
    a = 0
    b = 0
    rema = n, remb = n
    for i in range(len(s)):
        if i % 2 == 0:
            ra -= 1
            if s[i] == 1:
                a += 1
        if i % 2 != 0:
            rb -= 1
            if s[i] == 1:
                b += 1
        
        if ra <  