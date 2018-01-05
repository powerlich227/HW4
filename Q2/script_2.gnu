set terminal postscript eps
set ylabel "photon"
set output "hmwk4_problem2.eps"
set title "hmwk4_problem2"

set multiplot layout 2,1
set style data histogram
set style histogram clustered gap 1
set style fill solid 0.4 border

plot 'hmwk4_problem2a.dat' u 2:xticlabels(1) title "photon vs time"
plot 'hmwk4_problem2b.dat' u 2:xticlabels(1) title "photon vs radius"

unset multiplot

