fib = [1, 1]

for i in range(30):
    fib.append(fib[-1] + fib[-2])
    print(fib[i], end=' ')