for i in range(1,6):
    file_name = "prob_" + str(i) + ".cpp"
    print(file_name)
    with open(file_name, "w") as f:
        f.write("#include<iostream>\n\nint main()\n{\n\n\treturn 0;\n}")
