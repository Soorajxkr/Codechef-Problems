#Simple Division Problem

Given an array A of N integers and two integers X and Y, find the number of integers in the array that are both less than or equal to X and divisible by Y.

#INPUT
The first line of the input contains an integer T denoting the number of test cases. The description of each test case follows.

    The first line of each test case contains three space separated integers: N, X and Y.

    The second line contains N space-separated integers A1, A2, ..., AN denoting the array A.

#Output

    For each test case, output a single line containing the answer.

#Constraints

    1 ≤ T ≤ 10
    1 ≤ N ≤ 105
    1 ≤ A1, A2, ... ,AN ≤ 109
    1 ≤ X, Y ≤ 109

#Information to score partial points
For 20% of the score, it is guaranteed that N ≤ 100.
For further 30% of the score, it is guaranteed that N ≤ 1000.
For the rest of the 50% of the score, no extra guarantees. That is, N ≤ 105.

Example
Input 1:
1
3 2 1
1 2 3

Output 1:
2

Input 2:
2
5 10 3
4 6 12 3 9
1 10 10
20

Output 2:
3
0
