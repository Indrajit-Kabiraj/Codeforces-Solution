package codeforces.genral;

import FastReader.FastReader;

public class SubsetMAX {

    public static void main(String[] args) {
        FastReader fs = new FastReader();

        int t =0;

        t = fs.nextInt();

        while(t-->0){
            int n =0;

            n = fs.nextInt();

            int[] ar1 = new int[100];
            int[] ar2 = new int[100];

            for(int i=0;i<n;i++){
                int z = fs.nextInt();

                if(ar1[z] == 1)
                    ar2[z] = 1;
                else
                    ar1[z] =1;
            }
            int max =0;
            for(int i=0; i<=n; i++){
                if(ar1[i] == 0){
                    max  += i;
                    break;
                }
            }

            for(int i=0; i<=n; i++){
                if(ar2[i] == 0){
                    max  += i;
                    break;
                }
            }

            System.out.println(max);
        }
    }
    
}
