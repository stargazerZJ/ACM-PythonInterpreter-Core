print("a" and (), "a" or (), () and "a", () or "a")
print(2 * "a", True * "a", False * "a", ".")

print("a" * 1, "b" * True, "c" * False)
print(False or None, None or False)

def f():
    a = 1
    print(a)

f()
(f)()
# print(a)

def g(b):
    print(b)

g(2)

print(1,2,3,(1,2,3))
print(1 + (2+3) + 4)
print((1,), (), bool(()), bool((1,)))
if ():
    print(1)
elif (False,):
    print(2)

x = 1
def h(a,b,c,d=1+x):
    print(a,b,c,d)

x = 2
h(1,2,3)
h(1,2,3,4)
h(1,2,3,d=4)

