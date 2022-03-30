def processCase(caseNum):
    (candy_bags, kids) = tuple(map(int, input().split()))
    candy_counts = list(map(int, input().split()))
    total = 0
    for n in range(candy_bags):
        total += candy_counts[n]
        
    remaining_candy = total % kids
    
    print(f"Case #{caseNum} : {remaining_candy}")
    
numCases = int(input())
for n in range(numCases):
    processCase(n+1)
