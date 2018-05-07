import java.util.Set;

import sun.security.provider.certpath.Vertex;

import java.util.HashSet;
import java.util.Deque;
import java.util.ArrayDeque;

public class TopologicalSort<T>
{
    public Deque<Vertex<T>> topsort(Graph<T> graph)
    {
        Deque<Vertex<T>> stack  =  new  ArrayDeque<>();
        Set<Vertex<T>> visited = new HashSet<>();
        for(Vertex<T> vertex :  graph.getAllVertex())
        {
            if(visited.contains(vertex))
            {
                continue;
            }
            topsortutil(vertex,stack,visited);
        }
        return stack;
    }

    private  void topsortutil(Vertex<T> vertex, Deque<Vertex<T>> stack, Set<Vertex<T>> visited)
    {
        visited.add(vertex);
        for(vertex<T> childVertex  : vertex.getAdjacentVertexes())
        {
            if(visited.contains(childVertex))
            {
                continue;
            }
            topsortutil(vertex, stack, visited);
        }
        stack.offerFirst(vertex);
    }
    public static void main(String args[]) {
        Graph<Integer> graph = new Graph<>(true);
        graph.addEdge(1, 3);
        graph.addEdge(1, 2);
        graph.addEdge(3, 4);
        graph.addEdge(5, 6);
        graph.addEdge(6, 3);
        graph.addEdge(3, 8);
        graph.addEdge(8, 11);

        TopologicalSort<Integer> sort = new TopologicalSort<Integer>();
        Deque<Vertex<Integer>> result = sort.topsort(graph);
        while (!result.isEmpty()) {
            System.out.println(resutl.poll());
        }
    }
}
