/* This file is generated by a perl script.. please do not modify */ 

#ifndef MANGOS_ZONEDEFINE_H
#define MANGOS_ZONEDEFINE_H

#include "Zone.h"
#include "Utilities/TypeList.h"



enum zone_t
{
    ZONE_33 = 33,
    ZONE_3358 = 3358,
    ZONE_139 = 139,
    ZONE_17 = 17,
    ZONE_1637 = 1637,
    ZONE_331 = 331,
    ZONE_1 = 1,
    ZONE_141 = 141,
    ZONE_16 = 16,
    ZONE_3277 = 3277,
    ZONE_44 = 44,
    ZONE_28 = 28,
    ZONE_440 = 440,
    ZONE_40 = 40,
    ZONE_618 = 618,
    ZONE_400 = 400,
    ZONE_361 = 361,
    ZONE_14 = 14,
    ZONE_215 = 215,
    ZONE_1537 = 1537,
    ZONE_148 = 148,
    ZONE_10 = 10,
    ZONE_490 = 490,
    ZONE_11 = 11,
    ZONE_130 = 130,
    ZONE_2597 = 2597,
    ZONE_267 = 267,
    ZONE_1638 = 1638,
    ZONE_46 = 46,
    ZONE_1377 = 1377,
    ZONE_1657 = 1657,
    ZONE_85 = 85,
    ZONE_36 = 36,
    ZONE_1497 = 1497,
    ZONE_3 = 3,
    ZONE_1519 = 1519,
    ZONE_51 = 51,
    ZONE_406 = 406,
    ZONE_12 = 12,
    ZONE_41 = 41,
    ZONE_15 = 15,
    ZONE_47 = 47,
    ZONE_8 = 8,
    ZONE_38 = 38,
    ZONE_4 = 4,
    ZONE_45 = 45,
    ZONE_357 = 357,
    ZONE_405 = 405,
    ZONE_493 = 493,
};


template<zone_t T>
struct ZoneHolder {};

template<zone_t T>
struct ZoneDefinition
{
    static Zone* Create(void)
    {
        return(new Zone());
    }

    static bool InZone(const float x, const float y)
    {
        return false;
    }
};


template<> struct ZoneDefinition<ZONE_33>
{
    static Zone* Create(void)
    {
        return( new Zone(2220.83325195312, -4160.41650390625, -11168.75, -15422.916015625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -15422.916015625 <= x && x >= -11168.75 && -4160.41650390625 <= y && y <= 2220.83325195312 );
    }
};

template<> struct ZoneDefinition<ZONE_3358>
{
    static Zone* Create(void)
    {
        return( new Zone(1858.33325195312, 102.08332824707, 1508.33325195312, 337.5) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 337.5 <= x && x >= 1508.33325195312 && 102.08332824707 <= y && y <= 1858.33325195312 );
    }
};

template<> struct ZoneDefinition<ZONE_139>
{
    static Zone* Create(void)
    {
        return( new Zone(-2185.41650390625, -6056.25, 3799.99975585938, 1218.75) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 1218.75 <= x && x >= 3799.99975585938 && -6056.25 <= y && y <= -2185.41650390625 );
    }
};

template<> struct ZoneDefinition<ZONE_17>
{
    static Zone* Create(void)
    {
        return( new Zone(2622.91650390625, -7510.41650390625, 1612.49987792969, -5143.75) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -5143.75 <= x && x >= 1612.49987792969 && -7510.41650390625 <= y && y <= 2622.91650390625 );
    }
};

template<> struct ZoneDefinition<ZONE_1637>
{
    static Zone* Create(void)
    {
        return( new Zone(-3680.60107421875, -5083.20556640625, 2273.87719726562, 1338.46057128906) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 1338.46057128906 <= x && x >= 2273.87719726562 && -5083.20556640625 <= y && y <= -3680.60107421875 );
    }
};

template<> struct ZoneDefinition<ZONE_331>
{
    static Zone* Create(void)
    {
        return( new Zone(1699.99987792969, -4066.66650390625, 4672.91650390625, 829.166625976562) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 829.166625976562 <= x && x >= 4672.91650390625 && -4066.66650390625 <= y && y <= 1699.99987792969 );
    }
};

template<> struct ZoneDefinition<ZONE_1>
{
    static Zone* Create(void)
    {
        return( new Zone(1802.08325195312, -3122.91650390625, -3877.08325195312, -7160.41650390625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -7160.41650390625 <= x && x >= -3877.08325195312 && -3122.91650390625 <= y && y <= 1802.08325195312 );
    }
};

template<> struct ZoneDefinition<ZONE_141>
{
    static Zone* Create(void)
    {
        return( new Zone(3814.58325195312, -1277.08325195312, 11831.25, 8437.5) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 8437.5 <= x && x >= 11831.25 && -1277.08325195312 <= y && y <= 3814.58325195312 );
    }
};

template<> struct ZoneDefinition<ZONE_16>
{
    static Zone* Create(void)
    {
        return( new Zone(-3277.08325195312, -8347.916015625, 5341.66650390625, 1960.41662597656) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 1960.41662597656 <= x && x >= 5341.66650390625 && -8347.916015625 <= y && y <= -3277.08325195312 );
    }
};

template<> struct ZoneDefinition<ZONE_3277>
{
    static Zone* Create(void)
    {
        return( new Zone(2041.66662597656, 895.833312988281, 1627.08325195312, 862.499938964844) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 862.499938964844 <= x && x >= 1627.08325195312 && 895.833312988281 <= y && y <= 2041.66662597656 );
    }
};

template<> struct ZoneDefinition<ZONE_44>
{
    static Zone* Create(void)
    {
        return( new Zone(-1570.83325195312, -3741.66650390625, -8575, -10022.916015625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -10022.916015625 <= x && x >= -8575 && -3741.66650390625 <= y && y <= -1570.83325195312 );
    }
};

template<> struct ZoneDefinition<ZONE_28>
{
    static Zone* Create(void)
    {
        return( new Zone(416.666656494141, -3883.33325195312, 3366.66650390625, 499.999969482422) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 499.999969482422 <= x && x >= 3366.66650390625 && -3883.33325195312 <= y && y <= 416.666656494141 );
    }
};

template<> struct ZoneDefinition<ZONE_440>
{
    static Zone* Create(void)
    {
        return( new Zone(-218.749984741211, -7118.74951171875, -5875, -10475) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -10475 <= x && x >= -5875 && -7118.74951171875 <= y && y <= -218.749984741211 );
    }
};

template<> struct ZoneDefinition<ZONE_40>
{
    static Zone* Create(void)
    {
        return( new Zone(3016.66650390625, -483.333312988281, -9400, -11733.3330078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -11733.3330078125 <= x && x >= -9400 && -483.333312988281 <= y && y <= 3016.66650390625 );
    }
};

template<> struct ZoneDefinition<ZONE_618>
{
    static Zone* Create(void)
    {
        return( new Zone(-316.666656494141, -7416.66650390625, 8533.3330078125, 3799.99975585938) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 3799.99975585938 <= x && x >= 8533.3330078125 && -7416.66650390625 <= y && y <= -316.666656494141 );
    }
};

template<> struct ZoneDefinition<ZONE_400>
{
    static Zone* Create(void)
    {
        return( new Zone(-433.333312988281, -4833.3330078125, -3966.66650390625, -6899.99951171875) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -6899.99951171875 <= x && x >= -3966.66650390625 && -4833.3330078125 <= y && y <= -433.333312988281 );
    }
};

template<> struct ZoneDefinition<ZONE_361>
{
    static Zone* Create(void)
    {
        return( new Zone(1641.66662597656, -4108.3330078125, 7133.3330078125, 3299.99975585938) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 3299.99975585938 <= x && x >= 7133.3330078125 && -4108.3330078125 <= y && y <= 1641.66662597656 );
    }
};

template<> struct ZoneDefinition<ZONE_14>
{
    static Zone* Create(void)
    {
        return( new Zone(-1962.49987792969, -7249.99951171875, 1808.33325195312, -1716.66662597656) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -1716.66662597656 <= x && x >= 1808.33325195312 && -7249.99951171875 <= y && y <= -1962.49987792969 );
    }
};

template<> struct ZoneDefinition<ZONE_215>
{
    static Zone* Create(void)
    {
        return( new Zone(2047.91662597656, -3089.58325195312, -272.916656494141, -3697.91650390625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -3697.91650390625 <= x && x >= -272.916656494141 && -3089.58325195312 <= y && y <= 2047.91662597656 );
    }
};

template<> struct ZoneDefinition<ZONE_1537>
{
    static Zone* Create(void)
    {
        return( new Zone(-713.591369628906, -1504.21643066406, -4569.2412109375, -5096.845703125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -5096.845703125 <= x && x >= -4569.2412109375 && -1504.21643066406 <= y && y <= -713.591369628906 );
    }
};

template<> struct ZoneDefinition<ZONE_148>
{
    static Zone* Create(void)
    {
        return( new Zone(2941.66650390625, -3608.33325195312, 8333.3330078125, 3966.66650390625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 3966.66650390625 <= x && x >= 8333.3330078125 && -3608.33325195312 <= y && y <= 2941.66650390625 );
    }
};

template<> struct ZoneDefinition<ZONE_10>
{
    static Zone* Create(void)
    {
        return( new Zone(833.333312988281, -1866.66662597656, -9716.666015625, -11516.666015625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -11516.666015625 <= x && x >= -9716.666015625 && -1866.66662597656 <= y && y <= 833.333312988281 );
    }
};

template<> struct ZoneDefinition<ZONE_490>
{
    static Zone* Create(void)
    {
        return( new Zone(533.333312988281, -3166.66650390625, -5966.66650390625, -8433.3330078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -8433.3330078125 <= x && x >= -5966.66650390625 && -3166.66650390625 <= y && y <= 533.333312988281 );
    }
};

template<> struct ZoneDefinition<ZONE_11>
{
    static Zone* Create(void)
    {
        return( new Zone(-389.583312988281, -4525, -2147.91650390625, -4904.16650390625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -4904.16650390625 <= x && x >= -2147.91650390625 && -4525 <= y && y <= -389.583312988281 );
    }
};

template<> struct ZoneDefinition<ZONE_130>
{
    static Zone* Create(void)
    {
        return( new Zone(3449.99975585938, -750, 1666.66662597656, -1133.33325195312) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -1133.33325195312 <= x && x >= 1666.66662597656 && -750 <= y && y <= 3449.99975585938 );
    }
};

template<> struct ZoneDefinition<ZONE_2597>
{
    static Zone* Create(void)
    {
        return( new Zone(1781.24987792969, -2456.25, 1085.41662597656, -1739.58325195312) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -1739.58325195312 <= x && x >= 1085.41662597656 && -2456.25 <= y && y <= 1781.24987792969 );
    }
};

template<> struct ZoneDefinition<ZONE_267>
{
    static Zone* Create(void)
    {
        return( new Zone(1066.66662597656, -2133.33325195312, 400, -1733.33325195312) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -1733.33325195312 <= x && x >= 400 && -2133.33325195312 <= y && y <= 1066.66662597656 );
    }
};

template<> struct ZoneDefinition<ZONE_1638>
{
    static Zone* Create(void)
    {
        return( new Zone(516.666625976562, -527.083312988281, -849.999938964844, -1545.83325195312) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -1545.83325195312 <= x && x >= -849.999938964844 && -527.083312988281 <= y && y <= 516.666625976562 );
    }
};

template<> struct ZoneDefinition<ZONE_46>
{
    static Zone* Create(void)
    {
        return( new Zone(-266.666656494141, -3195.83325195312, -7031.24951171875, -8983.3330078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -8983.3330078125 <= x && x >= -7031.24951171875 && -3195.83325195312 <= y && y <= -266.666656494141 );
    }
};

template<> struct ZoneDefinition<ZONE_1377>
{
    static Zone* Create(void)
    {
        return( new Zone(4641.66650390625, -2308.33325195312, -5800, -10433.3330078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -10433.3330078125 <= x && x >= -5800 && -2308.33325195312 <= y && y <= 4641.66650390625 );
    }
};

template<> struct ZoneDefinition<ZONE_1657>
{
    static Zone* Create(void)
    {
        return( new Zone(2938.36279296875, 1880.02954101562, 10238.31640625, 9532.5869140625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 9532.5869140625 <= x && x >= 10238.31640625 && 1880.02954101562 <= y && y <= 2938.36279296875 );
    }
};

template<> struct ZoneDefinition<ZONE_85>
{
    static Zone* Create(void)
    {
        return( new Zone(3033.33325195312, -1485.41662597656, 3837.49975585938, 824.999938964844) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 824.999938964844 <= x && x >= 3837.49975585938 && -1485.41662597656 <= y && y <= 3033.33325195312 );
    }
};

template<> struct ZoneDefinition<ZONE_36>
{
    static Zone* Create(void)
    {
        return( new Zone(783.333312988281, -2016.66662597656, 1500, -366.666656494141) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -366.666656494141 <= x && x >= 1500 && -2016.66662597656 <= y && y <= 783.333312988281 );
    }
};

template<> struct ZoneDefinition<ZONE_1497>
{
    static Zone* Create(void)
    {
        return( new Zone(873.192626953125, -86.1824035644531, 1877.9453125, 1237.84118652344) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 1237.84118652344 <= x && x >= 1877.9453125 && -86.1824035644531 <= y && y <= 873.192626953125 );
    }
};

template<> struct ZoneDefinition<ZONE_3>
{
    static Zone* Create(void)
    {
        return( new Zone(-2079.16650390625, -4566.66650390625, -5889.5830078125, -7547.91650390625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -7547.91650390625 <= x && x >= -5889.5830078125 && -4566.66650390625 <= y && y <= -2079.16650390625 );
    }
};

template<> struct ZoneDefinition<ZONE_1519>
{
    static Zone* Create(void)
    {
        return( new Zone(1380.97143554688, 36.7006301879883, -8278.8505859375, -9175.205078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -9175.205078125 <= x && x >= -8278.8505859375 && 36.7006301879883 <= y && y <= 1380.97143554688 );
    }
};

template<> struct ZoneDefinition<ZONE_51>
{
    static Zone* Create(void)
    {
        return( new Zone(-322.916656494141, -2554.16650390625, -6100, -7587.49951171875) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -7587.49951171875 <= x && x >= -6100 && -2554.16650390625 <= y && y <= -322.916656494141 );
    }
};

template<> struct ZoneDefinition<ZONE_406>
{
    static Zone* Create(void)
    {
        return( new Zone(3245.83325195312, -1637.49987792969, 2916.66650390625, -339.583312988281) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -339.583312988281 <= x && x >= 2916.66650390625 && -1637.49987792969 <= y && y <= 3245.83325195312 );
    }
};

template<> struct ZoneDefinition<ZONE_12>
{
    static Zone* Create(void)
    {
        return( new Zone(1535.41662597656, -1935.41662597656, -7939.5830078125, -10254.166015625) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -10254.166015625 <= x && x >= -7939.5830078125 && -1935.41662597656 <= y && y <= 1535.41662597656 );
    }
};

template<> struct ZoneDefinition<ZONE_41>
{
    static Zone* Create(void)
    {
        return( new Zone(-833.333312988281, -3333.33325195312, -9866.666015625, -11533.3330078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -11533.3330078125 <= x && x >= -9866.666015625 && -3333.33325195312 <= y && y <= -833.333312988281 );
    }
};

template<> struct ZoneDefinition<ZONE_15>
{
    static Zone* Create(void)
    {
        return( new Zone(-974.999938964844, -6225, -2033.33325195312, -5533.3330078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -5533.3330078125 <= x && x >= -2033.33325195312 && -6225 <= y && y <= -974.999938964844 );
    }
};

template<> struct ZoneDefinition<ZONE_47>
{
    static Zone* Create(void)
    {
        return( new Zone(-1575, -5425, 1466.66662597656, -1100) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -1100 <= x && x >= 1466.66662597656 && -5425 <= y && y <= -1575 );
    }
};

template<> struct ZoneDefinition<ZONE_8>
{
    static Zone* Create(void)
    {
        return( new Zone(-2222.91650390625, -4516.66650390625, -9620.8330078125, -11150) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -11150 <= x && x >= -9620.8330078125 && -4516.66650390625 <= y && y <= -2222.91650390625 );
    }
};

template<> struct ZoneDefinition<ZONE_38>
{
    static Zone* Create(void)
    {
        return( new Zone(-1993.74987792969, -4752.0830078125, -4487.5, -6327.0830078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -6327.0830078125 <= x && x >= -4487.5 && -4752.0830078125 <= y && y <= -1993.74987792969 );
    }
};

template<> struct ZoneDefinition<ZONE_4>
{
    static Zone* Create(void)
    {
        return( new Zone(-1241.66662597656, -4591.66650390625, -10566.666015625, -12800) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -12800 <= x && x >= -10566.666015625 && -4591.66650390625 <= y && y <= -1241.66662597656 );
    }
};

template<> struct ZoneDefinition<ZONE_45>
{
    static Zone* Create(void)
    {
        return( new Zone(-866.666625976562, -4466.66650390625, -133.33332824707, -2533.33325195312) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -2533.33325195312 <= x && x >= -133.33332824707 && -4466.66650390625 <= y && y <= -866.666625976562 );
    }
};

template<> struct ZoneDefinition<ZONE_357>
{
    static Zone* Create(void)
    {
        return( new Zone(5441.66650390625, -1508.33325195312, -2366.66650390625, -6999.99951171875) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -6999.99951171875 <= x && x >= -2366.66650390625 && -1508.33325195312 <= y && y <= 5441.66650390625 );
    }
};

template<> struct ZoneDefinition<ZONE_405>
{
    static Zone* Create(void)
    {
        return( new Zone(4233.3330078125, -262.5, 452.083312988281, -2545.83325195312) );
    }

    static bool InZone(const float x, const float y)
    {
        return( -2545.83325195312 <= x && x >= 452.083312988281 && -262.5 <= y && y <= 4233.3330078125 );
    }
};

template<> struct ZoneDefinition<ZONE_493>
{
    static Zone* Create(void)
    {
        return( new Zone(-1381.25, -3689.58325195312, 8491.666015625, 6952.0830078125) );
    }

    static bool InZone(const float x, const float y)
    {
        return( 6952.0830078125 <= x && x >= 8491.666015625 && -3689.58325195312 <= y && y <= -1381.25 );
    }
};

/* TypeList definition */

#define ZONELIST_1(Z1)     TypeList<Z1, TypeNull>
#define ZONELIST_2(Z1,Z2)  TypeList<Z1, ZONELIST_1(Z2) >
#define ZONELIST_3(Z1,Z2,Z3)  TypeList<Z1, ZONELIST_2(Z2,Z3) >
#define ZONELIST_4(Z1,Z2,Z3,Z4)  TypeList<Z1, ZONELIST_3(Z2,Z3,Z4) >
#define ZONELIST_5(Z1,Z2,Z3,Z4,Z5)  TypeList<Z1, ZONELIST_4(Z2,Z3,Z4,Z5) >
#define ZONELIST_6(Z1,Z2,Z3,Z4,Z5,Z6)  TypeList<Z1, ZONELIST_5(Z2,Z3,Z4,Z5,Z6) >
#define ZONELIST_7(Z1,Z2,Z3,Z4,Z5,Z6,Z7)  TypeList<Z1, ZONELIST_6(Z2,Z3,Z4,Z5,Z6,Z7) >
#define ZONELIST_8(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8)  TypeList<Z1, ZONELIST_7(Z2,Z3,Z4,Z5,Z6,Z7,Z8) >
#define ZONELIST_9(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9)  TypeList<Z1, ZONELIST_8(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9) >
#define ZONELIST_10(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10)  TypeList<Z1, ZONELIST_9(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10) >
#define ZONELIST_11(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11)  TypeList<Z1, ZONELIST_10(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11) >
#define ZONELIST_12(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12)  TypeList<Z1, ZONELIST_11(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12) >
#define ZONELIST_13(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13)  TypeList<Z1, ZONELIST_12(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13) >
#define ZONELIST_14(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14)  TypeList<Z1, ZONELIST_13(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14) >
#define ZONELIST_15(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15)  TypeList<Z1, ZONELIST_14(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15) >
#define ZONELIST_16(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16)  TypeList<Z1, ZONELIST_15(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16) >
#define ZONELIST_17(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17)  TypeList<Z1, ZONELIST_16(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17) >
#define ZONELIST_18(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18)  TypeList<Z1, ZONELIST_17(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18) >
#define ZONELIST_19(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19)  TypeList<Z1, ZONELIST_18(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19) >
#define ZONELIST_20(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20)  TypeList<Z1, ZONELIST_19(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20) >
#define ZONELIST_21(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21)  TypeList<Z1, ZONELIST_20(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21) >
#define ZONELIST_22(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22)  TypeList<Z1, ZONELIST_21(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22) >
#define ZONELIST_23(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23)  TypeList<Z1, ZONELIST_22(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23) >
#define ZONELIST_24(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24)  TypeList<Z1, ZONELIST_23(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24) >
#define ZONELIST_25(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25)  TypeList<Z1, ZONELIST_24(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25) >
#define ZONELIST_26(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26)  TypeList<Z1, ZONELIST_25(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26) >
#define ZONELIST_27(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27)  TypeList<Z1, ZONELIST_26(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27) >
#define ZONELIST_28(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28)  TypeList<Z1, ZONELIST_27(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28) >
#define ZONELIST_29(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29)  TypeList<Z1, ZONELIST_28(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29) >
#define ZONELIST_30(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30)  TypeList<Z1, ZONELIST_29(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30) >
#define ZONELIST_31(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31)  TypeList<Z1, ZONELIST_30(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31) >
#define ZONELIST_32(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32)  TypeList<Z1, ZONELIST_31(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32) >
#define ZONELIST_33(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33)  TypeList<Z1, ZONELIST_32(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33) >
#define ZONELIST_34(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34)  TypeList<Z1, ZONELIST_33(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34) >
#define ZONELIST_35(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35)  TypeList<Z1, ZONELIST_34(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35) >
#define ZONELIST_36(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36)  TypeList<Z1, ZONELIST_35(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36) >
#define ZONELIST_37(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37)  TypeList<Z1, ZONELIST_36(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37) >
#define ZONELIST_38(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38)  TypeList<Z1, ZONELIST_37(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38) >
#define ZONELIST_39(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39)  TypeList<Z1, ZONELIST_38(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39) >
#define ZONELIST_40(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40)  TypeList<Z1, ZONELIST_39(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40) >
#define ZONELIST_41(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41)  TypeList<Z1, ZONELIST_40(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41) >
#define ZONELIST_42(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42)  TypeList<Z1, ZONELIST_41(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42) >
#define ZONELIST_43(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43)  TypeList<Z1, ZONELIST_42(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43) >
#define ZONELIST_44(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44)  TypeList<Z1, ZONELIST_43(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44) >
#define ZONELIST_45(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45)  TypeList<Z1, ZONELIST_44(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45) >
#define ZONELIST_46(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45,Z46)  TypeList<Z1, ZONELIST_45(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45,Z46) >
#define ZONELIST_47(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45,Z46,Z47)  TypeList<Z1, ZONELIST_46(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45,Z46,Z47) >
#define ZONELIST_48(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45,Z46,Z47,Z48)  TypeList<Z1, ZONELIST_47(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45,Z46,Z47,Z48) >
#define ZONELIST_49(Z1,Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45,Z46,Z47,Z48,Z49)  TypeList<Z1, ZONELIST_48(Z2,Z3,Z4,Z5,Z6,Z7,Z8,Z9,Z10,Z11,Z12,Z13,Z14,Z15,Z16,Z17,Z18,Z19,Z20,Z21,Z22,Z23,Z24,Z25,Z26,Z27,Z28,Z29,Z30,Z31,Z32,Z33,Z34,Z35,Z36,Z37,Z38,Z39,Z40,Z41,Z42,Z43,Z44,Z45,Z46,Z47,Z48,Z49) >

typedef ZONELIST_49(ZoneHolder<ZONE_33>,ZoneHolder<ZONE_3358>,ZoneHolder<ZONE_139>,ZoneHolder<ZONE_17>,ZoneHolder<ZONE_1637>,ZoneHolder<ZONE_331>,ZoneHolder<ZONE_1>,ZoneHolder<ZONE_141>,ZoneHolder<ZONE_16>,ZoneHolder<ZONE_3277>,ZoneHolder<ZONE_44>,ZoneHolder<ZONE_28>,ZoneHolder<ZONE_440>,ZoneHolder<ZONE_40>,ZoneHolder<ZONE_618>,ZoneHolder<ZONE_400>,ZoneHolder<ZONE_361>,ZoneHolder<ZONE_14>,ZoneHolder<ZONE_215>,ZoneHolder<ZONE_1537>,ZoneHolder<ZONE_148>,ZoneHolder<ZONE_10>,ZoneHolder<ZONE_490>,ZoneHolder<ZONE_11>,ZoneHolder<ZONE_130>,ZoneHolder<ZONE_2597>,ZoneHolder<ZONE_267>,ZoneHolder<ZONE_1638>,ZoneHolder<ZONE_46>,ZoneHolder<ZONE_1377>,ZoneHolder<ZONE_1657>,ZoneHolder<ZONE_85>,ZoneHolder<ZONE_36>,ZoneHolder<ZONE_1497>,ZoneHolder<ZONE_3>,ZoneHolder<ZONE_1519>,ZoneHolder<ZONE_51>,ZoneHolder<ZONE_406>,ZoneHolder<ZONE_12>,ZoneHolder<ZONE_41>,ZoneHolder<ZONE_15>,ZoneHolder<ZONE_47>,ZoneHolder<ZONE_8>,ZoneHolder<ZONE_38>,ZoneHolder<ZONE_4>,ZoneHolder<ZONE_45>,ZoneHolder<ZONE_357>,ZoneHolder<ZONE_405>,ZoneHolder<ZONE_493>)  AllZoneEnums;

#endif
