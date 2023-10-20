h=int(input())
m=int(input())

change_m=60-45+m

if m<45:
    change_h=h-1
    if change_h<0:
        change_h=change_h+24
else:
    change_h=h

if h<0:
    change_h=change_h+23

print(change_h, " ", change_m)
