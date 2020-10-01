package codeforces.genral;

import java.util.Arrays;

import FastReader.FastReader;

public class MahmoudTriangle {
    public static void main(String[] args) {
            FastReader fs = new  FastReader();
            
            int n = fs.nextInt();

            int[] ar = new int[n];

            for (int i = 0; i < ar.length; i++) {
                ar[i] = fs.nextInt();
            }

            Arrays.sort(ar);

            for(int i=1;i<n-1;i++){

                if(ar[i] + ar[i-1] > ar[i+1]){
                    System.out.println("YES");
                    return;
                }
            }

            System.out.println("NO");
    }
}
