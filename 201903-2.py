n = int(input())

output = []


for i in range(n):
    order = input().replace('x','*').replace('/','//')
    if eval(order)==24:
        output.append('Yes')
    else:
        output.append('No')

for i in range(n):
    print(output[i])
