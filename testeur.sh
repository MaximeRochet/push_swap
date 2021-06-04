for i in `seq 50`; do
ARG=`ruby -e "puts (1..10).to_a.shuffle.join(' ')"`
echo $ARG >> moyenne
./push_swap $ARG | wc -l >> moyenne
./push_swap $ARG | ./checker_mac $ARG >> moyenne
echo >> moyenne
done
