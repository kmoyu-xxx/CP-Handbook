if __name__ == '__main__':
    s = input()
    alnum = any([char.isalnum() for char in s])
    alpha = any([char.isalpha() for char in s])
    digit = any([char.isdigit() for char in s])
    lower = any([char.islower() for char in s])
    upper = any([char.isupper() for char in s])
            
    print(alnum, alpha, digit, lower, upper, sep='\n')
        
