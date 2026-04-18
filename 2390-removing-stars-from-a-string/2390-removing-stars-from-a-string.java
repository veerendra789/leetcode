class Solution {
    public String removeStars(String s) {
        Stack<Character> stack=new Stack<>();
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s.charAt(i)!='*'){
                stack.push(s.charAt(i));
            }
            else if(s.charAt(i)=='*'){
                stack.pop();
            }
        }
        //Collections.reverse(stack);

        StringBuilder sb = new StringBuilder();
        for (char ch : stack) {
            sb.append(ch);
        }

        String result = sb.toString();
        return result;
    }
}