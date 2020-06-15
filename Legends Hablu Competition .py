v=0
u=0
a=int(input())
A=[ m for m in input().split() ]
for x in A:
    if(int(x)%2==1):
        v=v+1
    elif(int(x)%2==0):
        u=u+1
        
if(u < v):
    print("Congratulations Robert!! ")
elif(v < u):
    print("Congratulations Max!!")
elif(u==v):
    print("Draw!!")
