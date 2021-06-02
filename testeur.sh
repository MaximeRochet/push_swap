for i in `seq 50`; do
ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`
echo $ARG >> moyenne
./push_swap $ARG | wc -l >> moyenne
./push_swap $ARG | ./checker_mac $ARG >> moyenne
echo >> moyenne
done
