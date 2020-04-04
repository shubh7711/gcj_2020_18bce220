t=int(input())

def dk(i):
    return i[0]
def dk2(i):
    return i[2]
    
l1=[]
l2=[]

for i in range(0,t):
    n=int(input())
    l1=[]
    for j in range(0,n):
        l2=[]
        l2=[int(a) for a in input().split(" ")]
        l2.append(j)
        l1.append(l2)
    l1.sort(key=dk)
    c=-1
    ja=-1
    flag=True
    for k in l1:
        te=k[0]
        ts=k[1]
        if (c==-1):
            c=ts
            k.append('C')
        elif (te >= c):
            c=ts
            k.append('C')
        elif (te <c and te>=ja):
            ja=ts
            k.append('J')
        elif (te<c and te<ja):
            flag=False
            break
    if(flag==False):
            s="IMPOSSIBLE"
    else:
        s=""
        l1.sort(key=dk2)
        s=s.join([k[3] for k in l1])
    print("Case #{}: {}".format(i+1,s))
    
    