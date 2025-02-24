public class Mountain {
    public static Pos xMax;
    public static Pos xMin;
    public static Pos yMax;
    public static Pos yMin;
    public static Pos zMax;
    public static Pos zMin;
    public static void set() {
        xMax = Pos(9223372036854775807l, 0, 0);
        xMin = Pos(-9223372036854775808l, 0, 0);
        yMax = Pos(0, 9223372036854775807l, 0);
        yMin = Pos(0, -9223372036854775808l, 0);
        zMax = Pos();
        zMin = Pos();
    }
}
