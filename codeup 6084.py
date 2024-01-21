h, b, c, s = map(int, input().split())
mb = float(h*b*c*s/8/1024/1024)
print("%.1lf MB" % mb)