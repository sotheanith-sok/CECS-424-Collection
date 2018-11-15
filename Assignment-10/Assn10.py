import bitstring
import struct
import numpy
import sys
def convertFloat(x):
	f1 = bitstring.BitArray(float=x, length=32) 
	sign = f1.bin[0:1]
	exp = f1.bin[1:9]
	mantissa = f1.bin [9:32]

	sign = int(sign, 2) 
	exp = int(exp, 2)
	mantissa = int(mantissa, 2)

	return("(" + str(sign) + "," + str(exp) + "," + str(mantissa) + ")")

def nextFloat(x):
	f1 = bitstring.BitArray(float=x, length=32)
	temp = bin(int(f1.bin[0:], 2) + int('1',2))
	temp = int(temp, 2)
	return(struct.unpack('f', struct.pack('I', temp))[0])    

def countBetween(x, y):
	f1 = bitstring.BitArray(float=x, length=32)
	f2 = bitstring.BitArray(float=y, length=32)
	count = int(f2.bin[0:], 2) - int(f1.bin[0:], 2)
	return(count)	

def main():
	print("i.Floating point number converter \n")
	pi =  3.14159265358979
	print(str(pi) + "->" + convertFloat(pi) + "\n")

	print("\nii. Floating point number enueration. \n")
	fp = 0.0
	i = 0
	f = 1.4e-44
	while fp < f:
		i = i + 1
		fp =nextFloat(fp)
		print(str(i) + "th number: " + str(fp))
	
	print("\niii. Floating point number counting\n")
	posFPS = countBetween(0.0, numpy.finfo(numpy.float32).max)
	zeroOneFps = countBetween(0.0, 1.0)
	print("Number of positive floating point " + str(posFPS))
	print("Number of floating point numbers between 0 and 1 " + str(zeroOneFps))
	print("Proportion (# of 0-1) / (# of positive): " + str(zeroOneFps/posFPS) )


main()