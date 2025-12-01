
def value(roman):
    if(roman == 'I'):
        return 1
    elif(roman == 'V'):
        return 5
    elif(roman == 'X'):
        return 10
    elif(roman == 'L'):
        return 50
    elif(roman == 'C'):
        return 100
    elif(roman == 'D'):
        return 500
    elif(roman == 'M'):
        return 1000
    else:
        return 0


ans=0
roman=input("Enter the roman number: ")
for i in range(len(roman)):
    curr=roman[i]
    if i+1 < len(roman):
        next= roman[i+1]
    else:
        next = None

    if(i==len(roman)):
        ans += value(curr)
    else:
        if(value(curr) < value(next)):
            ans -= value(curr)
        else:
            ans += value(curr)

print("\nInteger value of ",roman," is ",ans)
