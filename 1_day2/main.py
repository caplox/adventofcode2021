def partOne():
    file1 = open("input.txt", "r")
    x, y = 0, 0
    for line in file1:
        command = line.strip()
        command = command.split(" ")
        if "forward" in command:
            x += int(command[1])
        elif "up" in command:
            y -= int(command[1])
        elif "down" in command:
            y += int(command[1])
    return x*y
    file.close()

def partTwo():
    file1 = open("input.txt", "r")
    x, y, aim = 0, 0, 0
    for line in file1:
        command = line.strip()
        command = command.split(" ")
        if "forward" in command:
            x += int(command[1])
            y += aim*int(command[1])
        elif "up" in command:
            aim -= int(command[1])
        elif "down" in command:
            aim += int(command[1])     
    return x*y
    file.close()
        
print(partOne()) 
print(partTwo())
