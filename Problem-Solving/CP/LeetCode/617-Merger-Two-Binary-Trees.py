list1 = []
list2 = []
list3 = []

int l1 = len(list1)
int l2 = len(list2)
for i in range(max(l1,l2)):
    if i >= l1 && i < l2: list3.append(int(list2[i]))
    elif i >= l2 && i < l1: list3.append(int(list1[i]))
    else:
        if list1[i] == 'null' && list2[i] == 'null' : list3.append('null')
        elif list1[i] == 'null': list3.append(int(list2[i]))
        elif list2[i] == 'null': list3.append(int(list1[i]))
        else : list3.append(int(list1[i]) + int(list2[i]))