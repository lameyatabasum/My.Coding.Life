

import java.util.Scanner;

public class OperationsWithInversions_2176A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            int count = 0;
            for(int i=0; i<n; i++) arr[i] = sc.nextInt();
            int i=0, j=1;
            while(j<n){
                if(arr[i]>arr[j]) j++;
                else{
                    count+=j-i-1;
                    i=j;
                    j++;
                }
            }
            count+=j-i-1;
            System.out.println(count);
        }
    }
}

