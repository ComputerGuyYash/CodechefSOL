def fib(n):
     global sequence
     
     if(n<len(sequence)):
          return sequence[0:n]
     else:
          ans=sequence
          
          for x in range(len(sequence),n):
              print('l')
              ans.append((ans[len(ans)-1]+ans[len(ans)-2])%10)
          sequence=ans
     return ans
def seq(ans):
     out = []
     for x in range(1,len(ans),2):
          out.append(ans[x])
     return out
def seq2(ans):
     out=ans
     
     while(len(out)!=1):
          out=seq(out)
     return out
if __name__=="__main__":
     sequence=[0,1]     
     T = int(input())
     for x in range(T):
          y = int(input())
          print(fib(y))
          #print(seq2(fib(y))[0])
#print(mod(fib(10000000)))
