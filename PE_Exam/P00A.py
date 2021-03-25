def GAP(matrix):
    res=[]
    for i in range(len(matrix)):
        s=0
        c=0
        temp = matrix[i]
        for j in range(len(temp)):
            t2 = temp[j]
            for k in range(len(t2)):
                s+=t2[k]
                c+=1
        res.append(s/c)
    return res

    
matrix = [[[1, 1, 1],
[1, 1 ,1],
[1, 1 ,1],
[1, 1 ,1]],
[[2, 0 ,0],
[0, 10 ,0],
[0, 6, 2],
[4, 0, 0]]]

print(GAP(matrix))
