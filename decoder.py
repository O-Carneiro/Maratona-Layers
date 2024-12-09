import base64

img = []
with open("./pecas.txt", "r") as file:
    for line in file:
        img.append(line)

with open("a.html", "w") as file:
    for i in img:
        file.write("<img src="+i+"/>")

#tops: 7,8,9
#lefts: 21,18,19
#rights: 12, 17, 0
#middle: 2, 3, 6, 10, 14, 16, 20, 22, 24
#bottoms: 11, 13, 17,
#corners: 1, 4, 23, 5

#swap
file2 = open("ans.html", "w")
#linha 1
file2.write("<img src="+img[1]+"/>")
file2.write("<img src="+img[7]+"/>")
file2.write("<img src="+img[8]+"/>")
file2.write("<img src="+img[9]+"/>")
file2.write("<img src="+img[23]+"/>")
#linha 2
file2.write("<img src="+img[21]+"/>")
file2.write("<img src="+img[3]+"/>")
file2.write("<img src="+img[6]+"/>")
file2.write("<img src="+img[24]+"/>")
file2.write("<img src="+img[15]+"/>")
#linha 3
file2.write("<img src="+img[18]+"/>")
file2.write("<img src="+img[20]+"/>")
file2.write("<img src="+img[10]+"/>")
file2.write("<img src="+img[22]+"/>")
file2.write("<img src="+img[12]+"/>")
#linha 4
file2.write("<img src="+img[19]+"/>")
file2.write("<img src="+img[14]+"/>")
file2.write("<img src="+img[2]+"/>")
file2.write("<img src="+img[16]+"/>")
file2.write("<img src="+img[0]+"/>")
#linha 5
file2.write("<img src="+img[4]+"/>")
file2.write("<img src="+img[11]+"/>")
file2.write("<img src="+img[17]+"/>")
file2.write("<img src="+img[13]+"/>")
file2.write("<img src="+img[5]+"/>")
