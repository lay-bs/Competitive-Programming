#DOES NOT WORK#

from collections import defaultdict

def dfs(node, parent, dp, k, values, graph):
    children_values = []

    #children
    for child in graph[node]:
        if child != parent:
            dfs(child, node, dp, k, values, graph)
            children_values.append(dp[child][0])

    children_values.sort(reverse=True)

    children_values += [0] * (k - len(children_values))

    #update
    dp[node][1] = values[node - 2] + sum(children_values[:k-1])
    dp[node][0] = sum(children_values[:k])

def main():
    N, K = map(int, input().split())
    values = list(map(int, input().split()))
    parents = list(map(int, input().split()))

    #tree 
    graph = defaultdict(list)
    for i in range(2, N + 1):
        graph[parents[i - 2]].append(i)

    dp = [[0, 0] for _ in range(N + 1)]
    dfs(1, 0, dp, K, values, graph)
    print(dp[1][0])

if __name__ == "__main__":
    main()
