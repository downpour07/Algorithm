def solution(arr):
    data = [-1]
    arr.remove(min(arr))
    if len(arr):
        return arr
    return data