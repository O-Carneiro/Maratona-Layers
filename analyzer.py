import pytesseract
import os
import cv2

ans = []
files = os.listdir("./video/")
cont = 0
for file in sorted(files):
    image = cv2.imread("./video/"+file, 0)
    if(int(file[-5])%2==0):
        image = cv2.bitwise_not(image)
    thresh = cv2.threshold(image, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)[1]

    data = pytesseract.image_to_string(thresh, config="outputbase digits --psm 6")
    ans.append(data)
    print(cont)
    cont += 1

wri= open("ans.txt", 'w')
wri.write(str(ans))
