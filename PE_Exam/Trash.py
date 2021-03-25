
m = [[1, 1, 1],
[1, 1 ,1]]

def f(m):
    s=0
    for ite in m.items():
        for i in ite.items():
            s+=i
    print(s)
f(m)