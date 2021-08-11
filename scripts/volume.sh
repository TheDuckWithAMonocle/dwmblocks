vol="$(pamixer --get-volume)"
mute="$(pamixer --get-mute)"

if  [ $mute == "true" ];
     then 
	echo  "${vol}% M"
     else
 	echo "${vol}%"
fi 


