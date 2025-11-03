include <BOSL2/std.scad>
include <BOSL2/screws.scad>

$fn = 32;

diff(){
    cuboid(
        [297, 97, 8.6],
        rounding = 1,
        edges = [TOP, "Z"],
        anchor = BOTTOM
    )
    tag("remove"){
        //基板穴
        cuboid([287, 87, 9]);
        //Type-C端子穴
        translate([-126.75, 46, 4.3])
            cuboid([15, 6, 10], rounding=1, edges="Y");
        //ネジ穴中央上
        translate([0, 97/2 - 2.5, 0])
            screw_hole("M2.5", l=9, head="none");
        //ネジ穴中央下
        translate([0, -97/2 + 2.5, 0])
            screw_hole("M2.5", l=9, head="none");
        //ネジ穴右上
        translate([297/2 - 2.75, 97/2 - 2.75, 0])
            screw_hole("M2.5", l=9, head="none");
        //ネジ穴左上
        translate([-297/2 + 2.75, 97/2 - 2.75, 0])
            screw_hole("M2.5", l=9, head="none");
        //ネジ穴右下
        translate([297/2 - 2.75, -97/2 + 2.75, 0])
            screw_hole("M2.5", l=9, head="none");
        //ネジ穴左下
        translate([-297/2 + 2.75, -97/2 + 2.75, 0])
            screw_hole("M2.5", l=9, head="none");
    }
}

//キースイッチ枠
translate([14.5, 0, 3.6])
    rect_tube(
        isize = [247, 76],
        wall = 6,
        height = 5,
        irounding = 1
    );

//Picoの左
translate([-141, 0, 3.6])
    cuboid([5, 87, 5], anchor=BOTTOM);

//Picoの下
translate([-126.75, -29.5, 3.6])
    cuboid([23.5, 28, 5], anchor=BOTTOM);

//Pico枠
diff(){
    translate([-126.75, 14, 7.6])
        rect_tube(
            isize = [23.5, 59],
            wall = 5,
            height = 6,
            rounding = 1
        );
    tag("remove")
        translate([-126.75, 46, 8.45])
            cuboid([15, 6, 10], rounding=1, edges="Y");
}

//Picoの蓋
translate([-126.75, 14, 16])
    cuboid(
        [33.5, 69, 5],
        rounding = 1,
        edges = [TOP, "Z"]
    );
