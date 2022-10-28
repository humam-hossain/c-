def create_probset(problems):

    for i in range(len(problems)):
        file_name = "prob_" + str(i+1) + ".c"
        print(file_name)
        # print("//  " + problems[i-1] + "\n#include<stdio.h>\n\nint main()\n{\n\n\treturn 0;\n}")
        
        with open(file_name, "w") as f:
            f.write("//  " + problems[i] + "\n#include<stdio.h>\n\nint main()\n{\n\n\treturn 0;\n}")

def get_probs(file_path):
    file = open(file_path, "r")
    problems = file.readlines()
    return problems

file_path = "probset"
problems = get_probs(file_path)
# print(problems)
create_probset(problems)