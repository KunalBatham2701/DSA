import random
p = random.randint(1,20)
x = str(p)+"\n"
for i in range(p):
    x += str(random.randint(1,100))
    if(i!=p-1):
        x += "\n"
f = open('input00.txt','w')
f.write(x)
f.close()
