public class Assn10{
    public static void main(String[] args){
        System.out.println("i. Floating point number converter.");
        float pi = (float)3.14159265358979;
        System.out.println(pi + " -> " + convertFloat(pi));
        System.out.println("ii. Floating point number enumeration.");
        float fp = (float)0.0;
        int i = 0;
        while (fp < 1.4E-44) {
            ++i;
            System.out.println( i + "th number: " + (fp = nextFloat(fp)));
            
        }
        System.out.println("\niii. Floating point number counting");
        int posFPs = countBetween((float)0.0, Float.MAX_VALUE);
        int zeroOneFPs = countBetween((float)0.0, (float)1.0);
        System.out.println("Number of positive floating point numbers: " + posFPs);
        System.out.println("Number of floating point numbers between 0 and 1: " + zeroOneFPs);
        System.out.println("Proportion (# of 0~1) / (# of positive): " + (double) zeroOneFPs / (double) posFPs * 100.0 + "%\n");
    }
    public static String convertFloat(float number) {
        int number_i = Float.floatToIntBits(number);
        int sign = (number_i & 0x80000000)>>31;
        int exp = (number_i & 0x7f800000)>>23;
        int mantissa = (number_i & 0x007fffff);
        return "("+sign+","+exp+","+mantissa+")";
    }

    public static float nextFloat(float number) {
        return Math.nextUp(number);
    }

    public static int countBetween(float lower, float upper) {
        int lowerInt = Float.floatToIntBits(lower);
        int upperInt = Float.floatToIntBits(upper);
        return upperInt-lowerInt;
    }
}