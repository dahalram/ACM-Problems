//Problem number 1585

a=raw_input()
a=int(a)
x={"Emperor Penguin":0, "Macaroni Penguin":0, "Little Penguin":0}

for i in xrange(a):
  m=raw_input()
  x[m]+=1

a=x["Emperor Penguin"]
b=x["Macaroni Penguin"]
c=x["Little Penguin"]

if a>b and a>c:
  print "Emperor Penguin"
if b>a and b>c:
  print "Macaroni Penguin"
if c>a and c>b:
  print "Little Penguin"
