def solution(seoul):
    answer = ''
    cnt = 0
    for i in seoul:
        if i == "Kim":
            answer = f"김서방은 {cnt}에 있다"
        cnt += 1
            
    return answer