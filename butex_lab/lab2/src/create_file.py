for i in range(1,16):
    file_name = "prob_" + str(i) + ".c"
    print(file_name)
    with open(file_name, "w") as f:
        f.write("#include<stdio.h>\n\nint main()\n{\n\n\treturn 0;\n}")
