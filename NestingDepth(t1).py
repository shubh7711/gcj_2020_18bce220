t=int(input())

for i in range(0,t):
    a=input()
    str=""
    count=0
    count1=0
    for j in range(0,len(a)):
        if(j==len(a)-1):
            if(a[j]=='1'):
                if(count==0):
                    str+="(1)"
                    count=1
                else:
                    str+='1)'
            else:
                if(count==0):
                    str+='0'
                else:
                    str+=')0'
        else:
            if(a[j]=='1'):
                if(count==0):
                    str+="(1"
                    count=1
                else:
                    str+='1'
            else:
                if(count==0):
                    str+='0'
                else:
                    str+=')0'
                    count=0
            
                
            
        
    print("Case #{0}: {1}".format((i+1),str))
        
