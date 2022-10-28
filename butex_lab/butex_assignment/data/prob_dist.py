from itertools import combinations

def print_combinations(cat_comb):
    for i in range(len(cat_comb)):
        print(str(cat_1_comb[i]) + "\t", end="")

    if (i+1)%5 == 0:
        print()

def create_categories(cat, start, end):    
    for i in range(start, end+1):
        cat.append(i)
    return cat

def category_combinations(cat, r):
    list_combinations = []
    list_combinations += combinations(cat, r)
    
    return list_combinations

def cat_final_comb(cat_comb, step_divisor):
    comb_list = []
    for i in range(16, len(cat_comb), int(len(cat_comb)/step_divisor)):
        comb_list.append(cat_comb[i])
    
    return comb_list 

total_student = 23;
cat_1 = []
cat_2 = []
cat_3 = []

cat_1 = create_categories(cat_1, 1, 13)
cat_2 = create_categories(cat_2, 14, 34)
cat_3 = create_categories(cat_3, 35, 60)

# print(cat_1)
# print(cat_2)
# print(cat_3)
# print()

cat_1_comb = []

cat_1_comb = category_combinations(cat_1, 5)
cat_2_comb = category_combinations(cat_2, 9)
cat_3_comb = category_combinations(cat_3, 6)

# print(len(cat_1_comb))
# print(len(cat_2_comb))
# print(len(cat_3_comb))

cat_1_comb = cat_final_comb(cat_1_comb, total_student)
cat_2_comb = cat_final_comb(cat_2_comb, total_student)
cat_3_comb = cat_final_comb(cat_3_comb, total_student)

# print(len(cat_1_comb))
# print(len(cat_2_comb))
# print(len(cat_3_comb))

std_dict = {}
file = open("roll_numbers", "r")
rolls = file.readlines()

file = open("questions_cat_1&2", "r")
questions = file.readlines()

file = open("problem_set.txt", "w")

for i in range(total_student):
    set = cat_1_comb[i] + cat_2_comb[i] + cat_3_comb[i]
    std_dict[rolls[i]] = set
    file.write(rolls[i][:-1] + " =>" + str(set) + "\n\n");

    # file = open("student/" + str(rolls[i][:-1]) + "_loop_problems", "w")
    
    # print(rolls[i][:-1] + " => ", end="")
    # for q_no in cat_1_comb[i]:
        # print(str(q_no)+" ", end="")
        # file.write(questions[q_no-1][:-1])
    # print()



# print(std_dict)
