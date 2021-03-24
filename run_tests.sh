echo '~~'

echo 'compiling code'

cd build

make

echo '~~'

echo 'branch and bound solution'
./branchAndBound ../src/tests/f1_l-d_kp_10_269
./branchAndBound ../src/tests/f2_l-d_kp_20_878
./branchAndBound ../src/tests/f3_l-d_kp_4_20
./branchAndBound ../src/tests/f4_l-d_kp_4_11
./branchAndBound ../src/tests/f5_l-d_kp_15_375
./branchAndBound ../src/tests/f6_l-d_kp_10_60
./branchAndBound ../src/tests/f7_l-d_kp_7_50
./branchAndBound ../src/tests/f8_l-d_kp_23_10000
./branchAndBound ../src/tests/f9_l-d_kp_5_80
./branchAndBound ../src/tests/f10_l-d_kp_20_879

echo '~~'

echo '~~'

echo 'backtracking solution'
./backtracking ../src/tests/f1_l-d_kp_10_269
./backtracking ../src/tests/f2_l-d_kp_20_878
./backtracking ../src/tests/f3_l-d_kp_4_20
./backtracking ../src/tests/f4_l-d_kp_4_11
./backtracking ../src/tests/f5_l-d_kp_15_375
./backtracking ../src/tests/f6_l-d_kp_10_60
./backtracking ../src/tests/f7_l-d_kp_7_50
./backtracking ../src/tests/f8_l-d_kp_23_10000
./backtracking ../src/tests/f9_l-d_kp_5_80
./backtracking ../src/tests/f10_l-d_kp_20_879

echo '~~'