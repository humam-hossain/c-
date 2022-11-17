import argparse

def create_probset(problems, start):

    for i in range(start, len(problems)+start):
        file_name = "prob_" + str(i) + ".cpp"
        print(file_name)
        # print("//  " + problems[i-1] + "\n#include<stdio.h>\n\nint main()\n{\n\n\treturn 0;\n}")
        
        with open(file_name, "w") as f:
            f.write("//  " + str(i)+ ". " + problems[i-start] + "\n#include<stdio.h>\n\nint main()\n{\n\n\treturn 0;\n}")

def get_probs(file_path):
    file = open(file_path, "r")
    problems = file.readlines()
    return problems

parser = argparse.ArgumentParser()
parser.add_argument("-s", "--start", type=int)
args = parser.parse_args()

print(args.start)

start = 1
if args.start is not None:
    start = args.start

file_path = "probset"
problems = get_probs(file_path)
# print(problems)
create_probset(problems, start)