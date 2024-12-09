import re
file = open('a.txt', 'w')
for line in file:
    line.replace('\n','')

print(len(re.findall(r'XIXI',file)))
