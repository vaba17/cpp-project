Min =0
Sec =0
for i in range(int(input())):
    a, b = map(int, input().split())
    Min =Min + (a*60)
    Sec = Sec + b
    time = Sec/Min
if time > 1:
    print('{:.9f}'.format(time))

else:
    print('measurement error')
