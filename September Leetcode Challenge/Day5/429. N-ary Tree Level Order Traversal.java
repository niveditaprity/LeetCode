/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        List<List<Integer>>ans = new ArrayList<List<Integer>>();
        if(root==null)
        {
            return ans;
        }
        Queue<Node>q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty())
        {
            int n = q.size();
            ArrayList<Integer> v = new ArrayList<>();
            for(int i=0 ;i<n;i++)
            {
                for(Node child : q.peek().children)
                {
                    q.offer(child);
                }
                v.add(q.peek().val);
                q.poll();
                
            }
            ans.add(v);
         }
        return ans;
    }
}
