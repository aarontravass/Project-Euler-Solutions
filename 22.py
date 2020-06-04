file=open('names.txt','r')

s=""

for each in file:
    s+=each

a=sorted(s.split(','))
print(len(a))

ans=0
cnt=1
for name in a:
    for i in range(1,len(name)-1):
        ans+=(cnt)*(ord(name[i])-64)
    cnt+=1

print(ans)
file.close()



