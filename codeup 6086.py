n = int(input())
sum = 0
a = 1
while True:
    sum += a
    a += 1
    if(sum>=n):
        break

print(sum)