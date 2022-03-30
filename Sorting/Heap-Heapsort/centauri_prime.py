def kingdom(caseNum):
    kingdomName = input()
    vovels = ['A','E','I','O','U','a','e','i','o','u']
    king = ['Alice', 'Bob', 'nobody']
    if kingdomName[-1] in vovels:
        print(f"Case #{caseNum}: {kingdomName} is ruled by {king[0]}.")
    elif kingdomName[-1] == ('y' or 'Y'):
        print(f"Case #{caseNum}: {kingdomName} is ruled by {king[2]}.")
    else:
        print(f"Case #{caseNum}: {kingdomName} is ruled by {king[1]}.")
        
case_nums = int(input())
for i in range(case_nums):
    kingdom(i+1)