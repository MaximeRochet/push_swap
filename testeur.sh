for i in `seq 100`; do
ARG=`ruby -e "puts (1..100).to_a.shuffle.join(' ')"`
echo $ARG >> moyenne
./push_swap $ARG | wc -l >> moyenne
./push_swap $ARG | ./checker $ARG >> moyenne
echo >> moyenne
done
