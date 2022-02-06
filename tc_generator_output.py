f = open('input01.txt', 'r')
x = int(f.readline())
arr = []
for i in range(x):
    arr.append(int(f.readline()))

def search(temp2,n):
    start = 0
    end = len(temp2)-1
    while(start<=end):
        mid = (start+end)//2
        if temp2[mid] == n:
            return True
        elif temp2[mid]<n:
            start = mid+1
        else:
            end = mid-1
    return False

# logic
temp = []
temp2 = []
for i in arr:
    if i>0:
        temp.append(i)
    else:
        temp2.append(i)
temp2.sort()
l= []
for i in range(len(temp)):
    if(search(temp2,-1*temp[i])):
        l.append((-1*temp[i],temp[i]))
count = len(l)

# store output in count variable and in string format

f.close()
f = open('output001.txt', 'w')
f.write(str(count))
f.close()
