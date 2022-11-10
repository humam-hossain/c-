import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-s", "--start", type=int)
parser.add_argument("-e", "--end", type=int)
args = parser.parse_args()

# print(args.start, args.end)

start = args.start
end = args.end

for i in range(start, end+1):
    file_name = "prob_" + str(i) + ".c"
    print(file_name)
    
    with open(file_name, "w") as f:
        f.write("#include<stdio.h>\n\nint main()\n{\n\n\treturn 0;\n}")
