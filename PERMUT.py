import math
def equate(x , y):
     x = list(x)
     y = list(y)
     last = y[len(y)-1]
     while(len(x)>len(y)):
          y.append(last)
     return zip(x,y)
k = 2
n = 5
rem = n-k
arr = list(range(1,n+1))
out = []
step = 1
t = math.factorial(n)/(math.factorial(rem)*math.factorial(k))
for x in range(int(t)):
     #print(range(len(arr)))
     temp = arr.copy()
     #print(out)
     for y,z in equate(range(0,rem),range(step)):
          #for z in range(step):
          #if(y>z)
          #print(z,(z+x+y)%n)
          temp.remove(arr[(z+x+y)%n])
     #print(temp)
     out.append(temp)
     if x>n-2:
          
          step+=1
     #print(step)
print(out)
