include <BOSL2/std.scad>
include <BOSL2/screws.scad>

$fn = 32;

diff()
cuboid(
    [297, 97, 5],
    rounding = 1,
    edges = [BOTTOM, "Z"],
    anchor = BOTTOM
){
    tag("remove"){
        //ウレタンフォームを敷く凹み
        attach(TOP) cuboid([287, 87, 1]);

        //ゴム足右上
        translate([297/2 - 30, 97/2 - 15, 0])
            attach(BOTTOM) cyl(d=15.9, h=1);
        //ゴム足左上
        translate([-297/2 + 30, 97/2 - 15, 0])
            attach(BOTTOM) cyl(d=15.9, h=1);
        //ゴム足右下
        translate([297/2 - 30, -97/2 + 10, 0])
            attach(BOTTOM) cyl(d=9.5, h=1);
        //ゴム足左下
        translate([-297/2 + 30, -97/2 + 10, 0])
            attach(BOTTOM) cyl(d=9.5, h=1);

        //ネジ穴中央上
        translate([0, 97/2 - 2.5, 0])
            screw_hole("M2.5", l=6, head="none");
        //ネジ穴中央下
        translate([0, -97/2 + 2.5, 0])
            screw_hole("M2.5", l=6, head="none");
        //ネジ穴右上
        translate([297/2 - 2.75, 97/2 - 2.75, 0])
            screw_hole("M2.5", l=6, head="none");
        //ネジ穴左上
        translate([-297/2 + 2.75, 97/2 - 2.75, 0])
            screw_hole("M2.5", l=6, head="none");
        //ネジ穴右下
        translate([297/2 - 2.75, -97/2 + 2.75, 0])
            screw_hole("M2.5", l=6, head="none");
        //ネジ穴左下
        translate([-297/2 + 2.75, -97/2 + 2.75, 0])
            screw_hole("M2.5", l=6, head="none");
    }
}
