#author: Sotheanith Sok
#import
import sys
import re
import warnings

#supress warning
warnings.simplefilter(action='ignore', category=FutureWarning)

#Define regex
regex = r"^[$][*]*([0-9]|(([1-9][0-9]?[0-9]?)([,][0-9][0-9][0-9])*))([[.][0-9][0-9]]*)?$"

#Open file, read, compare, and print out result
with open(sys.argv[1],"r") as file:
    for line in file:
        line=line.strip('\n')
        matches=re.match(regex,line)
        if(matches):
            print("Matched: ",line)
        else:
            print("Not Matched: ",line)
    
