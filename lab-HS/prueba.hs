funcion a b = a + b

dro [] a = []
dro list a = drop a list

tai [] a = []
tai list a = tail list

c 0 = 1
c a = a * (a-1)
