//class Solution {
//    public int maxConsecutiveAnswers(String answerKey, int k) {
//        int size = answerKey. size();
//        int right = 0;
//        int result = 0;
//        int count = 0;
//
//        for(int i = 0; i < size; i++){
//            if(answerKey[i] == 'F'){
//                count++;
//            }
//            while(count > k){
//                if(answerKey[left] == 'F'){
//                    count--;
//                }
//                left++;
//            }
//            result = Math.max(i-left+1, result);
//        }
//
//        count = 0;
//        left = 0;
//
//        for(int i = 0; i < size; i++){
//            if(answerKey[i] == 'T'){
//                count--;
//            }
//            while(count > k){
//                if(answerKey[left] == 'T'){
//                    count--;
//                }
//                left++;
//            }
//            result = Math.max(i-left+1, result);
//        }
//
//        return result;
//    }
//}