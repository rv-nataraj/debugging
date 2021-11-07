import sys
n=len(sys.argv)
sum=0

for i in range(1,n):
    sum=sum+sys.argv[i]

print(sum)