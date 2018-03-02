from sys import argv, stdin, exit
from re import match

assert len(argv)==4, "correct usage: python3 %s input our_output contestants_output" % argv[0]

try:
    try:
        their_output_tokens = open(argv[3],'r').read().split()
    except:
        assert False, "Wrong answer: Failed to parse the submission (binary file?)"

    fin = open(argv[1],'r')
    TESTS = int(fin.readline())

    assert len(their_output_tokens) == TESTS, "Wrong answer: Incorrect number of answers in your file."
    for i, token in enumerate(their_output_tokens):
        assert match(r'^[A-Z]*$', token), "Wrong answer: Each string must only contain uppercase English letters."

    # distinguish easy/hard using number of test cases
    LENGTH = {100:42, 2000:39}.get(TESTS, None)
    assert LENGTH, "Something is broken. Contact organizers."
    
    for i in range(TESTS):
        fin.readline()
        words = fin.readline().split()
        line = their_output_tokens[i]

        assert len(line) == LENGTH, "Wrong answer: Incorrect length of a string."
        for word in words:
            assert word in line, "Wrong answer: Your string does not contain one of the given words."

except Exception as error_message:
    print(error_message)
    exit(1)

print("OK")

