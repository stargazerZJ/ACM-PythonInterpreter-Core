#!/bin/zsh

# set -ex

executable_path="../cmake-build-debug/code"

test() {
	i=$1
	j=$2
	in_file="./${test_groups[$i]}/${test_prefix[$i]}$j.in"
	std_out_file="./${test_groups[$i]}/${test_prefix[$i]}$j.out"
	if [ ! -f "$in_file" ]; then
    echo "Input file $in_file does not exist"
    exit 1
	fi
	echo Testing "${test_groups[$i]}" $j
	/usr/bin/time -f "Time: %e s" $executable_path < "$in_file" > ./output.txt
	if [ $? -ne 0 ]; then
		echo "Runtime error for ${test_groups[$i]} $j"
		exit 1
	fi
	# diff the output file with the standard output file
	diff -uZB ./output.txt "$std_out_file" > ./diff.txt
	# if diff failed, exit
	if [ $? -ne 0 ]; then
		echo "Diff failed for ${test_groups[$i]} $j"
		exit 1
	fi
}

test_groups=( "basic-testcases" "bigint-testcases" )
test_prefix=( "test" "BigIntegerTest" )
test_group_sizes=(13 19)

# if $1 and $2 are given, test only that test
if [ $# -eq 2 ]; then
	test $1 $2
	exit 0
fi

for i in {1..2}; do
	for j in {1..${test_group_sizes[$i]}}; do
#	  echo $i $j ${test_groups[$i]} ${test_prefix[$i]} ${test_group_sizes[$i]}
		test $i $j
	done
done

echo "All tests passed"