299792458 -> SPEED_OF_LIGHT # in meter/second
paste("Speed of light [m/s] =",format(SPEED_OF_LIGHT,sci=T), "[m/s]")
31536000 -> YEAR_IN_SECONDS # in seconds
paste("Year in seconds =",format(YEAR_IN_SECONDS, sci=T),"[s]")
SPEED_OF_LIGHT * YEAR_IN_SECONDS -> ly
paste("1 light-year [LY] =",format(ly,sci=T), "[m]")
380 -> x # height in [m] is given, y = x/ly is sought
paste(x,"[m] =",x/ly,"light-years.")
