def outerfun():
    x=1
    def innerfun():
        y=3
        sum=x+y
        return sum
    return innerfun()

print(outerfun())
