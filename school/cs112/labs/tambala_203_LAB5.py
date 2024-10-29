'''
Name: Tanish Ambala
Partner's Name: Nicholas Yossick
Assignment: Lab 5
Due by the end of your lab class

Honor Code Statement: I recieved no assistance on this assignment
that violates the ethical guidelines set forth by the professor and
class syllabus.

'''

def add_every_third(num_list):
    index = 1
    num_sum = 0
    for num in num_list:
        if index % 3 == 0:
            if num > 0:
                num_sum += num;
            else:
                None
        else:
            None
        index += 1
    return num_sum


def add_to_this(top):
    sum = 0
    for i in range(top + 1):
        sum = sum + i
    return sum

def exp_by_hand(base, exp):
    result = 0
    for _ in range(exp + 1):
        result = base ** exp 
    return result
