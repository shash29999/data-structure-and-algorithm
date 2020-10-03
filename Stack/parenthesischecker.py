def is_valid(expression):
    stack=[]
    for i in expression:
        if i in ['(','{','[']:
            stack.append(i)
        else:
            if stack == []:
                return False
            ch=stack.pop()
            if i=='(':
                if ch!=')':
                    return False
            if i=='[':
                if ch!=']':
                    return False
            if i=='{':
                if ch!='}':
                    return False
    if stack==[]:
        return True
    else:
        return False
exp=input()
print(is_valid(exp))