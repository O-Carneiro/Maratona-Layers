#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

using vll = vector<int>;
using pll = pair<int, int>;
using vpll = vector<pll>;
using vvll = vector<vll>;
using vvpll = vector<vpll>;

signed main(){
    MAC0214 muito coxa
    vll numeros = {0, 4753, 7482, 1001, 3720, 2320, 1831, 2676, 4110,
                    4570, 5849, 4772, 7166, 2840, 8903, 1246, 7034,
                    4755, 6028, 2263, 2782, 8206, 9714, 3820, 7230,
                    8887, 9051, 1765, 1351, 2528, 8903, 1885, 4789,
                    9621, 5798, 7226, 3839, 7178, 8511, 1164, 7751,
                    9899, 7733, 3523, 8103, 1929, 5031, 9177, 3642, 
                    3589, 2170, 1174, 7109, 2904, 3389, 5424, 1480,
                    6167, 2320, 6303, 7297, 1921, 4726, 7249, 4727,
                    1449, 5823, 6974, 5634, 9501, 6278, 9130, 2237,
                    2253, 8266, 4579, 2488, 9347, 4129, 7757, 7533,
                    8949, 6613, 7758, 4140, 3429, 9062, 4852, 9683,
                    6970, 6595, 2032, 9545, 5049, 6205, 4673, 3133,
                    9130, 6163, 1025, 6554, 3939, 5743, 8973, 4215,
                    9176, 6610, 1142, 9364, 7218, 9975, 2551, 2234,
                    9393, 7271, 1594, 7799, 7784, 9307, 7403, 2118,
                    1178, 1235, 1254, 3215, 8740, 5849, 5975, 8578,
                    2117, 3512, 6271, 9726, 6049, 1167, 8205, 3096,
                    8263, 4490, 8771, 7724, 6006, 2228, 1539, 2092,
                    1400, 1967, 3031, 7416, 6037, 1113, 1647, 9705,
                    6112, 2829, 3270, 7694, 2758, 6232, 9730, 8621,
                    3158, 5443, 6579, 8460, 2411, 1167, 1630, 5377,
                    6456, 6119, 3856, 9897, 6217, 4421, 5958, 7708,
                    7023, 3384, 1597, 4330, 6667, 2891, 7774, 1598,
                    3342, 8242, 2740, 6755, 5722, 9323, 3369, 1593, 
                    7615, 7949, 9170, 9387, 1125, 3109, 6551, 9541,
                    9551, 6009, 9240, 6774, 4510, 5373, 6438, 5945,
                    9335, 9268, 4553, 9669, 2565, 2136, 2215, 5550,
                    1193, 9531, 8444, 1135, 2585, 3988, 2178, 8285,
                    4102, 9460, 6238, 8909, 8602, 9148, 5138, 5917,
                    8187, 3571, 5412, 6391, 1139, 6341, 4903, 8266,
                    3837, 9035, 6200, 2656, 8091, 6508, 1485, 4781,
                    7111, 9267, 1003, 9790, 4389, 9764, 6442, 8459,
                    6172, 6652, 3570, 6281, 7750, 8724, 7795, 7282,
                    8780, 3904, 7037, 5057, 4438, 4697, 4613, 3856,
                    6597, 4872, 9764, 7100, 2787, 4840, 4090, 8178,
                    8919, 9134, 6964, 3431, 3271, 8694, 5749, 8219,
                    6152, 7598, 5671, 7937, 6119, 5191, 4084, 1613,
                    4401, 1716, 9845, 2634, 8306, 8874, 7195, 6125,
                    2448, 5201, 4106, 3025, 6332, 3810, 9246, 9186,
                    3314, 1998, 2736, 5496, 7557, 2873, 3232, 8665,
                    4742, 6550, 3102, 1917, 5642, 5294, 2374, 6596,
                    5896, 6887, 2300, 7763, 2998, 5674, 8067, 1200,
                    3919, 8856, 8602, 5845, 8799, 9548, 8437, 8687,
                    1888, 6861, 7331, 6492, 8196, 1311, 7932, 7585,
                    3337, 3313, 6690, 4107, 8169, 5015, 8044, 9914,
                    3702, 2287, 9111, 5874, 9772, 6729, 9945, 5914,
                    5737, 2218, 4201, 1235, 2443, 7710, 1273, 4298,
                    8761, 7234, 7218, 2697, 4977, 6234, 9907, 2835,
                    3229, 3359, 7751, 5112, 1512, 5576, 2907, 8187,
                    3675, 1248, 6340, 8594, 4429, 7748, 5600, 5868,
                    9634, 8235, 1290, 7384, 5185, 9527, 2992, 3403,
                    1733, 4857, 1981, 6704, 8226, 7271, 7895, 4082,
                    8612, 4858, 8416, 6638, 2290, 1705, 1164, 1600,
                    5127, 2020, 1250, 7793, 4553, 7722, 5071, 5050,
                    5302, 5266, 8228, 4621, 9142, 1333, 7964, 2130,
                    6566, 1093, 5847, 1027, 9560, 9148, 8163, 9237,
                    2310, 2419, 2688, 6602, 9152, 9909, 7400, 7586,
                    9183, 4607, 3248, 2560, 2075, 8313, 2321, 3378,
                    8371, 3795, 9841, 3399, 5802, 3830, 9196, 4299,
                    4902, 5610, 9449, 1278, 7451, 9019, 1245, 5698,
                    3933, 8735, 6026, 7212, 5075, 6654, 3610, 1084,
                    6190, 3802, 5655, 9247, 4838, 3226, 4341, 9386,
                    9431, 8598, 9281, 3051, 1787, 3045, 3829, 2572,
                    6463, 4722, 8347, 2666, 7316, 3163, 6167, 4140,
                    1512, 3059, 6976, 5475, 5671, 2572, 6136, 9970,
                    8351, 6349, 9783, 9114, 6360, 1291, 1842, 1588,
                    5065, 4378, 9778, 2511, 9755, 7907, 8418, 6693,
                    7018, 5291, 1118, 4177, 5428, 7570, 5217, 5116,
                    2238, 1097, 7824, 3879, 9859, 2982, 4048, 5715,
                    7794, 5174, 2123, 3812, 5540, 7064, 7931, 2173,
                    1206, 5671, 8289, 1113, 7052, 7181, 5043, 9233,
                    6799, 1047, 5359, 8733, 8473, 6842, 7063, 6206,
                    3467, 6044, 7045, 4171, 8702, 2755, 7725, 3606,
                    7964, 4849, 8269, 4181, 2923, 7905, 3777, 7599,
                    7700, 2992, 2927, 2790, 2282, 4393, 1239, 1998,
                    7071, 8197, 1724, 3085, 2868, 9256, 7401, 5984,
                    3740, 8513, 4917, 9311, 7354, 5302, 2135, 9784,
                    2438, 2823, 4880, 4637, 2320, 7563, 2698, 6795,
                    7788, 2896, 6408, 7740, 6743, 6374, 3659, 7584,
                    9507, 4830, 8039, 1505, 8517, 2730, 4555, 3700,
                    1720, 9141, 4331, 5776, 5447, 2189, 2858, 1685,
                    5571, 3353, 4213, 1972, 8087, 1959, 9871, 2594,
                    6151, 1403, 8084, 2706, 5751, 7660, 2349, 5959,
                    2949, 7832, 7506, 2588, 8757, 1177, 8742, 6030,
                    4628, 7828, 7452, 9885, 3502, 1034, 9405, 8721,
                    7559, 5650, 7362, 8024, 4373, 7932, 7755, 6518,
                    4616, 7275, 1028, 7974, 9067, 3153, 2086, 2982,
                    3718, 8947, 5888, 3580, 2245, 3611, 6524, 3917,
                    5116, 4997, 8453, 4837, 4111, 7074, 2993, 5205,
                    3832, 6641, 8896, 5029, 8060, 5112, 6906, 2186,
                    4896, 9183, 6449, 7900, 5542, 5482, 8586, 1610,
                    6159, 9484, 5660, 2750, 8631, 3264, 7306, 5862,
                    9539, 6619, 8541, 1071, 9904, 1699, 3899, 9515,
                    1080, 8404, 8750, 4958, 3301, 8224, 5300, 2209,
                    9350, 9063, 5423, 8710, 4767, 7151, 4581, 5551,
                    2705, 9684, 3647, 1931, 2298, 1126, 7443, 6080,
                    8151, 5563, 8126, 7261, 8000, 4658, 6829, 2618,
                    3896, 2553, 4677, 3172, 4662, 9777, 3882, 9842,
                    6726, 4375, 8717, 6576, 3268, 8135, 4896, 4217,
                    3972, 7276, 3417, 8274, 3657, 5897, 5391, 8698,
                    8995, 2659, 6268, 9083, 5015, 9296, 3510, 6479,
                    7142, 3053, 1123, 4750, 9446, 4087, 8017, 2572,
                    4077, 2301, 7450, 7293, 7196, 3280, 7231, 3045,
                    4821, 4347, 4197, 1518, 6684, 7365, 6522, 6834,
                    2529, 2345, 5627, 8877, 2655, 5165, 4860, 5475,
                    2453, 4081, 3356, 8600, 8202, 4839, 6463, 2309,
                    5586, 3672, 8736, 7044, 6701, 2122, 5235, 9879,
                    9534, 6805, 2365, 6752, 6090, 5217, 4852, 6393,
                    8649, 7760, 6214, 9322, 1582, 9922, 1476, 2795,
                    4804, 1967, 6613, 1431, 3561, 1549, 7331, 7016,
                    4407, 2693, 7723, 4063, 8157, 5391, 5731, 1256,
                    6798, 4155, 3062, 4904, 4442, 5228, 9815, 4279,
                    7969, 5974, 9002, 4194, 3209, 9199, 1391, 9556,
                    6007, 4387, 9955, 1525, 5650, 1279, 6140, 2624,
                    6678, 9828, 8874, 5066, 7376, 7997, 5453, 5756,
                    2357, 4324, 2279, 7542, 5293, 5039, 8973, 5748,
                    4681, 3420, 1648, 4763, 1231, 3620, 5531, 9693,
                    1984, 7057, 5499, 7993, 2292, 1748, 4592, 8172,
                    2725, 7909, 3612, 2952, 1150, 4587, 4429, 6934,
                    1638, 2373, 1149, 2024, 6866, 4623, 3889, 6021,
                    9941, 8510, 7296, 9264, 1357, 1633, 5266, 4142,
                    9435, 5406, 5856, 9057, 5019, 8893, 3282, 3464,
                    3955, 5928, 2981, 7042, 2285, 1846, 8831, 3131,
                    4474, 6143, 5732, 1684, 8867, 9560, 8312, 3554,
                    5750, 4054, 5992, 9769, 3805, 7019, 3933, 7970};
    vll acc(numeros.size()+1);
    for(int i = 1; i < acc.size(); i++){
        acc[i] = acc[i-1] + numeros[i]; 
    }
    int a, b; cin >> a >> b;
    cout << acc[b+1] - acc[a+1-1] << '\n';
    return 0;
}