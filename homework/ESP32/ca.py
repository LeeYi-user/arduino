string = []

with open("OU=ePKI Root Certification Authority,O=Chunghwa Telecom Co._, Ltd.,C=TW.crt", "r") as f:
    for i in f.readlines():
        string.append("\"" + i.strip() + "\\n\"" + " \\\n")

with open("output", "w") as f:
    for i in string:
        f.write(i)
