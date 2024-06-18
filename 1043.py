A,B,C = map(float,input().split())
if A+B>C and B+C>A and A+C>B:
    print(f"Perimetro = {(A+B+C):0.1f}")
else:
    print(f"Area = {(0.5*(A+B)*C):0.1f}")
