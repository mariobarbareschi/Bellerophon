#include "evoapproxlib.h"
#include <stdint.h>
#include <stdlib.h>
#include <limits>

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 16.48 %
// MAE = 21 
// WCE% = 54.69 %
// WCE = 70 
// WCRE% = 3300.00 %
// EP% = 98.32 %
// MRE% = 68.05 %
// MSE = 684 
// PDK45_PWR = 0.0099 mW
// PDK45_AREA = 35.7 um2
// PDK45_DELAY = 0.35 ns


int8_t add8s_70F(const int8_t B,const int8_t A)
{
   uint64_t dout_27, dout_28, dout_29, dout_30, dout_38, dout_44, dout_47, dout_49, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_27=((A >> 5)&1)|((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_38=dout_29&dout_27;
   dout_44=dout_29&((B >> 7)&1);
   dout_47=dout_38&((B >> 7)&1);
   dout_49=dout_28|dout_47;
   dout_62=dout_27^dout_44;
   dout_63=dout_29^dout_44;
   dout_64=dout_30^dout_49;

   O = 0;
   O |= (dout_63&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_64&1) << 2;
   O |= (dout_62&1) << 3;
   O |= (dout_62&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 1.17 %
// MAE = 1.5 
// WCE% = 3.91 %
// WCE = 5.0 
// WCRE% = 300.00 %
// EP% = 79.44 %
// MRE% = 7.44 %
// MSE = 3.7 
// PDK45_PWR = 0.029 mW
// PDK45_AREA = 60.5 um2
// PDK45_DELAY = 0.62 ns


int8_t add8s_6QJ(const int8_t B,const int8_t A)
{
   uint64_t dout_19, dout_20, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_19=((A >> 1)&1)&((B >> 1)&1);
   dout_20=((A >> 0)&1)&((A >> 7)&1);
   dout_22=dout_19|dout_20;
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&dout_22;
   dout_26=dout_23^dout_22;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_36&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 1.88 %
// MAE = 2.4 
// WCE% = 5.47 %
// WCE = 7.0 
// WCRE% = 400.00 %
// EP% = 87.50 %
// MRE% = 11.76 %
// MSE = 8.4 
// PDK45_PWR = 0.025 mW
// PDK45_AREA = 57.3 um2
// PDK45_DELAY = 0.53 ns


int8_t add8s_6UN(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_32, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_43, dout_44, dout_46, dout_47, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_60, dout_61, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_16=((A >> 7)&1)&((B >> 7)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)|((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_32=dout_21&dout_16;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_43=dout_20|dout_32;
   dout_44=dout_27&dout_36;
   dout_46=dout_26|dout_44;
   dout_47=dout_38&dout_36;
   dout_49=dout_39|dout_47;
   dout_50=dout_23&dout_43;
   dout_51=dout_22|dout_50;
   dout_52=dout_35&dout_43;
   dout_53=dout_36|dout_52;
   dout_54=dout_27&dout_52;
   dout_55=dout_46|dout_54;
   dout_56=dout_38&dout_52;
   dout_57=dout_49|dout_56;
   dout_60=dout_23^dout_43;
   dout_61=dout_25^dout_51;
   dout_62=dout_27^dout_53;
   dout_63=dout_29^dout_55;
   dout_64=dout_30^dout_57;

   O = 0;
   O |= (dout_63&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (((B >> 1)&1)&1) << 2;
   O |= (dout_60&1) << 3;
   O |= (dout_61&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 28.83 %
// MAE = 37 
// WCE% = 84.38 %
// WCE = 108 
// WCRE% = 6500.00 %
// EP% = 99.22 %
// MRE% = 202.19 %
// MSE = 1995 
// PDK45_PWR = 0.0039 mW
// PDK45_AREA = 18.8 um2
// PDK45_DELAY = 0.20 ns


int8_t add8s_6R6(const int8_t B,const int8_t A)
{
   uint64_t dout_28, dout_30, dout_38, dout_44, dout_54, dout_60, dout_61;
   uint64_t O;

   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_38=((A >> 7)&1)&((B >> 7)&1);
   dout_44=dout_28|dout_38;
   dout_54=((B >> 5)&1)|((A >> 5)&1);
   dout_60=((B >> 1)&1)|dout_54;
   dout_61=dout_30^dout_44;

   O = 0;
   O |= (0&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (((A >> 1)&1)&1) << 2;
   O |= (((A >> 4)&1)&1) << 3;
   O |= (0&1) << 4;
   O |= (((B >> 4)&1)&1) << 5;
   O |= (dout_60&1) << 6;
   O |= (dout_61&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.39 %
// MAE = 0.5 
// WCE% = 1.56 %
// WCE = 2.0 
// WCRE% = 66.67 %
// EP% = 37.30 %
// MRE% = 1.48 %
// MSE = 0.7 
// PDK45_PWR = 0.032 mW
// PDK45_AREA = 67.1 um2
// PDK45_DELAY = 0.60 ns


int8_t add8s_6FR(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61;
   uint64_t O;

   dout_16=((B >> 7)&1)&((A >> 7)&1);
   dout_17=((A >> 0)&1)|((B >> 0)&1);
   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_31=dout_21&dout_18;
   dout_32=dout_21&dout_19;
   dout_33=dout_20|dout_31;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_40=dout_32&dout_16;
   dout_41=dout_33|dout_40;
   dout_42=dout_38&dout_36;
   dout_43=dout_38&dout_35;
   dout_44=dout_39|dout_42;
   dout_45=dout_43&dout_41;
   dout_46=dout_44|dout_45;
   dout_47=dout_35&dout_41;
   dout_48=dout_36|dout_47;
   dout_49=dout_19&dout_16;
   dout_50=dout_18|dout_49;
   dout_51=dout_23&dout_41;
   dout_52=dout_22|dout_51;
   dout_53=dout_27&dout_48;
   dout_54=dout_26|dout_53;
   dout_55=dout_19^dout_16;
   dout_56=dout_21^dout_50;
   dout_57=dout_23^dout_41;
   dout_58=dout_25^dout_52;
   dout_59=dout_27^dout_48;
   dout_60=dout_29^dout_54;
   dout_61=dout_30^dout_46;

   O = 0;
   O |= (dout_17&1) << 0;
   O |= (dout_55&1) << 1;
   O |= (dout_56&1) << 2;
   O |= (dout_57&1) << 3;
   O |= (dout_58&1) << 4;
   O |= (dout_59&1) << 5;
   O |= (dout_60&1) << 6;
   O |= (dout_61&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.65 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 3.67 %
// MAE = 4.7 
// WCE% = 10.16 %
// WCE = 13 
// WCRE% = 400.00 %
// EP% = 94.56 %
// MRE% = 19.71 %
// MSE = 31 
// PDK45_PWR = 0.022 mW
// PDK45_AREA = 56.8 um2
// PDK45_DELAY = 0.48 ns


int8_t add8s_6TN(const int8_t B,const int8_t A)
{
   uint64_t dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_33, dout_35, dout_37, dout_38, dout_39, dout_41, dout_44, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_21=(((A >> 2)&1)&((B >> 2)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)|((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_33=dout_22|((B >> 7)&1);
   dout_35=dout_25&dout_23;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_41=((A >> 0)&1)|dout_21;
   dout_44=dout_27&dout_24;
   dout_46=dout_26|dout_44;
   dout_47=dout_38&dout_24;
   dout_48=dout_38&dout_35;
   dout_49=dout_39|dout_47;
   dout_50=dout_23&dout_33;
   dout_51=dout_50|dout_22;
   dout_52=dout_35&dout_33;
   dout_53=dout_24|dout_52;
   dout_54=dout_27&dout_52;
   dout_55=dout_46|dout_54;
   dout_56=dout_48&dout_33;
   dout_57=dout_49|dout_56;
   dout_59=dout_21^dout_41;
   dout_60=dout_23^dout_51;
   dout_61=dout_25^dout_51;
   dout_62=dout_27^dout_53;
   dout_63=dout_29^dout_55;
   dout_64=dout_30^dout_57;

   O = 0;
   O |= (dout_60&1) << 0;
   O |= (dout_59&1) << 1;
   O |= (dout_64&1) << 2;
   O |= (dout_60&1) << 3;
   O |= (dout_61&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 6.41 %
// MAE = 8.2 
// WCE% = 14.06 %
// WCE = 18 
// WCRE% = 1500.00 %
// EP% = 97.20 %
// MRE% = 39.40 %
// MSE = 89 
// PDK45_PWR = 0.017 mW
// PDK45_AREA = 38.0 um2
// PDK45_DELAY = 0.35 ns


int8_t add8s_6YE(const int8_t B,const int8_t A)
{
   uint64_t dout_22, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_34, dout_36, dout_37, dout_38, dout_39, dout_42, dout_44, dout_53, dout_54, dout_58, dout_59, dout_60, dout_61;
   uint64_t O;

   dout_22=((A >> 7)&1)&((B >> 7)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_34=dout_25&dout_22;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_42=dout_38&dout_36;
   dout_44=dout_39|dout_42;
   dout_53=dout_27&dout_36;
   dout_54=dout_26|dout_53;
   dout_58=dout_25^dout_22;
   dout_59=dout_27^dout_36;
   dout_60=dout_29^dout_54;
   dout_61=dout_30^dout_44;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_61&1) << 1;
   O |= (((B >> 2)&1)&1) << 2;
   O |= (((A >> 3)&1)&1) << 3;
   O |= (dout_58&1) << 4;
   O |= (dout_59&1) << 5;
   O |= (dout_60&1) << 6;
   O |= (dout_61&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 44.45 %
// MAE = 57 
// WCE% = 100.00 %
// WCE = 128 
// WCRE% = 200.00 %
// EP% = 99.48 %
// MRE% = 99.98 %
// MSE = 4551 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


int8_t add8s_6HF(const int8_t B,const int8_t A)
{
   uint64_t dout_61, dout_64;
   uint64_t O;

   dout_61=((B >> 3)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_64=(dout_61&((B >> 3)&1))^0xFFFFFFFFFFFFFFFFU;

   O = 0;
   O |= (dout_64&1) << 0;
   O |= (dout_64&1) << 1;
   O |= (dout_64&1) << 2;
   O |= (dout_64&1) << 3;
   O |= (dout_64&1) << 4;
   O |= (dout_64&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 10.08 %
// MAE = 13 
// WCE% = 35.16 %
// WCE = 45 
// WCRE% = 1650.00 %
// EP% = 97.84 %
// MRE% = 49.43 %
// MSE = 240 
// PDK45_PWR = 0.013 mW
// PDK45_AREA = 31.4 um2
// PDK45_DELAY = 0.27 ns


int8_t add8s_70S(const int8_t B,const int8_t A)
{
   uint64_t dout_34, dout_36, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_34=((A >> 7)&1)&((B >> 7)&1);
   dout_36=((B >> 4)&1)|((A >> 4)&1);
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_34;
   dout_41=dout_38^dout_34;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (dout_46&1) << 0;
   O |= (0&1) << 1;
   O |= (((A >> 4)&1)&1) << 2;
   O |= (dout_36&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 1.09 %
// MAE = 1.4 
// WCE% = 3.12 %
// WCE = 4.0 
// WCRE% = 200.00 %
// EP% = 77.83 %
// MRE% = 7.00 %
// MSE = 2.9 
// PDK45_PWR = 0.030 mW
// PDK45_AREA = 63.8 um2
// PDK45_DELAY = 0.63 ns


int8_t add8s_6XL(const int8_t B,const int8_t A)
{
   uint64_t dout_18, dout_19, dout_20, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_18=((A >> 1)&1)|((B >> 1)&1);
   dout_19=((A >> 1)&1)&((B >> 1)&1);
   dout_20=dout_18&((B >> 7)&1);
   dout_22=dout_19|dout_20;
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&dout_22;
   dout_26=dout_23^dout_22;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (dout_41&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 18.28 %
// MAE = 23 
// WCE% = 54.69 %
// WCE = 70 
// WCRE% = 3300.00 %
// EP% = 98.52 %
// MRE% = 67.56 %
// MSE = 839 
// PDK45_PWR = 0.0063 mW
// PDK45_AREA = 26.8 um2
// PDK45_DELAY = 0.17 ns


int8_t add8s_6T8(const int8_t B,const int8_t A)
{
   uint64_t dout_27, dout_28, dout_29, dout_30, dout_34, dout_44, dout_49, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_27=((A >> 5)&1)|((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_34=((B >> 7)&1)&((A >> 7)&1);
   dout_44=dout_27&dout_34;
   dout_49=dout_28|dout_34;
   dout_62=dout_44^dout_27;
   dout_63=dout_29|dout_34;
   dout_64=dout_30^dout_49;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_63&1) << 1;
   O |= (dout_64&1) << 2;
   O |= (dout_62&1) << 3;
   O |= (dout_62&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 2.19 %
// MAE = 2.8 
// WCE% = 10.16 %
// WCE = 13 
// WCRE% = 400.00 %
// EP% = 88.98 %
// MRE% = 12.68 %
// MSE = 12 
// PDK45_PWR = 0.024 mW
// PDK45_AREA = 54.4 um2
// PDK45_DELAY = 0.49 ns


int8_t add8s_704(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_20, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_44, dout_45, dout_46, dout_47, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_60, dout_61, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_16=((B >> 2)&1)&((A >> 2)&1);
   dout_20=((B >> 7)&1)&((A >> 7)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_33=dout_20|dout_16;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_44=dout_27&dout_36;
   dout_45=dout_27&dout_35;
   dout_46=dout_26|dout_44;
   dout_47=dout_38&dout_36;
   dout_49=dout_39|dout_47;
   dout_50=dout_23&dout_33;
   dout_51=dout_22|dout_50;
   dout_52=dout_35&dout_50;
   dout_53=dout_36|dout_52;
   dout_54=dout_45&dout_50;
   dout_55=dout_46|dout_54;
   dout_56=dout_38&dout_52;
   dout_57=dout_49|dout_56;
   dout_60=dout_23^dout_33;
   dout_61=dout_25^dout_51;
   dout_62=dout_27^dout_53;
   dout_63=dout_29^dout_55;
   dout_64=dout_30^dout_57;

   O = 0;
   O |= (dout_62&1) << 0;
   O |= (dout_63&1) << 1;
   O |= (((A >> 1)&1)&1) << 2;
   O |= (dout_60&1) << 3;
   O |= (dout_61&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.39 %
// MAE = 0.5 
// WCE% = 1.56 %
// WCE = 2.0 
// WCRE% = 66.67 %
// EP% = 37.30 %
// MRE% = 1.48 %
// MSE = 0.7 
// PDK45_PWR = 0.032 mW
// PDK45_AREA = 67.1 um2
// PDK45_DELAY = 0.60 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.65 ns


int8_t add8s_83C(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_16=((A >> 0)&1)&((B >> 0)&1);
   dout_17=((B >> 0)&1)^((A >> 0)&1);
   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_31=dout_21&dout_18;
   dout_32=dout_21&dout_19;
   dout_33=dout_20|dout_31;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_39=dout_28|dout_37;
   dout_40=dout_19&dout_16;
   dout_41=dout_18|dout_40;
   dout_42=dout_32&dout_16;
   dout_43=dout_33|dout_42;
   dout_44=dout_27&dout_36;
   dout_45=dout_27&dout_35;
   dout_46=dout_26|dout_44;
   dout_47=dout_29&dout_44;
   dout_48=dout_29&dout_45;
   dout_49=dout_39|dout_47;
   dout_50=dout_23&dout_43;
   dout_51=dout_22|dout_50;
   dout_52=dout_35&dout_43;
   dout_53=dout_36|dout_52;
   dout_54=dout_45&dout_43;
   dout_55=dout_46|dout_54;
   dout_56=dout_48&dout_43;
   dout_57=dout_49|dout_56;
   dout_58=dout_19^dout_16;
   dout_59=dout_21^dout_41;
   dout_60=dout_23^dout_43;
   dout_61=dout_25^dout_51;
   dout_62=dout_27^dout_53;
   dout_63=dout_29^dout_55;
   dout_64=dout_30^dout_57;

   O = 0;
   O |= (dout_17&1) << 0;
   O |= (dout_58&1) << 1;
   O |= (dout_59&1) << 2;
   O |= (dout_60&1) << 3;
   O |= (dout_61&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 7.66 %
// MAE = 9.8 
// WCE% = 23.44 %
// WCE = 30 
// WCRE% = 850.00 %
// EP% = 96.91 %
// MRE% = 33.04 %
// MSE = 142 
// PDK45_PWR = 0.017 mW
// PDK45_AREA = 40.8 um2
// PDK45_DELAY = 0.38 ns


int8_t add8s_6PA(const int8_t B,const int8_t A)
{
   uint64_t dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&((B >> 7)&1);
   dout_36=dout_33^dout_35;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (dout_46&1) << 0;
   O |= (dout_36&1) << 1;
   O |= (dout_49&1) << 2;
   O |= (dout_49&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 4.45 %
// MAE = 5.7 
// WCE% = 15.62 %
// WCE = 20 
// WCRE% = 800.00 %
// EP% = 94.39 %
// MRE% = 23.64 %
// MSE = 49 
// PDK45_PWR = 0.020 mW
// PDK45_AREA = 51.2 um2
// PDK45_DELAY = 0.44 ns


int8_t add8s_6UC(const int8_t B,const int8_t A)
{
   uint64_t dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_35, dout_37, dout_38, dout_39, dout_44, dout_46, dout_47, dout_49, dout_50, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_60, dout_61, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_23=((A >> 3)&1)|((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_35=dout_25&dout_23;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_44=dout_27&dout_24;
   dout_46=dout_26|dout_44;
   dout_47=dout_38&dout_24;
   dout_49=dout_39|dout_47;
   dout_50=dout_35&((A >> 7)&1);
   dout_52=dout_35&((A >> 7)&1);
   dout_53=dout_24|dout_50;
   dout_54=dout_27&dout_52;
   dout_55=dout_46|dout_54;
   dout_56=dout_38&dout_52;
   dout_57=dout_49|dout_56;
   dout_60=dout_50^dout_23;
   dout_61=dout_25^dout_50;
   dout_62=dout_27^dout_53;
   dout_63=dout_29^dout_55;
   dout_64=dout_30^dout_57;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_60&1) << 1;
   O |= (dout_62&1) << 2;
   O |= (dout_60&1) << 3;
   O |= (dout_61&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 44.45 %
// MAE = 57 
// WCE% = 100.00 %
// WCE = 128 
// WCRE% = 200.00 %
// EP% = 99.48 %
// MRE% = 99.98 %
// MSE = 4551 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns



/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 12.27 %
// MAE = 16 
// WCE% = 33.59 %
// WCE = 43 
// WCRE% = 2800.00 %
// EP% = 98.52 %
// MRE% = 75.00 %
// MSE = 343 
// PDK45_PWR = 0.012 mW
// PDK45_AREA = 32.9 um2
// PDK45_DELAY = 0.27 ns


int8_t add8s_6J2(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_23, dout_29, dout_35, dout_38, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_49;
   uint64_t O;

   dout_23=((A >> 5)&1)&((B >> 5)&1);
   dout_29=((A >> 7)&1)^((B >> 7)&1);
   dout_35=((B >> 7)&1)&((A >> 7)&1);
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_40=dout_38&dout_35;
   dout_41=dout_38^dout_40;
   dout_42=dout_23|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_49=dout_29^dout_47;

   O = 0;
   O |= (dout_46&1) << 0;
   O |= (((B >> 1)&1)&1) << 1;
   O |= (dout_49&1) << 2;
   O |= (((A >> 1)&1)&1) << 3;
   O |= (((A >> 4)&1)&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 1.88 %
// MAE = 2.4 
// WCE% = 5.47 %
// WCE = 7.0 
// WCRE% = 400.00 %
// EP% = 87.50 %
// MRE% = 11.76 %
// MSE = 8.4 
// PDK45_PWR = 0.025 mW
// PDK45_AREA = 57.3 um2
// PDK45_DELAY = 0.53 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 25.47 %
// MAE = 33 
// WCE% = 72.66 %
// WCE = 93 
// WCRE% = 5600.00 %
// EP% = 99.11 %
// MRE% = 161.98 %
// MSE = 1507 
// PDK45_PWR = 0.0054 mW
// PDK45_AREA = 21.6 um2
// PDK45_DELAY = 0.17 ns


int8_t add8s_701(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_20, dout_28, dout_30, dout_33, dout_40, dout_57, dout_60;
   uint64_t O;

   dout_20=(((B >> 6)&1)^((A >> 6)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_33=((B >> 7)&1)&((A >> 7)&1);
   dout_40=(dout_33|dout_20)^0xFFFFFFFFFFFFFFFFU;
   dout_57=dout_28|dout_33;
   dout_60=dout_57^dout_30;

   O = 0;
   O |= (dout_40&1) << 0;
   O |= (((A >> 0)&1)&1) << 1;
   O |= (0&1) << 2;
   O |= (dout_40&1) << 3;
   O |= (((A >> 0)&1)&1) << 4;
   O |= (((A >> 5)&1)&1) << 5;
   O |= (dout_40&1) << 6;
   O |= (dout_60&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.16 %
// MAE = 0.2 
// WCE% = 1.56 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 12.50 %
// MRE% = 1.29 %
// MSE = 0.5 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 74.1 um2
// PDK45_DELAY = 0.62 ns


int8_t add8s_83N(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61;
   uint64_t O;

   dout_16=((A >> 0)&1)&((B >> 0)&1);
   dout_17=((A >> 0)&1)^((B >> 0)&1);
   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_31=dout_21&dout_18;
   dout_32=dout_21&dout_19;
   dout_33=dout_20|dout_31;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_40=dout_32&dout_16;
   dout_41=dout_33|dout_40;
   dout_42=dout_38&dout_36;
   dout_43=dout_38&dout_35;
   dout_44=dout_39|dout_42;
   dout_45=dout_43&dout_41;
   dout_46=dout_44|dout_45;
   dout_47=dout_35&dout_41;
   dout_48=dout_36|dout_47;
   dout_49=dout_19&dout_16;
   dout_50=dout_18|dout_49;
   dout_51=dout_23&dout_41;
   dout_52=dout_22|dout_51;
   dout_53=dout_27&dout_48;
   dout_54=dout_26|dout_53;
   dout_55=dout_19^dout_49;
   dout_56=dout_21^dout_50;
   dout_57=dout_23^dout_41;
   dout_58=dout_25^dout_52;
   dout_59=dout_27^dout_48;
   dout_60=dout_29^dout_54;
   dout_61=dout_30^dout_46;

   O = 0;
   O |= (dout_17&1) << 0;
   O |= (dout_55&1) << 1;
   O |= (dout_56&1) << 2;
   O |= (dout_57&1) << 3;
   O |= (dout_58&1) << 4;
   O |= (dout_59&1) << 5;
   O |= (dout_60&1) << 6;
   O |= (dout_61&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.39 %
// MAE = 0.5 
// WCE% = 1.56 %
// WCE = 2.0 
// WCRE% = 66.67 %
// EP% = 37.30 %
// MRE% = 1.48 %
// MSE = 0.7 
// PDK45_PWR = 0.032 mW
// PDK45_AREA = 67.1 um2
// PDK45_DELAY = 0.60 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 6.88 %
// MAE = 8.8 
// WCE% = 25.00 %
// WCE = 32 
// WCRE% = 1000.00 %
// EP% = 99.27 %
// MRE% = 40.60 %
// MSE = 110 
// PDK45_PWR = 0.017 mW
// PDK45_AREA = 44.6 um2
// PDK45_DELAY = 0.38 ns


int8_t add8s_6H2(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_22, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_34, dout_36, dout_37, dout_38, dout_39, dout_42, dout_44, dout_46, dout_53, dout_54, dout_59, dout_60, dout_61;
   uint64_t O;

   dout_22=((B >> 7)&1)&((A >> 7)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_34=dout_25&dout_22;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_42=dout_38&dout_36;
   dout_44=dout_39|dout_42;
   dout_46=dout_34|dout_24;
   dout_53=dout_27&dout_36;
   dout_54=dout_26|dout_53;
   dout_59=dout_27^dout_46;
   dout_60=dout_29^dout_54;
   dout_61=dout_30^dout_44;

   O = 0;
   O |= (((A >> 3)&1)&1) << 0;
   O |= (((A >> 3)&1)&1) << 1;
   O |= (((A >> 3)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (dout_25&1) << 4;
   O |= (dout_59&1) << 5;
   O |= (dout_60&1) << 6;
   O |= (dout_61&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.65 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.86 %
// MAE = 1.1 
// WCE% = 3.91 %
// WCE = 5.0 
// WCRE% = 100.00 %
// EP% = 66.85 %
// MRE% = 4.21 %
// MSE = 2.4 
// PDK45_PWR = 0.030 mW
// PDK45_AREA = 67.6 um2
// PDK45_DELAY = 0.58 ns


int8_t add8s_6TR(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_16, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_50, dout_51, dout_52, dout_53, dout_54, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61;
   uint64_t O;

   dout_16=((A >> 7)&1)&((B >> 7)&1);
   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_31=dout_21&dout_18;
   dout_33=dout_20|dout_31;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_40=dout_21&dout_16;
   dout_41=dout_33|dout_40;
   dout_42=dout_38&dout_36;
   dout_43=dout_38&dout_35;
   dout_44=dout_39|dout_42;
   dout_45=dout_43&dout_41;
   dout_46=dout_44|dout_45;
   dout_47=dout_35&dout_41;
   dout_48=dout_36|dout_47;
   dout_50=dout_18|dout_16;
   dout_51=dout_23&dout_41;
   dout_52=dout_22|dout_51;
   dout_53=dout_27&dout_48;
   dout_54=dout_26|dout_53;
   dout_56=dout_21^dout_50;
   dout_57=dout_23^dout_41;
   dout_58=dout_25^dout_52;
   dout_59=dout_27^dout_48;
   dout_60=dout_29^dout_54;
   dout_61=dout_30^dout_46;

   O = 0;
   O |= (dout_58&1) << 0;
   O |= (dout_19&1) << 1;
   O |= (dout_56&1) << 2;
   O |= (dout_57&1) << 3;
   O |= (dout_58&1) << 4;
   O |= (dout_59&1) << 5;
   O |= (dout_60&1) << 6;
   O |= (dout_61&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 3.75 %
// MAE = 4.8 
// WCE% = 9.38 %
// WCE = 12 
// WCRE% = 1100.00 %
// EP% = 93.75 %
// MRE% = 26.40 %
// MSE = 35 
// PDK45_PWR = 0.021 mW
// PDK45_AREA = 48.3 um2
// PDK45_DELAY = 0.45 ns


int8_t add8s_6PM(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_20, dout_25, dout_28, dout_29, dout_30, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_49;
   uint64_t O;

   dout_20=((B >> 7)&1)^((A >> 7)&1);
   dout_25=((A >> 7)&1)&((B >> 7)&1);
   dout_28=((A >> 3)&1)|((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_25;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_49=dout_20^dout_47;

   O = 0;
   O |= (((A >> 0)&1)&1) << 0;
   O |= (((B >> 1)&1)&1) << 1;
   O |= (((A >> 2)&1)&1) << 2;
   O |= (((B >> 2)&1)&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 44.45 %
// MAE = 57 
// WCE% = 100.00 %
// WCE = 128 
// WCRE% = 200.00 %
// EP% = 99.48 %
// MRE% = 99.98 %
// MSE = 4551 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns



/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 1.56 %
// MAE = 2.0 
// WCE% = 4.69 %
// WCE = 6.0 
// WCRE% = 300.00 %
// EP% = 71.48 %
// MRE% = 9.74 %
// MSE = 6.5 
// PDK45_PWR = 0.028 mW
// PDK45_AREA = 63.4 um2
// PDK45_DELAY = 0.53 ns


int8_t add8s_6S5(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_16=((A >> 0)&1)^((B >> 0)&1);
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&((A >> 7)&1);
   dout_26=dout_23^dout_25;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_26&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 30.39 %
// MAE = 39 
// WCE% = 100.00 %
// WCE = 128 
// WCRE% = 6400.00 %
// EP% = 54.43 %
// MRE% = 150.85 %
// MSE = 3013 
// PDK45_PWR = 0.030 mW
// PDK45_AREA = 71.8 um2
// PDK45_DELAY = 0.44 ns


int8_t add8s_7YK(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_41, dout_42, dout_43, dout_45, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_16=((A >> 0)&1)^((B >> 0)&1);
   dout_17=((A >> 0)&1)&((B >> 0)&1);
   dout_18=((A >> 1)&1)^((B >> 1)&1);
   dout_19=((A >> 1)&1)&((B >> 1)&1);
   dout_20=dout_18&dout_17;
   dout_21=dout_18^dout_17;
   dout_22=dout_19|dout_20;
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&dout_22;
   dout_26=dout_23^dout_22;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_38;
   dout_43=((A >> 6)&1)|((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_47=((A >> 6)&1)|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_21&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_49&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.16 %
// MAE = 0.2 
// WCE% = 1.56 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 12.50 %
// MRE% = 1.29 %
// MSE = 0.5 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 74.1 um2
// PDK45_DELAY = 0.62 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 44.77 %
// MAE = 57 
// WCE% = 100.00 %
// WCE = 128 
// WCRE% = 6200.00 %
// EP% = 85.42 %
// MRE% = 146.36 %
// MSE = 5003 
// PDK45_PWR = 0.020 mW
// PDK45_AREA = 57.7 um2
// PDK45_DELAY = 0.45 ns


int8_t add8s_70Z(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_16=((A >> 0)&1)^((B >> 0)&1);
   dout_17=((A >> 0)&1)&((B >> 0)&1);
   dout_18=((A >> 1)&1)^((B >> 1)&1);
   dout_19=((A >> 1)&1)&((B >> 1)&1);
   dout_20=dout_18&dout_17;
   dout_21=(dout_18&dout_17)^0xFFFFFFFFFFFFFFFFU;
   dout_22=dout_19|dout_20;
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&dout_22;
   dout_26=dout_23^dout_22;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_34;
   dout_41=dout_38|dout_37;
   dout_42=(dout_39&dout_40)^0xFFFFFFFFFFFFFFFFU;
   dout_43=((A >> 6)&1)^((A >> 7)&1);
   dout_46=((A >> 7)&1)|dout_42;
   dout_47=((A >> 6)&1)|dout_43;
   dout_48=(((A >> 7)&1)&((B >> 7)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_49=dout_48|dout_47;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_21&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.65 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 44.45 %
// MAE = 57 
// WCE% = 100.00 %
// WCE = 128 
// WCRE% = 200.00 %
// EP% = 99.48 %
// MRE% = 99.98 %
// MSE = 4551 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns



/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 5.78 %
// MAE = 7.4 
// WCE% = 12.50 %
// WCE = 16 
// WCRE% = 1600.00 %
// EP% = 46.35 %
// MRE% = 39.10 %
// MSE = 119 
// PDK45_PWR = 0.031 mW
// PDK45_AREA = 75.6 um2
// PDK45_DELAY = 0.38 ns


int8_t add8s_6YG(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_31, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_16=((A >> 0)&1)^((B >> 0)&1);
   dout_17=((A >> 0)&1)&((B >> 0)&1);
   dout_18=((A >> 1)&1)^((B >> 1)&1);
   dout_19=((A >> 1)&1)&((B >> 1)&1);
   dout_20=dout_18&dout_17;
   dout_21=dout_18^dout_17;
   dout_22=dout_19|dout_20;
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&dout_22;
   dout_26=dout_23^dout_22;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_31=dout_28^dout_27;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&((A >> 7)&1);
   dout_36=dout_33^dout_35;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_21&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 12.27 %
// MAE = 16 
// WCE% = 33.59 %
// WCE = 43 
// WCRE% = 2800.00 %
// EP% = 98.52 %
// MRE% = 75.00 %
// MSE = 343 
// PDK45_PWR = 0.012 mW
// PDK45_AREA = 32.9 um2
// PDK45_DELAY = 0.27 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 18.28 %
// MAE = 23 
// WCE% = 54.69 %
// WCE = 70 
// WCRE% = 3300.00 %
// EP% = 98.52 %
// MRE% = 67.56 %
// MSE = 839 
// PDK45_PWR = 0.0063 mW
// PDK45_AREA = 26.8 um2
// PDK45_DELAY = 0.17 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 2.50 %
// MAE = 3.2 
// WCE% = 5.47 %
// WCE = 7.0 
// WCRE% = 700.00 %
// EP% = 87.50 %
// MRE% = 18.19 %
// MSE = 16 
// PDK45_PWR = 0.025 mW
// PDK45_AREA = 57.3 um2
// PDK45_DELAY = 0.50 ns


int8_t add8s_6ZP(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_18, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_51, dout_52, dout_53, dout_54, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61;
   uint64_t O;

   dout_18=((A >> 7)&1)&((B >> 7)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)|((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_31=dout_21&dout_18;
   dout_33=dout_20|dout_31;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_41=dout_20|dout_31;
   dout_42=dout_38&dout_36;
   dout_43=dout_38&dout_35;
   dout_44=dout_39|dout_42;
   dout_45=dout_43&dout_41;
   dout_46=dout_44|dout_45;
   dout_47=dout_35&dout_33;
   dout_48=dout_36|dout_47;
   dout_51=dout_23&dout_41;
   dout_52=dout_22|dout_51;
   dout_53=dout_27&dout_48;
   dout_54=dout_26|dout_53;
   dout_56=dout_48|dout_45;
   dout_57=dout_23^dout_41;
   dout_58=dout_25^dout_52;
   dout_59=dout_27^dout_56;
   dout_60=dout_29^dout_54;
   dout_61=dout_30^dout_46;

   O = 0;
   O |= (((B >> 0)&1)&1) << 0;
   O |= (((B >> 1)&1)&1) << 1;
   O |= (0&1) << 2;
   O |= (dout_57&1) << 3;
   O |= (dout_58&1) << 4;
   O |= (dout_59&1) << 5;
   O |= (dout_60&1) << 6;
   O |= (dout_61&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.65 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 1.41 %
// MAE = 1.8 
// WCE% = 3.91 %
// WCE = 5.0 
// WCRE% = 300.00 %
// EP% = 83.20 %
// MRE% = 8.59 %
// MSE = 4.6 
// PDK45_PWR = 0.027 mW
// PDK45_AREA = 55.8 um2
// PDK45_DELAY = 0.51 ns


int8_t add8s_6FC(const int8_t B,const int8_t A)
{
   uint64_t dout_18, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_18=((A >> 7)&1)&((B >> 7)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_31=dout_21&dout_18;
   dout_33=dout_20|dout_31;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_38=dout_29&dout_27;
   dout_39=dout_28|dout_37;
   dout_44=dout_27&dout_36;
   dout_45=dout_27&dout_35;
   dout_46=dout_26|dout_44;
   dout_47=dout_38&dout_36;
   dout_48=dout_38&dout_35;
   dout_49=dout_39|dout_47;
   dout_50=dout_23&dout_33;
   dout_51=dout_22|dout_50;
   dout_52=dout_35&dout_33;
   dout_53=dout_36|dout_52;
   dout_54=dout_45&dout_33;
   dout_55=dout_46|dout_54;
   dout_56=dout_48&dout_33;
   dout_57=dout_49|dout_56;
   dout_59=dout_21^dout_18;
   dout_60=dout_23^dout_33;
   dout_61=dout_25^dout_51;
   dout_62=dout_27^dout_53;
   dout_63=dout_29^dout_55;
   dout_64=dout_30^dout_57;

   O = 0;
   O |= (((A >> 1)&1)&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (dout_59&1) << 2;
   O |= (dout_60&1) << 3;
   O |= (dout_61&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 3.75 %
// MAE = 4.8 
// WCE% = 9.38 %
// WCE = 12 
// WCRE% = 1100.00 %
// EP% = 93.75 %
// MRE% = 26.40 %
// MSE = 35 
// PDK45_PWR = 0.021 mW
// PDK45_AREA = 48.3 um2
// PDK45_DELAY = 0.45 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 7.97 %
// MAE = 10 
// WCE% = 19.53 %
// WCE = 25 
// WCRE% = 2500.00 %
// EP% = 96.88 %
// MRE% = 61.40 %
// MSE = 158 
// PDK45_PWR = 0.016 mW
// PDK45_AREA = 39.4 um2
// PDK45_DELAY = 0.37 ns


int8_t add8s_6X9(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_30, dout_31, dout_33, dout_34, dout_35, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 6)&1)&((B >> 6)&1);
   dout_33=((A >> 4)&1)|((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_30;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_31|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (((A >> 0)&1)&1) << 0;
   O |= (0&1) << 1;
   O |= (((A >> 2)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (((A >> 3)&1)&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.78 %
// MAE = 1.0 
// WCE% = 1.56 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 49.74 %
// MRE% = 4.35 %
// MSE = 2.0 
// PDK45_PWR = 0.032 mW
// PDK45_AREA = 71.8 um2
// PDK45_DELAY = 0.67 ns


int8_t add8s_6SN(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49;
   uint64_t O;

   dout_16=((A >> 0)&1)^((B >> 0)&1);
   dout_17=((A >> 0)&1)&((B >> 0)&1);
   dout_18=((A >> 1)&1)^((B >> 1)&1);
   dout_19=((A >> 1)&1)&((B >> 1)&1);
   dout_20=dout_18&dout_17;
   dout_22=dout_19|dout_20;
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&dout_22;
   dout_26=dout_23^dout_22;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=dout_48^dout_47;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_49&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_49&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 44.45 %
// MAE = 57 
// WCE% = 100.00 %
// WCE = 128 
// WCRE% = 200.00 %
// EP% = 99.48 %
// MRE% = 99.98 %
// MSE = 4551 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns



/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.39 %
// MAE = 0.5 
// WCE% = 0.78 %
// WCE = 1.0 
// WCRE% = 100.00 %
// EP% = 50.00 %
// MRE% = 2.62 %
// MSE = 0.5 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 64.8 um2
// PDK45_DELAY = 0.64 ns


int8_t add8s_6X7(const int8_t A /* 8-bit signed operand */, const int8_t B /* 8-bit signed operand */)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64;
   uint64_t O;

   dout_16=((A >> 0)&1)&((B >> 0)&1);
   dout_17=((A >> 6)&1)&((B >> 6)&1);
   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=dout_18&dout_21;
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)^((B >> 7)&1);
   dout_32=dout_21&dout_19;
   dout_33=dout_20|dout_28;
   dout_34=dout_25&dout_22;
   dout_35=dout_25&dout_23;
   dout_36=dout_24|dout_34;
   dout_37=dout_29&dout_26;
   dout_39=dout_17|dout_37;
   dout_40=dout_19&dout_16;
   dout_41=dout_18|dout_40;
   dout_42=dout_32&dout_16;
   dout_43=dout_33|dout_42;
   dout_44=dout_27&dout_36;
   dout_45=dout_27&dout_35;
   dout_46=dout_26|dout_44;
   dout_47=dout_29&dout_44;
   dout_48=dout_29&dout_45;
   dout_49=dout_39|dout_47;
   dout_50=dout_23&dout_43;
   dout_51=dout_22|dout_50;
   dout_52=dout_35&dout_43;
   dout_53=dout_36|dout_52;
   dout_54=dout_45&dout_43;
   dout_55=dout_46|dout_54;
   dout_56=dout_48&dout_43;
   dout_57=dout_49|dout_56;
   dout_58=dout_19^dout_16;
   dout_59=dout_21^dout_41;
   dout_60=dout_23^dout_43;
   dout_61=dout_25^dout_51;
   dout_62=dout_27^dout_53;
   dout_63=dout_29^dout_55;
   dout_64=dout_30^dout_57;

   O = 0;
   O |= (dout_60&1) << 0;
   O |= (dout_58&1) << 1;
   O |= (dout_59&1) << 2;
   O |= (dout_60&1) << 3;
   O |= (dout_61&1) << 4;
   O |= (dout_62&1) << 5;
   O |= (dout_63&1) << 6;
   O |= (dout_64&1) << 7;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 25.00 %
// MAE = 64 
// WCE% = 50.00 %
// WCE = 128 
// WCRE% = 9700.00 %
// EP% = 99.95 %
// MRE% = 249.36 %
// MSE = 4798 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


int8_t add8se_8XS(const int8_t B,const int8_t A)
{
   uint64_t O;


   O = 0;
   O |= (0&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (((A >> 5)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (((A >> 5)&1)&1) << 4;
   O |= (((B >> 6)&1)&1) << 5;
   O |= (((A >> 6)&1)&1) << 6;
   O |= (((A >> 7)&1)&1) << 7;
   O |= (((A >> 7)&1)&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 1.21 %
// MAE = 3.1 
// WCE% = 3.91 %
// WCE = 10 
// WCRE% = 800.00 %
// EP% = 90.62 %
// MRE% = 12.28 %
// MSE = 15 
// PDK45_PWR = 0.019 mW
// PDK45_AREA = 41.3 um2
// PDK45_DELAY = 0.35 ns


int8_t add8se_8UT(const int8_t B,const int8_t A)
{
   uint64_t dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_41, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_60, dout_62, dout_63, dout_65, dout_66, dout_67, dout_68, dout_75, dout_76, dout_80, dout_81, dout_82, dout_83, dout_84;
   uint64_t O;

   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_41=dout_25&((B >> 3)&1);
   dout_43=dout_24|dout_41;
   dout_44=dout_27&dout_24;
   dout_45=dout_27&dout_25;
   dout_46=dout_26|dout_44;
   dout_47=dout_29&dout_26;
   dout_48=dout_29&dout_27;
   dout_49=dout_28|dout_47;
   dout_50=dout_31&dout_28;
   dout_51=dout_31&dout_29;
   dout_52=dout_30|dout_50;
   dout_53=((B >> 3)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_60=dout_45&((B >> 3)&1);
   dout_62=dout_46|dout_60;
   dout_63=dout_48&dout_43;
   dout_65=dout_49|dout_63;
   dout_66=dout_51&dout_46;
   dout_67=dout_51&dout_45;
   dout_68=dout_52|dout_66;
   dout_75=dout_67&((B >> 3)&1);
   dout_76=dout_68|dout_75;
   dout_80=dout_25^((B >> 3)&1);
   dout_81=dout_27^dout_43;
   dout_82=dout_29^dout_62;
   dout_83=dout_31^dout_65;
   dout_84=dout_32^dout_76;

   O = 0;
   O |= (((A >> 3)&1)&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_53&1) << 2;
   O |= (((A >> 3)&1)&1) << 3;
   O |= (dout_80&1) << 4;
   O |= (dout_81&1) << 5;
   O |= (dout_82&1) << 6;
   O |= (dout_83&1) << 7;
   O |= (dout_84&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.78 %
// MAE = 2.0 
// WCE% = 1.56 %
// WCE = 4.0 
// WCRE% = 400.00 %
// EP% = 87.50 %
// MRE% = 8.05 %
// MSE = 5.5 
// PDK45_PWR = 0.023 mW
// PDK45_AREA = 48.8 um2
// PDK45_DELAY = 0.43 ns


int8_t add8se_90R(const int8_t B,const int8_t A)
{
   uint64_t dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&((B >> 2)&1);
   dout_31=dout_28^((B >> 2)&1);
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (((A >> 0)&1)&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (((A >> 2)&1)&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 2.23 %
// MAE = 5.7 
// WCE% = 6.64 %
// WCE = 17 
// WCRE% = 1600.00 %
// EP% = 94.73 %
// MRE% = 22.56 %
// MSE = 48 
// PDK45_PWR = 0.014 mW
// PDK45_AREA = 32.4 um2
// PDK45_DELAY = 0.27 ns


int8_t add8se_8ZX(const int8_t B,const int8_t A)
{
   uint64_t dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_38, dout_44, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_63, dout_65, dout_66, dout_68, dout_81, dout_82, dout_83, dout_84;
   uint64_t O;

   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_38=((B >> 4)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_44=dout_27&((B >> 4)&1);
   dout_46=dout_26|dout_44;
   dout_47=dout_29&dout_26;
   dout_48=dout_29&dout_27;
   dout_49=dout_28|dout_47;
   dout_50=dout_31&dout_28;
   dout_51=dout_31&dout_29;
   dout_52=dout_30|dout_50;
   dout_63=dout_48&((B >> 4)&1);
   dout_65=dout_49|dout_63;
   dout_66=dout_51&dout_46;
   dout_68=dout_52|dout_66;
   dout_81=dout_27^((B >> 4)&1);
   dout_82=dout_29^dout_46;
   dout_83=dout_31^dout_65;
   dout_84=dout_32^dout_68;

   O = 0;
   O |= (dout_46&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (((B >> 3)&1)&1) << 2;
   O |= (dout_38&1) << 3;
   O |= (((A >> 4)&1)&1) << 4;
   O |= (dout_81&1) << 5;
   O |= (dout_82&1) << 6;
   O |= (dout_83&1) << 7;
   O |= (dout_84&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.035 mW
// PDK45_AREA = 74.6 um2
// PDK45_DELAY = 0.63 ns


int8_t add8se_7A2(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_54;
   uint64_t O;

   dout_16=((A >> 0)&1)^((B >> 0)&1);
   dout_17=((A >> 0)&1)&((B >> 0)&1);
   dout_18=((A >> 1)&1)^((B >> 1)&1);
   dout_19=((A >> 1)&1)&((B >> 1)&1);
   dout_20=dout_18&dout_17;
   dout_21=dout_18^dout_17;
   dout_22=dout_19|dout_20;
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&dout_22;
   dout_26=dout_23^dout_22;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_54=dout_48^dout_52;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_21&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 7.42 %
// MAE = 19 
// WCE% = 25.00 %
// WCE = 64 
// WCRE% = 6300.00 %
// EP% = 98.45 %
// MRE% = 67.81 %
// MSE = 545 
// PDK45_PWR = 0.0042 mW
// PDK45_AREA = 11.7 um2
// PDK45_DELAY = 0.13 ns


int8_t add8se_91V(const int8_t B,const int8_t A)
{
   uint64_t dout_26, dout_30, dout_31, dout_32, dout_57, dout_58, dout_65, dout_66;
   uint64_t O;

   dout_26=((B >> 6)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_57=dout_31&((B >> 6)&1);
   dout_58=dout_30|dout_57;
   dout_65=dout_31^((B >> 6)&1);
   dout_66=dout_32^dout_58;

   O = 0;
   O |= (((A >> 6)&1)&1) << 0;
   O |= (((A >> 6)&1)&1) << 1;
   O |= (((B >> 5)&1)&1) << 2;
   O |= (((B >> 5)&1)&1) << 3;
   O |= (((A >> 5)&1)&1) << 4;
   O |= (((A >> 6)&1)&1) << 5;
   O |= (dout_26&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.078 %
// MAE = 0.2 
// WCE% = 0.39 %
// WCE = 1.0 
// WCRE% = 50.00 %
// EP% = 25.00 %
// MRE% = 0.87 %
// MSE = 0.2 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.62 ns


int8_t add8se_8YC(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84;
   uint64_t O;

   dout_16=((A >> 0)&1)&((B >> 0)&1);
   dout_17=(((A >> 0)&1)&((B >> 0)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_33=dout_19&dout_16;
   dout_34=dout_18|dout_33;
   dout_35=dout_21&dout_18;
   dout_36=dout_21&dout_19;
   dout_37=dout_20|dout_35;
   dout_38=dout_23&dout_20;
   dout_39=dout_23&dout_21;
   dout_40=dout_22|dout_38;
   dout_41=dout_25&dout_22;
   dout_42=dout_25&dout_23;
   dout_43=dout_24|dout_41;
   dout_44=dout_27&dout_24;
   dout_45=dout_27&dout_25;
   dout_46=dout_26|dout_44;
   dout_47=dout_29&dout_26;
   dout_48=dout_29&dout_27;
   dout_49=dout_28|dout_47;
   dout_50=dout_31&dout_28;
   dout_51=dout_31&dout_29;
   dout_52=dout_30|dout_50;
   dout_53=dout_36&dout_16;
   dout_54=dout_37|dout_53;
   dout_55=dout_39&dout_34;
   dout_56=dout_40|dout_55;
   dout_57=dout_42&dout_37;
   dout_58=dout_42&dout_36;
   dout_59=dout_43|dout_57;
   dout_60=dout_45&dout_40;
   dout_61=dout_45&dout_39;
   dout_62=dout_46|dout_60;
   dout_63=dout_48&dout_43;
   dout_64=dout_48&dout_42;
   dout_65=dout_49|dout_63;
   dout_66=dout_51&dout_46;
   dout_67=dout_51&dout_45;
   dout_68=dout_52|dout_66;
   dout_69=dout_58&dout_16;
   dout_70=dout_59|dout_69;
   dout_71=dout_61&dout_34;
   dout_72=dout_62|dout_71;
   dout_73=dout_64&dout_54;
   dout_74=dout_65|dout_73;
   dout_75=dout_67&dout_56;
   dout_76=dout_68|dout_75;
   dout_77=dout_19^dout_16;
   dout_78=dout_21^dout_34;
   dout_79=dout_23^dout_54;
   dout_80=dout_25^dout_56;
   dout_81=dout_27^dout_70;
   dout_82=dout_29^dout_72;
   dout_83=dout_31^dout_74;
   dout_84=dout_32^dout_76;

   O = 0;
   O |= (dout_17&1) << 0;
   O |= (dout_77&1) << 1;
   O |= (dout_78&1) << 2;
   O |= (dout_79&1) << 3;
   O |= (dout_80&1) << 4;
   O |= (dout_81&1) << 5;
   O |= (dout_82&1) << 6;
   O |= (dout_83&1) << 7;
   O |= (dout_84&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.20 %
// MAE = 0.5 
// WCE% = 0.39 %
// WCE = 1.0 
// WCRE% = 100.00 %
// EP% = 50.00 %
// MRE% = 2.28 %
// MSE = 0.5 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 66.6 um2
// PDK45_DELAY = 0.60 ns


int8_t add8se_8V4(const int8_t B,const int8_t A)
{
   uint64_t dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66;
   uint64_t O;

   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_33=dout_21&dout_18;
   dout_34=dout_21&dout_19;
   dout_35=dout_20|dout_33;
   dout_36=dout_25&dout_22;
   dout_37=dout_25&dout_23;
   dout_38=dout_24|dout_36;
   dout_39=dout_29&dout_26;
   dout_40=dout_29&dout_27;
   dout_41=dout_28|dout_39;
   dout_42=dout_34&((A >> 0)&1);
   dout_43=dout_35|dout_42;
   dout_44=dout_40&dout_38;
   dout_45=dout_40&dout_37;
   dout_46=dout_41|dout_44;
   dout_47=dout_45&dout_43;
   dout_48=dout_46|dout_47;
   dout_49=dout_37&dout_43;
   dout_50=dout_38|dout_49;
   dout_51=dout_19&((A >> 0)&1);
   dout_52=dout_18|dout_51;
   dout_53=dout_23&dout_43;
   dout_54=dout_22|dout_53;
   dout_55=dout_27&dout_50;
   dout_56=dout_26|dout_55;
   dout_57=dout_31&dout_48;
   dout_58=dout_30|dout_57;
   dout_59=dout_19^((A >> 0)&1);
   dout_60=dout_21^dout_52;
   dout_61=dout_23^dout_43;
   dout_62=dout_25^dout_54;
   dout_63=dout_27^dout_50;
   dout_64=dout_29^dout_56;
   dout_65=dout_31^dout_48;
   dout_66=dout_32^dout_58;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_59&1) << 1;
   O |= (dout_60&1) << 2;
   O |= (dout_61&1) << 3;
   O |= (dout_62&1) << 4;
   O |= (dout_63&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 4.22 %
// MAE = 11 
// WCE% = 13.28 %
// WCE = 34 
// WCRE% = 3100.00 %
// EP% = 97.07 %
// MRE% = 38.69 %
// MSE = 175 
// PDK45_PWR = 0.0094 mW
// PDK45_AREA = 23.5 um2
// PDK45_DELAY = 0.19 ns


int8_t add8se_8TX(const int8_t B,const int8_t A)
{
   uint64_t dout_28, dout_29, dout_30, dout_31, dout_32, dout_40, dout_46, dout_57, dout_58, dout_63, dout_64, dout_65, dout_66;
   uint64_t O;

   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_40=dout_29&((B >> 5)&1);
   dout_46=dout_28|dout_40;
   dout_57=dout_31&dout_46;
   dout_58=dout_30|dout_57;
   dout_63=((B >> 5)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_64=dout_29^((B >> 5)&1);
   dout_65=dout_31^dout_46;
   dout_66=dout_32^dout_58;

   O = 0;
   O |= (((A >> 1)&1)&1) << 0;
   O |= (dout_64&1) << 1;
   O |= (((B >> 4)&1)&1) << 2;
   O |= (((B >> 4)&1)&1) << 3;
   O |= (((A >> 5)&1)&1) << 4;
   O |= (dout_63&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.39 %
// MAE = 1.0 
// WCE% = 0.78 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 75.00 %
// MRE% = 4.02 %
// MSE = 1.5 
// PDK45_PWR = 0.028 mW
// PDK45_AREA = 57.7 um2
// PDK45_DELAY = 0.51 ns


int8_t add8se_91Y(const int8_t B,const int8_t A)
{
   uint64_t dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66;
   uint64_t O;

   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_33=dout_21&((A >> 1)&1);
   dout_35=dout_20|dout_33;
   dout_36=dout_25&dout_22;
   dout_37=dout_25&dout_23;
   dout_38=dout_24|dout_36;
   dout_39=dout_29&dout_26;
   dout_40=dout_29&dout_27;
   dout_41=dout_28|dout_39;
   dout_44=dout_40&dout_38;
   dout_45=dout_40&dout_37;
   dout_46=dout_41|dout_44;
   dout_47=dout_45&dout_35;
   dout_48=dout_46|dout_47;
   dout_49=dout_37&dout_35;
   dout_50=dout_38|dout_49;
   dout_53=dout_23&dout_35;
   dout_54=dout_22|dout_53;
   dout_55=dout_27&dout_50;
   dout_56=dout_26|dout_55;
   dout_57=dout_31&dout_48;
   dout_58=dout_30|dout_57;
   dout_60=dout_21^((A >> 1)&1);
   dout_61=dout_23^dout_35;
   dout_62=dout_25^dout_54;
   dout_63=dout_27^dout_50;
   dout_64=dout_29^dout_56;
   dout_65=dout_31^dout_48;
   dout_66=dout_32^dout_58;

   O = 0;
   O |= (0&1) << 0;
   O |= (((B >> 1)&1)&1) << 1;
   O |= (dout_60&1) << 2;
   O |= (dout_61&1) << 3;
   O |= (dout_62&1) << 4;
   O |= (dout_63&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 4.38 %
// MAE = 11 
// WCE% = 12.50 %
// WCE = 32 
// WCRE% = 3100.00 %
// EP% = 97.27 %
// MRE% = 39.03 %
// MSE = 190 
// PDK45_PWR = 0.0094 mW
// PDK45_AREA = 23.5 um2
// PDK45_DELAY = 0.19 ns


int8_t add8se_8UF(const int8_t B,const int8_t A)
{
   uint64_t dout_25, dout_26, dout_28, dout_29, dout_30, dout_31, dout_32, dout_40, dout_46, dout_56, dout_57, dout_58, dout_62, dout_63, dout_64, dout_65, dout_66;
   uint64_t O;

   dout_25=((A >> 5)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_26=((A >> 0)&1)&((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_40=dout_29&((B >> 5)&1);
   dout_46=dout_28|dout_40;
   dout_56=dout_26|((B >> 5)&1);
   dout_57=dout_31&dout_46;
   dout_58=dout_30|dout_57;
   dout_62=dout_25^0xFFFFFFFFFFFFFFFFU;
   dout_63=((B >> 5)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_64=dout_29^dout_56;
   dout_65=dout_31^dout_46;
   dout_66=dout_32^dout_58;

   O = 0;
   O |= (0&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (dout_62&1) << 2;
   O |= (((A >> 3)&1)&1) << 3;
   O |= (dout_62&1) << 4;
   O |= (dout_63&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 25.00 %
// MAE = 64 
// WCE% = 50.00 %
// WCE = 128 
// WCRE% = 9700.00 %
// EP% = 99.95 %
// MRE% = 249.36 %
// MSE = 4798 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.20 %
// MAE = 0.5 
// WCE% = 0.78 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 25.00 %
// MRE% = 1.74 %
// MSE = 1.0 
// PDK45_PWR = 0.032 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.55 ns


int8_t add8se_91X(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_19, dout_21, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_16=((A >> 0)&1)^((B >> 0)&1);
   dout_19=((A >> 1)&1)&((B >> 1)&1);
   dout_21=((A >> 1)&1)^((B >> 1)&1);
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_23&dout_19;
   dout_26=dout_23^dout_19;
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_21&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.035 mW
// PDK45_AREA = 74.6 um2
// PDK45_DELAY = 0.63 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.078 %
// MAE = 0.2 
// WCE% = 0.39 %
// WCE = 1.0 
// WCRE% = 50.00 %
// EP% = 25.00 %
// MRE% = 0.87 %
// MSE = 0.2 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.62 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 15.35 %
// MAE = 39 
// WCE% = 50.00 %
// WCE = 128 
// WCRE% = 9500.00 %
// EP% = 99.22 %
// MRE% = 100.10 %
// MSE = 2301 
// PDK45_PWR = 0.000065 mW
// PDK45_AREA = 1.4 um2
// PDK45_DELAY = 0.01 ns


int8_t add8se_90X(const int8_t B,const int8_t A)
{
   uint64_t dout_30;
   uint64_t O;

   dout_30=((A >> 7)&1)^0xFFFFFFFFFFFFFFFFU;

   O = 0;
   O |= (((B >> 5)&1)&1) << 0;
   O |= (((B >> 5)&1)&1) << 1;
   O |= (((A >> 6)&1)&1) << 2;
   O |= (((B >> 5)&1)&1) << 3;
   O |= (((A >> 6)&1)&1) << 4;
   O |= (dout_30&1) << 5;
   O |= (dout_30&1) << 6;
   O |= (((B >> 7)&1)&1) << 7;
   O |= (((B >> 7)&1)&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 16.64 %
// MAE = 43 
// WCE% = 50.00 %
// WCE = 128 
// WCRE% = 6350.00 %
// EP% = 99.22 %
// MRE% = 75.00 %
// MSE = 2723 
// PDK45_PWR = 0.002 mW
// PDK45_AREA = 10.8 um2
// PDK45_DELAY = 0.09 ns


int8_t add8se_7N1(const int8_t B,const int8_t A)
{
   uint64_t dout_29, dout_32, dout_53, dout_68, dout_72, dout_82, dout_84;
   uint64_t O;

   dout_29=((A >> 6)&1)|((B >> 6)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_53=((B >> 7)&1)|((A >> 7)&1);
   dout_68=((A >> 7)&1)|((B >> 7)&1);
   dout_72=dout_29|dout_53;
   dout_82=dout_32^dout_72;
   dout_84=dout_32^dout_68;

   O = 0;
   O |= (dout_82&1) << 0;
   O |= (dout_82&1) << 1;
   O |= (dout_82&1) << 2;
   O |= (dout_82&1) << 3;
   O |= (dout_82&1) << 4;
   O |= (dout_82&1) << 5;
   O |= (dout_82&1) << 6;
   O |= (0&1) << 7;
   O |= (dout_84&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 2.23 %
// MAE = 5.7 
// WCE% = 7.42 %
// WCE = 19 
// WCRE% = 750.00 %
// EP% = 93.75 %
// MRE% = 18.02 %
// MSE = 50 
// PDK45_PWR = 0.016 mW
// PDK45_AREA = 41.3 um2
// PDK45_DELAY = 0.31 ns


int8_t add8se_76P(const int8_t B,const int8_t A)
{
   uint64_t dout_31, dout_33, dout_34, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_31=((A >> 3)&1)|((B >> 3)&1);
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_34;
   dout_41=dout_38^dout_34;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (((A >> 0)&1)&1) << 0;
   O |= (dout_31&1) << 1;
   O |= (dout_46&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_33&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.47 %
// MAE = 1.2 
// WCE% = 1.17 %
// WCE = 3.0 
// WCRE% = 200.00 %
// EP% = 62.50 %
// MRE% = 4.89 %
// MSE = 2.8 
// PDK45_PWR = 0.026 mW
// PDK45_AREA = 59.1 um2
// PDK45_DELAY = 0.47 ns


int8_t add8se_7LN(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_23, dout_24, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_16=((A >> 0)&1)|((B >> 0)&1);
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_24;
   dout_31=dout_28^dout_24;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (dout_23&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.82 %
// MAE = 2.1 
// WCE% = 2.73 %
// WCE = 7.0 
// WCRE% = 350.00 %
// EP% = 84.38 %
// MRE% = 8.19 %
// MSE = 7.2 
// PDK45_PWR = 0.021 mW
// PDK45_AREA = 52.6 um2
// PDK45_DELAY = 0.39 ns


int8_t add8se_7J7(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_19, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_32, dout_36, dout_38, dout_39, dout_40, dout_44, dout_46, dout_48, dout_50, dout_52, dout_55, dout_56, dout_57, dout_58, dout_59, dout_62, dout_63, dout_64, dout_65, dout_66;
   uint64_t O;

   dout_16=((B >> 2)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_19=(((B >> 1)&1)&dout_16)^0xFFFFFFFFFFFFFFFFU;
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_36=dout_25&dout_22;
   dout_38=dout_24|dout_36;
   dout_39=dout_29&dout_26;
   dout_40=dout_29&dout_27;
   dout_44=dout_40&dout_38;
   dout_46=dout_28|dout_44;
   dout_48=dout_46|dout_39;
   dout_50=dout_38|dout_24;
   dout_52=((B >> 2)&1)|((A >> 2)&1);
   dout_55=dout_27&dout_50;
   dout_56=dout_26|dout_55;
   dout_57=dout_32&dout_48;
   dout_58=dout_30|dout_57;
   dout_59=dout_19^dout_16;
   dout_62=dout_25^dout_22;
   dout_63=dout_27^dout_50;
   dout_64=dout_29^dout_56;
   dout_65=dout_32^dout_48;
   dout_66=dout_32^dout_58;

   O = 0;
   O |= (dout_52&1) << 0;
   O |= (dout_59&1) << 1;
   O |= (dout_52&1) << 2;
   O |= (dout_23&1) << 3;
   O |= (dout_62&1) << 4;
   O |= (dout_63&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 25.00 %
// MAE = 64 
// WCE% = 50.00 %
// WCE = 128 
// WCRE% = 9700.00 %
// EP% = 99.95 %
// MRE% = 249.36 %
// MSE = 4798 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 8.28 %
// MAE = 21 
// WCE% = 26.17 %
// WCE = 67 
// WCRE% = 6300.00 %
// EP% = 98.49 %
// MRE% = 56.09 %
// MSE = 672 
// PDK45_PWR = 0.0042 mW
// PDK45_AREA = 11.7 um2
// PDK45_DELAY = 0.13 ns


int8_t add8se_8UN(const int8_t B,const int8_t A)
{
   uint64_t dout_46, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_46=((A >> 6)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&((A >> 6)&1);
   dout_51=dout_48^((A >> 6)&1);
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (dout_54&1) << 0;
   O |= (dout_51&1) << 1;
   O |= (((B >> 6)&1)&1) << 2;
   O |= (((A >> 4)&1)&1) << 3;
   O |= (((B >> 6)&1)&1) << 4;
   O |= (((B >> 6)&1)&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.035 mW
// PDK45_AREA = 74.6 um2
// PDK45_DELAY = 0.63 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.078 %
// MAE = 0.2 
// WCE% = 0.39 %
// WCE = 1.0 
// WCRE% = 50.00 %
// EP% = 25.00 %
// MRE% = 0.87 %
// MSE = 0.2 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.62 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.27 %
// MAE = 0.7 
// WCE% = 0.78 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 62.40 %
// MRE% = 2.88 %
// MSE = 1.0 
// PDK45_PWR = 0.030 mW
// PDK45_AREA = 65.7 um2
// PDK45_DELAY = 0.55 ns


int8_t add8se_72D(const int8_t B,const int8_t A)
{
   uint64_t dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_32, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_58, dout_59, dout_60, dout_62, dout_63, dout_65, dout_66, dout_67, dout_68, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84;
   uint64_t O;

   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_38=dout_23&dout_20;
   dout_39=dout_23&dout_21;
   dout_40=dout_22|dout_38;
   dout_41=dout_25&dout_22;
   dout_42=dout_25&dout_23;
   dout_43=dout_24|dout_41;
   dout_47=dout_29&dout_26;
   dout_48=dout_29&dout_27;
   dout_49=dout_28|dout_47;
   dout_50=dout_32&dout_49;
   dout_51=dout_32&dout_48;
   dout_52=dout_30|dout_50;
   dout_53=dout_21&dout_18;
   dout_54=dout_20|dout_53;
   dout_55=dout_39&dout_18;
   dout_56=dout_40|dout_55;
   dout_58=dout_42&dout_54;
   dout_59=dout_43|dout_58;
   dout_60=dout_27&dout_43;
   dout_62=dout_26|dout_60;
   dout_63=dout_48&dout_43;
   dout_65=dout_49|dout_63;
   dout_66=dout_51&dout_43;
   dout_67=dout_51&dout_42;
   dout_68=dout_52|dout_66;
   dout_71=dout_27&dout_58;
   dout_72=dout_62|dout_71;
   dout_73=dout_48&dout_58;
   dout_74=dout_65|dout_73;
   dout_75=dout_67&dout_56;
   dout_76=dout_68|dout_75;
   dout_78=dout_21^dout_18;
   dout_79=dout_23^dout_54;
   dout_80=dout_25^dout_56;
   dout_81=dout_27^dout_59;
   dout_82=dout_29^dout_72;
   dout_83=dout_32^dout_74;
   dout_84=dout_32^dout_76;

   O = 0;
   O |= (dout_84&1) << 0;
   O |= (dout_19&1) << 1;
   O |= (dout_78&1) << 2;
   O |= (dout_79&1) << 3;
   O |= (dout_80&1) << 4;
   O |= (dout_81&1) << 5;
   O |= (dout_82&1) << 6;
   O |= (dout_83&1) << 7;
   O |= (dout_84&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 3.12 %
// MAE = 8.0 
// WCE% = 6.25 %
// WCE = 16 
// WCRE% = 1500.00 %
// EP% = 99.22 %
// MRE% = 32.28 %
// MSE = 77 
// PDK45_PWR = 0.014 mW
// PDK45_AREA = 31.0 um2
// PDK45_DELAY = 0.27 ns


int8_t add8se_92J(const int8_t B,const int8_t A)
{
   uint64_t dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&((A >> 4)&1);
   dout_41=dout_38^((A >> 4)&1);
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (((A >> 3)&1)&1) << 0;
   O |= (((A >> 3)&1)&1) << 1;
   O |= (((A >> 2)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (((B >> 4)&1)&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 6.25 %
// MAE = 16 
// WCE% = 12.50 %
// WCE = 32 
// WCRE% = 3100.00 %
// EP% = 99.80 %
// MRE% = 64.84 %
// MSE = 313 
// PDK45_PWR = 0.0093 mW
// PDK45_AREA = 22.1 um2
// PDK45_DELAY = 0.19 ns


int8_t add8se_90Z(const int8_t B,const int8_t A)
{
   uint64_t dout_28, dout_29, dout_30, dout_31, dout_32, dout_40, dout_46, dout_57, dout_58, dout_64, dout_65, dout_66;
   uint64_t O;

   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_40=dout_29&((A >> 5)&1);
   dout_46=dout_28|dout_40;
   dout_57=dout_31&dout_46;
   dout_58=dout_30|dout_57;
   dout_64=dout_29^((A >> 5)&1);
   dout_65=dout_31^dout_46;
   dout_66=dout_32^dout_58;

   O = 0;
   O |= (((B >> 4)&1)&1) << 0;
   O |= (((B >> 4)&1)&1) << 1;
   O |= (((A >> 3)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (((A >> 4)&1)&1) << 4;
   O |= (((B >> 5)&1)&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 1.56 %
// MAE = 4.0 
// WCE% = 3.52 %
// WCE = 9.0 
// WCRE% = 700.00 %
// EP% = 96.78 %
// MRE% = 15.45 %
// MSE = 20 
// PDK45_PWR = 0.019 mW
// PDK45_AREA = 39.9 um2
// PDK45_DELAY = 0.35 ns


int8_t add8se_91D(const int8_t B,const int8_t A)
{
   uint64_t dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&((A >> 3)&1);
   dout_36=dout_33^((A >> 3)&1);
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (dout_54&1) << 0;
   O |= (((B >> 2)&1)&1) << 1;
   O |= (((A >> 2)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.47 %
// MAE = 1.2 
// WCE% = 1.17 %
// WCE = 3.0 
// WCRE% = 200.00 %
// EP% = 62.50 %
// MRE% = 4.89 %
// MSE = 2.8 
// PDK45_PWR = 0.026 mW
// PDK45_AREA = 59.1 um2
// PDK45_DELAY = 0.47 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.82 %
// MAE = 2.1 
// WCE% = 2.73 %
// WCE = 7.0 
// WCRE% = 350.00 %
// EP% = 84.38 %
// MRE% = 8.19 %
// MSE = 7.2 
// PDK45_PWR = 0.021 mW
// PDK45_AREA = 52.6 um2
// PDK45_DELAY = 0.39 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 25.00 %
// MAE = 64 
// WCE% = 50.00 %
// WCE = 128 
// WCRE% = 9700.00 %
// EP% = 99.95 %
// MRE% = 249.36 %
// MSE = 4798 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.20 %
// MAE = 0.5 
// WCE% = 0.78 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 25.00 %
// MRE% = 1.74 %
// MSE = 1.0 
// PDK45_PWR = 0.032 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.55 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 1.09 %
// MAE = 2.8 
// WCE% = 3.12 %
// WCE = 8.0 
// WCRE% = 700.00 %
// EP% = 89.06 %
// MRE% = 10.79 %
// MSE = 12 
// PDK45_PWR = 0.019 mW
// PDK45_AREA = 41.3 um2
// PDK45_DELAY = 0.35 ns


int8_t add8se_8VV(const int8_t B,const int8_t A)
{
   uint64_t dout_31, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_31=((B >> 3)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&((B >> 3)&1);
   dout_36=dout_33^((B >> 3)&1);
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (0&1) << 0;
   O |= (((A >> 3)&1)&1) << 1;
   O |= (((A >> 3)&1)&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.035 mW
// PDK45_AREA = 74.6 um2
// PDK45_DELAY = 0.63 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.078 %
// MAE = 0.2 
// WCE% = 0.78 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 12.50 %
// MRE% = 1.00 %
// MSE = 0.5 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 78.4 um2
// PDK45_DELAY = 0.60 ns


int8_t add8se_7C9(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66;
   uint64_t O;

   dout_16=((A >> 0)&1)&((B >> 0)&1);
   dout_17=((A >> 0)&1)^((B >> 0)&1);
   dout_18=((A >> 1)&1)&((B >> 1)&1);
   dout_19=((A >> 1)&1)^((B >> 1)&1);
   dout_20=((A >> 2)&1)&((B >> 2)&1);
   dout_21=((A >> 2)&1)^((B >> 2)&1);
   dout_22=((A >> 3)&1)&((B >> 3)&1);
   dout_23=((A >> 3)&1)^((B >> 3)&1);
   dout_24=((A >> 4)&1)&((B >> 4)&1);
   dout_25=((A >> 4)&1)^((B >> 4)&1);
   dout_26=((A >> 5)&1)&((B >> 5)&1);
   dout_27=((A >> 5)&1)^((B >> 5)&1);
   dout_28=((A >> 6)&1)&((B >> 6)&1);
   dout_29=((A >> 6)&1)^((B >> 6)&1);
   dout_30=((A >> 7)&1)&((B >> 7)&1);
   dout_31=((A >> 7)&1)^((B >> 7)&1);
   dout_32=((A >> 7)&1)^((B >> 7)&1);
   dout_33=dout_21&dout_18;
   dout_34=dout_21&dout_19;
   dout_35=dout_20|dout_33;
   dout_36=dout_25&dout_22;
   dout_37=dout_25&dout_23;
   dout_38=dout_24|dout_36;
   dout_39=dout_29&dout_26;
   dout_40=dout_29&dout_27;
   dout_41=dout_28|dout_39;
   dout_42=dout_34&dout_16;
   dout_43=dout_35|dout_42;
   dout_44=dout_40&dout_38;
   dout_45=dout_40&dout_37;
   dout_46=dout_41|dout_44;
   dout_47=dout_45&dout_43;
   dout_48=dout_46|dout_47;
   dout_49=dout_37&dout_43;
   dout_50=dout_38|dout_49;
   dout_51=dout_19&dout_16;
   dout_52=dout_18|dout_51;
   dout_53=dout_23&dout_43;
   dout_54=dout_22|dout_53;
   dout_55=dout_27&dout_50;
   dout_56=dout_26|dout_55;
   dout_57=dout_31&dout_48;
   dout_58=dout_30|dout_57;
   dout_59=dout_19^dout_51;
   dout_60=dout_21^dout_52;
   dout_61=dout_23^dout_43;
   dout_62=dout_25^dout_54;
   dout_63=dout_27^dout_50;
   dout_64=dout_29^dout_56;
   dout_65=dout_31^dout_48;
   dout_66=dout_32^dout_58;

   O = 0;
   O |= (dout_17&1) << 0;
   O |= (dout_59&1) << 1;
   O |= (dout_60&1) << 2;
   O |= (dout_61&1) << 3;
   O |= (dout_62&1) << 4;
   O |= (dout_63&1) << 5;
   O |= (dout_64&1) << 6;
   O |= (dout_65&1) << 7;
   O |= (dout_66&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.39 %
// MAE = 1.0 
// WCE% = 0.78 %
// WCE = 2.0 
// WCRE% = 200.00 %
// EP% = 50.00 %
// MRE% = 4.15 %
// MSE = 2.0 
// PDK45_PWR = 0.030 mW
// PDK45_AREA = 65.2 um2
// PDK45_DELAY = 0.51 ns


int8_t add8se_78P(const int8_t B,const int8_t A)
{
   uint64_t dout_16, dout_17, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_54;
   uint64_t O;

   dout_16=((A >> 0)&1)^((B >> 0)&1);
   dout_17=((A >> 0)&1)&((B >> 1)&1);
   dout_21=((A >> 0)&1)^dout_17;
   dout_22=((B >> 2)&1)|((A >> 2)&1);
   dout_23=((A >> 2)&1)^((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_25=dout_22&((B >> 1)&1);
   dout_26=dout_23^((B >> 1)&1);
   dout_27=dout_24|dout_25;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_27;
   dout_31=dout_28^dout_27;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_54=dout_48^dout_52;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_21&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.55 %
// MAE = 1.4 
// WCE% = 1.56 %
// WCE = 4.0 
// WCRE% = 300.00 %
// EP% = 78.12 %
// MRE% = 5.69 %
// MSE = 3.2 
// PDK45_PWR = 0.024 mW
// PDK45_AREA = 54.9 um2
// PDK45_DELAY = 0.47 ns


int8_t add8se_90J(const int8_t B,const int8_t A)
{
   uint64_t dout_22, dout_23, dout_24, dout_26, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_22=((B >> 2)&1)&((A >> 2)&1);
   dout_23=((A >> 2)&1)|((B >> 2)&1);
   dout_24=((A >> 2)&1)&((B >> 2)&1);
   dout_26=(dout_23&dout_22)^0xFFFFFFFFFFFFFFFFU;
   dout_28=((A >> 3)&1)^((B >> 3)&1);
   dout_29=((A >> 3)&1)&((B >> 3)&1);
   dout_30=dout_28&dout_24;
   dout_31=dout_28^dout_24;
   dout_32=dout_29|dout_30;
   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&dout_32;
   dout_36=dout_33^dout_32;
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (dout_23&1) << 0;
   O |= (((B >> 1)&1)&1) << 1;
   O |= (dout_26&1) << 2;
   O |= (dout_31&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.47 %
// MAE = 1.2 
// WCE% = 1.17 %
// WCE = 3.0 
// WCRE% = 200.00 %
// EP% = 62.50 %
// MRE% = 4.89 %
// MSE = 2.8 
// PDK45_PWR = 0.026 mW
// PDK45_AREA = 59.1 um2
// PDK45_DELAY = 0.47 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 25.00 %
// MAE = 64 
// WCE% = 50.00 %
// WCE = 128 
// WCRE% = 9700.00 %
// EP% = 99.95 %
// MRE% = 249.36 %
// MSE = 4798 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 8.28 %
// MAE = 21 
// WCE% = 26.17 %
// WCE = 67 
// WCRE% = 6300.00 %
// EP% = 98.49 %
// MRE% = 56.09 %
// MSE = 672 
// PDK45_PWR = 0.0042 mW
// PDK45_AREA = 11.7 um2
// PDK45_DELAY = 0.13 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.78 %
// MAE = 2.0 
// WCE% = 1.56 %
// WCE = 4.0 
// WCRE% = 400.00 %
// EP% = 87.50 %
// MRE% = 8.05 %
// MSE = 5.5 
// PDK45_PWR = 0.023 mW
// PDK45_AREA = 48.8 um2
// PDK45_DELAY = 0.43 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.035 mW
// PDK45_AREA = 74.6 um2
// PDK45_DELAY = 0.63 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.20 %
// MAE = 0.5 
// WCE% = 0.39 %
// WCE = 1.0 
// WCRE% = 100.00 %
// EP% = 50.00 %
// MRE% = 2.28 %
// MSE = 0.5 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 66.6 um2
// PDK45_DELAY = 0.60 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 3.12 %
// MAE = 8.0 
// WCE% = 6.25 %
// WCE = 16 
// WCRE% = 1500.00 %
// EP% = 99.22 %
// MRE% = 32.28 %
// MSE = 77 
// PDK45_PWR = 0.014 mW
// PDK45_AREA = 31.0 um2
// PDK45_DELAY = 0.27 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 6.25 %
// MAE = 16 
// WCE% = 12.50 %
// WCE = 32 
// WCRE% = 3100.00 %
// EP% = 99.80 %
// MRE% = 64.84 %
// MSE = 313 
// PDK45_PWR = 0.0093 mW
// PDK45_AREA = 22.1 um2
// PDK45_DELAY = 0.19 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.39 %
// MAE = 1.0 
// WCE% = 0.78 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 75.00 %
// MRE% = 4.02 %
// MSE = 1.5 
// PDK45_PWR = 0.028 mW
// PDK45_AREA = 57.7 um2
// PDK45_DELAY = 0.51 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 1.56 %
// MAE = 4.0 
// WCE% = 3.12 %
// WCE = 8.0 
// WCRE% = 700.00 %
// EP% = 93.75 %
// MRE% = 16.11 %
// MSE = 22 
// PDK45_PWR = 0.019 mW
// PDK45_AREA = 39.9 um2
// PDK45_DELAY = 0.35 ns


uint64_t add8se_8ZU(const uint64_t B,const uint64_t A)
{
   uint64_t dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54;
   uint64_t O;

   dout_33=((A >> 4)&1)^((B >> 4)&1);
   dout_34=((A >> 4)&1)&((B >> 4)&1);
   dout_35=dout_33&((A >> 3)&1);
   dout_36=dout_33^((A >> 3)&1);
   dout_37=dout_34|dout_35;
   dout_38=((A >> 5)&1)^((B >> 5)&1);
   dout_39=((A >> 5)&1)&((B >> 5)&1);
   dout_40=dout_38&dout_37;
   dout_41=dout_38^dout_37;
   dout_42=dout_39|dout_40;
   dout_43=((A >> 6)&1)^((B >> 6)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=dout_43&dout_42;
   dout_46=dout_43^dout_42;
   dout_47=dout_44|dout_45;
   dout_48=((A >> 7)&1)^((B >> 7)&1);
   dout_49=((A >> 7)&1)&((B >> 7)&1);
   dout_50=dout_48&dout_47;
   dout_51=dout_48^dout_47;
   dout_52=dout_49|dout_50;
   dout_53=((A >> 7)&1)^((B >> 7)&1);
   dout_54=dout_53^dout_52;

   O = 0;
   O |= (0&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (((A >> 2)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (dout_36&1) << 4;
   O |= (dout_41&1) << 5;
   O |= (dout_46&1) << 6;
   O |= (dout_51&1) << 7;
   O |= (dout_54&1) << 8;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.023 %
// MAE = 15 
// WCE% = 0.058 %
// WCE = 38 
// WCRE% = 3100.00 %
// EP% = 97.95 %
// MRE% = 0.48 %
// MSE = 312 
// PDK45_PWR = 0.048 mW
// PDK45_AREA = 97.1 um2
// PDK45_DELAY = 0.87 ns


uint64_t add16se_2JB(const uint64_t B,const uint64_t A)
{
   uint64_t dout_55, dout_57, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110;
   uint64_t O;

   dout_55=((A >> 5)&1)&((B >> 5)&1);
   dout_57=(((A >> 5)&1)&((B >> 5)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_59=((A >> 6)&1)^((B >> 6)&1);
   dout_60=((A >> 6)&1)&((B >> 6)&1);
   dout_61=dout_59&dout_55;
   dout_62=dout_59^dout_55;
   dout_63=dout_60|dout_61;
   dout_64=((A >> 7)&1)^((B >> 7)&1);
   dout_65=((A >> 7)&1)&((B >> 7)&1);
   dout_66=dout_64&dout_63;
   dout_67=dout_64^dout_63;
   dout_68=dout_65|dout_66;
   dout_69=((A >> 8)&1)^((B >> 8)&1);
   dout_70=((A >> 8)&1)&((B >> 8)&1);
   dout_71=dout_69&dout_68;
   dout_72=dout_69^dout_68;
   dout_73=dout_70|dout_71;
   dout_74=((A >> 9)&1)^((B >> 9)&1);
   dout_75=((A >> 9)&1)&((B >> 9)&1);
   dout_76=dout_74&dout_73;
   dout_77=dout_74^dout_73;
   dout_78=dout_75|dout_76;
   dout_79=((A >> 10)&1)^((B >> 10)&1);
   dout_80=((A >> 10)&1)&((B >> 10)&1);
   dout_81=dout_79&dout_78;
   dout_82=dout_79^dout_78;
   dout_83=dout_80|dout_81;
   dout_84=((A >> 11)&1)^((B >> 11)&1);
   dout_85=((A >> 11)&1)&((B >> 11)&1);
   dout_86=dout_84&dout_83;
   dout_87=dout_84^dout_83;
   dout_88=dout_85|dout_86;
   dout_89=((A >> 12)&1)^((B >> 12)&1);
   dout_90=((A >> 12)&1)&((B >> 12)&1);
   dout_91=dout_89&dout_88;
   dout_92=dout_89^dout_88;
   dout_93=dout_90|dout_91;
   dout_94=((A >> 13)&1)^((B >> 13)&1);
   dout_95=((A >> 13)&1)&((B >> 13)&1);
   dout_96=dout_94&dout_93;
   dout_97=dout_94^dout_93;
   dout_98=dout_95|dout_96;
   dout_99=((A >> 14)&1)^((B >> 14)&1);
   dout_100=((A >> 14)&1)&((B >> 14)&1);
   dout_101=dout_99&dout_98;
   dout_102=dout_99^dout_98;
   dout_103=dout_100|dout_101;
   dout_104=((A >> 15)&1)^((B >> 15)&1);
   dout_105=((A >> 15)&1)&((B >> 15)&1);
   dout_106=dout_104&dout_103;
   dout_107=dout_104^dout_103;
   dout_108=dout_105|dout_106;
   dout_109=((A >> 15)&1)^((B >> 15)&1);
   dout_110=dout_109^dout_108;

   O = 0;
   O |= (dout_77&1) << 0;
   O |= (dout_67&1) << 1;
   O |= (((A >> 5)&1)&1) << 2;
   O |= (((B >> 3)&1)&1) << 3;
   O |= (((A >> 4)&1)&1) << 4;
   O |= (dout_57&1) << 5;
   O |= (dout_62&1) << 6;
   O |= (dout_67&1) << 7;
   O |= (dout_72&1) << 8;
   O |= (dout_77&1) << 9;
   O |= (dout_82&1) << 10;
   O |= (dout_87&1) << 11;
   O |= (dout_92&1) << 12;
   O |= (dout_97&1) << 13;
   O |= (dout_102&1) << 14;
   O |= (dout_107&1) << 15;
   O |= (dout_110&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.00076 %
// MAE = 0.5 
// WCE% = 0.0015 %
// WCE = 1.0 
// WCRE% = 100.00 %
// EP% = 50.00 %
// MRE% = 0.017 %
// MSE = 0.5 
// PDK45_PWR = 0.071 mW
// PDK45_AREA = 138.0 um2
// PDK45_DELAY = 1.25 ns


uint64_t add16se_26Q(const uint64_t B,const uint64_t A)
{
   uint64_t dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110;
   uint64_t O;

   dout_34=((A >> 1)&1)^((B >> 1)&1);
   dout_35=((A >> 1)&1)&((B >> 1)&1);
   dout_36=dout_34&((A >> 0)&1);
   dout_37=dout_34^((A >> 0)&1);
   dout_38=dout_35|dout_36;
   dout_39=((A >> 2)&1)^((B >> 2)&1);
   dout_40=((A >> 2)&1)&((B >> 2)&1);
   dout_41=dout_39&dout_38;
   dout_42=dout_39^dout_38;
   dout_43=dout_40|dout_41;
   dout_44=((A >> 3)&1)^((B >> 3)&1);
   dout_45=((A >> 3)&1)&((B >> 3)&1);
   dout_46=dout_44&dout_43;
   dout_47=dout_44^dout_43;
   dout_48=dout_45|dout_46;
   dout_49=((A >> 4)&1)^((B >> 4)&1);
   dout_50=((A >> 4)&1)&((B >> 4)&1);
   dout_51=dout_49&dout_48;
   dout_52=dout_49^dout_48;
   dout_53=dout_50|dout_51;
   dout_54=((A >> 5)&1)^((B >> 5)&1);
   dout_55=((A >> 5)&1)&((B >> 5)&1);
   dout_56=dout_54&dout_53;
   dout_57=dout_54^dout_53;
   dout_58=dout_55|dout_56;
   dout_59=((A >> 6)&1)^((B >> 6)&1);
   dout_60=((A >> 6)&1)&((B >> 6)&1);
   dout_61=dout_59&dout_58;
   dout_62=dout_59^dout_58;
   dout_63=dout_60|dout_61;
   dout_64=((A >> 7)&1)^((B >> 7)&1);
   dout_65=((A >> 7)&1)&((B >> 7)&1);
   dout_66=dout_64&dout_63;
   dout_67=dout_64^dout_63;
   dout_68=dout_65|dout_66;
   dout_69=((A >> 8)&1)^((B >> 8)&1);
   dout_70=((A >> 8)&1)&((B >> 8)&1);
   dout_71=dout_69&dout_68;
   dout_72=dout_69^dout_68;
   dout_73=dout_70|dout_71;
   dout_74=((A >> 9)&1)^((B >> 9)&1);
   dout_75=((A >> 9)&1)&((B >> 9)&1);
   dout_76=dout_74&dout_73;
   dout_77=dout_74^dout_73;
   dout_78=dout_75|dout_76;
   dout_79=((A >> 10)&1)^((B >> 10)&1);
   dout_80=((A >> 10)&1)&((B >> 10)&1);
   dout_81=dout_79&dout_78;
   dout_82=dout_79^dout_78;
   dout_83=dout_80|dout_81;
   dout_84=((A >> 11)&1)^((B >> 11)&1);
   dout_85=((A >> 11)&1)&((B >> 11)&1);
   dout_86=dout_84&dout_83;
   dout_87=dout_84^dout_83;
   dout_88=dout_85|dout_86;
   dout_89=((A >> 12)&1)^((B >> 12)&1);
   dout_90=((A >> 12)&1)&((B >> 12)&1);
   dout_91=dout_89&dout_88;
   dout_92=dout_89^dout_88;
   dout_93=dout_90|dout_91;
   dout_94=((A >> 13)&1)^((B >> 13)&1);
   dout_95=((A >> 13)&1)&((B >> 13)&1);
   dout_96=dout_94&dout_93;
   dout_97=dout_94^dout_93;
   dout_98=dout_95|dout_96;
   dout_99=((A >> 14)&1)^((B >> 14)&1);
   dout_100=((A >> 14)&1)&((B >> 14)&1);
   dout_101=dout_99&dout_98;
   dout_102=dout_99^dout_98;
   dout_103=dout_100|dout_101;
   dout_104=((A >> 15)&1)^((B >> 15)&1);
   dout_105=((A >> 15)&1)&((B >> 15)&1);
   dout_106=dout_104&dout_103;
   dout_107=dout_104^dout_103;
   dout_108=dout_105|dout_106;
   dout_109=((A >> 15)&1)^((B >> 15)&1);
   dout_110=dout_109^dout_108;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_37&1) << 1;
   O |= (dout_42&1) << 2;
   O |= (dout_47&1) << 3;
   O |= (dout_52&1) << 4;
   O |= (dout_57&1) << 5;
   O |= (dout_62&1) << 6;
   O |= (dout_67&1) << 7;
   O |= (dout_72&1) << 8;
   O |= (dout_77&1) << 9;
   O |= (dout_82&1) << 10;
   O |= (dout_87&1) << 11;
   O |= (dout_92&1) << 12;
   O |= (dout_97&1) << 13;
   O |= (dout_102&1) << 14;
   O |= (dout_107&1) << 15;
   O |= (dout_110&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.0024 %
// MAE = 1.6 
// WCE% = 0.0076 %
// WCE = 5.0 
// WCRE% = 400.00 %
// EP% = 81.25 %
// MRE% = 0.053 %
// MSE = 4.0 
// PDK45_PWR = 0.062 mW
// PDK45_AREA = 121.5 um2
// PDK45_DELAY = 1.08 ns


uint64_t add16se_259(const uint64_t B,const uint64_t A)
{
   uint64_t dout_42, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110;
   uint64_t O;

   dout_42=((B >> 2)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_44=((A >> 3)&1)^((B >> 3)&1);
   dout_45=((A >> 3)&1)&((B >> 3)&1);
   dout_46=dout_44&((B >> 2)&1);
   dout_47=dout_44^((B >> 2)&1);
   dout_48=dout_45|dout_46;
   dout_49=((A >> 4)&1)^((B >> 4)&1);
   dout_50=((A >> 4)&1)&((B >> 4)&1);
   dout_51=dout_49&dout_48;
   dout_52=dout_49^dout_48;
   dout_53=dout_50|dout_51;
   dout_54=((A >> 5)&1)^((B >> 5)&1);
   dout_55=((A >> 5)&1)&((B >> 5)&1);
   dout_56=dout_54&dout_53;
   dout_57=dout_54^dout_53;
   dout_58=dout_55|dout_56;
   dout_59=((A >> 6)&1)^((B >> 6)&1);
   dout_60=((A >> 6)&1)&((B >> 6)&1);
   dout_61=dout_59&dout_58;
   dout_62=dout_59^dout_58;
   dout_63=dout_60|dout_61;
   dout_64=((A >> 7)&1)^((B >> 7)&1);
   dout_65=((A >> 7)&1)&((B >> 7)&1);
   dout_66=dout_64&dout_63;
   dout_67=dout_64^dout_63;
   dout_68=dout_65|dout_66;
   dout_69=((A >> 8)&1)^((B >> 8)&1);
   dout_70=((A >> 8)&1)&((B >> 8)&1);
   dout_71=dout_69&dout_68;
   dout_72=dout_69^dout_68;
   dout_73=dout_70|dout_71;
   dout_74=((A >> 9)&1)^((B >> 9)&1);
   dout_75=((A >> 9)&1)&((B >> 9)&1);
   dout_76=dout_74&dout_73;
   dout_77=dout_74^dout_73;
   dout_78=dout_75|dout_76;
   dout_79=((A >> 10)&1)^((B >> 10)&1);
   dout_80=((A >> 10)&1)&((B >> 10)&1);
   dout_81=dout_79&dout_78;
   dout_82=dout_79^dout_78;
   dout_83=dout_80|dout_81;
   dout_84=((A >> 11)&1)^((B >> 11)&1);
   dout_85=((A >> 11)&1)&((B >> 11)&1);
   dout_86=dout_84&dout_83;
   dout_87=dout_84^dout_83;
   dout_88=dout_85|dout_86;
   dout_89=((A >> 12)&1)^((B >> 12)&1);
   dout_90=((A >> 12)&1)&((B >> 12)&1);
   dout_91=dout_89&dout_88;
   dout_92=dout_89^dout_88;
   dout_93=dout_90|dout_91;
   dout_94=((A >> 13)&1)^((B >> 13)&1);
   dout_95=((A >> 13)&1)&((B >> 13)&1);
   dout_96=dout_94&dout_93;
   dout_97=dout_94^dout_93;
   dout_98=dout_95|dout_96;
   dout_99=((A >> 14)&1)^((B >> 14)&1);
   dout_100=((A >> 14)&1)&((B >> 14)&1);
   dout_101=dout_99&dout_98;
   dout_102=dout_99^dout_98;
   dout_103=dout_100|dout_101;
   dout_104=((A >> 15)&1)^((B >> 15)&1);
   dout_105=((A >> 15)&1)&((B >> 15)&1);
   dout_106=dout_104&dout_103;
   dout_107=dout_104^dout_103;
   dout_108=dout_105|dout_106;
   dout_109=((A >> 15)&1)^((B >> 15)&1);
   dout_110=dout_109^dout_108;

   O = 0;
   O |= (dout_78&1) << 0;
   O |= (((A >> 2)&1)&1) << 1;
   O |= (dout_42&1) << 2;
   O |= (dout_47&1) << 3;
   O |= (dout_52&1) << 4;
   O |= (dout_57&1) << 5;
   O |= (dout_62&1) << 6;
   O |= (dout_67&1) << 7;
   O |= (dout_72&1) << 8;
   O |= (dout_77&1) << 9;
   O |= (dout_82&1) << 10;
   O |= (dout_87&1) << 11;
   O |= (dout_92&1) << 12;
   O |= (dout_97&1) << 13;
   O |= (dout_102&1) << 14;
   O |= (dout_107&1) << 15;
   O |= (dout_110&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.046 %
// MAE = 30 
// WCE% = 0.13 %
// WCE = 86 
// WCRE% = 6300.00 %
// EP% = 99.02 %
// MRE% = 0.96 %
// MSE = 1281 
// PDK45_PWR = 0.043 mW
// PDK45_AREA = 85.9 um2
// PDK45_DELAY = 0.76 ns


uint64_t add16se_2AS(const uint64_t B,const uint64_t A)
{
   uint64_t dout_44, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_108, dout_109, dout_110, dout_111, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143;
   uint64_t O;

   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_46=((A >> 7)&1)&((B >> 7)&1);
   dout_47=((A >> 7)&1)^((B >> 7)&1);
   dout_48=((A >> 8)&1)&((B >> 8)&1);
   dout_49=((A >> 8)&1)^((B >> 8)&1);
   dout_50=((A >> 9)&1)&((B >> 9)&1);
   dout_51=((A >> 9)&1)^((B >> 9)&1);
   dout_52=((A >> 10)&1)&((B >> 10)&1);
   dout_53=((A >> 10)&1)^((B >> 10)&1);
   dout_54=((A >> 11)&1)&((B >> 11)&1);
   dout_55=((A >> 11)&1)^((B >> 11)&1);
   dout_56=((A >> 12)&1)&((B >> 12)&1);
   dout_57=((A >> 12)&1)^((B >> 12)&1);
   dout_58=((A >> 13)&1)&((B >> 13)&1);
   dout_59=((A >> 13)&1)^((B >> 13)&1);
   dout_60=((A >> 14)&1)&((B >> 14)&1);
   dout_61=((A >> 14)&1)^((B >> 14)&1);
   dout_62=((A >> 15)&1)&((B >> 15)&1);
   dout_63=((A >> 15)&1)^((B >> 15)&1);
   dout_64=((A >> 15)&1)^((B >> 15)&1);
   dout_74=dout_49&dout_46;
   dout_75=dout_49&dout_47;
   dout_76=dout_48|dout_74;
   dout_77=dout_53&dout_50;
   dout_78=dout_53&dout_51;
   dout_79=dout_52|dout_77;
   dout_80=dout_57&dout_54;
   dout_81=dout_57&dout_55;
   dout_82=dout_56|dout_80;
   dout_83=dout_61&dout_58;
   dout_84=dout_61&dout_59;
   dout_85=dout_60|dout_83;
   dout_90=dout_44|((A >> 6)&1);
   dout_91=dout_78&dout_76;
   dout_92=dout_78&dout_75;
   dout_93=dout_79|dout_91;
   dout_94=dout_84&dout_82;
   dout_95=dout_84&dout_81;
   dout_96=dout_85|dout_94;
   dout_99=dout_95&dout_93;
   dout_100=dout_95&dout_92;
   dout_101=dout_96|dout_99;
   dout_102=dout_100&((A >> 6)&1);
   dout_103=dout_101|dout_102;
   dout_104=dout_92&dout_90;
   dout_105=dout_93|dout_104;
   dout_108=dout_75&dout_90;
   dout_109=dout_76|dout_108;
   dout_110=dout_81&dout_105;
   dout_111=dout_82|dout_110;
   dout_117=((A >> 12)&1)|((A >> 6)&1);
   dout_118=dout_47&dout_90;
   dout_119=dout_46|dout_118;
   dout_120=dout_51&dout_109;
   dout_121=dout_50|dout_120;
   dout_122=dout_55&dout_105;
   dout_123=dout_54|dout_122;
   dout_124=dout_59&dout_111;
   dout_125=dout_58|dout_124;
   dout_126=dout_63&dout_103;
   dout_127=dout_62|dout_126;
   dout_133=(((A >> 6)&1)&dout_117)^0xFFFFFFFFFFFFFFFFU;
   dout_134=dout_47^dout_90;
   dout_135=dout_49^dout_119;
   dout_136=dout_51^dout_109;
   dout_137=dout_53^dout_121;
   dout_138=dout_55^dout_105;
   dout_139=dout_57^dout_123;
   dout_140=dout_59^dout_111;
   dout_141=dout_61^dout_125;
   dout_142=dout_63^dout_103;
   dout_143=dout_64^dout_127;

   O = 0;
   O |= (dout_135&1) << 0;
   O |= (0&1) << 1;
   O |= (0&1) << 2;
   O |= (((B >> 6)&1)&1) << 3;
   O |= (((B >> 5)&1)&1) << 4;
   O |= (((B >> 4)&1)&1) << 5;
   O |= (dout_133&1) << 6;
   O |= (dout_134&1) << 7;
   O |= (dout_135&1) << 8;
   O |= (dout_136&1) << 9;
   O |= (dout_137&1) << 10;
   O |= (dout_138&1) << 11;
   O |= (dout_139&1) << 12;
   O |= (dout_140&1) << 13;
   O |= (dout_141&1) << 14;
   O |= (dout_142&1) << 15;
   O |= (dout_143&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.012 %
// MAE = 8.0 
// WCE% = 0.027 %
// WCE = 18 
// WCRE% = 1700.00 %
// EP% = 96.88 %
// MRE% = 0.26 %
// MSE = 87 
// PDK45_PWR = 0.052 mW
// PDK45_AREA = 104.7 um2
// PDK45_DELAY = 0.92 ns


uint64_t add16se_29A(const uint64_t B,const uint64_t A)
{
   uint64_t dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_88, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_108, dout_109, dout_110, dout_111, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143;
   uint64_t O;

   dout_42=((A >> 5)&1)&((B >> 5)&1);
   dout_43=((A >> 5)&1)^((B >> 5)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=((A >> 6)&1)^((B >> 6)&1);
   dout_46=((A >> 7)&1)&((B >> 7)&1);
   dout_47=((A >> 7)&1)^((B >> 7)&1);
   dout_48=((A >> 8)&1)&((B >> 8)&1);
   dout_49=((A >> 8)&1)^((B >> 8)&1);
   dout_50=((A >> 9)&1)&((B >> 9)&1);
   dout_51=((A >> 9)&1)^((B >> 9)&1);
   dout_52=((A >> 10)&1)&((B >> 10)&1);
   dout_53=((A >> 10)&1)^((B >> 10)&1);
   dout_54=((A >> 11)&1)&((B >> 11)&1);
   dout_55=((A >> 11)&1)^((B >> 11)&1);
   dout_56=((A >> 12)&1)&((B >> 12)&1);
   dout_57=((A >> 12)&1)^((B >> 12)&1);
   dout_58=((A >> 13)&1)&((B >> 13)&1);
   dout_59=((A >> 13)&1)^((B >> 13)&1);
   dout_60=((A >> 14)&1)&((B >> 14)&1);
   dout_61=((A >> 14)&1)^((B >> 14)&1);
   dout_62=((A >> 15)&1)&((B >> 15)&1);
   dout_63=((A >> 15)&1)^((B >> 15)&1);
   dout_64=((A >> 15)&1)^((B >> 15)&1);
   dout_71=dout_45&dout_42;
   dout_72=dout_45&dout_43;
   dout_73=dout_44|dout_71;
   dout_74=dout_49&dout_46;
   dout_75=dout_49&dout_47;
   dout_76=dout_48|dout_74;
   dout_77=dout_53&dout_50;
   dout_78=dout_53&dout_51;
   dout_79=dout_52|dout_77;
   dout_80=dout_57&dout_54;
   dout_81=dout_57&dout_55;
   dout_82=dout_56|dout_80;
   dout_83=dout_61&dout_58;
   dout_84=dout_61&dout_59;
   dout_85=dout_60|dout_83;
   dout_88=dout_72&((A >> 4)&1);
   dout_90=dout_73|dout_88;
   dout_91=dout_78&dout_76;
   dout_92=dout_78&dout_75;
   dout_93=dout_79|dout_91;
   dout_94=dout_84&dout_82;
   dout_95=dout_84&dout_81;
   dout_96=dout_85|dout_94;
   dout_99=dout_95&dout_93;
   dout_100=dout_95&dout_92;
   dout_101=dout_96|dout_99;
   dout_102=dout_100&dout_90;
   dout_103=dout_101|dout_102;
   dout_104=dout_92&dout_90;
   dout_105=dout_93|dout_104;
   dout_108=dout_75&dout_90;
   dout_109=dout_76|dout_108;
   dout_110=dout_81&dout_105;
   dout_111=dout_82|dout_110;
   dout_116=dout_43&((A >> 4)&1);
   dout_117=dout_42|dout_116;
   dout_118=dout_47&dout_90;
   dout_119=dout_46|dout_118;
   dout_120=dout_51&dout_109;
   dout_121=dout_50|dout_120;
   dout_122=dout_55&dout_105;
   dout_123=dout_54|dout_122;
   dout_124=dout_59&dout_111;
   dout_125=dout_58|dout_124;
   dout_126=dout_63&dout_103;
   dout_127=dout_62|dout_126;
   dout_132=dout_43^((A >> 4)&1);
   dout_133=dout_45^dout_117;
   dout_134=dout_47^dout_90;
   dout_135=dout_49^dout_119;
   dout_136=dout_51^dout_109;
   dout_137=dout_53^dout_121;
   dout_138=dout_55^dout_105;
   dout_139=dout_57^dout_123;
   dout_140=dout_59^dout_111;
   dout_141=dout_61^dout_125;
   dout_142=dout_63^dout_103;
   dout_143=dout_64^dout_127;

   O = 0;
   O |= (dout_50&1) << 0;
   O |= (((A >> 0)&1)&1) << 1;
   O |= (((A >> 2)&1)&1) << 2;
   O |= (((A >> 3)&1)&1) << 3;
   O |= (((B >> 4)&1)&1) << 4;
   O |= (dout_132&1) << 5;
   O |= (dout_133&1) << 6;
   O |= (dout_134&1) << 7;
   O |= (dout_135&1) << 8;
   O |= (dout_136&1) << 9;
   O |= (dout_137&1) << 10;
   O |= (dout_138&1) << 11;
   O |= (dout_139&1) << 12;
   O |= (dout_140&1) << 13;
   O |= (dout_141&1) << 14;
   O |= (dout_142&1) << 15;
   O |= (dout_143&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.0015 %
// MAE = 1.0 
// WCE% = 0.0031 %
// WCE = 2.0 
// WCRE% = 100.00 %
// EP% = 75.00 %
// MRE% = 0.033 %
// MSE = 1.5 
// PDK45_PWR = 0.066 mW
// PDK45_AREA = 129.1 um2
// PDK45_DELAY = 1.17 ns


uint64_t add16se_20J(const uint64_t B,const uint64_t A)
{
   uint64_t dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143;
   uint64_t O;

   dout_36=((A >> 2)&1)&((B >> 2)&1);
   dout_37=((A >> 2)&1)^((B >> 2)&1);
   dout_38=((A >> 3)&1)&((B >> 3)&1);
   dout_39=((A >> 3)&1)^((B >> 3)&1);
   dout_40=((A >> 4)&1)&((B >> 4)&1);
   dout_41=((A >> 4)&1)^((B >> 4)&1);
   dout_42=((A >> 5)&1)&((B >> 5)&1);
   dout_43=((A >> 5)&1)^((B >> 5)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=((A >> 6)&1)^((B >> 6)&1);
   dout_46=((A >> 7)&1)&((B >> 7)&1);
   dout_47=((A >> 7)&1)^((B >> 7)&1);
   dout_48=((A >> 8)&1)&((B >> 8)&1);
   dout_49=((A >> 8)&1)^((B >> 8)&1);
   dout_50=((A >> 9)&1)&((B >> 9)&1);
   dout_51=((A >> 9)&1)^((B >> 9)&1);
   dout_52=((A >> 10)&1)&((B >> 10)&1);
   dout_53=((A >> 10)&1)^((B >> 10)&1);
   dout_54=((A >> 11)&1)&((B >> 11)&1);
   dout_55=((A >> 11)&1)^((B >> 11)&1);
   dout_56=((A >> 12)&1)&((B >> 12)&1);
   dout_57=((A >> 12)&1)^((B >> 12)&1);
   dout_58=((A >> 13)&1)&((B >> 13)&1);
   dout_59=((A >> 13)&1)^((B >> 13)&1);
   dout_60=((A >> 14)&1)&((B >> 14)&1);
   dout_61=((A >> 14)&1)^((B >> 14)&1);
   dout_62=((A >> 15)&1)&((B >> 15)&1);
   dout_63=((A >> 15)&1)^((B >> 15)&1);
   dout_64=((A >> 15)&1)^((B >> 15)&1);
   dout_65=dout_37&((A >> 1)&1);
   dout_67=dout_36|dout_65;
   dout_68=dout_41&dout_38;
   dout_69=dout_41&dout_39;
   dout_70=dout_40|dout_68;
   dout_71=dout_45&dout_42;
   dout_72=dout_45&dout_43;
   dout_73=dout_44|dout_71;
   dout_74=dout_49&dout_46;
   dout_75=dout_49&dout_47;
   dout_76=dout_48|dout_74;
   dout_77=dout_53&dout_50;
   dout_78=dout_53&dout_51;
   dout_79=dout_52|dout_77;
   dout_80=dout_57&dout_54;
   dout_81=dout_57&dout_55;
   dout_82=dout_56|dout_80;
   dout_83=dout_61&dout_58;
   dout_84=dout_61&dout_59;
   dout_85=dout_60|dout_83;
   dout_88=dout_72&dout_70;
   dout_89=dout_72&dout_69;
   dout_90=dout_73|dout_88;
   dout_91=dout_78&dout_76;
   dout_92=dout_78&dout_75;
   dout_93=dout_79|dout_91;
   dout_94=dout_84&dout_82;
   dout_95=dout_84&dout_81;
   dout_96=dout_85|dout_94;
   dout_97=dout_89&dout_67;
   dout_98=dout_90|dout_97;
   dout_99=dout_95&dout_93;
   dout_100=dout_95&dout_92;
   dout_101=dout_96|dout_99;
   dout_102=dout_100&dout_98;
   dout_103=dout_101|dout_102;
   dout_104=dout_92&dout_98;
   dout_105=dout_93|dout_104;
   dout_106=dout_69&dout_67;
   dout_107=dout_70|dout_106;
   dout_108=dout_75&dout_98;
   dout_109=dout_76|dout_108;
   dout_110=dout_81&dout_105;
   dout_111=dout_82|dout_110;
   dout_114=dout_39&dout_67;
   dout_115=dout_38|dout_114;
   dout_116=dout_43&dout_107;
   dout_117=dout_42|dout_116;
   dout_118=dout_47&dout_98;
   dout_119=dout_46|dout_118;
   dout_120=dout_51&dout_109;
   dout_121=dout_50|dout_120;
   dout_122=dout_55&dout_105;
   dout_123=dout_54|dout_122;
   dout_124=dout_59&dout_111;
   dout_125=dout_58|dout_124;
   dout_126=dout_63&dout_103;
   dout_127=dout_62|dout_126;
   dout_129=dout_37^((A >> 1)&1);
   dout_130=dout_39^dout_67;
   dout_131=dout_41^dout_115;
   dout_132=dout_43^dout_107;
   dout_133=dout_45^dout_117;
   dout_134=dout_47^dout_98;
   dout_135=dout_49^dout_119;
   dout_136=dout_51^dout_109;
   dout_137=dout_53^dout_121;
   dout_138=dout_55^dout_105;
   dout_139=dout_57^dout_123;
   dout_140=dout_59^dout_111;
   dout_141=dout_61^dout_125;
   dout_142=dout_63^dout_103;
   dout_143=dout_64^dout_127;

   O = 0;
   O |= (0&1) << 0;
   O |= (((B >> 1)&1)&1) << 1;
   O |= (dout_129&1) << 2;
   O |= (dout_130&1) << 3;
   O |= (dout_131&1) << 4;
   O |= (dout_132&1) << 5;
   O |= (dout_133&1) << 6;
   O |= (dout_134&1) << 7;
   O |= (dout_135&1) << 8;
   O |= (dout_136&1) << 9;
   O |= (dout_137&1) << 10;
   O |= (dout_138&1) << 11;
   O |= (dout_139&1) << 12;
   O |= (dout_140&1) << 13;
   O |= (dout_141&1) << 14;
   O |= (dout_142&1) << 15;
   O |= (dout_143&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.00031 %
// MAE = 0.2 
// WCE% = 0.0015 %
// WCE = 1.0 
// WCRE% = 50.00 %
// EP% = 25.00 %
// MRE% = 0.0076 %
// MSE = 0.2 
// PDK45_PWR = 0.072 mW
// PDK45_AREA = 141.7 um2
// PDK45_DELAY = 1.28 ns


uint64_t add16se_2DN(const uint64_t B,const uint64_t A)
{
   uint64_t dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143;
   uint64_t O;

   dout_32=((A >> 0)&1)&((B >> 0)&1);
   dout_33=(((A >> 0)&1)&((B >> 0)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_34=((A >> 1)&1)&((B >> 1)&1);
   dout_35=((A >> 1)&1)^((B >> 1)&1);
   dout_36=((A >> 2)&1)&((B >> 2)&1);
   dout_37=((A >> 2)&1)^((B >> 2)&1);
   dout_38=((A >> 3)&1)&((B >> 3)&1);
   dout_39=((A >> 3)&1)^((B >> 3)&1);
   dout_40=((A >> 4)&1)&((B >> 4)&1);
   dout_41=((A >> 4)&1)^((B >> 4)&1);
   dout_42=((A >> 5)&1)&((B >> 5)&1);
   dout_43=((A >> 5)&1)^((B >> 5)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=((A >> 6)&1)^((B >> 6)&1);
   dout_46=((A >> 7)&1)&((B >> 7)&1);
   dout_47=((A >> 7)&1)^((B >> 7)&1);
   dout_48=((A >> 8)&1)&((B >> 8)&1);
   dout_49=((A >> 8)&1)^((B >> 8)&1);
   dout_50=((A >> 9)&1)&((B >> 9)&1);
   dout_51=((A >> 9)&1)^((B >> 9)&1);
   dout_52=((A >> 10)&1)&((B >> 10)&1);
   dout_53=((A >> 10)&1)^((B >> 10)&1);
   dout_54=((A >> 11)&1)&((B >> 11)&1);
   dout_55=((A >> 11)&1)^((B >> 11)&1);
   dout_56=((A >> 12)&1)&((B >> 12)&1);
   dout_57=((A >> 12)&1)^((B >> 12)&1);
   dout_58=((A >> 13)&1)&((B >> 13)&1);
   dout_59=((A >> 13)&1)^((B >> 13)&1);
   dout_60=((A >> 14)&1)&((B >> 14)&1);
   dout_61=((A >> 14)&1)^((B >> 14)&1);
   dout_62=((A >> 15)&1)&((B >> 15)&1);
   dout_63=((A >> 15)&1)^((B >> 15)&1);
   dout_64=((A >> 15)&1)^((B >> 15)&1);
   dout_65=dout_37&dout_34;
   dout_66=dout_37&dout_35;
   dout_67=dout_36|dout_65;
   dout_68=dout_41&dout_38;
   dout_69=dout_41&dout_39;
   dout_70=dout_40|dout_68;
   dout_71=dout_45&dout_42;
   dout_72=dout_45&dout_43;
   dout_73=dout_44|dout_71;
   dout_74=dout_49&dout_46;
   dout_75=dout_49&dout_47;
   dout_76=dout_48|dout_74;
   dout_77=dout_53&dout_50;
   dout_78=dout_53&dout_51;
   dout_79=dout_52|dout_77;
   dout_80=dout_57&dout_54;
   dout_81=dout_57&dout_55;
   dout_82=dout_56|dout_80;
   dout_83=dout_61&dout_58;
   dout_84=dout_61&dout_59;
   dout_85=dout_60|dout_83;
   dout_86=dout_66&dout_32;
   dout_87=dout_67|dout_86;
   dout_88=dout_72&dout_70;
   dout_89=dout_72&dout_69;
   dout_90=dout_73|dout_88;
   dout_91=dout_78&dout_76;
   dout_92=dout_78&dout_75;
   dout_93=dout_79|dout_91;
   dout_94=dout_84&dout_82;
   dout_95=dout_84&dout_81;
   dout_96=dout_85|dout_94;
   dout_97=dout_89&dout_87;
   dout_98=dout_90|dout_97;
   dout_99=dout_95&dout_93;
   dout_100=dout_95&dout_92;
   dout_101=dout_96|dout_99;
   dout_102=dout_100&dout_98;
   dout_103=dout_101|dout_102;
   dout_104=dout_92&dout_98;
   dout_105=dout_93|dout_104;
   dout_106=dout_69&dout_87;
   dout_107=dout_70|dout_106;
   dout_108=dout_75&dout_98;
   dout_109=dout_76|dout_108;
   dout_110=dout_81&dout_105;
   dout_111=dout_82|dout_110;
   dout_112=dout_35&dout_32;
   dout_113=dout_34|dout_112;
   dout_114=dout_39&dout_87;
   dout_115=dout_38|dout_114;
   dout_116=dout_43&dout_107;
   dout_117=dout_42|dout_116;
   dout_118=dout_47&dout_98;
   dout_119=dout_46|dout_118;
   dout_120=dout_51&dout_109;
   dout_121=dout_50|dout_120;
   dout_122=dout_55&dout_105;
   dout_123=dout_54|dout_122;
   dout_124=dout_59&dout_111;
   dout_125=dout_58|dout_124;
   dout_126=dout_63&dout_103;
   dout_127=dout_62|dout_126;
   dout_128=dout_35^dout_32;
   dout_129=dout_37^dout_113;
   dout_130=dout_39^dout_87;
   dout_131=dout_41^dout_115;
   dout_132=dout_43^dout_107;
   dout_133=dout_45^dout_117;
   dout_134=dout_47^dout_98;
   dout_135=dout_49^dout_119;
   dout_136=dout_51^dout_109;
   dout_137=dout_53^dout_121;
   dout_138=dout_55^dout_105;
   dout_139=dout_57^dout_123;
   dout_140=dout_59^dout_111;
   dout_141=dout_61^dout_125;
   dout_142=dout_63^dout_103;
   dout_143=dout_64^dout_127;

   O = 0;
   O |= (dout_33&1) << 0;
   O |= (dout_128&1) << 1;
   O |= (dout_129&1) << 2;
   O |= (dout_130&1) << 3;
   O |= (dout_131&1) << 4;
   O |= (dout_132&1) << 5;
   O |= (dout_133&1) << 6;
   O |= (dout_134&1) << 7;
   O |= (dout_135&1) << 8;
   O |= (dout_136&1) << 9;
   O |= (dout_137&1) << 10;
   O |= (dout_138&1) << 11;
   O |= (dout_139&1) << 12;
   O |= (dout_140&1) << 13;
   O |= (dout_141&1) << 14;
   O |= (dout_142&1) << 15;
   O |= (dout_143&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.0031 %
// MAE = 2.0 
// WCE% = 0.0061 %
// WCE = 4.0 
// WCRE% = 400.00 %
// EP% = 87.50 %
// MRE% = 0.065 %
// MSE = 5.5 
// PDK45_PWR = 0.062 mW
// PDK45_AREA = 120.1 um2
// PDK45_DELAY = 1.08 ns


uint64_t add16se_2JY(const uint64_t B,const uint64_t A)
{
   uint64_t dout_34, dout_37, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110;
   uint64_t O;

   dout_34=(((B >> 1)&1)&((B >> 1)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_37=dout_34^0xFFFFFFFFFFFFFFFFU;
   dout_44=((A >> 3)&1)^((B >> 3)&1);
   dout_45=((A >> 3)&1)&((B >> 3)&1);
   dout_46=dout_44&((A >> 2)&1);
   dout_47=dout_44^((A >> 2)&1);
   dout_48=dout_45|dout_46;
   dout_49=((A >> 4)&1)^((B >> 4)&1);
   dout_50=((A >> 4)&1)&((B >> 4)&1);
   dout_51=dout_49&dout_48;
   dout_52=dout_49^dout_48;
   dout_53=dout_50|dout_51;
   dout_54=((A >> 5)&1)^((B >> 5)&1);
   dout_55=((A >> 5)&1)&((B >> 5)&1);
   dout_56=dout_54&dout_53;
   dout_57=dout_54^dout_53;
   dout_58=dout_55|dout_56;
   dout_59=((A >> 6)&1)^((B >> 6)&1);
   dout_60=((A >> 6)&1)&((B >> 6)&1);
   dout_61=dout_59&dout_58;
   dout_62=dout_59^dout_58;
   dout_63=dout_60|dout_61;
   dout_64=((A >> 7)&1)^((B >> 7)&1);
   dout_65=((A >> 7)&1)&((B >> 7)&1);
   dout_66=dout_64&dout_63;
   dout_67=dout_64^dout_63;
   dout_68=dout_65|dout_66;
   dout_69=((A >> 8)&1)^((B >> 8)&1);
   dout_70=((A >> 8)&1)&((B >> 8)&1);
   dout_71=dout_69&dout_68;
   dout_72=dout_69^dout_68;
   dout_73=dout_70|dout_71;
   dout_74=((A >> 9)&1)^((B >> 9)&1);
   dout_75=((A >> 9)&1)&((B >> 9)&1);
   dout_76=dout_74&dout_73;
   dout_77=dout_74^dout_73;
   dout_78=dout_75|dout_76;
   dout_79=((A >> 10)&1)^((B >> 10)&1);
   dout_80=((A >> 10)&1)&((B >> 10)&1);
   dout_81=dout_79&dout_78;
   dout_82=dout_79^dout_78;
   dout_83=dout_80|dout_81;
   dout_84=((A >> 11)&1)^((B >> 11)&1);
   dout_85=((A >> 11)&1)&((B >> 11)&1);
   dout_86=dout_84&dout_83;
   dout_87=dout_84^dout_83;
   dout_88=dout_85|dout_86;
   dout_89=((A >> 12)&1)^((B >> 12)&1);
   dout_90=((A >> 12)&1)&((B >> 12)&1);
   dout_91=dout_89&dout_88;
   dout_92=dout_89^dout_88;
   dout_93=dout_90|dout_91;
   dout_94=((A >> 13)&1)^((B >> 13)&1);
   dout_95=((A >> 13)&1)&((B >> 13)&1);
   dout_96=dout_94&dout_93;
   dout_97=dout_94^dout_93;
   dout_98=dout_95|dout_96;
   dout_99=((A >> 14)&1)^((B >> 14)&1);
   dout_100=((A >> 14)&1)&((B >> 14)&1);
   dout_101=dout_99&dout_98;
   dout_102=dout_99^dout_98;
   dout_103=dout_100|dout_101;
   dout_104=((A >> 15)&1)^((B >> 15)&1);
   dout_105=((A >> 15)&1)&((B >> 15)&1);
   dout_106=dout_104&dout_103;
   dout_107=dout_104^dout_103;
   dout_108=dout_105|dout_106;
   dout_109=((A >> 15)&1)^((B >> 15)&1);
   dout_110=dout_109^dout_108;

   O = 0;
   O |= (((B >> 0)&1)&1) << 0;
   O |= (dout_37&1) << 1;
   O |= (((B >> 2)&1)&1) << 2;
   O |= (dout_47&1) << 3;
   O |= (dout_52&1) << 4;
   O |= (dout_57&1) << 5;
   O |= (dout_62&1) << 6;
   O |= (dout_67&1) << 7;
   O |= (dout_72&1) << 8;
   O |= (dout_77&1) << 9;
   O |= (dout_82&1) << 10;
   O |= (dout_87&1) << 11;
   O |= (dout_92&1) << 12;
   O |= (dout_97&1) << 13;
   O |= (dout_102&1) << 14;
   O |= (dout_107&1) << 15;
   O |= (dout_110&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.02 %
// MAE = 13 
// WCE% = 0.058 %
// WCE = 38 
// WCRE% = 2100.00 %
// EP% = 98.15 %
// MRE% = 0.38 %
// MSE = 232 
// PDK45_PWR = 0.051 mW
// PDK45_AREA = 112.2 um2
// PDK45_DELAY = 0.84 ns


uint64_t add16se_25S(const uint64_t B,const uint64_t A)
{
   uint64_t dout_44, dout_47, dout_49, dout_52, dout_54, dout_55, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110;
   uint64_t O;

   dout_44=(((B >> 2)&1)|((B >> 4)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_47=dout_44^0xFFFFFFFFFFFFFFFFU;
   dout_49=(((A >> 4)&1)|((B >> 2)&1))^0xFFFFFFFFFFFFFFFFU;
   dout_52=dout_49^0xFFFFFFFFFFFFFFFFU;
   dout_54=((A >> 5)&1)^((B >> 5)&1);
   dout_55=((A >> 5)&1)&((B >> 5)&1);
   dout_59=((A >> 6)&1)^((B >> 6)&1);
   dout_60=((A >> 6)&1)&((B >> 6)&1);
   dout_61=dout_59&dout_55;
   dout_62=dout_59^dout_55;
   dout_63=dout_60|dout_61;
   dout_64=((A >> 7)&1)^((B >> 7)&1);
   dout_65=((A >> 7)&1)&((B >> 7)&1);
   dout_66=dout_64&dout_63;
   dout_67=dout_64^dout_63;
   dout_68=dout_65|dout_66;
   dout_69=((A >> 8)&1)^((B >> 8)&1);
   dout_70=((A >> 8)&1)&((B >> 8)&1);
   dout_71=dout_69&dout_68;
   dout_72=dout_69^dout_68;
   dout_73=dout_70|dout_71;
   dout_74=((A >> 9)&1)^((B >> 9)&1);
   dout_75=((A >> 9)&1)&((B >> 9)&1);
   dout_76=dout_74&dout_73;
   dout_77=dout_74^dout_73;
   dout_78=dout_75|dout_76;
   dout_79=((A >> 10)&1)^((B >> 10)&1);
   dout_80=((A >> 10)&1)&((B >> 10)&1);
   dout_81=dout_79&dout_78;
   dout_82=dout_79^dout_78;
   dout_83=dout_80|dout_81;
   dout_84=((A >> 11)&1)^((B >> 11)&1);
   dout_85=((A >> 11)&1)&((B >> 11)&1);
   dout_86=dout_84&dout_83;
   dout_87=dout_84^dout_83;
   dout_88=dout_85|dout_86;
   dout_89=((A >> 12)&1)^((B >> 12)&1);
   dout_90=((A >> 12)&1)&((B >> 12)&1);
   dout_91=dout_89&dout_88;
   dout_92=dout_89^dout_88;
   dout_93=dout_90|dout_91;
   dout_94=((A >> 13)&1)^((B >> 13)&1);
   dout_95=((A >> 13)&1)&((B >> 13)&1);
   dout_96=dout_94&dout_93;
   dout_97=dout_94^dout_93;
   dout_98=dout_95|dout_96;
   dout_99=((A >> 14)&1)^((B >> 14)&1);
   dout_100=((A >> 14)&1)&((B >> 14)&1);
   dout_101=dout_99&dout_98;
   dout_102=dout_99^dout_98;
   dout_103=dout_100|dout_101;
   dout_104=((A >> 15)&1)^((B >> 15)&1);
   dout_105=((A >> 15)&1)&((B >> 15)&1);
   dout_106=dout_104&dout_103;
   dout_107=dout_104^dout_103;
   dout_108=dout_105|dout_106;
   dout_109=((A >> 15)&1)^((B >> 15)&1);
   dout_110=dout_109^dout_108;

   O = 0;
   O |= (dout_78&1) << 0;
   O |= (dout_65&1) << 1;
   O |= (dout_104&1) << 2;
   O |= (dout_47&1) << 3;
   O |= (dout_52&1) << 4;
   O |= (dout_54&1) << 5;
   O |= (dout_62&1) << 6;
   O |= (dout_67&1) << 7;
   O |= (dout_72&1) << 8;
   O |= (dout_77&1) << 9;
   O |= (dout_82&1) << 10;
   O |= (dout_87&1) << 11;
   O |= (dout_92&1) << 12;
   O |= (dout_97&1) << 13;
   O |= (dout_102&1) << 14;
   O |= (dout_107&1) << 15;
   O |= (dout_110&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.0069 %
// MAE = 4.5 
// WCE% = 0.021 %
// WCE = 14 
// WCRE% = 900.00 %
// EP% = 93.75 %
// MRE% = 0.15 %
// MSE = 30 
// PDK45_PWR = 0.057 mW
// PDK45_AREA = 111.2 um2
// PDK45_DELAY = 1.00 ns


uint64_t add16se_1Y7(const uint64_t B,const uint64_t A)
{
   uint64_t dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110;
   uint64_t O;

   dout_49=((A >> 4)&1)^((B >> 4)&1);
   dout_50=((A >> 4)&1)&((B >> 4)&1);
   dout_51=dout_49&((B >> 3)&1);
   dout_52=dout_49^((B >> 3)&1);
   dout_53=dout_50|dout_51;
   dout_54=((A >> 5)&1)^((B >> 5)&1);
   dout_55=((A >> 5)&1)&((B >> 5)&1);
   dout_56=dout_54&dout_53;
   dout_57=dout_54^dout_53;
   dout_58=dout_55|dout_56;
   dout_59=((A >> 6)&1)^((B >> 6)&1);
   dout_60=((A >> 6)&1)&((B >> 6)&1);
   dout_61=dout_59&dout_58;
   dout_62=dout_59^dout_58;
   dout_63=dout_60|dout_61;
   dout_64=((A >> 7)&1)^((B >> 7)&1);
   dout_65=((A >> 7)&1)&((B >> 7)&1);
   dout_66=dout_64&dout_63;
   dout_67=dout_64^dout_63;
   dout_68=dout_65|dout_66;
   dout_69=((A >> 8)&1)^((B >> 8)&1);
   dout_70=((A >> 8)&1)&((B >> 8)&1);
   dout_71=dout_69&dout_68;
   dout_72=dout_69^dout_68;
   dout_73=dout_70|dout_71;
   dout_74=((A >> 9)&1)^((B >> 9)&1);
   dout_75=((A >> 9)&1)&((B >> 9)&1);
   dout_76=dout_74&dout_73;
   dout_77=dout_74^dout_73;
   dout_78=dout_75|dout_76;
   dout_79=((A >> 10)&1)^((B >> 10)&1);
   dout_80=((A >> 10)&1)&((B >> 10)&1);
   dout_81=dout_79&dout_78;
   dout_82=dout_79^dout_78;
   dout_83=dout_80|dout_81;
   dout_84=((A >> 11)&1)^((B >> 11)&1);
   dout_85=((A >> 11)&1)&((B >> 11)&1);
   dout_86=dout_84&dout_83;
   dout_87=dout_84^dout_83;
   dout_88=dout_85|dout_86;
   dout_89=((A >> 12)&1)^((B >> 12)&1);
   dout_90=((A >> 12)&1)&((B >> 12)&1);
   dout_91=dout_89&dout_88;
   dout_92=dout_89^dout_88;
   dout_93=dout_90|dout_91;
   dout_94=((A >> 13)&1)^((B >> 13)&1);
   dout_95=((A >> 13)&1)&((B >> 13)&1);
   dout_96=dout_94&dout_93;
   dout_97=dout_94^dout_93;
   dout_98=dout_95|dout_96;
   dout_99=((A >> 14)&1)^((B >> 14)&1);
   dout_100=((A >> 14)&1)&((B >> 14)&1);
   dout_101=dout_99&dout_98;
   dout_102=dout_99^dout_98;
   dout_103=dout_100|dout_101;
   dout_104=((A >> 15)&1)^((B >> 15)&1);
   dout_105=((A >> 15)&1)&((B >> 15)&1);
   dout_106=dout_104&dout_103;
   dout_107=dout_104^dout_103;
   dout_108=dout_105|dout_106;
   dout_109=((A >> 15)&1)^((B >> 15)&1);
   dout_110=dout_109^dout_108;

   O = 0;
   O |= (dout_62&1) << 0;
   O |= (dout_103&1) << 1;
   O |= (0&1) << 2;
   O |= (((A >> 3)&1)&1) << 3;
   O |= (dout_52&1) << 4;
   O |= (dout_57&1) << 5;
   O |= (dout_62&1) << 6;
   O |= (dout_67&1) << 7;
   O |= (dout_72&1) << 8;
   O |= (dout_77&1) << 9;
   O |= (dout_82&1) << 10;
   O |= (dout_87&1) << 11;
   O |= (dout_92&1) << 12;
   O |= (dout_97&1) << 13;
   O |= (dout_102&1) << 14;
   O |= (dout_107&1) << 15;
   O |= (dout_110&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.0063 %
// MAE = 4.1 
// WCE% = 0.015 %
// WCE = 10 
// WCRE% = 500.00 %
// EP% = 93.75 %
// MRE% = 0.13 %
// MSE = 24 
// PDK45_PWR = 0.057 mW
// PDK45_AREA = 113.6 um2
// PDK45_DELAY = 1.03 ns


uint64_t add16se_294(const uint64_t B,const uint64_t A)
{
   uint64_t dout_38, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_68, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_88, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_108, dout_109, dout_110, dout_111, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143;
   uint64_t O;

   dout_38=((A >> 3)&1)|((B >> 3)&1);
   dout_40=((A >> 4)&1)&((B >> 4)&1);
   dout_41=((A >> 4)&1)^((B >> 4)&1);
   dout_42=((A >> 5)&1)&((B >> 5)&1);
   dout_43=((A >> 5)&1)^((B >> 5)&1);
   dout_44=((A >> 6)&1)&((B >> 6)&1);
   dout_45=((A >> 6)&1)^((B >> 6)&1);
   dout_46=((A >> 7)&1)&((B >> 7)&1);
   dout_47=((A >> 7)&1)^((B >> 7)&1);
   dout_48=((A >> 8)&1)&((B >> 8)&1);
   dout_49=((A >> 8)&1)^((B >> 8)&1);
   dout_50=((A >> 9)&1)&((B >> 9)&1);
   dout_51=((A >> 9)&1)^((B >> 9)&1);
   dout_52=((A >> 10)&1)&((B >> 10)&1);
   dout_53=((A >> 10)&1)^((B >> 10)&1);
   dout_54=((A >> 11)&1)&((B >> 11)&1);
   dout_55=((A >> 11)&1)^((B >> 11)&1);
   dout_56=((A >> 12)&1)&((B >> 12)&1);
   dout_57=((A >> 12)&1)^((B >> 12)&1);
   dout_58=((A >> 13)&1)&((B >> 13)&1);
   dout_59=((A >> 13)&1)^((B >> 13)&1);
   dout_60=((A >> 14)&1)&((B >> 14)&1);
   dout_61=((A >> 14)&1)^((B >> 14)&1);
   dout_62=((A >> 15)&1)&((B >> 15)&1);
   dout_63=((A >> 15)&1)^((B >> 15)&1);
   dout_64=((A >> 15)&1)^((B >> 15)&1);
   dout_68=dout_41&dout_38;
   dout_70=dout_40|dout_68;
   dout_71=dout_45&dout_42;
   dout_72=dout_45&dout_43;
   dout_73=dout_44|dout_71;
   dout_74=dout_49&dout_46;
   dout_75=dout_49&dout_47;
   dout_76=dout_48|dout_74;
   dout_77=dout_53&dout_50;
   dout_78=dout_53&dout_51;
   dout_79=dout_52|dout_77;
   dout_80=dout_57&dout_54;
   dout_81=dout_57&dout_55;
   dout_82=dout_56|dout_80;
   dout_83=dout_61&dout_58;
   dout_84=dout_61&dout_59;
   dout_85=dout_60|dout_83;
   dout_88=dout_72&dout_70;
   dout_90=dout_73|dout_88;
   dout_91=dout_78&dout_76;
   dout_92=dout_78&dout_75;
   dout_93=dout_79|dout_91;
   dout_94=dout_84&dout_82;
   dout_95=dout_84&dout_81;
   dout_96=dout_85|dout_94;
   dout_99=dout_95&dout_93;
   dout_100=dout_95&dout_92;
   dout_101=dout_96|dout_99;
   dout_102=dout_100&dout_90;
   dout_103=dout_101|dout_102;
   dout_104=dout_92&dout_90;
   dout_105=dout_93|dout_104;
   dout_108=dout_75&dout_90;
   dout_109=dout_76|dout_108;
   dout_110=dout_81&dout_105;
   dout_111=dout_82|dout_110;
   dout_116=dout_43&dout_70;
   dout_117=dout_42|dout_116;
   dout_118=dout_47&dout_90;
   dout_119=dout_46|dout_118;
   dout_120=dout_51&dout_109;
   dout_121=dout_50|dout_120;
   dout_122=dout_55&dout_105;
   dout_123=dout_54|dout_122;
   dout_124=dout_59&dout_111;
   dout_125=dout_58|dout_124;
   dout_126=dout_63&dout_103;
   dout_127=dout_62|dout_126;
   dout_131=dout_41^dout_38;
   dout_132=dout_43^dout_70;
   dout_133=dout_45^dout_117;
   dout_134=dout_47^dout_90;
   dout_135=dout_49^dout_119;
   dout_136=dout_51^dout_109;
   dout_137=dout_53^dout_121;
   dout_138=dout_55^dout_105;
   dout_139=dout_57^dout_123;
   dout_140=dout_59^dout_111;
   dout_141=dout_61^dout_125;
   dout_142=dout_63^dout_103;
   dout_143=dout_64^dout_127;

   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (((B >> 2)&1)&1) << 2;
   O |= (0&1) << 3;
   O |= (dout_131&1) << 4;
   O |= (dout_132&1) << 5;
   O |= (dout_133&1) << 6;
   O |= (dout_134&1) << 7;
   O |= (dout_135&1) << 8;
   O |= (dout_136&1) << 9;
   O |= (dout_137&1) << 10;
   O |= (dout_138&1) << 11;
   O |= (dout_139&1) << 12;
   O |= (dout_140&1) << 13;
   O |= (dout_141&1) << 14;
   O |= (dout_142&1) << 15;
   O |= (dout_143&1) << 16;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.023 %
// MAE = 15 
// WCE% = 0.058 %
// WCE = 38 
// WCRE% = 3100.00 %
// EP% = 97.95 %
// MRE% = 0.48 %
// MSE = 312 
// PDK45_PWR = 0.048 mW
// PDK45_AREA = 97.1 um2
// PDK45_DELAY = 0.87 ns



/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.63 ns


uint8_t add8u_0FP(uint8_t a, uint8_t b) {
  uint64_t o = 0;
  int n_198=0, n_36=0, n_189=0, n_195=0, n_42=0, n_192=0, n_23=0, n_21=0, n_20=0, n_27=0;
  int n_40=0, n_24=0, n_48=0, n_147=0, n_66=0, n_60=0, n_201=0, n_108=0, n_129=0, n_39=0;
  int n_207=0, n_204=0, n_120=0, n_8=0, n_9=0, n_4=0, n_5=0, n_6=0, n_7=0, n_0=0;
  int n_1=0, n_2=0, n_3=0, n_33=0, n_34=0, n_18=0, n_19=0, n_16=0, n_17=0, n_14=0;
  int n_15=0, n_12=0, n_13=0, n_10=0, n_11=0, n_114=0, n_45=0, n_78=0, n_93=0, n_111=0;
  int n_150=0, n_75=0, n_51=0, n_57=0, n_54=0, n_46=0, n_213=0, n_210=0, n_132=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 1) & 0x1;
  n_2 = (a >> 2) & 0x1;
  n_3 = (a >> 3) & 0x1;
  n_4 = (a >> 4) & 0x1;
  n_5 = (a >> 5) & 0x1;
  n_6 = (a >> 6) & 0x1;
  n_7 = (a >> 7) & 0x1;
  n_8 = (b >> 0) & 0x1;
  n_9 = (b >> 1) & 0x1;
  n_10 = (b >> 2) & 0x1;
  n_11 = (b >> 3) & 0x1;
  n_12 = (b >> 4) & 0x1;
  n_13 = (b >> 5) & 0x1;
  n_14 = (b >> 6) & 0x1;
  n_15 = (b >> 7) & 0x1;
  n_16 = n_2 | n_10;
  n_17 = n_9 | n_1;
  n_18 = n_0 & n_8;
  n_19 = n_13 | n_5;
  n_20 = n_2 & n_10;
  n_21 = n_1 ^ n_9;
  n_23 = n_18 & n_17;
  n_24 = n_1 & n_9;
  n_27 = n_10 ^ n_2;
  n_33 = n_3 ^ n_11;
  n_34 = n_14 | n_6;
  n_36 = n_3 & n_11;
  n_39 = n_4 ^ n_12;
  n_40 = n_11 | n_3;
  n_42 = n_4 & n_12;
  n_45 = n_5 ^ n_13;
  n_46 = n_0 ^ n_8;
  n_48 = n_5 & n_13;
  n_51 = n_6 ^ n_14;
  n_54 = n_6 & n_14;
  n_57 = n_7 ^ n_15;
  n_60 = n_7 & n_15;
  n_66 = n_23 | n_24;
  n_75 = n_66 & n_16;
  n_78 = n_20 | n_75;
  n_93 = n_78 & n_40;
  n_108 = n_93 | n_36;
  n_111 = n_108 & n_39;
  n_114 = ~(n_111 | n_42);
  n_120 = ~n_114;
  n_129 = n_120 & n_19;
  n_132 = n_129 | n_48;
  n_147 = n_132 & n_34;
  n_150 = n_147 | n_54;
  n_189 = n_21 ^ n_18;
  n_192 = n_27 ^ n_66;
  n_195 = n_33 ^ n_78;
  n_198 = n_39 ^ n_108;
  n_201 = n_45 ^ n_120;
  n_204 = n_51 ^ n_132;
  n_207 = n_57 ^ n_150;
  n_210 = n_57 & n_150;
  n_213 = n_60 | n_210;
  o |= (n_46 & 0x01) << 0;
  o |= (n_189 & 0x01) << 1;
  o |= (n_192 & 0x01) << 2;
  o |= (n_195 & 0x01) << 3;
  o |= (n_198 & 0x01) << 4;
  o |= (n_201 & 0x01) << 5;
  o |= (n_204 & 0x01) << 6;
  o |= (n_207 & 0x01) << 7;
  o |= (n_213 & 0x01) << 8;
  return o;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 19.67 %
// MAE = 101 
// WCE% = 50.39 %
// WCE = 258 
// WCRE% = 6300.00 %
// EP% = 99.77 %
// MRE% = 49.16 %
// MSE = 14074 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


uint8_t add8u_88L(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_32 = 0;
  int sig_34 = ~((int)0);
  int sig_50 = wb[7];
  y |=  (wb[3] & 0x01) << 0; // default output
  y |=  (wb[7] & 0x01) << 1; // default output
  y |=  (sig_32 & 0x01) << 2; // default output
  y |=  (wa[3] & 0x01) << 3; // default output
  y |=  (wb[4] & 0x01) << 4; // default output
  y |=  (wa[7] & 0x01) << 5; // default output
  y |=  (sig_34 & 0x01) << 6; // default output
  y |=  (sig_50 & 0x01) << 7; // default output
  y |=  (wa[6] & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 6.45 %
// MAE = 33 
// WCE% = 16.60 %
// WCE = 85 
// WCRE% = 125.00 %
// EP% = 99.22 %
// MRE% = 16.82 %
// MSE = 1488 
// PDK45_PWR = 0.0032 mW
// PDK45_AREA = 8.9 um2
// PDK45_DELAY = 0.12 ns


uint8_t add8u_0CA(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_35 = ~((int)0);
  int sig_38 = wa[5];
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & wb[6];
  int sig_51 = sig_48 ^ wb[6];
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_35 & 0x01) << 0; // default output
  y |=  (wa[4] & 0x01) << 1; // default output
  y |=  (wa[3] & 0x01) << 2; // default output
  y |=  (wa[2] & 0x01) << 3; // default output
  y |=  (sig_38 & 0x01) << 4; // default output
  y |=  (wa[5] & 0x01) << 5; // default output
  y |=  (wa[6] & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.23 %
// MAE = 1.2 
// WCE% = 0.78 %
// WCE = 4.0 
// WCRE% = 100.00 %
// EP% = 76.56 %
// MRE% = 0.68 %
// MSE = 2.5 
// PDK45_PWR = 0.023 mW
// PDK45_AREA = 50.7 um2
// PDK45_DELAY = 0.47 ns


uint8_t add8u_5M7(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n34;
  uint8_t n38;
  uint8_t n45;
  uint8_t n48;
  uint8_t n49;
  uint8_t n51;
  uint8_t n58;
  uint8_t n59;
  uint8_t n68;
  uint8_t n69;
  uint8_t n78;
  uint8_t n79;
  uint8_t n85;
  uint8_t n86;
  uint8_t n87;
  uint8_t n88;
  uint8_t n96;
  uint8_t n97;
  uint8_t n127;
  uint8_t n134;
  uint8_t n145;
  uint8_t n152;
  uint8_t n162;
  uint8_t n170;
  uint8_t n181;
  uint8_t n198;
  uint8_t n199;
  uint8_t n226;
  uint8_t n240;
  uint8_t n245;
  uint8_t n255;
  uint8_t n272;
  uint8_t n391;
  uint8_t n394;
  uint8_t n404;
  uint8_t n412;
  uint8_t n413;
  uint8_t n423;

  n34 = ~(n20 & n4);
  n38 = ~n34;
  n45 = n38;
  n48 = n45;
  n49 = n45;
  n51 = n4 | n20;
  n58 = (n6 ^ n22) ^ n49;
  n59 = (n6 & n22) | (n22 & n49) | (n6 & n49);
  n68 = n8 ^ n24;
  n69 = n8 & n24;
  n78 = n10 ^ n26;
  n79 = n10 & n26;
  n85 = n59;
  n86 = n12 ^ n28;
  n87 = n12 & n28;
  n88 = n24 | n8;
  n96 = n14 ^ n30;
  n97 = n14 & n30;
  n127 = n69;
  n134 = n88 & n85;
  n145 = ~n48;
  n152 = n127 | n134;
  n162 = n86 & n79;
  n170 = n86 & n78;
  n181 = n87 | n162;
  n198 = n152;
  n199 = n152;
  n226 = n78 & n199;
  n240 = ~n85;
  n245 = n79 | n226;
  n255 = n170 & n198;
  n272 = n181 | n255;
  n391 = ~(n240 ^ n68);
  n394 = n78 ^ n199;
  n404 = n86 ^ n245;
  n412 = n96 ^ n272;
  n413 = n96 & n272;
  n423 = n97 | n413;

  c |= (n2 & 0x1) << 0;
  c |= (n145 & 0x1) << 1;
  c |= (n51 & 0x1) << 2;
  c |= (n58 & 0x1) << 3;
  c |= (n391 & 0x1) << 4;
  c |= (n394 & 0x1) << 5;
  c |= (n404 & 0x1) << 6;
  c |= (n412 & 0x1) << 7;
  c |= (n423 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.098 %
// MAE = 0.5 
// WCE% = 0.20 %
// WCE = 1.0 
// WCRE% = 100.00 %
// EP% = 50.00 %
// MRE% = 0.27 %
// MSE = 0.5 
// PDK45_PWR = 0.028 mW
// PDK45_AREA = 61.5 um2
// PDK45_DELAY = 0.55 ns


uint8_t add8u_4T8(uint8_t a, uint8_t b) {
  uint64_t o = 0;
  int n_196=0, n_192=0, n_23=0, n_46=0, n_27=0, n_42=0, n_85=0, n_69=0, n_166=0, n_89=0;
  int n_66=0, n_62=0, n_200=0, n_108=0, n_204=0, n_208=0, n_127=0, n_100=0, n_189=0, n_104=0;
  int n_8=0, n_9=0, n_185=0, n_4=0, n_5=0, n_6=0, n_7=0, n_0=0, n_1=0, n_2=0;
  int n_3=0, n_31=0, n_35=0, n_16=0, n_39=0, n_14=0, n_15=0, n_12=0, n_13=0, n_10=0;
  int n_11=0, n_96=0, n_173=0, n_58=0, n_92=0, n_177=0, n_50=0, n_77=0, n_154=0, n_119=0;
  int n_54=0, n_73=0, n_169=0, n_212=0, n_139=0, n_135=0, n_131=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 1) & 0x1;
  n_2 = (a >> 2) & 0x1;
  n_3 = (a >> 3) & 0x1;
  n_4 = (a >> 4) & 0x1;
  n_5 = (a >> 5) & 0x1;
  n_6 = (a >> 6) & 0x1;
  n_7 = (a >> 7) & 0x1;
  n_8 = (b >> 0) & 0x1;
  n_9 = (b >> 1) & 0x1;
  n_10 = (b >> 2) & 0x1;
  n_11 = (b >> 3) & 0x1;
  n_12 = (b >> 4) & 0x1;
  n_13 = (b >> 5) & 0x1;
  n_14 = (b >> 6) & 0x1;
  n_15 = (b >> 7) & 0x1;
  n_16 = n_3 | n_11;
  n_23 = n_1 ^ n_9;
  n_27 = n_1 & n_9;
  n_31 = n_10 ^ n_2;
  n_35 = n_2 & n_10;
  n_39 = n_3 ^ n_11;
  n_42 = n_3 & n_11;
  n_46 = n_4 ^ n_12;
  n_50 = n_4 & n_12;
  n_54 = n_5 ^ n_13;
  n_58 = n_13 & n_5;
  n_62 = n_6 ^ n_14;
  n_66 = n_6 & n_14;
  n_69 = n_7 ^ n_15;
  n_73 = n_7 & n_15;
  n_77 = n_31 & n_27;
  n_85 = n_35 | n_77;
  n_89 = n_46 & n_42;
  n_92 = n_46 & n_39;
  n_96 = n_50 | n_89;
  n_100 = n_62 & n_58;
  n_104 = n_62 & n_54;
  n_108 = n_66 | n_100;
  n_119 = n_92 & n_85;
  n_127 = n_96 | n_119;
  n_131 = n_104 & n_96;
  n_135 = n_104 & n_119;
  n_139 = n_108 | n_131;
  n_154 = n_139 | n_135;
  n_166 = n_16 & n_85;
  n_169 = n_42 | n_166;
  n_173 = n_54 & n_127;
  n_177 = n_58 | n_173;
  n_185 = n_31 ^ n_27;
  n_189 = n_39 ^ n_85;
  n_192 = n_46 ^ n_169;
  n_196 = n_54 ^ n_127;
  n_200 = n_62 ^ n_177;
  n_204 = n_69 ^ n_154;
  n_208 = n_69 & n_154;
  n_212 = n_73 | n_208;
  o |= (n_0 & 0x01) << 0;
  o |= (n_23 & 0x01) << 1;
  o |= (n_185 & 0x01) << 2;
  o |= (n_189 & 0x01) << 3;
  o |= (n_192 & 0x01) << 4;
  o |= (n_196 & 0x01) << 5;
  o |= (n_200 & 0x01) << 6;
  o |= (n_204 & 0x01) << 7;
  o |= (n_212 & 0x01) << 8;
  return o;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 1.64 %
// MAE = 8.4 
// WCE% = 4.30 %
// WCE = 22 
// WCRE% = 100.00 %
// EP% = 96.88 %
// MRE% = 4.57 %
// MSE = 100 
// PDK45_PWR = 0.012 mW
// PDK45_AREA = 26.8 um2
// PDK45_DELAY = 0.27 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.039 %
// MAE = 0.2 
// WCE% = 0.20 %
// WCE = 1.0 
// WCRE% = 50.00 %
// EP% = 25.00 %
// MRE% = 0.14 %
// MSE = 0.2 
// PDK45_PWR = 0.029 mW
// PDK45_AREA = 63.8 um2
// PDK45_DELAY = 0.55 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.45 %
// MAE = 2.3 
// WCE% = 1.37 %
// WCE = 7.0 
// WCRE% = 300.00 %
// EP% = 87.50 %
// MRE% = 1.23 %
// MSE = 8.0 
// PDK45_PWR = 0.019 mW
// PDK45_AREA = 43.6 um2
// PDK45_DELAY = 0.39 ns


uint8_t add8u_5EZ(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n32;
  uint8_t n36;
  uint8_t n43;
  uint8_t n62;
  uint8_t n63;
  uint8_t n72;
  uint8_t n73;
  uint8_t n82;
  uint8_t n83;
  uint8_t n92;
  uint8_t n93;
  uint8_t n94;
  uint8_t n102;
  uint8_t n103;
  uint8_t n143;
  uint8_t n162;
  uint8_t n163;
  uint8_t n168;
  uint8_t n169;
  uint8_t n173;
  uint8_t n182;
  uint8_t n193;
  uint8_t n223;
  uint8_t n230;
  uint8_t n242;
  uint8_t n263;
  uint8_t n322;
  uint8_t n332;
  uint8_t n342;
  uint8_t n382;
  uint8_t n392;
  uint8_t n402;
  uint8_t n412;
  uint8_t n413;
  uint8_t n422;

  n32 = n28 ^ n12;
  n36 = n24 | n8;
  n43 = ~(n2 ^ n2);
  n62 = n6 ^ n22;
  n63 = n6 & n22;
  n72 = n8 ^ n24;
  n73 = n8 & n24;
  n82 = n10 ^ n26;
  n83 = n10 & n26;
  n92 = n12 ^ n28;
  n93 = n12 & n28;
  n94 = n83;
  n102 = n14 ^ n30;
  n103 = n14 & n30;
  n143 = n36 & n63;
  n162 = n73 | n143;
  n163 = n73 | n143;
  n168 = n82;
  n169 = n82;
  n173 = n32 & n94;
  n182 = n32 & n169;
  n193 = n93 | n173;
  n223 = n182 & n163;
  n230 = n162;
  n242 = n193 | n223;
  n263 = n230;
  n322 = n63;
  n332 = n168 & n263;
  n342 = n94 | n332;
  n382 = n72 ^ n322;
  n392 = n168 ^ n263;
  n402 = n92 ^ n342;
  n412 = n102 ^ n242;
  n413 = n102 & n242;
  n422 = n103 | n413;

  c |= (n20 & 0x1) << 0;
  c |= (n4 & 0x1) << 1;
  c |= (n43 & 0x1) << 2;
  c |= (n62 & 0x1) << 3;
  c |= (n382 & 0x1) << 4;
  c |= (n392 & 0x1) << 5;
  c |= (n402 & 0x1) << 6;
  c |= (n412 & 0x1) << 7;
  c |= (n422 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 8.28 %
// MAE = 42 
// WCE% = 25.59 %
// WCE = 131 
// WCRE% = 10000.00 %
// EP% = 99.24 %
// MRE% = 25.01 %
// MSE = 2692 
// PDK45_PWR = 0.0015 mW
// PDK45_AREA = 8.0 um2
// PDK45_DELAY = 0.11 ns


uint8_t add8u_8ES(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_29 = ~((int)0);
  int sig_41 = wb[4];
  int sig_46 = wa[7] & wb[7];
  int sig_49 = ~((int)0);
  int sig_50 = ~((int)0);
  int sig_52 = wa[7] ^ wb[7];
  y |=  (sig_50 & 0x01) << 0; // default output
  y |=  (sig_41 & 0x01) << 1; // default output
  y |=  (sig_50 & 0x01) << 2; // default output
  y |=  (wb[2] & 0x01) << 3; // default output
  y |=  (wa[5] & 0x01) << 4; // default output
  y |=  (sig_49 & 0x01) << 5; // default output
  y |=  (sig_29 & 0x01) << 6; // default output
  y |=  (sig_52 & 0x01) << 7; // default output
  y |=  (sig_46 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.90 %
// MAE = 4.6 
// WCE% = 2.93 %
// WCE = 15 
// WCRE% = 800.00 %
// EP% = 93.75 %
// MRE% = 2.47 %
// MSE = 32 
// PDK45_PWR = 0.014 mW
// PDK45_AREA = 34.7 um2
// PDK45_DELAY = 0.31 ns


uint8_t add8u_5NH(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n37;
  uint8_t n45;
  uint8_t n64;
  uint8_t n65;
  uint8_t n68;
  uint8_t n69;
  uint8_t n70;
  uint8_t n71;
  uint8_t n78;
  uint8_t n79;
  uint8_t n86;
  uint8_t n87;
  uint8_t n96;
  uint8_t n97;
  uint8_t n134;
  uint8_t n135;
  uint8_t n162;
  uint8_t n181;
  uint8_t n226;
  uint8_t n227;
  uint8_t n245;
  uint8_t n255;
  uint8_t n272;
  uint8_t n394;
  uint8_t n404;
  uint8_t n412;
  uint8_t n413;
  uint8_t n422;

  n37 = ~(n30 ^ n30);
  n45 = n28 | n12;
  n64 = n45;
  n65 = n45;
  n68 = n8 ^ n24;
  n69 = n8 & n24;
  n70 = n69;
  n71 = n69;
  n78 = n10 ^ n26;
  n79 = n10 & n26;
  n86 = n12 ^ n28;
  n87 = n12 & n28;
  n96 = n14 ^ n30;
  n97 = n14 & n30;
  n134 = n26 ^ n10;
  n135 = n26 & n10;
  n162 = n65 & n135;
  n181 = n87 | n162;
  n226 = n134 & n70;
  n227 = n134 & n70;
  n245 = n79 | n227;
  n255 = n64 & n226;
  n272 = n181 | n255;
  n394 = n78 ^ n71;
  n404 = n86 ^ n245;
  n412 = n96 ^ n272;
  n413 = n96 & n272;
  n422 = n97 | n413;

  c |= (n37 & 0x1) << 0;
  c |= (n22 & 0x1) << 1;
  c |= (n6 & 0x1) << 2;
  c |= (n37 & 0x1) << 3;
  c |= (n68 & 0x1) << 4;
  c |= (n394 & 0x1) << 5;
  c |= (n404 & 0x1) << 6;
  c |= (n412 & 0x1) << 7;
  c |= (n422 & 0x1) << 8;

  return c;
}

uint8_t add8u_5ME(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n18 = (b >> 1) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n48;
  uint8_t n82;
  uint8_t n132;
  uint8_t n182;
  uint8_t n183;
  uint8_t n232;
  uint8_t n233;
  uint8_t n282;
  uint8_t n283;
  uint8_t n332;
  uint8_t n333;
  uint8_t n382;
  uint8_t n383;

  n48 = ~(n4 ^ n4);
  n82 = n2 | n18;
  n132 = n4 | n20;
  n182 = n6 ^ n22;
  n183 = n6 & n22;
  n232 = (n8 ^ n24) ^ n183;
  n233 = (n8 & n24) | (n24 & n183) | (n8 & n183);
  n282 = (n10 ^ n26) ^ n233;
  n283 = (n10 & n26) | (n26 & n233) | (n10 & n233);
  n332 = (n12 ^ n28) ^ n283;
  n333 = (n12 & n28) | (n28 & n283) | (n12 & n283);
  n382 = (n14 ^ n30) ^ n333;
  n383 = (n14 & n30) | (n30 & n333) | (n14 & n333);

  c |= (n48 & 0x1) << 0;
  c |= (n82 & 0x1) << 1;
  c |= (n132 & 0x1) << 2;
  c |= (n182 & 0x1) << 3;
  c |= (n232 & 0x1) << 4;
  c |= (n282 & 0x1) << 5;
  c |= (n332 & 0x1) << 6;
  c |= (n382 & 0x1) << 7;
  c |= (n383 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.16 %
// MAE = 0.8 
// WCE% = 0.59 %
// WCE = 3.0 
// WCRE% = 50.00 %
// EP% = 43.75 %
// MRE% = 0.40 %
// MSE = 1.5 
// PDK45_PWR = 0.024 mW
// PDK45_AREA = 57.3 um2
// PDK45_DELAY = 0.47 ns


uint8_t add8u_8KZ(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_16 = wa[0] | wb[0];
  int sig_17 = wb[4] | wa[4];
  int sig_32 = wb[2] | wa[2];
  int sig_33 = ~((int)0);
  int sig_39 = wa[5] & wb[5];
  int sig_41 = wb[5] ^ wa[5];
  int sig_42 = sig_39;
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_45 = sig_43 & sig_42;
  int sig_46 = sig_43 ^ sig_42;
  int sig_47 = sig_44 | sig_45;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_16 & 0x01) << 0; // default output
  y |=  (wb[1] & 0x01) << 1; // default output
  y |=  (sig_32 & 0x01) << 2; // default output
  y |=  (sig_33 & 0x01) << 3; // default output
  y |=  (sig_17 & 0x01) << 4; // default output
  y |=  (sig_41 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.039 %
// MAE = 0.2 
// WCE% = 0.20 %
// WCE = 1.0 
// WCRE% = 50.00 %
// EP% = 25.00 %
// MRE% = 0.14 %
// MSE = 0.2 
// PDK45_PWR = 0.029 mW
// PDK45_AREA = 63.8 um2
// PDK45_DELAY = 0.55 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 9.00 %
// MAE = 46 
// WCE% = 29.10 %
// WCE = 149 
// WCRE% = 6400.00 %
// EP% = 99.33 %
// MRE% = 22.62 %
// MSE = 3188 
// PDK45_PWR = 0.0015 mW
// PDK45_AREA = 8.0 um2
// PDK45_DELAY = 0.11 ns


uint8_t add8u_8GM(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_18 = wb[7] ^ wa[7];
  int sig_25 = ~((int)0);
  int sig_26 = 0;
  int sig_31 = ~((int)0);
  int sig_42 = wa[7] & wb[7];
  y |=  (sig_31 & 0x01) << 0; // default output
  y |=  (wb[6] & 0x01) << 1; // default output
  y |=  (wb[1] & 0x01) << 2; // default output
  y |=  (sig_26 & 0x01) << 3; // default output
  y |=  (wa[2] & 0x01) << 4; // default output
  y |=  (wb[6] & 0x01) << 5; // default output
  y |=  (sig_25 & 0x01) << 6; // default output
  y |=  (sig_18 & 0x01) << 7; // default output
  y |=  (sig_42 & 0x01) << 8; // default output
   return y;
}

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.78 %
// MAE = 4.0 
// WCE% = 2.93 %
// WCE = 15 
// WCRE% = 500.00 %
// EP% = 90.62 %
// MRE% = 2.08 %
// MSE = 27 
// PDK45_PWR = 0.014 mW
// PDK45_AREA = 37.1 um2
// PDK45_DELAY = 0.31 ns


uint8_t add8u_5G5(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n36;
  uint8_t n52;
  uint8_t n66;
  uint8_t n75;
  uint8_t n78;
  uint8_t n79;
  uint8_t n126;
  uint8_t n127;
  uint8_t n183;
  uint8_t n232;
  uint8_t n233;
  uint8_t n282;
  uint8_t n283;
  uint8_t n332;
  uint8_t n333;
  uint8_t n382;
  uint8_t n383;

  n36 = ~(n4 ^ n4);
  n52 = ~(n6 | n36);
  n66 = n52;
  n75 = n66;
  n78 = n75;
  n79 = n75;
  n126 = ~n79;
  n127 = ~n79;
  n183 = n6 | n22;
  n232 = (n8 ^ n24) ^ n78;
  n233 = (n8 & n24) | (n24 & n78) | (n8 & n78);
  n282 = (n10 ^ n26) ^ n233;
  n283 = (n10 & n26) | (n26 & n233) | (n10 & n233);
  n332 = (n12 ^ n28) ^ n283;
  n333 = (n12 & n28) | (n28 & n283) | (n12 & n283);
  n382 = (n14 ^ n30) ^ n333;
  n383 = (n14 & n30) | (n30 & n333) | (n14 & n333);

  c |= (n4 & 0x1) << 0;
  c |= (n126 & 0x1) << 1;
  c |= (n127 & 0x1) << 2;
  c |= (n183 & 0x1) << 3;
  c |= (n232 & 0x1) << 4;
  c |= (n282 & 0x1) << 5;
  c |= (n332 & 0x1) << 6;
  c |= (n382 & 0x1) << 7;
  c |= (n383 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 1.05 %
// MAE = 5.4 
// WCE% = 3.12 %
// WCE = 16 
// WCRE% = 800.00 %
// EP% = 94.14 %
// MRE% = 2.93 %
// MSE = 44 
// PDK45_PWR = 0.012 mW
// PDK45_AREA = 28.2 um2
// PDK45_DELAY = 0.27 ns


uint8_t add8u_5SY(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n16 = (b >> 0) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n108;
  uint8_t n282;
  uint8_t n283;
  uint8_t n332;
  uint8_t n333;
  uint8_t n382;
  uint8_t n383;

  n108 = ~((n20 | n24) & n24);
  n282 = (n10 ^ n26) ^ n24;
  n283 = (n10 & n26) | (n26 & n24) | (n10 & n24);
  n332 = (n12 ^ n28) ^ n283;
  n333 = (n12 & n28) | (n28 & n283) | (n12 & n283);
  n382 = (n14 ^ n30) ^ n333;
  n383 = (n14 & n30) | (n30 & n333) | (n14 & n333);

  c |= (n16 & 0x1) << 0;
  c |= (n4 & 0x1) << 1;
  c |= (n6 & 0x1) << 2;
  c |= (n108 & 0x1) << 3;
  c |= (n8 & 0x1) << 4;
  c |= (n282 & 0x1) << 5;
  c |= (n332 & 0x1) << 6;
  c |= (n382 & 0x1) << 7;
  c |= (n383 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.63 ns



/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 19.67 %
// MAE = 101 
// WCE% = 50.39 %
// WCE = 258 
// WCRE% = 6300.00 %
// EP% = 99.77 %
// MRE% = 49.16 %
// MSE = 14074 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.33 %
// MAE = 1.7 
// WCE% = 1.37 %
// WCE = 7.0 
// WCRE% = 50.00 %
// EP% = 71.88 %
// MRE% = 0.91 %
// MSE = 6.0 
// PDK45_PWR = 0.021 mW
// PDK45_AREA = 56.3 um2
// PDK45_DELAY = 0.39 ns


uint8_t add8u_5LT(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n18 = (b >> 1) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n34;
  uint8_t n36;
  uint8_t n50;
  uint8_t n66;
  uint8_t n82;
  uint8_t n85;
  uint8_t n126;
  uint8_t n132;
  uint8_t n182;
  uint8_t n183;
  uint8_t n232;
  uint8_t n233;
  uint8_t n282;
  uint8_t n283;
  uint8_t n332;
  uint8_t n333;
  uint8_t n382;
  uint8_t n383;

  n34 = ~(n2 & n4 & n18);
  n36 = ~(n34 | n22 | n6);
  n50 = n20 & n36;
  n66 = n4 & n50;
  n82 = n2 | n18;
  n85 = n66;
  n126 = ~(n22 & n85);
  n132 = n4 | n20;
  n182 = (n6 ^ n22) ^ n85;
  n183 = (n6 & n22) | (n22 & n85) | (n6 & n85);
  n232 = (n8 ^ n24) ^ n183;
  n233 = (n8 & n24) | (n24 & n183) | (n8 & n183);
  n282 = (n10 ^ n26) ^ n233;
  n283 = (n10 & n26) | (n26 & n233) | (n10 & n233);
  n332 = (n12 ^ n28) ^ n283;
  n333 = (n12 & n28) | (n28 & n283) | (n12 & n283);
  n382 = (n14 ^ n30) ^ n333;
  n383 = (n14 & n30) | (n30 & n333) | (n14 & n333);

  c |= (n126 & 0x1) << 0;
  c |= (n82 & 0x1) << 1;
  c |= (n132 & 0x1) << 2;
  c |= (n182 & 0x1) << 3;
  c |= (n232 & 0x1) << 4;
  c |= (n282 & 0x1) << 5;
  c |= (n332 & 0x1) << 6;
  c |= (n382 & 0x1) << 7;
  c |= (n383 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.68 %
// MAE = 3.5 
// WCE% = 2.93 %
// WCE = 15 
// WCRE% = 200.00 %
// EP% = 85.74 %
// MRE% = 1.80 %
// MSE = 24 
// PDK45_PWR = 0.017 mW
// PDK45_AREA = 53.0 um2
// PDK45_DELAY = 0.50 ns


uint8_t add8u_5HQ(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n33;
  uint8_t n40;
  uint8_t n43;
  uint8_t n49;
  uint8_t n52;
  uint8_t n78;
  uint8_t n127;
  uint8_t n132;
  uint8_t n144;
  uint8_t n182;
  uint8_t n232;
  uint8_t n233;
  uint8_t n282;
  uint8_t n283;
  uint8_t n332;
  uint8_t n333;
  uint8_t n382;
  uint8_t n383;

  n33 = ~(n22 & n20 & n6);
  n40 = n20 ^ n20;
  n43 = n10 | n33;
  n49 = ~(n43 | n30);
  n52 = n4 & n49;
  n78 = n52;
  n127 = ~n40;
  n132 = n4 | n20;
  n144 = ~n78;
  n182 = n6 | n22;
  n232 = (n8 ^ n24) ^ n78;
  n233 = (n8 & n24) | (n24 & n78) | (n8 & n78);
  n282 = (n10 ^ n26) ^ n233;
  n283 = (n10 & n26) | (n26 & n233) | (n10 & n233);
  n332 = (n12 ^ n28) ^ n283;
  n333 = (n12 & n28) | (n28 & n283) | (n12 & n283);
  n382 = (n14 ^ n30) ^ n333;
  n383 = (n14 & n30) | (n30 & n333) | (n14 & n333);

  c |= (n127 & 0x1) << 0;
  c |= (n144 & 0x1) << 1;
  c |= (n132 & 0x1) << 2;
  c |= (n182 & 0x1) << 3;
  c |= (n232 & 0x1) << 4;
  c |= (n282 & 0x1) << 5;
  c |= (n332 & 0x1) << 6;
  c |= (n382 & 0x1) << 7;
  c |= (n383 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.16 %
// MAE = 0.8 
// WCE% = 0.59 %
// WCE = 3.0 
// WCRE% = 50.00 %
// EP% = 43.75 %
// MRE% = 0.40 %
// MSE = 1.5 
// PDK45_PWR = 0.024 mW
// PDK45_AREA = 57.3 um2
// PDK45_DELAY = 0.47 ns


uint8_t add8u_5QL(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n0 = (a >> 0) & 0x1;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n16 = (b >> 0) & 0x1;
  uint8_t n18 = (b >> 1) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n33;
  uint8_t n35;
  uint8_t n37;
  uint8_t n38;
  uint8_t n43;
  uint8_t n46;
  uint8_t n50;
  uint8_t n56;
  uint8_t n58;
  uint8_t n59;
  uint8_t n68;
  uint8_t n69;
  uint8_t n77;
  uint8_t n78;
  uint8_t n79;
  uint8_t n84;
  uint8_t n86;
  uint8_t n87;
  uint8_t n92;
  uint8_t n96;
  uint8_t n97;
  uint8_t n110;
  uint8_t n122;
  uint8_t n127;
  uint8_t n134;
  uint8_t n152;
  uint8_t n162;
  uint8_t n171;
  uint8_t n180;
  uint8_t n198;
  uint8_t n199;
  uint8_t n226;
  uint8_t n240;
  uint8_t n244;
  uint8_t n254;
  uint8_t n272;
  uint8_t n391;
  uint8_t n394;
  uint8_t n404;
  uint8_t n412;
  uint8_t n413;
  uint8_t n423;

  n33 = n12 | n28;
  n35 = n0 | n16;
  n37 = ~(n4 & n20);
  n38 = ~n37;
  n43 = n38;
  n46 = ~(n18 | n2);
  n50 = n4 ^ n20;
  n56 = n43;
  n58 = (n6 ^ n22) ^ n56;
  n59 = (n6 & n22) | (n22 & n56) | (n6 & n56);
  n68 = n8 ^ n24;
  n69 = n8 & n24;
  n77 = n68;
  n78 = n10 ^ n26;
  n79 = n10 & n26;
  n84 = n59;
  n86 = n12 ^ n28;
  n87 = n12 & n28;
  n92 = n78;
  n96 = n14 ^ n30;
  n97 = n14 & n30;
  n110 = ~n46;
  n122 = n77;
  n127 = n69;
  n134 = n77 & n84;
  n152 = n127 | n134;
  n162 = n33 & n79;
  n171 = n86 & n78;
  n180 = n87 | n162;
  n198 = n152;
  n199 = n152;
  n226 = n92 & n199;
  n240 = ~n84;
  n244 = n79 | n226;
  n254 = n171 & n198;
  n272 = n180 | n254;
  n391 = ~(n240 ^ n122);
  n394 = n78 ^ n198;
  n404 = n86 ^ n244;
  n412 = n96 ^ n272;
  n413 = n96 & n272;
  n423 = n97 | n413;

  c |= (n35 & 0x1) << 0;
  c |= (n110 & 0x1) << 1;
  c |= (n50 & 0x1) << 2;
  c |= (n58 & 0x1) << 3;
  c |= (n391 & 0x1) << 4;
  c |= (n394 & 0x1) << 5;
  c |= (n404 & 0x1) << 6;
  c |= (n412 & 0x1) << 7;
  c |= (n423 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 1.97 %
// MAE = 10 
// WCE% = 6.25 %
// WCE = 32 
// WCRE% = 3100.00 %
// EP% = 96.97 %
// MRE% = 6.16 %
// MSE = 154 
// PDK45_PWR = 0.0095 mW
// PDK45_AREA = 25.8 um2
// PDK45_DELAY = 0.24 ns


uint8_t add8u_8LL(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_18 = 0;
  int sig_31 = ~(wa[5] ^ wb[5]);
  int sig_42 = wb[5] | wa[5];
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_45 = sig_43 & sig_42;
  int sig_46 = sig_43 ^ sig_42;
  int sig_47 = sig_44 | sig_45;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (wb[3] & 0x01) << 0; // default output
  y |=  (wa[4] & 0x01) << 1; // default output
  y |=  (sig_18 & 0x01) << 2; // default output
  y |=  (wa[4] & 0x01) << 3; // default output
  y |=  (sig_18 & 0x01) << 4; // default output
  y |=  (sig_31 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.039 %
// MAE = 0.2 
// WCE% = 0.20 %
// WCE = 1.0 
// WCRE% = 50.00 %
// EP% = 25.00 %
// MRE% = 0.14 %
// MSE = 0.2 
// PDK45_PWR = 0.029 mW
// PDK45_AREA = 63.8 um2
// PDK45_DELAY = 0.55 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 8.28 %
// MAE = 42 
// WCE% = 25.59 %
// WCE = 131 
// WCRE% = 10000.00 %
// EP% = 99.24 %
// MRE% = 25.01 %
// MSE = 2692 
// PDK45_PWR = 0.0015 mW
// PDK45_AREA = 8.0 um2
// PDK45_DELAY = 0.11 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 4.92 %
// MAE = 25 
// WCE% = 17.97 %
// WCE = 92 
// WCRE% = 6300.00 %
// EP% = 98.77 %
// MRE% = 14.58 %
// MSE = 960 
// PDK45_PWR = 0.0046 mW
// PDK45_AREA = 15.0 um2
// PDK45_DELAY = 0.17 ns


uint8_t add8u_006(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_16 = wa[6] & wb[6];
  int sig_26 = 0;
  int sig_32 = ~(wa[6] | wb[6]);
  int sig_45 = wb[7];
  int sig_47 = wb[6] | wa[6];
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_52 & 0x01) << 0; // default output
  y |=  (wa[3] & 0x01) << 1; // default output
  y |=  (wa[7] & 0x01) << 2; // default output
  y |=  (sig_26 & 0x01) << 3; // default output
  y |=  (sig_45 & 0x01) << 4; // default output
  y |=  (sig_16 & 0x01) << 5; // default output
  y |=  (sig_32 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.63 ns


uint64_t add8u_0FP(uint64_t a, uint64_t b) {
  uint64_t o = 0;
  int n_198=0, n_36=0, n_189=0, n_195=0, n_42=0, n_192=0, n_23=0, n_21=0, n_20=0, n_27=0;
  int n_40=0, n_24=0, n_48=0, n_147=0, n_66=0, n_60=0, n_201=0, n_108=0, n_129=0, n_39=0;
  int n_207=0, n_204=0, n_120=0, n_8=0, n_9=0, n_4=0, n_5=0, n_6=0, n_7=0, n_0=0;
  int n_1=0, n_2=0, n_3=0, n_33=0, n_34=0, n_18=0, n_19=0, n_16=0, n_17=0, n_14=0;
  int n_15=0, n_12=0, n_13=0, n_10=0, n_11=0, n_114=0, n_45=0, n_78=0, n_93=0, n_111=0;
  int n_150=0, n_75=0, n_51=0, n_57=0, n_54=0, n_46=0, n_213=0, n_210=0, n_132=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 1) & 0x1;
  n_2 = (a >> 2) & 0x1;
  n_3 = (a >> 3) & 0x1;
  n_4 = (a >> 4) & 0x1;
  n_5 = (a >> 5) & 0x1;
  n_6 = (a >> 6) & 0x1;
  n_7 = (a >> 7) & 0x1;
  n_8 = (b >> 0) & 0x1;
  n_9 = (b >> 1) & 0x1;
  n_10 = (b >> 2) & 0x1;
  n_11 = (b >> 3) & 0x1;
  n_12 = (b >> 4) & 0x1;
  n_13 = (b >> 5) & 0x1;
  n_14 = (b >> 6) & 0x1;
  n_15 = (b >> 7) & 0x1;
  n_16 = n_2 | n_10;
  n_17 = n_9 | n_1;
  n_18 = n_0 & n_8;
  n_19 = n_13 | n_5;
  n_20 = n_2 & n_10;
  n_21 = n_1 ^ n_9;
  n_23 = n_18 & n_17;
  n_24 = n_1 & n_9;
  n_27 = n_10 ^ n_2;
  n_33 = n_3 ^ n_11;
  n_34 = n_14 | n_6;
  n_36 = n_3 & n_11;
  n_39 = n_4 ^ n_12;
  n_40 = n_11 | n_3;
  n_42 = n_4 & n_12;
  n_45 = n_5 ^ n_13;
  n_46 = n_0 ^ n_8;
  n_48 = n_5 & n_13;
  n_51 = n_6 ^ n_14;
  n_54 = n_6 & n_14;
  n_57 = n_7 ^ n_15;
  n_60 = n_7 & n_15;
  n_66 = n_23 | n_24;
  n_75 = n_66 & n_16;
  n_78 = n_20 | n_75;
  n_93 = n_78 & n_40;
  n_108 = n_93 | n_36;
  n_111 = n_108 & n_39;
  n_114 = ~(n_111 | n_42);
  n_120 = ~n_114;
  n_129 = n_120 & n_19;
  n_132 = n_129 | n_48;
  n_147 = n_132 & n_34;
  n_150 = n_147 | n_54;
  n_189 = n_21 ^ n_18;
  n_192 = n_27 ^ n_66;
  n_195 = n_33 ^ n_78;
  n_198 = n_39 ^ n_108;
  n_201 = n_45 ^ n_120;
  n_204 = n_51 ^ n_132;
  n_207 = n_57 ^ n_150;
  n_210 = n_57 & n_150;
  n_213 = n_60 | n_210;
  o |= (n_46 & 0x01) << 0;
  o |= (n_189 & 0x01) << 1;
  o |= (n_192 & 0x01) << 2;
  o |= (n_195 & 0x01) << 3;
  o |= (n_198 & 0x01) << 4;
  o |= (n_201 & 0x01) << 5;
  o |= (n_204 & 0x01) << 6;
  o |= (n_207 & 0x01) << 7;
  o |= (n_213 & 0x01) << 8;
  return o;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 19.67 %
// MAE = 101 
// WCE% = 50.39 %
// WCE = 258 
// WCRE% = 6300.00 %
// EP% = 99.77 %
// MRE% = 49.16 %
// MSE = 14074 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.39 %
// MAE = 2.0 
// WCE% = 1.56 %
// WCE = 8.0 
// WCRE% = 66.67 %
// EP% = 46.88 %
// MRE% = 1.04 %
// MSE = 10 
// PDK45_PWR = 0.023 mW
// PDK45_AREA = 65.7 um2
// PDK45_DELAY = 0.39 ns


uint8_t add8u_8MK(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_17 = wa[0] & wb[0];
  int sig_18 = wa[1] ^ wb[1];
  int sig_19 = wa[1] & wb[1];
  int sig_21 = sig_18 | sig_17;
  int sig_22 = sig_19 | wb[2];
  int sig_25 = wa[3] ^ wb[3];
  int sig_26 = wa[2] | sig_22;
  int sig_29 = wa[3] & wb[3];
  int sig_30 = wa[0] ^ wb[0];
  int sig_32 = sig_29;
  int sig_33 = wa[4] ^ wb[4];
  int sig_34 = wa[4] & wb[4];
  int sig_35 = sig_33 & sig_32;
  int sig_36 = sig_33 ^ sig_32;
  int sig_37 = sig_34 | sig_35;
  int sig_38 = wa[5] ^ wb[5];
  int sig_39 = wa[5] & wb[5];
  int sig_40 = sig_38 & sig_37;
  int sig_41 = sig_38 ^ sig_37;
  int sig_42 = sig_39 | sig_40;
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_45 = sig_43 & sig_42;
  int sig_46 = sig_43 ^ sig_42;
  int sig_47 = sig_44 | sig_45;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_30 & 0x01) << 0; // default output
  y |=  (sig_21 & 0x01) << 1; // default output
  y |=  (sig_26 & 0x01) << 2; // default output
  y |=  (sig_25 & 0x01) << 3; // default output
  y |=  (sig_36 & 0x01) << 4; // default output
  y |=  (sig_41 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 3.20 %
// MAE = 16 
// WCE% = 19.34 %
// WCE = 99 
// WCRE% = 1000.00 %
// EP% = 89.23 %
// MRE% = 7.47 %
// MSE = 745 
// PDK45_PWR = 0.0092 mW
// PDK45_AREA = 35.2 um2
// PDK45_DELAY = 0.17 ns


uint8_t add8u_8BB(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_21 = wa[2] ^ wb[2];
  int sig_22 = wa[4] | wb[4];
  int sig_23 = wa[0] | wb[0];
  int sig_35 = ~((int)0);
  int sig_37 = wa[5] ^ wb[5];
  int sig_39 = wa[5] & wb[5];
  int sig_42 = sig_39;
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_46 = sig_43 | sig_42;
  int sig_47 = sig_44;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_23 & 0x01) << 0; // default output
  y |=  (sig_35 & 0x01) << 1; // default output
  y |=  (sig_21 & 0x01) << 2; // default output
  y |=  (sig_35 & 0x01) << 3; // default output
  y |=  (sig_22 & 0x01) << 4; // default output
  y |=  (sig_37 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.74 %
// MAE = 3.8 
// WCE% = 3.71 %
// WCE = 19 
// WCRE% = 50.00 %
// EP% = 57.81 %
// MRE% = 1.89 %
// MSE = 46 
// PDK45_PWR = 0.019 mW
// PDK45_AREA = 56.8 um2
// PDK45_DELAY = 0.31 ns


uint8_t add8u_8FF(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_18 = wb[2] ^ wa[2];
  int sig_20 = wb[0] | wa[0];
  int sig_24 = wa[2] & wb[2];
  int sig_25 = wb[1] | wa[1];
  int sig_27 = sig_24;
  int sig_28 = wa[3] ^ wb[3];
  int sig_29 = wa[3] & wb[3];
  int sig_31 = sig_28 | sig_27;
  int sig_32 = sig_29;
  int sig_33 = wa[4] ^ wb[4];
  int sig_34 = wa[4] & wb[4];
  int sig_36 = sig_33 | sig_32;
  int sig_37 = sig_34;
  int sig_38 = wa[5] ^ wb[5];
  int sig_39 = wa[5] & wb[5];
  int sig_40 = sig_38 & sig_37;
  int sig_41 = sig_38 ^ sig_37;
  int sig_42 = sig_39 | sig_40;
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_45 = sig_43 & sig_42;
  int sig_46 = sig_43 ^ sig_42;
  int sig_47 = sig_44 | sig_45;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_20 & 0x01) << 0; // default output
  y |=  (sig_25 & 0x01) << 1; // default output
  y |=  (sig_18 & 0x01) << 2; // default output
  y |=  (sig_31 & 0x01) << 3; // default output
  y |=  (sig_36 & 0x01) << 4; // default output
  y |=  (sig_41 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.039 %
// MAE = 0.2 
// WCE% = 0.20 %
// WCE = 1.0 
// WCRE% = 50.00 %
// EP% = 25.00 %
// MRE% = 0.14 %
// MSE = 0.2 
// PDK45_PWR = 0.029 mW
// PDK45_AREA = 63.8 um2
// PDK45_DELAY = 0.55 ns


uint8_t add8u_5R3(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n0 = (a >> 0) & 0x1;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n16 = (b >> 0) & 0x1;
  uint8_t n18 = (b >> 1) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n76;
  uint8_t n82;
  uint8_t n83;
  uint8_t n113;
  uint8_t n132;
  uint8_t n133;
  uint8_t n174;
  uint8_t n182;
  uint8_t n183;
  uint8_t n208;
  uint8_t n232;
  uint8_t n233;
  uint8_t n282;
  uint8_t n283;
  uint8_t n332;
  uint8_t n333;
  uint8_t n382;
  uint8_t n383;

  n76 = n0 | n16;
  n82 = n2 ^ n18;
  n83 = n2 & n18;
  n113 = n83;
  n132 = (n4 ^ n20) ^ n113;
  n133 = (n4 & n20) | (n20 & n113) | (n4 & n113);
  n174 = n133;
  n182 = (n6 ^ n22) ^ n174;
  n183 = (n6 & n22) | (n22 & n174) | (n6 & n174);
  n208 = n183;
  n232 = (n8 ^ n24) ^ n208;
  n233 = (n8 & n24) | (n24 & n208) | (n8 & n208);
  n282 = (n10 ^ n26) ^ n233;
  n283 = (n10 & n26) | (n26 & n233) | (n10 & n233);
  n332 = (n12 ^ n28) ^ n283;
  n333 = (n12 & n28) | (n28 & n283) | (n12 & n283);
  n382 = (n14 ^ n30) ^ n333;
  n383 = (n14 & n30) | (n30 & n333) | (n14 & n333);

  c |= (n76 & 0x1) << 0;
  c |= (n82 & 0x1) << 1;
  c |= (n132 & 0x1) << 2;
  c |= (n182 & 0x1) << 3;
  c |= (n232 & 0x1) << 4;
  c |= (n282 & 0x1) << 5;
  c |= (n332 & 0x1) << 6;
  c |= (n382 & 0x1) << 7;
  c |= (n383 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 1.56 %
// MAE = 8.0 
// WCE% = 6.25 %
// WCE = 32 
// WCRE% = 400.00 %
// EP% = 78.91 %
// MRE% = 3.97 %
// MSE = 124 
// PDK45_PWR = 0.014 mW
// PDK45_AREA = 45.5 um2
// PDK45_DELAY = 0.24 ns


uint8_t add8u_8KJ(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_16 = wa[0] ^ wb[0];
  int sig_17 = wa[0] & wb[0];
  int sig_18 = wa[1] ^ wb[1];
  int sig_20 = wb[4] | wa[4];
  int sig_21 = sig_18 | sig_17;
  int sig_31 = wb[5] ^ wa[5];
  int sig_37 = ~((int)0);
  int sig_39 = wa[5] & wb[5];
  int sig_41 = wa[3] | wb[3];
  int sig_42 = sig_39;
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_45 = sig_43 & sig_42;
  int sig_46 = sig_43 ^ sig_42;
  int sig_47 = sig_44 | sig_45;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_16 & 0x01) << 0; // default output
  y |=  (sig_21 & 0x01) << 1; // default output
  y |=  (sig_37 & 0x01) << 2; // default output
  y |=  (sig_41 & 0x01) << 3; // default output
  y |=  (sig_20 & 0x01) << 4; // default output
  y |=  (sig_31 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 1.54 %
// MAE = 7.9 
// WCE% = 8.59 %
// WCE = 44 
// WCRE% = 66.67 %
// EP% = 59.96 %
// MRE% = 3.76 %
// MSE = 190 
// PDK45_PWR = 0.018 mW
// PDK45_AREA = 65.2 um2
// PDK45_DELAY = 0.24 ns


uint8_t add8u_8FD(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_17 = wa[0] & wb[0];
  int sig_18 = wa[1] | wb[1];
  int sig_21 = sig_18 | sig_17;
  int sig_24 = wa[2] & wb[2];
  int sig_27 = sig_24;
  int sig_28 = wa[3] ^ wb[3];
  int sig_29 = wa[3] & wb[3];
  int sig_31 = sig_28 | sig_27;
  int sig_32 = sig_29;
  int sig_33 = wa[4] ^ wb[4];
  int sig_34 = wa[4] & wb[4];
  int sig_35 = wa[0] ^ wb[0];
  int sig_36 = sig_33 | sig_32;
  int sig_37 = sig_34;
  int sig_38 = wa[5] ^ wb[5];
  int sig_39 = wa[5] & wb[5];
  int sig_40 = wb[2] ^ wa[2];
  int sig_41 = sig_38 | sig_37;
  int sig_42 = sig_39;
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_45 = sig_43 & sig_42;
  int sig_46 = sig_43 ^ sig_42;
  int sig_47 = sig_44 | sig_45;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (sig_35 & 0x01) << 0; // default output
  y |=  (sig_21 & 0x01) << 1; // default output
  y |=  (sig_40 & 0x01) << 2; // default output
  y |=  (sig_31 & 0x01) << 3; // default output
  y |=  (sig_36 & 0x01) << 4; // default output
  y |=  (sig_41 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.16 %
// MAE = 0.8 
// WCE% = 0.98 %
// WCE = 5.0 
// WCRE% = 50.00 %
// EP% = 34.38 %
// MRE% = 0.40 %
// MSE = 2.5 
// PDK45_PWR = 0.026 mW
// PDK45_AREA = 63.8 um2
// PDK45_DELAY = 0.47 ns


uint8_t add8u_5NQ(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n0 = (a >> 0) & 0x1;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n16 = (b >> 0) & 0x1;
  uint8_t n18 = (b >> 1) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n32;
  uint8_t n40;
  uint8_t n41;
  uint8_t n50;
  uint8_t n51;
  uint8_t n58;
  uint8_t n59;
  uint8_t n68;
  uint8_t n69;
  uint8_t n78;
  uint8_t n79;
  uint8_t n86;
  uint8_t n87;
  uint8_t n88;
  uint8_t n96;
  uint8_t n97;
  uint8_t n111;
  uint8_t n125;
  uint8_t n134;
  uint8_t n143;
  uint8_t n152;
  uint8_t n162;
  uint8_t n170;
  uint8_t n180;
  uint8_t n198;
  uint8_t n199;
  uint8_t n208;
  uint8_t n209;
  uint8_t n226;
  uint8_t n227;
  uint8_t n236;
  uint8_t n245;
  uint8_t n254;
  uint8_t n293;
  uint8_t n320;
  uint8_t n328;
  uint8_t n338;
  uint8_t n348;
  uint8_t n366;
  uint8_t n376;
  uint8_t n384;
  uint8_t n394;
  uint8_t n404;
  uint8_t n412;
  uint8_t n413;
  uint8_t n422;

  n32 = n0 | n16;
  n40 = n2 ^ n18;
  n41 = n2 & n18;
  n50 = n4 ^ n20;
  n51 = n4 & n20;
  n58 = n6 ^ n22;
  n59 = n6 & n22;
  n68 = n8 ^ n24;
  n69 = n8 & n24;
  n78 = n10 ^ n26;
  n79 = n10 & n26;
  n86 = n12 ^ n28;
  n87 = n12 & n28;
  n88 = n24 | n8;
  n96 = n14 ^ n30;
  n97 = n14 & n30;
  n111 = n10 & n26;
  n125 = n51;
  n134 = n88 & n59;
  n143 = n68 & n58;
  n152 = n69 | n134;
  n162 = n86 & n79;
  n170 = n86 & n78;
  n180 = n87 | n162;
  n198 = n125;
  n199 = n125;
  n208 = n143 & n125;
  n209 = n143 & n125;
  n226 = n152 | n209;
  n227 = n152 | n209;
  n236 = n170 & n152;
  n245 = n170 & n208;
  n254 = n180 | n236;
  n293 = n254 | n245;
  n320 = n58 & n199;
  n328 = n59 | n320;
  n338 = n78 & n227;
  n348 = n111 | n338;
  n366 = n50 | n41;
  n376 = n58 ^ n198;
  n384 = n68 ^ n328;
  n394 = n78 ^ n226;
  n404 = n86 ^ n348;
  n412 = n96 ^ n293;
  n413 = n96 & n293;
  n422 = n97 | n413;

  c |= (n32 & 0x1) << 0;
  c |= (n40 & 0x1) << 1;
  c |= (n366 & 0x1) << 2;
  c |= (n376 & 0x1) << 3;
  c |= (n384 & 0x1) << 4;
  c |= (n394 & 0x1) << 5;
  c |= (n404 & 0x1) << 6;
  c |= (n412 & 0x1) << 7;
  c |= (n422 & 0x1) << 8;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.033 mW
// PDK45_AREA = 70.4 um2
// PDK45_DELAY = 0.63 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.21 %
// MAE = 1.1 
// WCE% = 0.59 %
// WCE = 3.0 
// WCRE% = 100.00 %
// EP% = 75.00 %
// MRE% = 0.61 %
// MSE = 2.0 
// PDK45_PWR = 0.023 mW
// PDK45_AREA = 52.6 um2
// PDK45_DELAY = 0.47 ns


uint8_t add8u_01R(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_18 = ~((int)0);
  int sig_22 = wb[2] ^ wa[2];
  int sig_24 = wa[2] & wb[2];
  int sig_27 = sig_24;
  int sig_28 = wa[3] ^ wb[3];
  int sig_29 = wa[3] & wb[3];
  int sig_30 = sig_28 & sig_27;
  int sig_31 = sig_28 ^ sig_27;
  int sig_32 = sig_29 | sig_30;
  int sig_33 = wa[4] ^ wb[4];
  int sig_34 = wa[4] & wb[4];
  int sig_35 = sig_33 & sig_32;
  int sig_36 = sig_33 ^ sig_32;
  int sig_37 = sig_34 | sig_35;
  int sig_38 = wa[5] ^ wb[5];
  int sig_39 = wa[5] & wb[5];
  int sig_40 = sig_38 & sig_37;
  int sig_41 = sig_38 ^ sig_37;
  int sig_42 = sig_39 | sig_40;
  int sig_43 = wa[6] ^ wb[6];
  int sig_44 = wa[6] & wb[6];
  int sig_45 = sig_43 & sig_42;
  int sig_46 = sig_43 ^ sig_42;
  int sig_47 = sig_44 | sig_45;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & sig_47;
  int sig_51 = sig_48 ^ sig_47;
  int sig_52 = sig_49 | sig_50;
  y |=  (wb[1] & 0x01) << 0; // default output
  y |=  (sig_18 & 0x01) << 1; // default output
  y |=  (sig_22 & 0x01) << 2; // default output
  y |=  (sig_31 & 0x01) << 3; // default output
  y |=  (sig_36 & 0x01) << 4; // default output
  y |=  (sig_41 & 0x01) << 5; // default output
  y |=  (sig_46 & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.88 %
// MAE = 4.5 
// WCE% = 2.34 %
// WCE = 12 
// WCRE% = 1100.00 %
// EP% = 93.75 %
// MRE% = 2.54 %
// MSE = 30 
// PDK45_PWR = 0.016 mW
// PDK45_AREA = 53.0 um2
// PDK45_DELAY = 0.42 ns


uint8_t add8u_1DK(uint8_t a, uint8_t b) {
  uint64_t o = 0;
  int n_304=0, n_411=0, n_410=0, n_23=0, n_22=0, n_21=0, n_20=0, n_27=0, n_26=0, n_25=0;
  int n_24=0, n_262=0, n_29=0, n_28=0, n_263=0, n_240=0, n_82=0, n_346=0, n_389=0, n_388=0;
  int n_284=0, n_285=0, n_326=0, n_38=0, n_127=0, n_126=0, n_220=0, n_241=0, n_347=0, n_221=0;
  int n_8=0, n_9=0, n_368=0, n_159=0, n_4=0, n_5=0, n_6=0, n_7=0, n_0=0, n_1=0;
  int n_2=0, n_3=0, n_30=0, n_31=0, n_117=0, n_18=0, n_19=0, n_16=0, n_17=0, n_14=0;
  int n_15=0, n_12=0, n_13=0, n_10=0, n_11=0, n_158=0, n_45=0, n_94=0, n_95=0, n_44=0;
  int n_178=0, n_179=0, n_136=0, n_137=0, n_305=0, n_116=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 0) & 0x1;
  n_2 = (a >> 1) & 0x1;
  n_3 = (a >> 1) & 0x1;
  n_4 = (a >> 2) & 0x1;
  n_5 = (a >> 2) & 0x1;
  n_6 = (a >> 3) & 0x1;
  n_7 = (a >> 3) & 0x1;
  n_8 = (a >> 4) & 0x1;
  n_9 = (a >> 4) & 0x1;
  n_10 = (a >> 5) & 0x1;
  n_11 = (a >> 5) & 0x1;
  n_12 = (a >> 6) & 0x1;
  n_13 = (a >> 6) & 0x1;
  n_14 = (a >> 7) & 0x1;
  n_15 = (a >> 7) & 0x1;
  n_16 = (b >> 0) & 0x1;
  n_17 = (b >> 0) & 0x1;
  n_18 = (b >> 1) & 0x1;
  n_19 = (b >> 1) & 0x1;
  n_20 = (b >> 2) & 0x1;
  n_21 = (b >> 2) & 0x1;
  n_22 = (b >> 3) & 0x1;
  n_23 = (b >> 3) & 0x1;
  n_24 = (b >> 4) & 0x1;
  n_25 = (b >> 4) & 0x1;
  n_26 = (b >> 5) & 0x1;
  n_27 = (b >> 5) & 0x1;
  n_28 = (b >> 6) & 0x1;
  n_29 = (b >> 6) & 0x1;
  n_30 = (b >> 7) & 0x1;
  n_31 = (b >> 7) & 0x1;
  n_38 = n_6 & n_4;
  n_44 = n_22 ^ n_22;
  n_45 = n_22 & n_22;
  n_82 = n_38 & n_22;
  n_94 = n_20 & n_82;
  n_95 = n_94;
  n_116 = n_8 ^ n_24;
  n_117 = n_8 & n_24;
  n_126 = ~n_44;
  n_127 = n_126;
  n_136 = n_10 ^ n_26 ^n_117;
  n_137 = (n_10 & n_26) | (n_26 & n_117) | (n_10 & n_117);
  n_158 = n_12 ^ n_28 ^n_137;
  n_159 = (n_12 & n_28) | (n_28 & n_137) | (n_12 & n_137);
  n_178 = n_14 ^ n_30 ^n_159;
  n_179 = (n_14 & n_30) | (n_30 & n_159) | (n_14 & n_159);
  n_220 = ~(n_116 & n_95);
  n_221 = n_220;
  n_240 = ~n_221;
  n_241 = n_240;
  n_262 = n_10 ^ n_26 ^n_127;
  n_263 = (n_10 & n_26) | (n_26 & n_127) | (n_10 & n_127);
  n_284 = n_12 ^ n_28 ^n_263;
  n_285 = (n_12 & n_28) | (n_28 & n_263) | (n_12 & n_263);
  n_304 = n_14 ^ n_30 ^n_285;
  n_305 = (n_14 & n_30) | (n_30 & n_285) | (n_14 & n_285);
  n_326 = (n_116 & ~n_95) | (n_220 & n_95);
  n_346 = (n_136 & ~n_240) | (n_262 & n_240);
  n_347 = n_346;
  n_368 = (n_158 & ~n_240) | (n_284 & n_240);
  n_388 = (n_178 & ~n_241) | (n_304 & n_241);
  n_389 = n_388;
  n_410 = (n_179 & ~n_241) | (n_305 & n_241);
  n_411 = n_410;
  o |= (n_6 & 0x01) << 0;
  o |= (n_18 & 0x01) << 1;
  o |= (n_126 & 0x01) << 2;
  o |= (n_127 & 0x01) << 3;
  o |= (n_326 & 0x01) << 4;
  o |= (n_347 & 0x01) << 5;
  o |= (n_368 & 0x01) << 6;
  o |= (n_389 & 0x01) << 7;
  o |= (n_411 & 0x01) << 8;
  return o;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 6.74 %
// MAE = 34 
// WCE% = 19.14 %
// WCE = 98 
// WCRE% = 3400.00 %
// EP% = 99.22 %
// MRE% = 17.40 %
// MSE = 1688 
// PDK45_PWR = 0.0032 mW
// PDK45_AREA = 8.9 um2
// PDK45_DELAY = 0.12 ns


uint8_t add8u_8AS(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_19 = ~((int)0);
  int sig_24 = ~((int)0);
  int sig_35 = 0;
  int sig_48 = wa[7] ^ wb[7];
  int sig_49 = wa[7] & wb[7];
  int sig_50 = sig_48 & wb[6];
  int sig_51 = sig_48 ^ wb[6];
  int sig_52 = sig_49 | sig_50;
  y |=  (wb[0] & 0x01) << 0; // default output
  y |=  (sig_24 & 0x01) << 1; // default output
  y |=  (wa[5] & 0x01) << 2; // default output
  y |=  (wa[4] & 0x01) << 3; // default output
  y |=  (sig_35 & 0x01) << 4; // default output
  y |=  (sig_19 & 0x01) << 5; // default output
  y |=  (wa[6] & 0x01) << 6; // default output
  y |=  (sig_51 & 0x01) << 7; // default output
  y |=  (sig_52 & 0x01) << 8; // default output
   return y;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.098 %
// MAE = 0.5 
// WCE% = 0.20 %
// WCE = 1.0 
// WCRE% = 100.00 %
// EP% = 50.00 %
// MRE% = 0.27 %
// MSE = 0.5 
// PDK45_PWR = 0.028 mW
// PDK45_AREA = 61.5 um2
// PDK45_DELAY = 0.55 ns

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 1.64 %
// MAE = 8.4 
// WCE% = 4.30 %
// WCE = 22 
// WCRE% = 100.00 %
// EP% = 96.88 %
// MRE% = 4.57 %
// MSE = 100 
// PDK45_PWR = 0.012 mW
// PDK45_AREA = 26.8 um2
// PDK45_DELAY = 0.27 ns


uint8_t add8u_2XT(uint8_t a, uint8_t b) {
  uint64_t o = 0;
  int n_193=0, n_44=0, n_47=0, n_40=0, n_42=0, n_187=0, n_49=0, n_149=0, n_147=0, n_144=0;
  int n_209=0, n_182=0, n_180=0, n_8=0, n_9=0, n_184=0, n_4=0, n_5=0, n_6=0, n_7=0;
  int n_0=0, n_1=0, n_2=0, n_3=0, n_37=0, n_38=0, n_14=0, n_15=0, n_12=0, n_13=0;
  int n_10=0, n_11=0, n_116=0, n_178=0, n_118=0, n_156=0, n_213=0, n_211=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 1) & 0x1;
  n_2 = (a >> 2) & 0x1;
  n_3 = (a >> 3) & 0x1;
  n_4 = (a >> 4) & 0x1;
  n_5 = (a >> 5) & 0x1;
  n_6 = (a >> 6) & 0x1;
  n_7 = (a >> 7) & 0x1;
  n_8 = (b >> 0) & 0x1;
  n_9 = (b >> 1) & 0x1;
  n_10 = (b >> 2) & 0x1;
  n_11 = (b >> 3) & 0x1;
  n_12 = (b >> 4) & 0x1;
  n_13 = (b >> 5) & 0x1;
  n_14 = (b >> 6) & 0x1;
  n_15 = (b >> 7) & 0x1;
  n_37 = n_7 | n_15;
  n_38 = n_5 ^ n_13;
  n_40 = n_5 & n_13;
  n_42 = n_6 ^ n_14;
  n_44 = n_6 & n_14;
  n_47 = ~(n_7 ^ n_15);
  n_49 = n_7 & n_15;
  n_116 = n_38 & n_12;
  n_118 = ~(n_40 | n_116);
  n_144 = n_42 & n_116;
  n_147 = n_42 & n_40;
  n_149 = n_44 | n_147;
  n_156 = ~(n_149 | n_144);
  n_178 = n_37 & n_144;
  n_180 = n_37 & n_147;
  n_182 = n_37 & n_44;
  n_184 = n_49 | n_182;
  n_187 = n_180 | n_178;
  n_193 = n_184 | n_187;
  n_209 = n_38 ^ n_12;
  n_211 = ~(n_42 ^ n_118);
  n_213 = n_47 ^ n_156;
  o |= (n_0 & 0x01) << 0;
  o |= (n_5 & 0x01) << 1;
  o |= (n_5 & 0x01) << 2;
  o |= (n_11 & 0x01) << 3;
  o |= (n_4 & 0x01) << 4;
  o |= (n_209 & 0x01) << 5;
  o |= (n_211 & 0x01) << 6;
  o |= (n_213 & 0x01) << 7;
  o |= (n_193 & 0x01) << 8;
  return o;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.45 %
// MAE = 2.3 
// WCE% = 1.37 %
// WCE = 7.0 
// WCRE% = 300.00 %
// EP% = 87.50 %
// MRE% = 1.23 %
// MSE = 8.0 
// PDK45_PWR = 0.019 mW
// PDK45_AREA = 43.6 um2
// PDK45_DELAY = 0.39 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek and R. Hrbacek, "Role of circuit representation in evolutionary design of energy-efficient approximate circuits" in IET Computers & Digital Techniques, vol. 12, no. 4, pp. 139-149, 7 2018. doi: 10.1049/iet-cdt.2017.0188 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 3.40 %
// MAE = 17 
// WCE% = 9.96 %
// WCE = 51 
// WCRE% = 1500.00 %
// EP% = 98.44 %
// MRE% = 9.24 %
// MSE = 432 
// PDK45_PWR = 0.0075 mW
// PDK45_AREA = 17.8 um2
// PDK45_DELAY = 0.19 ns


uint8_t add8u_0H4(uint8_t a, uint8_t b) {
  uint64_t o = 0;
  int n_198=0, n_44=0, n_42=0, n_149=0, n_147=0, n_12=0, n_182=0, n_180=0, n_8=0, n_9=0;
  int n_184=0, n_4=0, n_5=0, n_6=0, n_7=0, n_0=0, n_1=0, n_2=0, n_3=0, n_37=0;
  int n_38=0, n_14=0, n_15=0, n_16=0, n_13=0, n_10=0, n_11=0, n_213=0, n_211=0;
  n_0 = (a >> 0) & 0x1;
  n_1 = (a >> 1) & 0x1;
  n_2 = (a >> 2) & 0x1;
  n_3 = (a >> 3) & 0x1;
  n_4 = (a >> 4) & 0x1;
  n_5 = (a >> 5) & 0x1;
  n_6 = (a >> 6) & 0x1;
  n_7 = (a >> 7) & 0x1;
  n_8 = (b >> 0) & 0x1;
  n_9 = (b >> 1) & 0x1;
  n_10 = (b >> 2) & 0x1;
  n_11 = (b >> 3) & 0x1;
  n_12 = (b >> 4) & 0x1;
  n_13 = (b >> 5) & 0x1;
  n_14 = (b >> 6) & 0x1;
  n_15 = (b >> 7) & 0x1;
  n_16 = n_15 | n_7;
  n_37 = n_7 & n_15;
  n_38 = n_15 ^ n_7;
  n_42 = n_6 ^ n_14;
  n_44 = n_6 & n_14;
  n_147 = n_42 & n_5;
  n_149 = ~(n_44 | n_147);
  n_180 = n_16 & n_147;
  n_182 = n_16 & n_44;
  n_184 = n_37 | n_182;
  n_198 = n_184 | n_180;
  n_211 = n_42 ^ n_5;
  n_213 = ~(n_38 ^ n_149);
  o |= (n_4 & 0x01) << 0;
  o |= (n_7 & 0x01) << 1;
  o |= (n_9 & 0x01) << 2;
  o |= (n_4 & 0x01) << 3;
  o |= (n_8 & 0x01) << 4;
  o |= (n_13 & 0x01) << 5;
  o |= (n_211 & 0x01) << 6;
  o |= (n_213 & 0x01) << 7;
  o |= (n_198 & 0x01) << 8;
  return o;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s):  
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 14.06 %
// MAE = 72 
// WCE% = 42.38 %
// WCE = 217 
// WCRE% = 1300.00 %
// EP% = 99.61 %
// MRE% = 35.29 %
// MSE = 7477 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


uint8_t add8u_04A(uint8_t a, uint8_t b) {
  int wa[8];
  int wb[8];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  wa[7] = (a >> 7) & 0x01;
  wb[7] = (b >> 7) & 0x01;
  int sig_22 = ~((int)0);
  int sig_23 = ~((int)0);
  int sig_24 = 0;
  int sig_29 = wa[7];
  y |=  (sig_29 & 0x01) << 0; // default output
  y |=  (wa[0] & 0x01) << 1; // default output
  y |=  (sig_23 & 0x01) << 2; // default output
  y |=  (sig_22 & 0x01) << 3; // default output
  y |=  (wa[5] & 0x01) << 4; // default output
  y |=  (wa[3] & 0x01) << 5; // default output
  y |=  (sig_24 & 0x01) << 6; // default output
  y |=  (wb[7] & 0x01) << 7; // default output
  y |=  (sig_29 & 0x01) << 8; // default output
   return y;
}

uint64_t mult8_cgp14_wc139_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_23, dout_27, dout_29, dout_30, dout_31, dout_43, dout_44, dout_45, dout_50, dout_51, dout_52, dout_53, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_93, dout_94, dout_95, dout_96, dout_108, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_133, dout_134, dout_136, dout_137, dout_138, dout_139, dout_146, dout_150, dout_151, dout_153, dout_155, dout_156, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_27=((B >> 3)&1)&((A >> 3)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_43=((A >> 0)&1)&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_108=((A >> 3)&1)&((B >> 2)&1);
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_50;
   dout_120=dout_117^dout_50;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_133=((B >> 3)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_146=((B >> 1)&1)&((A >> 4)&1);
   dout_150=dout_27|dout_134;
   dout_151=dout_108&dout_150;
   dout_153=dout_150^dout_108;
   dout_155=dout_120^dout_133;
   dout_156=dout_120&dout_133;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_146;
   dout_191=dout_188^dout_146;
   dout_192=dout_189|dout_190;
   dout_193=dout_155^dout_177;
   dout_194=dout_155&dout_177;
   dout_195=dout_193&dout_151;
   dout_196=dout_193^dout_151;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_156;
   dout_201=dout_198^dout_156;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_228=dout_191&((B >> 0)&1);
   dout_229=dout_226^((B >> 0)&1);
   dout_230=dout_218|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (((A >> 4)&1)&1) << 0;
   O |= (dout_179&1) << 1;
   O |= (dout_172&1) << 2;
   O |= (dout_88&1) << 3;
   O |= (((A >> 0)&1)&1) << 4;
   O |= (((B >> 3)&1)&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep65536_wc493_rcam(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_20, dout_29, dout_31, dout_64, dout_65, dout_71, dout_72, dout_73, dout_75, dout_96, dout_97, dout_101, dout_102, dout_104, dout_105, dout_106, dout_107, dout_109, dout_110, dout_115, dout_116, dout_117, dout_118, dout_136, dout_137, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_159, dout_160, dout_161, dout_162, dout_163, dout_176, dout_177, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_217, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_261, dout_262, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_20=((B >> 6)&1)&((A >> 1)&1);
   dout_29=((B >> 7)&1)&((A >> 0)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_64=dout_29^dout_31;
   dout_65=dout_29&((A >> 1)&1);
   dout_71=((B >> 5)&1)&((A >> 2)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_75=dout_64&((B >> 7)&1);
   dout_96=dout_20|dout_71;
   dout_97=dout_20&dout_71;
   dout_101=dout_75^dout_72;
   dout_102=dout_64&dout_72;
   dout_104=dout_101^dout_97;
   dout_105=dout_102|dout_97;
   dout_106=dout_65^dout_73;
   dout_107=dout_65&((A >> 2)&1);
   dout_109=dout_106^dout_105;
   dout_110=dout_107|dout_102;
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_136=dout_96|dout_115;
   dout_137=dout_96&dout_115;
   dout_145=dout_116|dout_104;
   dout_146=dout_109^dout_117;
   dout_147=dout_109&dout_117;
   dout_148=dout_146&dout_145;
   dout_149=dout_146^dout_145;
   dout_150=dout_147|dout_148;
   dout_151=dout_110^dout_118;
   dout_152=dout_110&((A >> 3)&1);
   dout_153=dout_118&dout_150;
   dout_154=dout_151^dout_150;
   dout_155=dout_152|dout_153;
   dout_159=((B >> 3)&1)&((A >> 4)&1);
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_176=dout_136|((A >> 4)&1);
   dout_177=dout_136&dout_159;
   dout_181=dout_137^dout_160;
   dout_182=dout_137&((A >> 4)&1);
   dout_183=dout_181&dout_177;
   dout_184=dout_181^dout_177;
   dout_185=dout_182|dout_183;
   dout_186=dout_149^dout_161;
   dout_187=dout_149&dout_161;
   dout_188=dout_186&dout_185;
   dout_189=dout_186^dout_185;
   dout_190=dout_187|dout_188;
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_190;
   dout_194=dout_191^dout_190;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&((A >> 4)&1);
   dout_198=dout_163&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_203=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_217=dout_176&dout_203;
   dout_221=dout_184^dout_204;
   dout_222=dout_184&dout_204;
   dout_223=dout_221&dout_217;
   dout_224=dout_221^dout_217;
   dout_225=dout_222|dout_223;
   dout_226=dout_189^dout_205;
   dout_227=dout_189&dout_205;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&((A >> 5)&1);
   dout_243=((B >> 7)&1)&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_261=dout_224^dout_248;
   dout_262=dout_224&dout_248;
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_262;
   dout_269=dout_266^dout_262;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&dout_253;
   dout_288=((B >> 7)&1)&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_247^dout_291;
   dout_301=dout_261^dout_292;
   dout_302=dout_261&dout_292;
   dout_303=dout_247&dout_291;
   dout_304=dout_301^dout_303;
   dout_305=dout_302|dout_303;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&dout_298;
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_277&1) << 0;
   O |= (dout_200&1) << 1;
   O |= (dout_262&1) << 2;
   O |= (dout_262&1) << 3;
   O |= (dout_136&1) << 4;
   O |= (dout_177&1) << 5;
   O |= (dout_247&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14_wc3_csamcsa(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_335, dout_336, dout_338, dout_339, dout_340, dout_341, dout_344, dout_345, dout_348, dout_349, dout_350, dout_352, dout_353, dout_354, dout_355, dout_356, dout_357, dout_358, dout_361, dout_362;   int avg=0;

   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&dout_21;
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=((A >> 0)&1)&((B >> 6)&1);
   dout_34=dout_18^dout_25;
   dout_35=dout_18&dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_32^dout_29;
   dout_43=dout_22&((A >> 1)&1);
   dout_44=dout_23^dout_30;
   dout_45=dout_31&dout_32;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_55;
   dout_100=dout_97^dout_55;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_322=dout_297&dout_293;
   dout_323=dout_302^dout_298;
   dout_324=dout_302&dout_298;
   dout_325=dout_323&dout_322;
   dout_326=dout_323^dout_322;
   dout_327=dout_324|dout_325;
   dout_328=dout_268^dout_303;
   dout_329=((A >> 7)&1)&dout_303;
   dout_330=dout_328&dout_327;
   dout_331=dout_328^dout_327;
   dout_332=dout_329|dout_330;
   dout_333=dout_297^dout_293;
   dout_335=dout_333^0xFFFFFFFFFFFFFFFFU;
   dout_336=dout_322|dout_333;
   dout_338=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_339=dout_323&dout_336;
   dout_340=dout_323^dout_336;
   dout_341=dout_324|dout_339;
   dout_344=dout_328&dout_341;
   dout_345=dout_328^dout_341;
   dout_348=dout_333&dout_338;
   dout_349=dout_335&dout_320;
   dout_350=dout_348|dout_349;
   dout_352=dout_326&dout_321;
   dout_353=dout_340&dout_320;
   dout_354=dout_352|dout_353;
   dout_355=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_356=dout_331&dout_355;
   dout_357=dout_345&dout_320;
   dout_358=dout_356|dout_357;
   dout_361=dout_344&dout_320;
   dout_362=dout_332|dout_361;

   O = 0;
   O |= (dout_265&1) << 0;
   O |= (dout_25&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_350&1) << 12;
   O |= (dout_354&1) << 13;
   O |= (dout_358&1) << 14;
   O |= (dout_362&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep64716_wc9_2_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_25, dout_27, dout_28, dout_29, dout_30, dout_31, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_59, dout_60, dout_61, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_100, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_18=((B >> 2)&1)&((A >> 1)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_25=((B >> 0)&1)&((A >> 2)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_34=dout_18|dout_25;
   dout_35=dout_19&dout_25;
   dout_36=dout_19^dout_18;
   dout_37=dout_19&dout_18;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=((A >> 0)&1)&((B >> 6)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_59=dout_36|dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_47&dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_86=dout_31&dout_45;
   dout_87=dout_84^dout_86;
   dout_88=dout_85|dout_86;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_59|dout_89;
   dout_100=dout_97^dout_89;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_89;
   dout_143=dout_140^dout_89;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_133&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_34&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep64716_wc26_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_20, dout_21, dout_22, dout_23, dout_27, dout_28, dout_29, dout_30, dout_31, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_63, dout_64, dout_65, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_103, dout_105, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_38=dout_20|dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_63=((A >> 3)&1)&((B >> 1)&1);
   dout_64=dout_38|dout_48;
   dout_65=dout_38&dout_48;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_103=dout_64&dout_63;
   dout_105=dout_64|dout_63;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_65;
   dout_110=dout_107^dout_65;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_103;
   dout_148=dout_145^dout_103;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_141;
   dout_186=dout_183^dout_141;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_218&1) << 1;
   O |= (dout_132&1) << 2;
   O |= (dout_105&1) << 3;
   O |= (dout_140&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep63078_wc1_csamcsa(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_335, dout_336, dout_339, dout_340, dout_341, dout_344, dout_345, dout_347, dout_348, dout_349, dout_350, dout_351, dout_352, dout_353, dout_354, dout_355, dout_356, dout_357, dout_358, dout_361, dout_362;   int avg=0;

   dout_16=((A >> 1)&1)&((B >> 6)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_33=dout_17&dout_24;
   dout_34=dout_18^dout_25;
   dout_35=dout_18&dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_16;
   dout_45=dout_23&dout_30;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_56=dout_54&dout_33;
   dout_57=dout_54^dout_33;
   dout_58=dout_55|dout_56;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_58;
   dout_100=dout_97^dout_58;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_322=dout_297&dout_293;
   dout_323=dout_302^dout_298;
   dout_324=dout_302&dout_298;
   dout_325=dout_323&dout_322;
   dout_326=dout_323^dout_322;
   dout_327=dout_324|dout_325;
   dout_328=dout_268^dout_303;
   dout_329=dout_268&dout_303;
   dout_330=dout_328&dout_327;
   dout_331=dout_328^dout_327;
   dout_332=dout_329|dout_330;
   dout_333=dout_297^dout_293;
   dout_335=dout_333^0xFFFFFFFFFFFFFFFFU;
   dout_336=dout_322|dout_333;
   dout_339=dout_323&dout_336;
   dout_340=dout_323^dout_336;
   dout_341=dout_327|dout_339;
   dout_344=dout_328&dout_339;
   dout_345=dout_328^dout_341;
   dout_347=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_348=dout_333&dout_347;
   dout_349=dout_335&dout_320;
   dout_350=dout_348|dout_349;
   dout_351=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_352=dout_326&dout_351;
   dout_353=dout_340&dout_320;
   dout_354=dout_352|dout_353;
   dout_355=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_356=dout_331&dout_355;
   dout_357=dout_345&dout_320;
   dout_358=dout_356|dout_357;
   dout_361=dout_344&dout_320;
   dout_362=dout_332|dout_361;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_57&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_350&1) << 12;
   O |= (dout_354&1) << 13;
   O |= (dout_358&1) << 14;
   O |= (dout_362&1) << 15;
   return O;
}

uint64_t mult8_cgp14zr_wc1925_rcam(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_72, dout_118, dout_147, dout_151, dout_152, dout_153, dout_154, dout_155, dout_161, dout_162, dout_163, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_205, dout_206, dout_207, dout_208, dout_231, dout_232, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_249, dout_250, dout_251, dout_252, dout_253, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_295, dout_296, dout_297, dout_298, dout_307, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_72=((B >> 7)&1)&((A >> 2)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_147=((B >> 6)&1)&((A >> 3)&1);
   dout_151=dout_72^dout_118;
   dout_152=dout_72&((A >> 3)&1);
   dout_153=((B >> 7)&1)&dout_147;
   dout_154=dout_151^dout_147;
   dout_155=dout_152|dout_153;
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_161;
   dout_194=dout_191^dout_161;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&dout_163;
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_232;
   dout_239=dout_236^dout_232;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&dout_208;
   dout_243=((B >> 7)&1)&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_249=((B >> 2)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_271=dout_231^dout_250;
   dout_272=dout_231&dout_250;
   dout_273=dout_271&dout_249;
   dout_274=dout_271^dout_249;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&dout_253;
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_307=((A >> 7)&1)&((B >> 3)&1);
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_307;
   dout_319=dout_316^dout_307;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=dout_298&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_205&1) << 1;
   O |= (dout_163&1) << 2;
   O |= (dout_194&1) << 3;
   O |= (0&1) << 4;
   O |= (dout_250&1) << 5;
   O |= (0&1) << 6;
   O |= (0&1) << 7;
   O |= (dout_205&1) << 8;
   O |= (dout_205&1) << 9;
   O |= (dout_274&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep64716_wc43_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_18, dout_19, dout_21, dout_22, dout_23, dout_28, dout_29, dout_30, dout_31, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_50, dout_51, dout_52, dout_53, dout_54, dout_69, dout_72, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_87, dout_88, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_141, dout_145, dout_146, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_18=((A >> 0)&1)&((B >> 2)&1);
   dout_19=((B >> 3)&1)&((A >> 2)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_52&dout_31;
   dout_69=dout_40^dout_19;
   dout_72=dout_69^dout_19;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_54|dout_45;
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_18;
   dout_110=dout_107^dout_18;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_19;
   dout_115=dout_112^dout_19;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_141=((A >> 3)&1)&((B >> 1)&1);
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_145^dout_175;
   dout_184=dout_145&dout_175;
   dout_185=dout_183&dout_141;
   dout_186=dout_183^dout_141;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_146;
   dout_191=dout_188^dout_146;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_139&1) << 0;
   O |= (dout_28&1) << 1;
   O |= (dout_218&1) << 2;
   O |= (dout_28&1) << 3;
   O |= (dout_132&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep65536_wc1508_rcam(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_72, dout_108, dout_117, dout_118, dout_151, dout_152, dout_154, dout_162, dout_163, dout_187, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_205, dout_206, dout_207, dout_208, dout_209, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_249, dout_250, dout_251, dout_252, dout_253, dout_262, dout_266, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_300, dout_301, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_108=((B >> 7)&1)&dout_72;
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_151=dout_108|dout_118;
   dout_152=dout_118&((B >> 6)&1);
   dout_154=dout_151^dout_117;
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_187=((A >> 4)&1)&((B >> 5)&1);
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_187;
   dout_194=dout_191^dout_187;
   dout_195=dout_192|dout_193;
   dout_196=dout_152^dout_163;
   dout_197=dout_152&dout_163;
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_209=((A >> 2)&1)&dout_118;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_205;
   dout_234=dout_231^dout_205;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&((A >> 5)&1);
   dout_243=dout_208&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_262=((A >> 2)&1)&((B >> 2)&1);
   dout_266=dout_209|dout_249;
   dout_270=dout_249&dout_262;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&dout_253;
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_300=((B >> 7)&1)&((A >> 1)&1);
   dout_301=dout_253^dout_270;
   dout_305=dout_292|dout_300;
   dout_306=dout_266^dout_293;
   dout_307=dout_266&dout_293;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=dout_298&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_290&1) << 0;
   O |= (dout_152&1) << 1;
   O |= (dout_250&1) << 2;
   O |= (dout_198&1) << 3;
   O |= (0&1) << 4;
   O |= (dout_309&1) << 5;
   O |= (dout_206&1) << 6;
   O |= (dout_292&1) << 7;
   O |= (dout_301&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep49152_wc1_2_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((A >> 1)&1)&((B >> 6)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_33=dout_17&dout_24;
   dout_34=dout_18^dout_25;
   dout_35=dout_18&dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_16;
   dout_45=dout_23&dout_30;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_56=dout_54&dout_33;
   dout_57=dout_54^dout_33;
   dout_58=dout_55|dout_56;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_58;
   dout_100=dout_97^dout_58;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_57&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14_wc508_rcam(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_16, dout_31, dout_33, dout_60, dout_64, dout_65, dout_73, dout_106, dout_108, dout_109, dout_116, dout_117, dout_118, dout_137, dout_143, dout_144, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_160, dout_161, dout_162, dout_163, dout_177, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_256, dout_257, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_301, dout_302, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 7)&1)&((A >> 2)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_33=((A >> 2)&1)&((B >> 6)&1);
   dout_60=((B >> 6)&1)&dout_16;
   dout_64=dout_33|dout_31;
   dout_65=dout_60&((A >> 1)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_106=dout_65^dout_73;
   dout_108=dout_73&dout_64;
   dout_109=dout_106^dout_64;
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_137=((A >> 3)&1)&((B >> 4)&1);
   dout_143=dout_116&dout_137;
   dout_144=dout_116^dout_137;
   dout_146=dout_109^dout_117;
   dout_147=dout_109&dout_117;
   dout_148=dout_146&dout_143;
   dout_149=dout_146^dout_143;
   dout_150=dout_147|dout_148;
   dout_151=dout_108^dout_118;
   dout_152=dout_108&dout_118;
   dout_153=((B >> 7)&1)&dout_150;
   dout_154=dout_151^dout_150;
   dout_155=dout_152|dout_153;
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_177=((A >> 4)&1)&((B >> 3)&1);
   dout_181=dout_144^dout_160;
   dout_182=dout_144&dout_160;
   dout_183=dout_181&dout_177;
   dout_184=dout_181^dout_177;
   dout_185=dout_182|dout_183;
   dout_186=dout_149^dout_161;
   dout_187=dout_149&dout_161;
   dout_188=dout_186&dout_185;
   dout_189=dout_186^dout_185;
   dout_190=dout_187|dout_188;
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_190;
   dout_194=dout_191^dout_190;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&dout_163;
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_203=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_221=dout_184^dout_204;
   dout_222=dout_184&dout_204;
   dout_223=dout_221&dout_203;
   dout_224=dout_221^dout_203;
   dout_225=dout_222|dout_223;
   dout_226=dout_189^dout_205;
   dout_227=dout_189&dout_205;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&dout_208;
   dout_243=((B >> 7)&1)&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_256=((B >> 5)&1)^dout_247;
   dout_257=((B >> 5)&1)&dout_247;
   dout_261=dout_224^dout_248;
   dout_262=dout_224&dout_248;
   dout_263=dout_261&dout_257;
   dout_264=dout_261^dout_257;
   dout_265=dout_262|dout_263;
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_265;
   dout_269=dout_266^dout_265;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&dout_253;
   dout_288=((B >> 7)&1)&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_301=dout_264^dout_292;
   dout_302=dout_264&dout_292;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_308=dout_306&dout_302;
   dout_309=dout_306^dout_302;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=dout_298&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_256&1) << 0;
   O |= (dout_205&1) << 1;
   O |= (dout_294&1) << 2;
   O |= (0&1) << 3;
   O |= (((A >> 0)&1)&1) << 4;
   O |= (dout_292&1) << 5;
   O |= (((A >> 0)&1)&1) << 6;
   O |= (dout_256&1) << 7;
   O |= (dout_301&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep63897_wc377_rcam(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_23, dout_30, dout_31, dout_59, dout_60, dout_63, dout_64, dout_72, dout_73, dout_90, dout_97, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_114, dout_115, dout_117, dout_118, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_160, dout_161, dout_162, dout_163, dout_165, dout_172, dout_173, dout_176, dout_177, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_193, dout_194, dout_195, dout_196, dout_198, dout_199, dout_200, dout_204, dout_205, dout_206, dout_207, dout_208, dout_216, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_256, dout_259, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_59=dout_23|dout_30;
   dout_60=dout_23&dout_30;
   dout_63=dout_31&((B >> 6)&1);
   dout_64=dout_60^dout_31;
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_90=dout_63&((A >> 0)&1);
   dout_97=((A >> 2)&1)&((B >> 5)&1);
   dout_101=dout_64^dout_72;
   dout_102=dout_64&dout_72;
   dout_103=dout_101&dout_97;
   dout_104=dout_101^dout_97;
   dout_105=dout_102|dout_103;
   dout_106=dout_90^dout_73;
   dout_107=dout_63&((A >> 2)&1);
   dout_108=dout_73&dout_105;
   dout_109=dout_106^dout_105;
   dout_110=dout_107|dout_108;
   dout_114=((B >> 5)&1)&((A >> 3)&1);
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_141=dout_104^dout_114;
   dout_142=dout_104&dout_114;
   dout_143=dout_141&dout_115;
   dout_144=dout_141^dout_115;
   dout_145=dout_142|dout_143;
   dout_146=dout_109^dout_117;
   dout_147=dout_109&dout_117;
   dout_148=dout_146&dout_145;
   dout_149=dout_146^dout_145;
   dout_150=dout_147|dout_148;
   dout_151=dout_110^dout_118;
   dout_152=dout_110&((A >> 3)&1);
   dout_153=((B >> 7)&1)&dout_150;
   dout_154=dout_151^dout_150;
   dout_155=dout_152|dout_153;
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_165=dout_162&dout_154;
   dout_172=((B >> 2)&1)&((A >> 5)&1);
   dout_173=dout_155&((A >> 4)&1);
   dout_176=dout_59|dout_172;
   dout_177=((A >> 4)&1)&((B >> 3)&1);
   dout_181=dout_144^dout_160;
   dout_182=dout_144&dout_160;
   dout_183=dout_181&dout_177;
   dout_184=dout_181^dout_177;
   dout_185=dout_182|dout_183;
   dout_186=dout_149^dout_161;
   dout_187=dout_149&dout_161;
   dout_188=dout_186&dout_185;
   dout_189=dout_186^dout_185;
   dout_190=dout_187|dout_188;
   dout_191=dout_154^dout_162;
   dout_193=dout_191&dout_190;
   dout_194=dout_191^dout_190;
   dout_195=dout_165|dout_193;
   dout_196=dout_155^dout_163;
   dout_198=dout_163&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_173|dout_198;
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_216=dout_176^dout_172;
   dout_221=dout_184^dout_204;
   dout_222=dout_184&dout_204;
   dout_223=dout_221&dout_172;
   dout_224=dout_221^dout_172;
   dout_225=dout_222|dout_223;
   dout_226=dout_189^dout_205;
   dout_227=dout_189&dout_205;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&((A >> 5)&1);
   dout_243=dout_208&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_256=dout_216|dout_247;
   dout_259=dout_256^dout_247;
   dout_261=dout_224^dout_248;
   dout_262=dout_224&dout_248;
   dout_263=dout_261&dout_247;
   dout_264=dout_261^dout_247;
   dout_265=dout_262|dout_263;
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_265;
   dout_269=dout_266^dout_265;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&((A >> 6)&1);
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_259|dout_291;
   dout_300=dout_259&dout_291;
   dout_301=dout_264^dout_292;
   dout_302=dout_264&dout_292;
   dout_303=dout_301&dout_300;
   dout_304=dout_301^dout_300;
   dout_305=dout_302|dout_303;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_73&1) << 1;
   O |= (dout_172&1) << 2;
   O |= (dout_115&1) << 3;
   O |= (0&1) << 4;
   O |= (dout_222&1) << 5;
   O |= (dout_59&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14_wc79_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_20, dout_21, dout_22, dout_23, dout_29, dout_31, dout_40, dout_41, dout_42, dout_43, dout_44, dout_47, dout_49, dout_50, dout_51, dout_52, dout_53, dout_56, dout_70, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_86, dout_87, dout_88, dout_92, dout_93, dout_94, dout_95, dout_96, dout_106, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_150, dout_151, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_186, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_20=((B >> 6)&1)&((A >> 1)&1);
   dout_21=((A >> 1)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_40=((A >> 1)&1)|((A >> 0)&1);
   dout_41=dout_21&((B >> 4)&1);
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_20;
   dout_47=((B >> 7)&1)&dout_21;
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_56=dout_52&dout_31;
   dout_70=dout_40&dout_49;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_86=((B >> 6)&1)&dout_47;
   dout_87=dout_84^dout_86;
   dout_88=dout_56|dout_86;
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_106=((B >> 2)&1)&((A >> 3)&1);
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_70;
   dout_115=dout_112^dout_70;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_186=dout_133^0xFFFFFFFFFFFFFFFFU;
   dout_188=dout_150^dout_176;
   dout_189=dout_150&dout_176;
   dout_190=dout_188&dout_106;
   dout_191=dout_188^dout_106;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_151;
   dout_196=dout_193^dout_151;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_133;
   dout_229=dout_226^dout_133;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_134&1) << 0;
   O |= (dout_252&1) << 1;
   O |= (((A >> 5)&1)&1) << 2;
   O |= (dout_180&1) << 3;
   O |= (dout_133&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14zr_wc907_rcam(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_65, dout_72, dout_73, dout_101, dout_102, dout_106, dout_107, dout_108, dout_109, dout_110, dout_116, dout_117, dout_118, dout_146, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_160, dout_161, dout_162, dout_163, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_203, dout_205, dout_206, dout_207, dout_208, dout_222, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_249, dout_250, dout_251, dout_252, dout_253, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_306, dout_307, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_65=((B >> 7)&1)&((A >> 1)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_101=((B >> 5)&1)|((B >> 6)&1);
   dout_102=((B >> 5)&1)&dout_72;
   dout_106=dout_65^dout_73;
   dout_107=dout_65&((A >> 2)&1);
   dout_108=((B >> 7)&1)&dout_102;
   dout_109=dout_106^dout_102;
   dout_110=dout_107|dout_108;
   dout_116=dout_101&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_146=dout_109^dout_117;
   dout_148=dout_106&dout_116;
   dout_149=dout_146^dout_116;
   dout_150=dout_117|dout_148;
   dout_151=dout_110^dout_118;
   dout_152=dout_107&((A >> 3)&1);
   dout_153=dout_118&dout_150;
   dout_154=dout_151^dout_150;
   dout_155=dout_152|dout_153;
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_186=dout_149^dout_161;
   dout_187=dout_149&dout_161;
   dout_188=dout_186&dout_160;
   dout_189=dout_186^dout_160;
   dout_190=dout_187|dout_188;
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_190;
   dout_194=dout_191^dout_190;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&((A >> 4)&1);
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_203=((B >> 2)&1)&((A >> 6)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_222=((B >> 3)&1)&((A >> 5)&1);
   dout_226=dout_189^dout_205;
   dout_227=dout_189&dout_205;
   dout_228=dout_226&dout_222;
   dout_229=dout_226^dout_222;
   dout_230=dout_227|dout_228;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&((A >> 5)&1);
   dout_243=dout_208&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_203;
   dout_269=dout_266^dout_203;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&((A >> 6)&1);
   dout_288=((B >> 7)&1)&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_307;
   dout_314=dout_311^dout_307;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_249&1) << 0;
   O |= (dout_293&1) << 1;
   O |= (dout_312&1) << 2;
   O |= (0&1) << 3;
   O |= (dout_317&1) << 4;
   O |= (0&1) << 5;
   O |= (dout_72&1) << 6;
   O |= (dout_292&1) << 7;
   O |= (dout_292&1) << 8;
   O |= (dout_306&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep65536_wc4545_rcam(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_163, dout_208, dout_241, dout_242, dout_251, dout_252, dout_253, dout_260, dout_272, dout_281, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_295, dout_296, dout_297, dout_298, dout_312, dout_313, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_241=dout_163^dout_208;
   dout_242=dout_163&((A >> 5)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_260=dout_252&dout_241;
   dout_272=((A >> 5)&1)&((B >> 6)&1);
   dout_281=dout_241^dout_252;
   dout_283=dout_281&dout_251;
   dout_284=dout_281^dout_251;
   dout_285=dout_260|dout_283;
   dout_286=dout_242^dout_253;
   dout_287=dout_242&dout_253;
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_312=((A >> 7)&1)&((B >> 3)&1);
   dout_313=((B >> 4)&1)&((A >> 3)&1);
   dout_315=dout_312|dout_313;
   dout_316=dout_272^dout_295;
   dout_317=dout_272&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_287&1) << 1;
   O |= (dout_331&1) << 2;
   O |= (dout_288&1) << 3;
   O |= (0&1) << 4;
   O |= (dout_298&1) << 5;
   O |= (0&1) << 6;
   O |= (dout_331&1) << 7;
   O |= (dout_295&1) << 8;
   O |= (dout_298&1) << 9;
   O |= (dout_272&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep55705_wc4_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_17, dout_19, dout_20, dout_21, dout_22, dout_23, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_56, dout_57, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_17=((B >> 1)&1)&((A >> 1)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_35=((B >> 2)&1)&((A >> 0)&1);
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=((B >> 6)&1)&dout_31;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_56=dout_46&dout_17;
   dout_57=dout_46|dout_17;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_45&((A >> 2)&1);
   dout_86=((A >> 0)&1)&dout_45;
   dout_87=dout_84^dout_86;
   dout_88=dout_85|dout_86;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_56;
   dout_100=dout_97^dout_56;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_57&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_57&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep13107_wc1_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17^dout_24;
   dout_33=dout_17&dout_24;
   dout_34=dout_18^dout_25;
   dout_35=dout_18&dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&((B >> 6)&1);
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_56=dout_54&dout_33;
   dout_57=dout_54^dout_33;
   dout_58=dout_55|dout_56;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_86=((A >> 1)&1)&dout_45;
   dout_87=dout_84^dout_86;
   dout_88=dout_85|dout_86;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_58;
   dout_100=dout_97^dout_58;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_58&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_57&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint16_t trun8_tam00b(uint8_t A, uint8_t B)
{
  uint16_t P, P_;
  uint8_t tmp, C_1_0,C_1_1,C_1_2,C_1_3,C_1_4,C_1_5,C_1_6,C_2_0,C_2_1,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_3_0,C_3_1,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,S_0_0,S_0_1,S_0_2,S_0_3,S_0_4,S_0_5,S_0_6,S_0_7,S_1_0,S_1_1,S_1_2,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_2_0,S_2_1,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_0,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_0 = (((A>>0)&1) & ((B>>0)&1));
  S_0_1 = (((A>>0)&1) & ((B>>1)&1));
  S_0_2 = (((A>>0)&1) & ((B>>2)&1));
  S_0_3 = (((A>>0)&1) & ((B>>3)&1));
  S_0_4 = (((A>>0)&1) & ((B>>4)&1));
  S_0_5 = (((A>>0)&1) & ((B>>5)&1));
  S_0_6 = (((A>>0)&1) & ((B>>6)&1));
  S_0_7 = (((A>>0)&1) & ((B>>7)&1));
  S_1_0 = S_0_1^(((A>>1)&1) & ((B>>0)&1));
  C_1_0 = S_0_1&(((A>>1)&1) & ((B>>0)&1));
  S_1_1 = S_0_2^(((A>>1)&1) & ((B>>1)&1));
  C_1_1 = S_0_2&(((A>>1)&1) & ((B>>1)&1));
  S_1_2 = S_0_3^(((A>>1)&1) & ((B>>2)&1));
  C_1_2 = S_0_3&(((A>>1)&1) & ((B>>2)&1));
  S_1_3 = S_0_4^(((A>>1)&1) & ((B>>3)&1));
  C_1_3 = S_0_4&(((A>>1)&1) & ((B>>3)&1));
  S_1_4 = S_0_5^(((A>>1)&1) & ((B>>4)&1));
  C_1_4 = S_0_5&(((A>>1)&1) & ((B>>4)&1));
  S_1_5 = S_0_6^(((A>>1)&1) & ((B>>5)&1));
  C_1_5 = S_0_6&(((A>>1)&1) & ((B>>5)&1));
  S_1_6 = S_0_7^(((A>>1)&1) & ((B>>6)&1));
  C_1_6 = S_0_7&(((A>>1)&1) & ((B>>6)&1));
  S_1_7 = (((A>>1)&1) & ((B>>7)&1));
  tmp = S_1_1^C_1_0;
  S_2_0 = tmp^(((A>>2)&1) & ((B>>0)&1));
  C_2_0 = (tmp&(((A>>2)&1) & ((B>>0)&1)))|(S_1_1&C_1_0);
  tmp = S_1_2^C_1_1;
  S_2_1 = tmp^(((A>>2)&1) & ((B>>1)&1));
  C_2_1 = (tmp&(((A>>2)&1) & ((B>>1)&1)))|(S_1_2&C_1_1);
  tmp = S_1_3^C_1_2;
  S_2_2 = tmp^(((A>>2)&1) & ((B>>2)&1));
  C_2_2 = (tmp&(((A>>2)&1) & ((B>>2)&1)))|(S_1_3&C_1_2);
  tmp = S_1_4^C_1_3;
  S_2_3 = tmp^(((A>>2)&1) & ((B>>3)&1));
  C_2_3 = (tmp&(((A>>2)&1) & ((B>>3)&1)))|(S_1_4&C_1_3);
  tmp = S_1_5^C_1_4;
  S_2_4 = tmp^(((A>>2)&1) & ((B>>4)&1));
  C_2_4 = (tmp&(((A>>2)&1) & ((B>>4)&1)))|(S_1_5&C_1_4);
  tmp = S_1_6^C_1_5;
  S_2_5 = tmp^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = (tmp&(((A>>2)&1) & ((B>>5)&1)))|(S_1_6&C_1_5);
  tmp = S_1_7^C_1_6;
  S_2_6 = tmp^(((A>>2)&1) & ((B>>6)&1));
  C_2_6 = (tmp&(((A>>2)&1) & ((B>>6)&1)))|(S_1_7&C_1_6);
  S_2_7 = (((A>>2)&1) & ((B>>7)&1));
  tmp = S_2_1^C_2_0;
  S_3_0 = tmp^(((A>>3)&1) & ((B>>0)&1));
  C_3_0 = (tmp&(((A>>3)&1) & ((B>>0)&1)))|(S_2_1&C_2_0);
  tmp = S_2_2^C_2_1;
  S_3_1 = tmp^(((A>>3)&1) & ((B>>1)&1));
  C_3_1 = (tmp&(((A>>3)&1) & ((B>>1)&1)))|(S_2_2&C_2_1);
  tmp = S_2_3^C_2_2;
  S_3_2 = tmp^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = (tmp&(((A>>3)&1) & ((B>>2)&1)))|(S_2_3&C_2_2);
  tmp = S_2_4^C_2_3;
  S_3_3 = tmp^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = (tmp&(((A>>3)&1) & ((B>>3)&1)))|(S_2_4&C_2_3);
  tmp = S_2_5^C_2_4;
  S_3_4 = tmp^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = (tmp&(((A>>3)&1) & ((B>>4)&1)))|(S_2_5&C_2_4);
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  tmp = S_2_7^C_2_6;
  S_3_6 = tmp^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = (tmp&(((A>>3)&1) & ((B>>6)&1)))|(S_2_7&C_2_6);
  S_3_7 = (((A>>3)&1) & ((B>>7)&1));
  tmp = S_3_1^C_3_0;
  S_4_0 = tmp^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = (tmp&(((A>>4)&1) & ((B>>0)&1)))|(S_3_1&C_3_0);
  tmp = S_3_2^C_3_1;
  S_4_1 = tmp^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = (tmp&(((A>>4)&1) & ((B>>1)&1)))|(S_3_2&C_3_1);
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = (((A>>4)&1) & ((B>>7)&1));
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = (((A>>5)&1) & ((B>>7)&1));
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = (((A>>6)&1) & ((B>>7)&1));
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((A>>7)&1) & ((B>>0)&1));
  C_7_0 = (tmp&(((A>>7)&1) & ((B>>0)&1)))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((A>>7)&1) & ((B>>1)&1));
  C_7_1 = (tmp&(((A>>7)&1) & ((B>>1)&1)))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((A>>7)&1) & ((B>>2)&1));
  C_7_2 = (tmp&(((A>>7)&1) & ((B>>2)&1)))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((A>>7)&1) & ((B>>3)&1));
  C_7_3 = (tmp&(((A>>7)&1) & ((B>>3)&1)))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((A>>7)&1) & ((B>>4)&1));
  C_7_4 = (tmp&(((A>>7)&1) & ((B>>4)&1)))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((A>>7)&1) & ((B>>5)&1));
  C_7_5 = (tmp&(((A>>7)&1) & ((B>>5)&1)))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((A>>7)&1) & ((B>>6)&1));
  C_7_6 = (tmp&(((A>>7)&1) & ((B>>6)&1)))|(S_6_7&C_6_6);
  S_7_7 = (((A>>7)&1) & ((B>>7)&1));
  P_ = (((C_7_0 & 1)<<0)|((C_7_1 & 1)<<1)|((C_7_2 & 1)<<2)|((C_7_3 & 1)<<3)|((C_7_4 & 1)<<4)|((C_7_5 & 1)<<5)|((C_7_6 & 1)<<6)) + (((S_7_1 & 1)<<0)|((S_7_2 & 1)<<1)|((S_7_3 & 1)<<2)|((S_7_4 & 1)<<3)|((S_7_5 & 1)<<4)|((S_7_6 & 1)<<5)|((S_7_7 & 1)<<6));
  S_8_0 = (P_ >> 0) & 1;
  S_8_1 = (P_ >> 1) & 1;
  S_8_2 = (P_ >> 2) & 1;
  S_8_3 = (P_ >> 3) & 1;
  S_8_4 = (P_ >> 4) & 1;
  S_8_5 = (P_ >> 5) & 1;
  S_8_6 = (P_ >> 6) & 1;
  S_8_7 = (P_ >> 7) & 1;
  P = 0;
  P |= (S_0_0 & 1) << 0;
  P |= (S_1_0 & 1) << 1;
  P |= (S_2_0 & 1) << 2;
  P |= (S_3_0 & 1) << 3;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}

uint64_t mult8_cgp14_wc10_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_19, dout_20, dout_21, dout_22, dout_23, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_60, dout_61, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_100, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_60=dout_19&dout_47;
   dout_61=dout_47&dout_26;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_100=dout_89^0xFFFFFFFFFFFFFFFFU;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_89;
   dout_143=dout_140^dout_89;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (((B >> 0)&1)&1) << 0;
   O |= (((A >> 1)&1)&1) << 1;
   O |= (0&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14ep_ep65536_wc16384_2_csamcsa(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_225, dout_267, dout_268, dout_299, dout_300, dout_302, dout_328, dout_331;   int avg=0;

   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_225|dout_267;
   dout_300=dout_225&dout_267;
   dout_302=dout_299|dout_268;
   dout_328=dout_268^dout_300;
   dout_331=dout_328^dout_302;

   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (0&1) << 2;
   O |= (0&1) << 3;
   O |= (0&1) << 4;
   O |= (0&1) << 5;
   O |= (0&1) << 6;
   O |= (0&1) << 7;
   O |= (0&1) << 8;
   O |= (0&1) << 9;
   O |= (0&1) << 10;
   O |= (0&1) << 11;
   O |= (0&1) << 12;
   O |= (0&1) << 13;
   O |= (dout_331&1) << 14;
   O |= (dout_268&1) << 15;
   return O;
}

uint64_t mult8_cgp14zr_wc7391_rcam(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_242, dout_246, dout_251, dout_252, dout_253, dout_286, dout_288, dout_289, dout_290, dout_295, dout_296, dout_297, dout_298, dout_323, dout_324, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_242=((A >> 5)&1)&((B >> 7)&1);
   dout_246=dout_242&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 4)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_286=dout_242^dout_253;
   dout_288=((B >> 7)&1)&dout_252;
   dout_289=dout_286^dout_252;
   dout_290=dout_246|dout_288;
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_323=dout_296&((B >> 4)&1);
   dout_324=dout_296^dout_295;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_323;
   dout_329=dout_326^dout_323;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&dout_298;
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_251&1) << 1;
   O |= (0&1) << 2;
   O |= (0&1) << 3;
   O |= (0&1) << 4;
   O |= (0&1) << 5;
   O |= (dout_332&1) << 6;
   O |= (dout_335&1) << 7;
   O |= (dout_298&1) << 8;
   O |= (0&1) << 9;
   O |= (dout_329&1) << 10;
   O |= (dout_251&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint64_t mult8_cgp14_wc115_5_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_22, dout_23, dout_28, dout_29, dout_30, dout_31, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_49, dout_50, dout_51, dout_52, dout_53, dout_70, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_92, dout_93, dout_94, dout_95, dout_96, dout_108, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_189, dout_190, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_229, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_40=((A >> 0)&1)|((A >> 1)&1);
   dout_41=((A >> 0)&1)&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_70=dout_40&dout_49;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_108=((A >> 3)&1)&((B >> 2)&1);
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_70;
   dout_115=dout_112^dout_70;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_150=dout_115|dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_108;
   dout_153=dout_150^dout_108;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_189=dout_153&dout_176;
   dout_190=dout_176&((A >> 4)&1);
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_229=dout_218^0xFFFFFFFFFFFFFFFFU;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_218;
   dout_272=dout_269^dout_218;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_75&1) << 0;
   O |= (dout_137&1) << 1;
   O |= (((B >> 0)&1)&1) << 2;
   O |= (dout_172&1) << 3;
   O |= (((B >> 0)&1)&1) << 4;
   O |= (0&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint16_t mul8_364(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n0 = (a >> 0) & 0x1;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n16 = (b >> 0) & 0x1;
  uint8_t n18 = (b >> 1) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n32;
  uint8_t n48;
  uint8_t n64;
  uint8_t n82;
  uint8_t n98;
  uint8_t n114;
  uint8_t n132;
  uint8_t n149;
  uint8_t n164;
  uint8_t n167;
  uint8_t n182;
  uint8_t n198;
  uint8_t n214;
  uint8_t n232;
  uint8_t n248;
  uint8_t n264;
  uint8_t n282;
  uint8_t n298;
  uint8_t n299;
  uint8_t n314;
  uint8_t n315;
  uint8_t n332;
  uint8_t n333;
  uint8_t n348;
  uint8_t n349;
  uint8_t n364;
  uint8_t n365;
  uint8_t n382;
  uint8_t n383;
  uint8_t n398;
  uint8_t n399;
  uint8_t n414;
  uint8_t n432;
  uint8_t n448;
  uint8_t n464;
  uint8_t n482;
  uint8_t n498;
  uint8_t n514;
  uint8_t n532;
  uint8_t n548;
  uint8_t n549;
  uint8_t n564;
  uint8_t n565;
  uint8_t n582;
  uint8_t n583;
  uint8_t n598;
  uint8_t n599;
  uint8_t n614;
  uint8_t n615;
  uint8_t n632;
  uint8_t n633;
  uint8_t n648;
  uint8_t n649;
  uint8_t n664;
  uint8_t n682;
  uint8_t n698;
  uint8_t n714;
  uint8_t n732;
  uint8_t n748;
  uint8_t n764;
  uint8_t n782;
  uint8_t n798;
  uint8_t n799;
  uint8_t n814;
  uint8_t n815;
  uint8_t n832;
  uint8_t n833;
  uint8_t n848;
  uint8_t n849;
  uint8_t n864;
  uint8_t n865;
  uint8_t n882;
  uint8_t n883;
  uint8_t n898;
  uint8_t n899;
  uint8_t n914;
  uint8_t n932;
  uint8_t n948;
  uint8_t n964;
  uint8_t n982;
  uint8_t n998;
  uint8_t n1014;
  uint8_t n1032;
  uint8_t n1048;
  uint8_t n1049;
  uint8_t n1064;
  uint8_t n1065;
  uint8_t n1082;
  uint8_t n1083;
  uint8_t n1098;
  uint8_t n1099;
  uint8_t n1114;
  uint8_t n1115;
  uint8_t n1132;
  uint8_t n1133;
  uint8_t n1148;
  uint8_t n1149;
  uint8_t n1164;
  uint8_t n1182;
  uint8_t n1198;
  uint8_t n1214;
  uint8_t n1232;
  uint8_t n1248;
  uint8_t n1264;
  uint8_t n1282;
  uint8_t n1298;
  uint8_t n1299;
  uint8_t n1314;
  uint8_t n1315;
  uint8_t n1332;
  uint8_t n1333;
  uint8_t n1348;
  uint8_t n1349;
  uint8_t n1364;
  uint8_t n1365;
  uint8_t n1382;
  uint8_t n1383;
  uint8_t n1398;
  uint8_t n1399;
  uint8_t n1414;
  uint8_t n1432;
  uint8_t n1448;
  uint8_t n1464;
  uint8_t n1482;
  uint8_t n1498;
  uint8_t n1514;
  uint8_t n1532;
  uint8_t n1548;
  uint8_t n1549;
  uint8_t n1564;
  uint8_t n1565;
  uint8_t n1582;
  uint8_t n1583;
  uint8_t n1598;
  uint8_t n1599;
  uint8_t n1614;
  uint8_t n1615;
  uint8_t n1632;
  uint8_t n1633;
  uint8_t n1648;
  uint8_t n1649;
  uint8_t n1664;
  uint8_t n1682;
  uint8_t n1698;
  uint8_t n1714;
  uint8_t n1732;
  uint8_t n1748;
  uint8_t n1764;
  uint8_t n1782;
  uint8_t n1798;
  uint8_t n1799;
  uint8_t n1814;
  uint8_t n1815;
  uint8_t n1832;
  uint8_t n1833;
  uint8_t n1848;
  uint8_t n1849;
  uint8_t n1864;
  uint8_t n1865;
  uint8_t n1882;
  uint8_t n1883;
  uint8_t n1898;
  uint8_t n1899;
  uint8_t n1914;
  uint8_t n1915;
  uint8_t n1932;
  uint8_t n1933;
  uint8_t n1948;
  uint8_t n1949;
  uint8_t n1964;
  uint8_t n1965;
  uint8_t n1982;
  uint8_t n1983;
  uint8_t n1998;
  uint8_t n1999;
  uint8_t n2014;
  uint8_t n2015;

  n32 = n0 & n16;
  n48 = n2 & n16;
  n64 = n4 & n16;
  n82 = n6 & n16;
  n98 = n8 & n16;
  n114 = n10 & n16;
  n132 = n12 & n16;
  n149 = n14 & n16;
  n164 = n0 & n18;
  n167 = n149;
  n182 = n2 & n18;
  n198 = n4 & n18;
  n214 = n6 & n18;
  n232 = n8 & n18;
  n248 = n10 & n18;
  n264 = n12 & n18;
  n282 = n14 & n18;
  n298 = n48 ^ n164;
  n299 = n48 & n164;
  n314 = n64 ^ n182;
  n315 = n64 & n182;
  n332 = n82 ^ n198;
  n333 = n82 & n198;
  n348 = n98 ^ n214;
  n349 = n98 & n214;
  n364 = n114 ^ n232;
  n365 = n114 & n232;
  n382 = n132 ^ n248;
  n383 = n132 & n248;
  n398 = n167 ^ n264;
  n399 = n167 & n264;
  n414 = n0 & n20;
  n432 = n2 & n20;
  n448 = n4 & n20;
  n464 = n6 & n20;
  n482 = n8 & n20;
  n498 = n10 & n20;
  n514 = n12 & n20;
  n532 = n14 & n20;
  n548 = (n314 ^ n414) ^ n299;
  n549 = (n314 & n414) | (n414 & n299) | (n314 & n299);
  n564 = (n332 ^ n432) ^ n315;
  n565 = (n332 & n432) | (n432 & n315) | (n332 & n315);
  n582 = (n348 ^ n448) ^ n333;
  n583 = (n348 & n448) | (n448 & n333) | (n348 & n333);
  n598 = (n364 ^ n464) ^ n349;
  n599 = (n364 & n464) | (n464 & n349) | (n364 & n349);
  n614 = (n382 ^ n482) ^ n365;
  n615 = (n382 & n482) | (n482 & n365) | (n382 & n365);
  n632 = (n398 ^ n498) ^ n383;
  n633 = (n398 & n498) | (n498 & n383) | (n398 & n383);
  n648 = (n282 ^ n514) ^ n399;
  n649 = (n282 & n514) | (n514 & n399) | (n282 & n399);
  n664 = n0 & n22;
  n682 = n2 & n22;
  n698 = n4 & n22;
  n714 = n6 & n22;
  n732 = n8 & n22;
  n748 = n10 & n22;
  n764 = n12 & n22;
  n782 = n14 & n22;
  n798 = (n564 ^ n664) ^ n549;
  n799 = (n564 & n664) | (n664 & n549) | (n564 & n549);
  n814 = (n582 ^ n682) ^ n565;
  n815 = (n582 & n682) | (n682 & n565) | (n582 & n565);
  n832 = (n598 ^ n698) ^ n583;
  n833 = (n598 & n698) | (n698 & n583) | (n598 & n583);
  n848 = (n614 ^ n714) ^ n599;
  n849 = (n614 & n714) | (n714 & n599) | (n614 & n599);
  n864 = (n632 ^ n732) ^ n615;
  n865 = (n632 & n732) | (n732 & n615) | (n632 & n615);
  n882 = (n648 ^ n748) ^ n633;
  n883 = (n648 & n748) | (n748 & n633) | (n648 & n633);
  n898 = (n532 ^ n764) ^ n649;
  n899 = (n532 & n764) | (n764 & n649) | (n532 & n649);
  n914 = n0 & n24;
  n932 = n2 & n24;
  n948 = n4 & n24;
  n964 = n6 & n24;
  n982 = n8 & n24;
  n998 = n10 & n24;
  n1014 = n12 & n24;
  n1032 = n14 & n24;
  n1048 = (n814 ^ n914) ^ n799;
  n1049 = (n814 & n914) | (n914 & n799) | (n814 & n799);
  n1064 = (n832 ^ n932) ^ n815;
  n1065 = (n832 & n932) | (n932 & n815) | (n832 & n815);
  n1082 = (n848 ^ n948) ^ n833;
  n1083 = (n848 & n948) | (n948 & n833) | (n848 & n833);
  n1098 = (n864 ^ n964) ^ n849;
  n1099 = (n864 & n964) | (n964 & n849) | (n864 & n849);
  n1114 = (n882 ^ n982) ^ n865;
  n1115 = (n882 & n982) | (n982 & n865) | (n882 & n865);
  n1132 = (n898 ^ n998) ^ n883;
  n1133 = (n898 & n998) | (n998 & n883) | (n898 & n883);
  n1148 = (n782 ^ n1014) ^ n899;
  n1149 = (n782 & n1014) | (n1014 & n899) | (n782 & n899);
  n1164 = n0 & n26;
  n1182 = n2 & n26;
  n1198 = n4 & n26;
  n1214 = n6 & n26;
  n1232 = n8 & n26;
  n1248 = n10 & n26;
  n1264 = n12 & n26;
  n1282 = n14 & n26;
  n1298 = (n1064 ^ n1164) ^ n1049;
  n1299 = (n1064 & n1164) | (n1164 & n1049) | (n1064 & n1049);
  n1314 = (n1082 ^ n1182) ^ n1065;
  n1315 = (n1082 & n1182) | (n1182 & n1065) | (n1082 & n1065);
  n1332 = (n1098 ^ n1198) ^ n1083;
  n1333 = (n1098 & n1198) | (n1198 & n1083) | (n1098 & n1083);
  n1348 = (n1114 ^ n1214) ^ n1099;
  n1349 = (n1114 & n1214) | (n1214 & n1099) | (n1114 & n1099);
  n1364 = (n1132 ^ n1232) ^ n1115;
  n1365 = (n1132 & n1232) | (n1232 & n1115) | (n1132 & n1115);
  n1382 = (n1148 ^ n1248) ^ n1133;
  n1383 = (n1148 & n1248) | (n1248 & n1133) | (n1148 & n1133);
  n1398 = (n1032 ^ n1264) ^ n1149;
  n1399 = (n1032 & n1264) | (n1264 & n1149) | (n1032 & n1149);
  n1414 = n0 & n28;
  n1432 = n2 & n28;
  n1448 = n4 & n28;
  n1464 = n6 & n28;
  n1482 = n8 & n28;
  n1498 = n10 & n28;
  n1514 = n12 & n28;
  n1532 = n14 & n28;
  n1548 = (n1314 ^ n1414) ^ n1299;
  n1549 = (n1314 & n1414) | (n1414 & n1299) | (n1314 & n1299);
  n1564 = (n1332 ^ n1432) ^ n1315;
  n1565 = (n1332 & n1432) | (n1432 & n1315) | (n1332 & n1315);
  n1582 = (n1348 ^ n1448) ^ n1333;
  n1583 = (n1348 & n1448) | (n1448 & n1333) | (n1348 & n1333);
  n1598 = (n1364 ^ n1464) ^ n1349;
  n1599 = (n1364 & n1464) | (n1464 & n1349) | (n1364 & n1349);
  n1614 = (n1382 ^ n1482) ^ n1365;
  n1615 = (n1382 & n1482) | (n1482 & n1365) | (n1382 & n1365);
  n1632 = (n1398 ^ n1498) ^ n1383;
  n1633 = (n1398 & n1498) | (n1498 & n1383) | (n1398 & n1383);
  n1648 = (n1282 ^ n1514) ^ n1399;
  n1649 = (n1282 & n1514) | (n1514 & n1399) | (n1282 & n1399);
  n1664 = n0 & n30;
  n1682 = n2 & n30;
  n1698 = n4 & n30;
  n1714 = n6 & n30;
  n1732 = n8 & n30;
  n1748 = n10 & n30;
  n1764 = n12 & n30;
  n1782 = n14 & n30;
  n1798 = (n1564 ^ n1664) ^ n1549;
  n1799 = (n1564 & n1664) | (n1664 & n1549) | (n1564 & n1549);
  n1814 = (n1582 ^ n1682) ^ n1565;
  n1815 = (n1582 & n1682) | (n1682 & n1565) | (n1582 & n1565);
  n1832 = (n1598 ^ n1698) ^ n1583;
  n1833 = (n1598 & n1698) | (n1698 & n1583) | (n1598 & n1583);
  n1848 = (n1614 ^ n1714) ^ n1599;
  n1849 = (n1614 & n1714) | (n1714 & n1599) | (n1614 & n1599);
  n1864 = (n1632 ^ n1732) ^ n1615;
  n1865 = (n1632 & n1732) | (n1732 & n1615) | (n1632 & n1615);
  n1882 = (n1648 ^ n1748) ^ n1633;
  n1883 = (n1648 & n1748) | (n1748 & n1633) | (n1648 & n1633);
  n1898 = (n1532 ^ n1764) ^ n1649;
  n1899 = (n1532 & n1764) | (n1764 & n1649) | (n1532 & n1649);
  n1914 = n1814 ^ n1799;
  n1915 = n1814 & n1799;
  n1932 = (n1832 ^ n1815) ^ n1915;
  n1933 = (n1832 & n1815) | (n1815 & n1915) | (n1832 & n1915);
  n1948 = (n1848 ^ n1833) ^ n1933;
  n1949 = (n1848 & n1833) | (n1833 & n1933) | (n1848 & n1933);
  n1964 = (n1864 ^ n1849) ^ n1949;
  n1965 = (n1864 & n1849) | (n1849 & n1949) | (n1864 & n1949);
  n1982 = (n1882 ^ n1865) ^ n1965;
  n1983 = (n1882 & n1865) | (n1865 & n1965) | (n1882 & n1965);
  n1998 = (n1898 ^ n1883) ^ n1983;
  n1999 = (n1898 & n1883) | (n1883 & n1983) | (n1898 & n1983);
  n2014 = (n1782 ^ n1899) ^ n1999;
  n2015 = (n1782 & n1899) | (n1899 & n1999) | (n1782 & n1999);

  c |= (n32 & 0x1) << 0;
  c |= (n298 & 0x1) << 1;
  c |= (n548 & 0x1) << 2;
  c |= (n798 & 0x1) << 3;
  c |= (n1048 & 0x1) << 4;
  c |= (n1298 & 0x1) << 5;
  c |= (n1548 & 0x1) << 6;
  c |= (n1798 & 0x1) << 7;
  c |= (n1914 & 0x1) << 8;
  c |= (n1932 & 0x1) << 9;
  c |= (n1948 & 0x1) << 10;
  c |= (n1964 & 0x1) << 11;
  c |= (n1982 & 0x1) << 12;
  c |= (n1998 & 0x1) << 13;
  c |= (n2014 & 0x1) << 14;
  c |= (n2015 & 0x1) << 15;

  return c;
}

uint64_t mult8_cgp14zr_wc1577_csamrca(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_52, dout_53, dout_85, dout_95, dout_96, dout_127, dout_128, dout_130, dout_137, dout_138, dout_139, dout_165, dout_166, dout_170, dout_171, dout_173, dout_174, dout_180, dout_181, dout_182, dout_199, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_222, dout_223, dout_224, dout_225, dout_239, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_309, dout_313, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_52=((B >> 7)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_85=((A >> 3)&1)&dout_52;
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_127=dout_53^dout_95;
   dout_128=dout_53&((A >> 3)&1);
   dout_130=dout_127^dout_85;
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_165=dout_130|dout_137;
   dout_166=dout_130&dout_137;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_173=dout_170^dout_85;
   dout_174=dout_171|dout_128;
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_199=((B >> 3)&1)&((A >> 6)&1);
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_166;
   dout_211=dout_208^dout_166;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_239=((A >> 5)&1)&((B >> 4)&1);
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_165;
   dout_249=dout_246^dout_165;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_199;
   dout_287=dout_284^dout_199;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_309=dout_239^dout_263;
   dout_313=dout_239&dout_263;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_313;
   dout_319=dout_316^dout_313;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_268&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_217&1) << 0;
   O |= (dout_291&1) << 1;
   O |= (dout_309&1) << 2;
   O |= (0&1) << 3;
   O |= (dout_127&1) << 4;
   O |= (dout_225&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_214&1) << 7;
   O |= (dout_309&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_287&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

int16_t mul8s_1KVB(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_1_2,C_1_3,C_1_4,C_1_5,C_1_6,C_1_7,C_2_1,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_2_7,C_3_0,C_3_1,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_3,S_0_4,S_0_5,S_0_6,S_0_7,S_1_2,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_2_1,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_0,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_3 = (((A>>0)&1) & ((B>>3)&1));
  S_0_4 = (((A>>0)&1) & ((B>>4)&1));
  S_0_5 = (((A>>0)&1) & ((B>>5)&1));
  S_0_6 = (((A>>0)&1) & ((B>>6)&1));
  S_0_7 = (((((A>>0)&1) & ((B>>7)&1)))^1);
  S_1_2 = S_0_3^(((A>>1)&1) & ((B>>2)&1));
  C_1_2 = S_0_3&(((A>>1)&1) & ((B>>2)&1));
  S_1_3 = S_0_4^(((A>>1)&1) & ((B>>3)&1));
  C_1_3 = S_0_4&(((A>>1)&1) & ((B>>3)&1));
  S_1_4 = S_0_5^(((A>>1)&1) & ((B>>4)&1));
  C_1_4 = S_0_5&(((A>>1)&1) & ((B>>4)&1));
  S_1_5 = S_0_6^(((A>>1)&1) & ((B>>5)&1));
  C_1_5 = S_0_6&(((A>>1)&1) & ((B>>5)&1));
  S_1_6 = S_0_7^(((A>>1)&1) & ((B>>6)&1));
  C_1_6 = S_0_7&(((A>>1)&1) & ((B>>6)&1));
  S_1_7 = 1^(((((A>>1)&1) & ((B>>7)&1)))^1);
  C_1_7 = 1&(((((A>>1)&1) & ((B>>7)&1)))^1);
  S_2_1 = S_1_2^(((A>>2)&1) & ((B>>1)&1));
  C_2_1 = S_1_2&(((A>>2)&1) & ((B>>1)&1));
  tmp = S_1_3^C_1_2;
  S_2_2 = tmp^(((A>>2)&1) & ((B>>2)&1));
  C_2_2 = (tmp&(((A>>2)&1) & ((B>>2)&1)))|(S_1_3&C_1_2);
  tmp = S_1_4^C_1_3;
  S_2_3 = tmp^(((A>>2)&1) & ((B>>3)&1));
  C_2_3 = (tmp&(((A>>2)&1) & ((B>>3)&1)))|(S_1_4&C_1_3);
  tmp = S_1_5^C_1_4;
  S_2_4 = tmp^(((A>>2)&1) & ((B>>4)&1));
  C_2_4 = (tmp&(((A>>2)&1) & ((B>>4)&1)))|(S_1_5&C_1_4);
  tmp = S_1_6^C_1_5;
  S_2_5 = tmp^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = (tmp&(((A>>2)&1) & ((B>>5)&1)))|(S_1_6&C_1_5);
  tmp = S_1_7^C_1_6;
  S_2_6 = tmp^(((A>>2)&1) & ((B>>6)&1));
  C_2_6 = (tmp&(((A>>2)&1) & ((B>>6)&1)))|(S_1_7&C_1_6);
  S_2_7 = C_1_7^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = C_1_7&(((((A>>2)&1) & ((B>>7)&1)))^1);
  S_3_0 = S_2_1^(((A>>3)&1) & ((B>>0)&1));
  C_3_0 = S_2_1&(((A>>3)&1) & ((B>>0)&1));
  tmp = S_2_2^C_2_1;
  S_3_1 = tmp^(((A>>3)&1) & ((B>>1)&1));
  C_3_1 = (tmp&(((A>>3)&1) & ((B>>1)&1)))|(S_2_2&C_2_1);
  tmp = S_2_3^C_2_2;
  S_3_2 = tmp^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = (tmp&(((A>>3)&1) & ((B>>2)&1)))|(S_2_3&C_2_2);
  tmp = S_2_4^C_2_3;
  S_3_3 = tmp^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = (tmp&(((A>>3)&1) & ((B>>3)&1)))|(S_2_4&C_2_3);
  tmp = S_2_5^C_2_4;
  S_3_4 = tmp^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = (tmp&(((A>>3)&1) & ((B>>4)&1)))|(S_2_5&C_2_4);
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  tmp = S_2_7^C_2_6;
  S_3_6 = tmp^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = (tmp&(((A>>3)&1) & ((B>>6)&1)))|(S_2_7&C_2_6);
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  tmp = S_3_1^C_3_0;
  S_4_0 = tmp^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = (tmp&(((A>>4)&1) & ((B>>0)&1)))|(S_3_1&C_3_0);
  tmp = S_3_2^C_3_1;
  S_4_1 = tmp^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = (tmp&(((A>>4)&1) & ((B>>1)&1)))|(S_3_2&C_3_1);
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_3_0 & 1) << 3;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.15 %
// MAE = 101 
// WCE% = 0.69 %
// WCE = 449 
// WCRE% = 6500.00 %
// EP% = 91.89 %
// MRE% = 8.93 %
// MSE = 19690 
// PDK45_PWR = 0.289 mW
// PDK45_AREA = 543.0 um2
// PDK45_DELAY = 1.33 ns

int16_t mul8s_1KVL(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_2_5,C_2_7,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_7,S_1_6,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_7 = 1;
  S_1_6 = 1;
  S_2_3 = (((A>>2)&1) & ((B>>3)&1));
  S_2_4 = (((A>>2)&1) & ((B>>4)&1));
  S_2_5 = S_1_6^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = S_1_6&(((A>>2)&1) & ((B>>5)&1));
  S_2_6 = (((A>>2)&1) & ((B>>6)&1));
  S_2_7 = 1^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = 1&(((((A>>2)&1) & ((B>>7)&1)))^1);
  S_3_2 = S_2_3^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = S_2_3&(((A>>3)&1) & ((B>>2)&1));
  S_3_3 = S_2_4^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = S_2_4&(((A>>3)&1) & ((B>>3)&1));
  S_3_4 = S_2_5^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = S_2_5&(((A>>3)&1) & ((B>>4)&1));
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  S_3_6 = S_2_7^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = S_2_7&(((A>>3)&1) & ((B>>6)&1));
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  S_4_1 = S_3_2^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = S_3_2&(((A>>4)&1) & ((B>>1)&1));
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  S_5_0 = S_4_1^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = S_4_1&(((A>>5)&1) & ((B>>0)&1));
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.019 %
// MAE = 12 
// WCE% = 0.075 %
// WCE = 49 
// WCRE% = 4900.00 %
// EP% = 81.25 %
// MRE% = 2.53 %
// MSE = 248 
// PDK45_PWR = 0.391 mW
// PDK45_AREA = 641.1 um2
// PDK45_DELAY = 1.51 ns


int16_t mul8s_1KX2(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_1_3,C_1_4,C_1_5,C_1_6,C_1_7,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_2_7,C_3_1,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_4,S_0_5,S_0_6,S_0_7,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_4 = (((A>>0)&1) & ((B>>4)&1));
  S_0_5 = (((A>>0)&1) & ((B>>5)&1));
  S_0_6 = (((A>>0)&1) & ((B>>6)&1));
  S_0_7 = (((((A>>0)&1) & ((B>>7)&1)))^1);
  S_1_3 = S_0_4^(((A>>1)&1) & ((B>>3)&1));
  C_1_3 = S_0_4&(((A>>1)&1) & ((B>>3)&1));
  S_1_4 = S_0_5^(((A>>1)&1) & ((B>>4)&1));
  C_1_4 = S_0_5&(((A>>1)&1) & ((B>>4)&1));
  S_1_5 = S_0_6^(((A>>1)&1) & ((B>>5)&1));
  C_1_5 = S_0_6&(((A>>1)&1) & ((B>>5)&1));
  S_1_6 = S_0_7^(((A>>1)&1) & ((B>>6)&1));
  C_1_6 = S_0_7&(((A>>1)&1) & ((B>>6)&1));
  S_1_7 = 1^(((((A>>1)&1) & ((B>>7)&1)))^1);
  C_1_7 = 1&(((((A>>1)&1) & ((B>>7)&1)))^1);
  S_2_2 = S_1_3^(((A>>2)&1) & ((B>>2)&1));
  C_2_2 = S_1_3&(((A>>2)&1) & ((B>>2)&1));
  tmp = S_1_4^C_1_3;
  S_2_3 = tmp^(((A>>2)&1) & ((B>>3)&1));
  C_2_3 = (tmp&(((A>>2)&1) & ((B>>3)&1)))|(S_1_4&C_1_3);
  tmp = S_1_5^C_1_4;
  S_2_4 = tmp^(((A>>2)&1) & ((B>>4)&1));
  C_2_4 = (tmp&(((A>>2)&1) & ((B>>4)&1)))|(S_1_5&C_1_4);
  tmp = S_1_6^C_1_5;
  S_2_5 = tmp^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = (tmp&(((A>>2)&1) & ((B>>5)&1)))|(S_1_6&C_1_5);
  tmp = S_1_7^C_1_6;
  S_2_6 = tmp^(((A>>2)&1) & ((B>>6)&1));
  C_2_6 = (tmp&(((A>>2)&1) & ((B>>6)&1)))|(S_1_7&C_1_6);
  S_2_7 = C_1_7^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = C_1_7&(((((A>>2)&1) & ((B>>7)&1)))^1);
  S_3_1 = S_2_2^(((A>>3)&1) & ((B>>1)&1));
  C_3_1 = S_2_2&(((A>>3)&1) & ((B>>1)&1));
  tmp = S_2_3^C_2_2;
  S_3_2 = tmp^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = (tmp&(((A>>3)&1) & ((B>>2)&1)))|(S_2_3&C_2_2);
  tmp = S_2_4^C_2_3;
  S_3_3 = tmp^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = (tmp&(((A>>3)&1) & ((B>>3)&1)))|(S_2_4&C_2_3);
  tmp = S_2_5^C_2_4;
  S_3_4 = tmp^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = (tmp&(((A>>3)&1) & ((B>>4)&1)))|(S_2_5&C_2_4);
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  tmp = S_2_7^C_2_6;
  S_3_6 = tmp^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = (tmp&(((A>>3)&1) & ((B>>6)&1)))|(S_2_7&C_2_6);
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  S_4_0 = S_3_1^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = S_3_1&(((A>>4)&1) & ((B>>0)&1));
  tmp = S_3_2^C_3_1;
  S_4_1 = tmp^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = (tmp&(((A>>4)&1) & ((B>>1)&1)))|(S_3_2&C_3_1);
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.0018 %
// MAE = 1.2 
// WCE% = 0.0076 %
// WCE = 5.0 
// WCRE% = 500.00 %
// EP% = 50.00 %
// MRE% = 0.28 %
// MSE = 3.8 
// PDK45_PWR = 0.422 mW
// PDK45_AREA = 711.0 um2
// PDK45_DELAY = 1.48 ns


int16_t mul8s_1KVA(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_1_1,C_1_2,C_1_3,C_1_4,C_1_5,C_1_6,C_1_7,C_2_0,C_2_1,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_2_7,C_3_0,C_3_1,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_2,S_0_3,S_0_4,S_0_5,S_0_6,S_0_7,S_1_1,S_1_2,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_2_0,S_2_1,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_0,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_2 = (((A>>0)&1) & ((B>>2)&1));
  S_0_3 = (((A>>0)&1) & ((B>>3)&1));
  S_0_4 = (((A>>0)&1) & ((B>>4)&1));
  S_0_5 = (((A>>0)&1) & ((B>>5)&1));
  S_0_6 = (((A>>0)&1) & ((B>>6)&1));
  S_0_7 = (((((A>>0)&1) & ((B>>7)&1)))^1);
  S_1_1 = S_0_2^(((A>>1)&1) & ((B>>1)&1));
  C_1_1 = S_0_2&(((A>>1)&1) & ((B>>1)&1));
  S_1_2 = S_0_3^(((A>>1)&1) & ((B>>2)&1));
  C_1_2 = S_0_3&(((A>>1)&1) & ((B>>2)&1));
  S_1_3 = S_0_4^(((A>>1)&1) & ((B>>3)&1));
  C_1_3 = S_0_4&(((A>>1)&1) & ((B>>3)&1));
  S_1_4 = S_0_5^(((A>>1)&1) & ((B>>4)&1));
  C_1_4 = S_0_5&(((A>>1)&1) & ((B>>4)&1));
  S_1_5 = S_0_6^(((A>>1)&1) & ((B>>5)&1));
  C_1_5 = S_0_6&(((A>>1)&1) & ((B>>5)&1));
  S_1_6 = S_0_7^(((A>>1)&1) & ((B>>6)&1));
  C_1_6 = S_0_7&(((A>>1)&1) & ((B>>6)&1));
  S_1_7 = 1^(((((A>>1)&1) & ((B>>7)&1)))^1);
  C_1_7 = 1&(((((A>>1)&1) & ((B>>7)&1)))^1);
  S_2_0 = S_1_1^(((A>>2)&1) & ((B>>0)&1));
  C_2_0 = S_1_1&(((A>>2)&1) & ((B>>0)&1));
  tmp = S_1_2^C_1_1;
  S_2_1 = tmp^(((A>>2)&1) & ((B>>1)&1));
  C_2_1 = (tmp&(((A>>2)&1) & ((B>>1)&1)))|(S_1_2&C_1_1);
  tmp = S_1_3^C_1_2;
  S_2_2 = tmp^(((A>>2)&1) & ((B>>2)&1));
  C_2_2 = (tmp&(((A>>2)&1) & ((B>>2)&1)))|(S_1_3&C_1_2);
  tmp = S_1_4^C_1_3;
  S_2_3 = tmp^(((A>>2)&1) & ((B>>3)&1));
  C_2_3 = (tmp&(((A>>2)&1) & ((B>>3)&1)))|(S_1_4&C_1_3);
  tmp = S_1_5^C_1_4;
  S_2_4 = tmp^(((A>>2)&1) & ((B>>4)&1));
  C_2_4 = (tmp&(((A>>2)&1) & ((B>>4)&1)))|(S_1_5&C_1_4);
  tmp = S_1_6^C_1_5;
  S_2_5 = tmp^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = (tmp&(((A>>2)&1) & ((B>>5)&1)))|(S_1_6&C_1_5);
  tmp = S_1_7^C_1_6;
  S_2_6 = tmp^(((A>>2)&1) & ((B>>6)&1));
  C_2_6 = (tmp&(((A>>2)&1) & ((B>>6)&1)))|(S_1_7&C_1_6);
  S_2_7 = C_1_7^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = C_1_7&(((((A>>2)&1) & ((B>>7)&1)))^1);
  tmp = S_2_1^C_2_0;
  S_3_0 = tmp^(((A>>3)&1) & ((B>>0)&1));
  C_3_0 = (tmp&(((A>>3)&1) & ((B>>0)&1)))|(S_2_1&C_2_0);
  tmp = S_2_2^C_2_1;
  S_3_1 = tmp^(((A>>3)&1) & ((B>>1)&1));
  C_3_1 = (tmp&(((A>>3)&1) & ((B>>1)&1)))|(S_2_2&C_2_1);
  tmp = S_2_3^C_2_2;
  S_3_2 = tmp^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = (tmp&(((A>>3)&1) & ((B>>2)&1)))|(S_2_3&C_2_2);
  tmp = S_2_4^C_2_3;
  S_3_3 = tmp^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = (tmp&(((A>>3)&1) & ((B>>3)&1)))|(S_2_4&C_2_3);
  tmp = S_2_5^C_2_4;
  S_3_4 = tmp^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = (tmp&(((A>>3)&1) & ((B>>4)&1)))|(S_2_5&C_2_4);
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  tmp = S_2_7^C_2_6;
  S_3_6 = tmp^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = (tmp&(((A>>3)&1) & ((B>>6)&1)))|(S_2_7&C_2_6);
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  tmp = S_3_1^C_3_0;
  S_4_0 = tmp^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = (tmp&(((A>>4)&1) & ((B>>0)&1)))|(S_3_1&C_3_0);
  tmp = S_3_2^C_3_1;
  S_4_1 = tmp^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = (tmp&(((A>>4)&1) & ((B>>1)&1)))|(S_3_2&C_3_1);
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_2_0 & 1) << 2;
  P |= (S_3_0 & 1) << 3;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}

int16_t mul8s_1KRC(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_1_6,C_1_7,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_2_7,C_3_1,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_7,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_7 = 1;
  S_1_3 = (((A>>1)&1) & ((B>>3)&1));
  S_1_4 = (((A>>1)&1) & ((B>>4)&1));
  S_1_5 = (((A>>1)&1) & ((B>>5)&1));
  S_1_6 = S_0_7^(((A>>1)&1) & ((B>>6)&1));
  C_1_6 = S_0_7&(((A>>1)&1) & ((B>>6)&1));
  S_1_7 = 1^(((((A>>1)&1) & ((B>>7)&1)))^1);
  C_1_7 = 1&(((((A>>1)&1) & ((B>>7)&1)))^1);
  S_2_2 = S_1_3^(((A>>2)&1) & ((B>>2)&1));
  C_2_2 = S_1_3&(((A>>2)&1) & ((B>>2)&1));
  S_2_3 = S_1_4^(((A>>2)&1) & ((B>>3)&1));
  C_2_3 = S_1_4&(((A>>2)&1) & ((B>>3)&1));
  S_2_4 = S_1_5^(((A>>2)&1) & ((B>>4)&1));
  C_2_4 = S_1_5&(((A>>2)&1) & ((B>>4)&1));
  S_2_5 = S_1_6^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = S_1_6&(((A>>2)&1) & ((B>>5)&1));
  tmp = S_1_7^C_1_6;
  S_2_6 = tmp^(((A>>2)&1) & ((B>>6)&1));
  C_2_6 = (tmp&(((A>>2)&1) & ((B>>6)&1)))|(S_1_7&C_1_6);
  S_2_7 = C_1_7^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = C_1_7&(((((A>>2)&1) & ((B>>7)&1)))^1);
  S_3_1 = S_2_2^(((A>>3)&1) & ((B>>1)&1));
  C_3_1 = S_2_2&(((A>>3)&1) & ((B>>1)&1));
  tmp = S_2_3^C_2_2;
  S_3_2 = tmp^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = (tmp&(((A>>3)&1) & ((B>>2)&1)))|(S_2_3&C_2_2);
  tmp = S_2_4^C_2_3;
  S_3_3 = tmp^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = (tmp&(((A>>3)&1) & ((B>>3)&1)))|(S_2_4&C_2_3);
  tmp = S_2_5^C_2_4;
  S_3_4 = tmp^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = (tmp&(((A>>3)&1) & ((B>>4)&1)))|(S_2_5&C_2_4);
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  tmp = S_2_7^C_2_6;
  S_3_6 = tmp^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = (tmp&(((A>>3)&1) & ((B>>6)&1)))|(S_2_7&C_2_6);
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  S_4_0 = S_3_1^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = S_3_1&(((A>>4)&1) & ((B>>0)&1));
  tmp = S_3_2^C_3_1;
  S_4_1 = tmp^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = (tmp&(((A>>4)&1) & ((B>>1)&1)))|(S_3_2&C_3_1);
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}

int16_t mul8s_1L2D(int8_t A, int8_t B)
{
 uint16_t O;
 uint8_t n38,n39,n88,O10,n95,O5,n36,n37,n209,O2,n132,n133,n130,n131,n136,n137,n134,n100,n222,n208,n138,n139,n226,n227,n224,n235,n234,n236,O12,n231,O4,n230,n85,n84,n237,n86,n81,n80,n83,n82,n118,n232,n239,n119,n129,n128,n125,n124,n127,n126,n121,n120,n123,n122,n89,n92,n238,n240,n98,n99,n245,n246,n247,n248,n249,n90,n91,n96,n97,n94,O0,n158,n159,n210,n150,n152,n153,n154,n155,n203,n157,n67,n66,n65,n64,n63,n62,n60,n189,n69,n68,n156,n173,n252,n250,n93,O15,O3,n233,n161,n149,n148,n143,n142,n141,n140,n147,n146,n145,n144,n74,n75,n76,n77,n70,n71,n72,n73,O9,n78,n79,n176,n177,n174,n175,n172,O6,n170,n171,n228,n178,n179,n229,n49,n48,n40,n43,n42,n45,n44,n47,O14,O8,n220,O1,n160,n163,n162,n165,n164,n167,n166,n169,n168,n194,n225,O11,n58,n59,n56,n57,n54,n55,n52,n53,n50,n51,n223,n198,n199,n195,n196,n197,n190,n191,n192,n193,n114,n115,n117,n110,n111,n112,n113,n204,n205,n206,n207,n200,n201,n202,n102,O13,n135,n242,n221,n243,n244,O7,n188,n186,n185,n184,n183,n182,n181,n180,n107,n106,n105,n104,n103,n211,n101,n218,n217,n216,n215,n214,n213,n212,n109,n108;
 O0=0;
 O1=0;
 O2=0;
 O3=0;
 O4=((B >> 2)&1)&((A >> 2)&1);
 n111=((B >> 5)&1)&((A >> 4)&1);
 n113=((B >> 7)&1)&((A >> 2)&1);
 n114=((B >> 4)&1)&((A >> 5)&1);
 n115=((B >> 3)&1)&((A >> 6)&1);
 n129=((B >> 3)&1)&((A >> 7)&1);
 n147=((B >> 6)&1)&((A >> 4)&1);
 n148=((B >> 7)&1)&((A >> 3)&1);
 n149=((B >> 5)&1)&((A >> 5)&1);
 n150=((B >> 4)&1)&((A >> 6)&1);
 n166=((B >> 4)&1)&((A >> 7)&1);
 n174=((B >> 5)&1)&((A >> 6)&1);
 n182=((B >> 6)&1)&((A >> 5)&1);
 n185=~(((A >> 4)&1)|((A >> 3)&1));
 n206=((B >> 5)&1)&((A >> 7)&1);
 n216=((B >> 7)&1)&((A >> 5)&1);
 n218=((B >> 6)&1)&((A >> 6)&1);
 n239=((B >> 7)&1)&((A >> 6)&1);
 n240=((B >> 6)&1)&((A >> 7)&1);
 n250=((B >> 7)&1)&((A >> 7)&1);
 n37=((B >> 3)&1)&((A >> 3)&1);
 n39=((B >> 2)&1)&((A >> 3)&1);
 n40=((B >> 3)&1)&((A >> 2)&1);
 n43=((B >> 2)&1)&((A >> 4)&1);
 n45=((B >> 4)&1)&((A >> 2)&1);
 n56=((B >> 3)&1)&((A >> 4)&1);
 n58=((B >> 5)&1)&((A >> 2)&1);
 n59=((B >> 4)&1)&((A >> 3)&1);
 n60=((B >> 2)&1)&((A >> 5)&1);
 n78=((B >> 6)&1)&((A >> 3)&1);
 n80=((B >> 5)&1)&((A >> 3)&1);
 n81=((B >> 6)&1)&((A >> 2)&1);
 n84=((B >> 4)&1)&((A >> 4)&1);
 n85=((B >> 3)&1)&((A >> 5)&1);
 n86=((B >> 2)&1)&((A >> 6)&1);
 n94=((B >> 2)&1)&((A >> 7)&1);
 n112=~(n113^n78);
 n146=~n113&n78;
 n180=n147&n148;
 n184=((B >> 7)&1)&~n185;
 n186=((A >> 4)&1)&n148;
 n36=n37&O4;
 n38=~(n40|n39);
 n44=n45^n37;
 n55=n45&n37;
 n57=n59^n58;
 n77=n78&n58;
 n79=~(n81|n80);
 n83=n59&n58;
 O5=~(n38|n36);
 n107=n84&n83;
 n110=~(n111^n77);
 n141=n111&n77;
 n142=n111&n112;
 n143=n112&n77;
 n145=~(n147^n146);
 n179=n147&n146;
 n181=n148&n146;
 n183=~n186&n184;
 n215=~(n216|n184);
 n217=((A >> 5)&1)&n184;
 n42=~(n43^n36);
 n50=n43&n36;
 n51=n43&n44;
 n52=n44&n36;
 n54=~(n56^n55);
 n72=n56&n55;
 n73=n56&n57;
 n74=n57&n55;
 n76=~(n79|n77);
 n82=~(n84^n83);
 O6=~(n44^n42);
 n106=n84&n76;
 n108=n83&n76;
 n109=n112^n110;
 n140=~(n142|n141);
 n144=n148^n145;
 n178=~(n180|n179);
 n212=n182&n183;
 n214=~(n217|n215);
 n238=~(n239^n215);
 n249=~n239&n215;
 n49=~(n51|n50);
 n53=n57^n54;
 n71=~(n73|n72);
 n75=n82^n76;
 n100=n85&~n75;
 n105=~(n107|n106);
 n135=n114&~n109;
 n139=~n143&n140;
 n172=n149&~n144;
 n177=~n181&n178;
 n236=n218&n214;
 n248=~(n250^n249);
 n48=~n52&n49;
 n66=n60&~n53;
 n70=~n74&n71;
 n101=n85&~n70;
 n104=~n108&n105;
 n138=~(n144^n139);
 n171=~(n144|n139);
 n173=n149&~n139;
 n176=n182^n177;
 n211=n182&~n177;
 n213=n183&~n177;
 n47=~(n53^n48);
 n65=~(n53|n48);
 n67=n60&~n48;
 n69=~(n75^n70);
 n99=~(n75|n70);
 O7=~(n60^n47);
 n103=~(n109^n104);
 n134=~(n109|n104);
 n136=n114&~n104;
 n137=n149^n138;
 n170=~(n172|n171);
 n175=n183^n176;
 n210=~(n212|n211);
 n64=~(n66|n65);
 n68=n85^n69;
 n98=~(n100|n99);
 n102=n114^n103;
 n133=~(n135|n134);
 n165=n150&~n137;
 n169=~n173&n170;
 n204=n174&~n175;
 n209=~n213&n210;
 n63=~n67&n64;
 n93=n86&~n68;
 n97=~n101&n98;
 n126=~(n102|n97);
 n127=n115&~n97;
 n128=n115&~n102;
 n132=~n136&n133;
 n168=n174^n169;
 n203=n174&~n169;
 n205=~(n175|n169);
 n208=n214^n209;
 n235=n214&~n209;
 n237=n218&~n209;
 n62=~(n68^n63);
 n91=~(n68|n63);
 n92=n86&~n63;
 n96=~(n102^n97);
 O8=~(n86^n62);
 n125=~(n127|n126);
 n131=~(n137^n132);
 n163=~(n137|n132);
 n164=n150&~n132;
 n167=~(n175^n168);
 n202=~(n204|n203);
 n207=n218^n208;
 n234=~(n236|n235);
 n90=~(n92|n91);
 n95=n115^n96;
 n120=~(n94|n95);
 n124=~n128&n125;
 n130=n150^n131;
 n162=~(n164|n163);
 n197=~(n166|n167);
 n201=~n205&n202;
 n229=~(n206|n207);
 n233=~n237&n234;
 n89=~n93&n90;
 n119=~(n94|n89);
 n121=~(n95|n89);
 n123=~(n129^n124);
 n156=~(n129|n124);
 n157=~(n129|n130);
 n158=~(n124|n130);
 n161=~n165&n162;
 n200=~(n206^n201);
 n228=~(n206|n201);
 n230=~(n207|n201);
 n232=~(n238^n233);
 n88=~(n94^n89);
 O9=n95^n88;
 n118=~(n120|n119);
 n122=~(n130^n123);
 n155=~(n157|n156);
 n160=~(n166^n161);
 n196=~(n166|n161);
 n198=~(n167|n161);
 n199=~(n207^n200);
 n227=~(n229|n228);
 n231=~(n240^n232);
 n117=~n121&n118;
 n154=~n158&n155;
 n159=~(n167^n160);
 n195=~(n197|n196);
 n226=~n230&n227;
 O10=n122^n117;
 n152=~(n122|n117);
 n153=~(n159^n154);
 n192=~(n159|n154);
 n194=~n198&n195;
 O11=~(n153^n152);
 n191=~n159&n152;
 n193=~n154&n152;
 n224=~(n199|n194);
 n190=~(n192|n191);
 n189=~n193&n190;
 n188=~(n194^n189);
 n223=~(n194|n189);
 n225=~(n199|n189);
 O12=n199^n188;
 n222=~(n224|n223);
 n221=~n225&n222;
 n220=n226^n221;
 n245=n226&n221;
 O13=n231^n220;
 n244=n233&n245;
 n247=~(n233|n245);
 n243=~(n240|n244);
 n246=~(n238|n247);
 n242=n246&~n243;
 O14=n248^n242;
 n252=n249&~n242;
 O15=~(n250|n252);
 O = (O0 << 0)|(O1 << 1)|(O2 << 2)|(O3 << 3)|(O4 << 4)|(O5 << 5)|(O6 << 6)|(O7 << 7)|(O8 << 8)|(O9 << 9)|(O10 << 10)|(O11 << 11)|(O12 << 12)|(O13 << 13)|(O14 << 14)|(O15 << 15);
 return O;
}

int16_t mul8s_1L2H(int8_t A, int8_t B)
{
 uint16_t O;
 uint8_t n162,O13,n85,O15,n38,n39,n88,O10,n290,n319,n95,O5,n36,n37,n349,n348,O11,n303,n341,O2,n343,n345,n117,n346,n132,n133,n228,n229,n136,n137,n134,n135,n222,n223,n138,n139,n226,n227,n224,O1,n160,n87,n327,n86,n316,n151,n231,O4,n325,n80,n235,n234,n237,n236,n81,n233,n83,n82,n200,n232,n239,n238,n320,n201,n169,n129,n128,n168,n334,n335,n127,n126,n330,n331,n332,n122,n89,O12,n64,n155,O6,n211,n317,n240,n98,n99,n245,n246,n247,n92,n93,n90,n91,n96,n97,n94,O0,n158,n159,n342,n329,n328,n150,n152,n153,n323,n322,n321,n157,n67,n66,n65,n333,n63,n62,n60,n284,n291,n307,n69,n230,n125,n175,n124,n301,n68,n173,n253,n252,n304,n257,n170,n255,n254,n121,O3,n171,n318,n120,n161,n149,n148,n123,n340,n143,n142,n310,n140,n147,n146,n145,n144,n74,n75,n76,n77,n70,n71,n72,n73,O9,n262,n339,n78,n79,n263,n338,n294,n178,n293,n261,n176,n177,n174,n306,n172,n300,n268,n269,n266,n267,n264,n265,n309,n308,n260,n179,n248,n131,n289,n326,n344,n49,n48,n286,n287,n280,n282,n283,n40,n43,n42,n45,n44,n47,O14,n250,n299,n251,O8,n298,n220,n256,n279,n278,n163,n221,n165,n164,n167,n166,n271,n270,n273,n272,n275,n274,n277,n276,n209,n324,n130,n225,n259,n315,n297,n296,n295,n258,n156,n292,n58,n59,n56,n57,n54,n55,n52,n53,n50,n51,n350,n314,n305,n351,n337,n198,n199,n106,n195,n196,n190,n191,n192,n193,n114,n116,n302,n110,n111,n112,n113,n204,n205,n206,n207,n118,n119,n202,n203,n219,n249,n218,n288,n100,n242,n285,O7,n312,n243,n313,n244,n208,n141,n214,n189,n188,n187,n186,n185,n184,n183,n182,n181,n180,n107,n194,n105,n104,n103,n102,n101,n217,n216,n215,n210,n213,n212,n109,n108;
 O0=0;
 O1=0;
 O2=((B >> 1)&1)&((A >> 1)&1);
 n108=((B >> 4)&1)&((A >> 3)&1);
 n110=((B >> 6)&1)&((A >> 1)&1);
 n111=((B >> 5)&1)&((A >> 2)&1);
 n112=((B >> 3)&1)&((A >> 4)&1);
 n113=((B >> 2)&1)&((A >> 5)&1);
 n114=((B >> 1)&1)&((A >> 6)&1);
 n122=((B >> 1)&1)&((A >> 7)&1);
 n147=((B >> 5)&1)&((A >> 3)&1);
 n149=((B >> 7)&1)&((A >> 1)&1);
 n150=((B >> 6)&1)&((A >> 2)&1);
 n151=((B >> 4)&1)&((A >> 4)&1);
 n152=((B >> 3)&1)&((A >> 5)&1);
 n153=((B >> 2)&1)&((A >> 6)&1);
 n167=((B >> 2)&1)&((A >> 7)&1);
 n192=((B >> 6)&1)&((A >> 3)&1);
 n193=((B >> 7)&1)&((A >> 2)&1);
 n194=((B >> 5)&1)&((A >> 4)&1);
 n195=((B >> 4)&1)&((A >> 5)&1);
 n196=((B >> 3)&1)&((A >> 6)&1);
 n212=((B >> 3)&1)&((A >> 7)&1);
 n227=((B >> 5)&1)&((A >> 5)&1);
 n235=((B >> 6)&1)&((A >> 4)&1);
 n238=~(((A >> 3)&1)|((A >> 2)&1));
 n240=((B >> 4)&1)&((A >> 6)&1);
 n260=((B >> 4)&1)&((A >> 7)&1);
 n277=((B >> 7)&1)&((A >> 4)&1);
 n279=((B >> 6)&1)&((A >> 5)&1);
 n280=((B >> 5)&1)&((A >> 6)&1);
 n300=((B >> 5)&1)&((A >> 7)&1);
 n308=((B >> 6)&1)&((A >> 6)&1);
 n310=((B >> 7)&1)&((A >> 5)&1);
 n330=((B >> 6)&1)&((A >> 7)&1);
 n334=((B >> 7)&1)&((A >> 6)&1);
 n346=((B >> 7)&1)&((A >> 7)&1);
 n37=((B >> 2)&1)&((A >> 2)&1);
 n39=((B >> 1)&1)&((A >> 2)&1);
 n40=((B >> 2)&1)&((A >> 1)&1);
 n43=((B >> 1)&1)&((A >> 3)&1);
 n45=((B >> 3)&1)&((A >> 1)&1);
 n56=((B >> 2)&1)&((A >> 3)&1);
 n58=((B >> 4)&1)&((A >> 1)&1);
 n59=((B >> 3)&1)&((A >> 2)&1);
 n60=((B >> 1)&1)&((A >> 4)&1);
 n78=((B >> 3)&1)&((A >> 3)&1);
 n80=((B >> 5)&1)&((A >> 1)&1);
 n81=((B >> 4)&1)&((A >> 2)&1);
 n82=((B >> 2)&1)&((A >> 4)&1);
 n83=((B >> 1)&1)&((A >> 5)&1);
 n107=n81&n80;
 n109=n111^n110;
 n146=n111&n110;
 n148=~(n150^n149);
 n191=n150&~n149;
 n233=n192&n193;
 n237=((B >> 7)&1)&~n238;
 n239=((A >> 3)&1)&n193;
 n36=n37&O2;
 n38=~(n40|n39);
 n44=n45^n37;
 n55=n45&n37;
 n57=n59^n58;
 n77=n59&n58;
 n79=n81^n80;
 O3=~(n38|n36);
 n102=n78&n77;
 n103=n78&n79;
 n104=n79&n77;
 n106=~(n108^n107);
 n141=n108&n107;
 n142=n108&n109;
 n143=n109&n107;
 n145=~(n147^n146);
 n186=n147&n146;
 n187=n147&n148;
 n188=n148&n146;
 n190=~(n192^n191);
 n232=n192&n191;
 n234=n193&n191;
 n236=~n239&n237;
 n276=~(n277|n237);
 n278=((A >> 4)&1)&n237;
 n42=~(n43^n36);
 n50=n43&n36;
 n51=n43&n44;
 n52=n44&n36;
 n54=~(n56^n55);
 n72=n56&n55;
 n73=n56&n57;
 n74=n57&n55;
 n76=~(n78^n77);
 O4=~(n44^n42);
 n101=~(n103|n102);
 n105=n109^n106;
 n140=~(n142|n141);
 n144=n148^n145;
 n185=~(n187|n186);
 n189=n193^n190;
 n231=~(n233|n232);
 n273=n235&n236;
 n275=~(n278|n276);
 n309=~(n310^n276);
 n333=~n310&n276;
 n49=~(n51|n50);
 n53=n57^n54;
 n71=~(n73|n72);
 n75=n79^n76;
 n100=~n104&n101;
 n135=n112&~n105;
 n139=~n143&n140;
 n180=n151&~n144;
 n184=~n188&n185;
 n225=n194&~n189;
 n230=~n234&n231;
 n306=n279&n275;
 n328=n308&n309;
 n332=~n334&n333;
 n335=((A >> 6)&1)&~n333;
 n48=~n52&n49;
 n66=n60&~n53;
 n70=~n74&n71;
 n96=n82&~n75;
 n134=~(n105|n100);
 n136=n112&~n100;
 n138=~(n144^n139);
 n179=~(n144|n139);
 n181=n151&~n139;
 n183=~(n189^n184);
 n224=~(n189|n184);
 n226=n194&~n184;
 n229=n235^n230;
 n272=n235&~n230;
 n274=n236&~n230;
 n331=~(n335|n332);
 n345=~(n346^n332);
 n350=n346&n332;
 n47=~(n53^n48);
 n65=~(n53|n48);
 n67=n60&~n48;
 n69=~(n75^n70);
 n95=~(n75|n70);
 n97=n82&~n70;
 n99=~(n105^n100);
 O5=~(n60^n47);
 n133=~(n135|n134);
 n137=n151^n138;
 n178=~(n180|n179);
 n182=n194^n183;
 n223=~(n225|n224);
 n228=n236^n229;
 n271=~(n273|n272);
 n64=~(n66|n65);
 n68=n82^n69;
 n94=~(n96|n95);
 n98=n112^n99;
 n129=n113&~n98;
 n132=~n136&n133;
 n174=n152&~n137;
 n177=~n181&n178;
 n219=n195&~n182;
 n222=~n226&n223;
 n266=n227&~n228;
 n270=~n274&n271;
 n63=~n67&n64;
 n90=n83&~n68;
 n93=~n97&n94;
 n127=~(n98|n93);
 n128=n113&~n93;
 n131=~(n137^n132);
 n172=~(n137|n132);
 n173=n152&~n132;
 n176=~(n182^n177);
 n217=~(n182|n177);
 n218=n195&~n177;
 n221=n227^n222;
 n265=n227&~n222;
 n267=~(n228|n222);
 n269=n275^n270;
 n305=n275&~n270;
 n307=n279&~n270;
 n62=~(n68^n63);
 n88=~(n68|n63);
 n89=n83&~n63;
 n92=~(n98^n93);
 O6=~(n83^n62);
 n126=~(n128|n127);
 n130=n152^n131;
 n171=~(n173|n172);
 n175=n195^n176;
 n216=~(n218|n217);
 n220=~(n228^n221);
 n264=~(n266|n265);
 n268=n279^n269;
 n304=~(n306|n305);
 n87=~(n89|n88);
 n91=n113^n92;
 n121=n114&~n91;
 n125=~n129&n126;
 n166=n153&~n130;
 n170=~n174&n171;
 n211=n196&~n175;
 n215=~n219&n216;
 n258=n240&~n220;
 n263=~n267&n264;
 n298=n280&~n268;
 n303=~n307&n304;
 n86=~n90&n87;
 n119=~(n91|n86);
 n120=n114&~n86;
 n124=~(n130^n125);
 n164=~(n130|n125);
 n165=n153&~n125;
 n169=~(n175^n170);
 n209=~(n175|n170);
 n210=n196&~n170;
 n214=~(n220^n215);
 n257=~(n220|n215);
 n259=n240&~n215;
 n262=~(n268^n263);
 n297=~(n268|n263);
 n299=n280&~n263;
 n302=n308^n303;
 n327=n308&~n303;
 n329=n309&~n303;
 n85=~(n91^n86);
 O7=~(n114^n85);
 n118=~(n120|n119);
 n123=n153^n124;
 n163=~(n165|n164);
 n168=n196^n169;
 n208=~(n210|n209);
 n213=n240^n214;
 n256=~(n258|n257);
 n261=n280^n262;
 n296=~(n298|n297);
 n301=n309^n302;
 n326=~(n328|n327);
 n117=~n121&n118;
 n158=~(n122|n123);
 n162=~n166&n163;
 n203=~(n167|n168);
 n207=~n211&n208;
 n251=~(n212|n213);
 n255=~n259&n256;
 n291=~(n260|n261);
 n295=~n299&n296;
 n321=~(n300|n301);
 n325=~n329&n326;
 n116=~(n122^n117);
 n157=~(n122|n117);
 n159=~(n123|n117);
 n161=~(n167^n162);
 n202=~(n167|n162);
 n204=~(n168|n162);
 n206=~(n212^n207);
 n250=~(n212|n207);
 n252=~(n213|n207);
 n254=~(n260^n255);
 n290=~(n260|n255);
 n292=~(n261|n255);
 n294=~(n300^n295);
 n320=~(n300|n295);
 n322=~(n301|n295);
 n324=n330^n325;
 n343=~(n330|n325);
 O8=n123^n116;
 n156=~(n158|n157);
 n160=~(n168^n161);
 n201=~(n203|n202);
 n205=~(n213^n206);
 n249=~(n251|n250);
 n253=~(n261^n254);
 n289=~(n291|n290);
 n293=~(n301^n294);
 n319=~(n321|n320);
 n323=n331^n324;
 n342=~(n331|n343);
 n155=~n159&n156;
 n200=~n204&n201;
 n248=~n252&n249;
 n288=~n292&n289;
 n318=~n322&n319;
 O9=n160^n155;
 n198=~(n160|n155);
 n199=~(n205^n200);
 n246=~(n205|n200);
 n286=~(n253|n248);
 n316=~(n293|n288);
 n341=n323&~n318;
 O10=~(n199^n198);
 n245=~n205&n198;
 n247=~n200&n198;
 n340=n342&~n341;
 n244=~(n246|n245);
 n243=~n247&n244;
 n242=~(n248^n243);
 n285=~(n248|n243);
 n287=~(n253|n243);
 O11=n253^n242;
 n284=~(n286|n285);
 n283=~n287&n284;
 n282=~(n288^n283);
 n315=~(n288|n283);
 n317=~(n293|n283);
 O12=n293^n282;
 n314=~(n316|n315);
 n313=~n317&n314;
 n312=~(n318^n313);
 n339=~(n318|n313);
 n344=n323&~n313;
 O13=~(n323^n312);
 n338=n340&~n339;
 n337=~n344&n338;
 O14=n345^n337;
 n349=n346&~n337;
 n351=n332&~n337;
 n348=~(n350|n349);
 O15=~n351&n348;
 O = (O0 << 0)|(O1 << 1)|(O2 << 2)|(O3 << 3)|(O4 << 4)|(O5 << 5)|(O6 << 6)|(O7 << 7)|(O8 << 8)|(O9 << 9)|(O10 << 10)|(O11 << 11)|(O12 << 12)|(O13 << 13)|(O14 << 14)|(O15 << 15);
 return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.049 %
// MAE = 32 
// WCE% = 0.20 %
// WCE = 128 
// WCRE% = 100.00 %
// EP% = 49.80 %
// MRE% = 2.40 %
// MSE = 2731 
// PDK45_PWR = 0.369 mW
// PDK45_AREA = 652.8 um2
// PDK45_DELAY = 1.37 ns


int16_t mul8s_1KR8(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_1_6,C_1_7,C_2_0,C_2_1,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_2_7,C_3_0,C_3_1,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_7,S_1_0,S_1_1,S_1_2,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_2_0,S_2_1,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_0,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_7 = 1;
  S_1_0 = (((A>>1)&1) & ((B>>0)&1));
  S_1_1 = (((A>>1)&1) & ((B>>1)&1));
  S_1_2 = (((A>>1)&1) & ((B>>2)&1));
  S_1_3 = (((A>>1)&1) & ((B>>3)&1));
  S_1_4 = (((A>>1)&1) & ((B>>4)&1));
  S_1_5 = (((A>>1)&1) & ((B>>5)&1));
  S_1_6 = S_0_7^(((A>>1)&1) & ((B>>6)&1));
  C_1_6 = S_0_7&(((A>>1)&1) & ((B>>6)&1));
  S_1_7 = 1^(((((A>>1)&1) & ((B>>7)&1)))^1);
  C_1_7 = 1&(((((A>>1)&1) & ((B>>7)&1)))^1);
  S_2_0 = S_1_1^(((A>>2)&1) & ((B>>0)&1));
  C_2_0 = S_1_1&(((A>>2)&1) & ((B>>0)&1));
  S_2_1 = S_1_2^(((A>>2)&1) & ((B>>1)&1));
  C_2_1 = S_1_2&(((A>>2)&1) & ((B>>1)&1));
  S_2_2 = S_1_3^(((A>>2)&1) & ((B>>2)&1));
  C_2_2 = S_1_3&(((A>>2)&1) & ((B>>2)&1));
  S_2_3 = S_1_4^(((A>>2)&1) & ((B>>3)&1));
  C_2_3 = S_1_4&(((A>>2)&1) & ((B>>3)&1));
  S_2_4 = S_1_5^(((A>>2)&1) & ((B>>4)&1));
  C_2_4 = S_1_5&(((A>>2)&1) & ((B>>4)&1));
  S_2_5 = S_1_6^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = S_1_6&(((A>>2)&1) & ((B>>5)&1));
  tmp = S_1_7^C_1_6;
  S_2_6 = tmp^(((A>>2)&1) & ((B>>6)&1));
  C_2_6 = (tmp&(((A>>2)&1) & ((B>>6)&1)))|(S_1_7&C_1_6);
  S_2_7 = C_1_7^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = C_1_7&(((((A>>2)&1) & ((B>>7)&1)))^1);
  tmp = S_2_1^C_2_0;
  S_3_0 = tmp^(((A>>3)&1) & ((B>>0)&1));
  C_3_0 = (tmp&(((A>>3)&1) & ((B>>0)&1)))|(S_2_1&C_2_0);
  tmp = S_2_2^C_2_1;
  S_3_1 = tmp^(((A>>3)&1) & ((B>>1)&1));
  C_3_1 = (tmp&(((A>>3)&1) & ((B>>1)&1)))|(S_2_2&C_2_1);
  tmp = S_2_3^C_2_2;
  S_3_2 = tmp^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = (tmp&(((A>>3)&1) & ((B>>2)&1)))|(S_2_3&C_2_2);
  tmp = S_2_4^C_2_3;
  S_3_3 = tmp^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = (tmp&(((A>>3)&1) & ((B>>3)&1)))|(S_2_4&C_2_3);
  tmp = S_2_5^C_2_4;
  S_3_4 = tmp^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = (tmp&(((A>>3)&1) & ((B>>4)&1)))|(S_2_5&C_2_4);
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  tmp = S_2_7^C_2_6;
  S_3_6 = tmp^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = (tmp&(((A>>3)&1) & ((B>>6)&1)))|(S_2_7&C_2_6);
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  tmp = S_3_1^C_3_0;
  S_4_0 = tmp^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = (tmp&(((A>>4)&1) & ((B>>0)&1)))|(S_3_1&C_3_0);
  tmp = S_3_2^C_3_1;
  S_4_1 = tmp^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = (tmp&(((A>>4)&1) & ((B>>1)&1)))|(S_3_2&C_3_1);
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_1_0 & 1) << 1;
  P |= (S_2_0 & 1) << 2;
  P |= (S_3_0 & 1) << 3;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}

int16_t mul8s_1KTY(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_3_4,C_3_7,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_7,S_1_6,S_2_5,S_3_0,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_7 = 1;
  S_1_6 = 1;
  S_2_5 = 1;
  S_3_0 = (((A>>3)&1) & ((B>>0)&1));
  S_3_1 = (((A>>3)&1) & ((B>>1)&1));
  S_3_2 = (((A>>3)&1) & ((B>>2)&1));
  S_3_3 = (((A>>3)&1) & ((B>>3)&1));
  S_3_4 = S_2_5^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = S_2_5&(((A>>3)&1) & ((B>>4)&1));
  S_3_5 = (((A>>3)&1) & ((B>>5)&1));
  S_3_6 = (((A>>3)&1) & ((B>>6)&1));
  S_3_7 = 1^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = 1&(((((A>>3)&1) & ((B>>7)&1)))^1);
  S_4_0 = S_3_1^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = S_3_1&(((A>>4)&1) & ((B>>0)&1));
  S_4_1 = S_3_2^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = S_3_2&(((A>>4)&1) & ((B>>1)&1));
  S_4_2 = S_3_3^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = S_3_3&(((A>>4)&1) & ((B>>2)&1));
  S_4_3 = S_3_4^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = S_3_4&(((A>>4)&1) & ((B>>3)&1));
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  S_4_5 = S_3_6^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = S_3_6&(((A>>4)&1) & ((B>>5)&1));
  S_4_6 = S_3_7^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = S_3_7&(((A>>4)&1) & ((B>>6)&1));
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_3_0 & 1) << 3;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}

int16_t mul8s_1KR6(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_1_6,C_1_7,C_2_1,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_2_7,C_3_0,C_3_1,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_7,S_1_2,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_2_1,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_0,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_7 = 1;
  S_1_2 = (((A>>1)&1) & ((B>>2)&1));
  S_1_3 = (((A>>1)&1) & ((B>>3)&1));
  S_1_4 = (((A>>1)&1) & ((B>>4)&1));
  S_1_5 = (((A>>1)&1) & ((B>>5)&1));
  S_1_6 = S_0_7^(((A>>1)&1) & ((B>>6)&1));
  C_1_6 = S_0_7&(((A>>1)&1) & ((B>>6)&1));
  S_1_7 = 1^(((((A>>1)&1) & ((B>>7)&1)))^1);
  C_1_7 = 1&(((((A>>1)&1) & ((B>>7)&1)))^1);
  S_2_1 = S_1_2^(((A>>2)&1) & ((B>>1)&1));
  C_2_1 = S_1_2&(((A>>2)&1) & ((B>>1)&1));
  S_2_2 = S_1_3^(((A>>2)&1) & ((B>>2)&1));
  C_2_2 = S_1_3&(((A>>2)&1) & ((B>>2)&1));
  S_2_3 = S_1_4^(((A>>2)&1) & ((B>>3)&1));
  C_2_3 = S_1_4&(((A>>2)&1) & ((B>>3)&1));
  S_2_4 = S_1_5^(((A>>2)&1) & ((B>>4)&1));
  C_2_4 = S_1_5&(((A>>2)&1) & ((B>>4)&1));
  S_2_5 = S_1_6^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = S_1_6&(((A>>2)&1) & ((B>>5)&1));
  tmp = S_1_7^C_1_6;
  S_2_6 = tmp^(((A>>2)&1) & ((B>>6)&1));
  C_2_6 = (tmp&(((A>>2)&1) & ((B>>6)&1)))|(S_1_7&C_1_6);
  S_2_7 = C_1_7^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = C_1_7&(((((A>>2)&1) & ((B>>7)&1)))^1);
  S_3_0 = S_2_1^(((A>>3)&1) & ((B>>0)&1));
  C_3_0 = S_2_1&(((A>>3)&1) & ((B>>0)&1));
  tmp = S_2_2^C_2_1;
  S_3_1 = tmp^(((A>>3)&1) & ((B>>1)&1));
  C_3_1 = (tmp&(((A>>3)&1) & ((B>>1)&1)))|(S_2_2&C_2_1);
  tmp = S_2_3^C_2_2;
  S_3_2 = tmp^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = (tmp&(((A>>3)&1) & ((B>>2)&1)))|(S_2_3&C_2_2);
  tmp = S_2_4^C_2_3;
  S_3_3 = tmp^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = (tmp&(((A>>3)&1) & ((B>>3)&1)))|(S_2_4&C_2_3);
  tmp = S_2_5^C_2_4;
  S_3_4 = tmp^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = (tmp&(((A>>3)&1) & ((B>>4)&1)))|(S_2_5&C_2_4);
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  tmp = S_2_7^C_2_6;
  S_3_6 = tmp^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = (tmp&(((A>>3)&1) & ((B>>6)&1)))|(S_2_7&C_2_6);
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  tmp = S_3_1^C_3_0;
  S_4_0 = tmp^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = (tmp&(((A>>4)&1) & ((B>>0)&1)))|(S_3_1&C_3_0);
  tmp = S_3_2^C_3_1;
  S_4_1 = tmp^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = (tmp&(((A>>4)&1) & ((B>>1)&1)))|(S_3_2&C_3_1);
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_3_0 & 1) << 3;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}

int16_t mul8s_1KV8(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_1_0,C_1_1,C_1_2,C_1_3,C_1_4,C_1_5,C_1_6,C_1_7,C_2_0,C_2_1,C_2_2,C_2_3,C_2_4,C_2_5,C_2_6,C_2_7,C_3_0,C_3_1,C_3_2,C_3_3,C_3_4,C_3_5,C_3_6,C_3_7,C_4_0,C_4_1,C_4_2,C_4_3,C_4_4,C_4_5,C_4_6,C_4_7,C_5_0,C_5_1,C_5_2,C_5_3,C_5_4,C_5_5,C_5_6,C_5_7,C_6_0,C_6_1,C_6_2,C_6_3,C_6_4,C_6_5,C_6_6,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,C_8_0,C_8_1,C_8_2,C_8_3,C_8_4,C_8_5,C_8_6,C_8_7,S_0_0,S_0_1,S_0_2,S_0_3,S_0_4,S_0_5,S_0_6,S_0_7,S_1_0,S_1_1,S_1_2,S_1_3,S_1_4,S_1_5,S_1_6,S_1_7,S_2_0,S_2_1,S_2_2,S_2_3,S_2_4,S_2_5,S_2_6,S_2_7,S_3_0,S_3_1,S_3_2,S_3_3,S_3_4,S_3_5,S_3_6,S_3_7,S_4_0,S_4_1,S_4_2,S_4_3,S_4_4,S_4_5,S_4_6,S_4_7,S_5_0,S_5_1,S_5_2,S_5_3,S_5_4,S_5_5,S_5_6,S_5_7,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7;
  S_0_0 = (((A>>0)&1) & ((B>>0)&1));
  S_0_1 = (((A>>0)&1) & ((B>>1)&1));
  S_0_2 = (((A>>0)&1) & ((B>>2)&1));
  S_0_3 = (((A>>0)&1) & ((B>>3)&1));
  S_0_4 = (((A>>0)&1) & ((B>>4)&1));
  S_0_5 = (((A>>0)&1) & ((B>>5)&1));
  S_0_6 = (((A>>0)&1) & ((B>>6)&1));
  S_0_7 = (((((A>>0)&1) & ((B>>7)&1)))^1);
  S_1_0 = S_0_1^(((A>>1)&1) & ((B>>0)&1));
  C_1_0 = S_0_1&(((A>>1)&1) & ((B>>0)&1));
  S_1_1 = S_0_2^(((A>>1)&1) & ((B>>1)&1));
  C_1_1 = S_0_2&(((A>>1)&1) & ((B>>1)&1));
  S_1_2 = S_0_3^(((A>>1)&1) & ((B>>2)&1));
  C_1_2 = S_0_3&(((A>>1)&1) & ((B>>2)&1));
  S_1_3 = S_0_4^(((A>>1)&1) & ((B>>3)&1));
  C_1_3 = S_0_4&(((A>>1)&1) & ((B>>3)&1));
  S_1_4 = S_0_5^(((A>>1)&1) & ((B>>4)&1));
  C_1_4 = S_0_5&(((A>>1)&1) & ((B>>4)&1));
  S_1_5 = S_0_6^(((A>>1)&1) & ((B>>5)&1));
  C_1_5 = S_0_6&(((A>>1)&1) & ((B>>5)&1));
  S_1_6 = S_0_7^(((A>>1)&1) & ((B>>6)&1));
  C_1_6 = S_0_7&(((A>>1)&1) & ((B>>6)&1));
  S_1_7 = 1^(((((A>>1)&1) & ((B>>7)&1)))^1);
  C_1_7 = 1&(((((A>>1)&1) & ((B>>7)&1)))^1);
  tmp = S_1_1^C_1_0;
  S_2_0 = tmp^(((A>>2)&1) & ((B>>0)&1));
  C_2_0 = (tmp&(((A>>2)&1) & ((B>>0)&1)))|(S_1_1&C_1_0);
  tmp = S_1_2^C_1_1;
  S_2_1 = tmp^(((A>>2)&1) & ((B>>1)&1));
  C_2_1 = (tmp&(((A>>2)&1) & ((B>>1)&1)))|(S_1_2&C_1_1);
  tmp = S_1_3^C_1_2;
  S_2_2 = tmp^(((A>>2)&1) & ((B>>2)&1));
  C_2_2 = (tmp&(((A>>2)&1) & ((B>>2)&1)))|(S_1_3&C_1_2);
  tmp = S_1_4^C_1_3;
  S_2_3 = tmp^(((A>>2)&1) & ((B>>3)&1));
  C_2_3 = (tmp&(((A>>2)&1) & ((B>>3)&1)))|(S_1_4&C_1_3);
  tmp = S_1_5^C_1_4;
  S_2_4 = tmp^(((A>>2)&1) & ((B>>4)&1));
  C_2_4 = (tmp&(((A>>2)&1) & ((B>>4)&1)))|(S_1_5&C_1_4);
  tmp = S_1_6^C_1_5;
  S_2_5 = tmp^(((A>>2)&1) & ((B>>5)&1));
  C_2_5 = (tmp&(((A>>2)&1) & ((B>>5)&1)))|(S_1_6&C_1_5);
  tmp = S_1_7^C_1_6;
  S_2_6 = tmp^(((A>>2)&1) & ((B>>6)&1));
  C_2_6 = (tmp&(((A>>2)&1) & ((B>>6)&1)))|(S_1_7&C_1_6);
  S_2_7 = C_1_7^(((((A>>2)&1) & ((B>>7)&1)))^1);
  C_2_7 = C_1_7&(((((A>>2)&1) & ((B>>7)&1)))^1);
  tmp = S_2_1^C_2_0;
  S_3_0 = tmp^(((A>>3)&1) & ((B>>0)&1));
  C_3_0 = (tmp&(((A>>3)&1) & ((B>>0)&1)))|(S_2_1&C_2_0);
  tmp = S_2_2^C_2_1;
  S_3_1 = tmp^(((A>>3)&1) & ((B>>1)&1));
  C_3_1 = (tmp&(((A>>3)&1) & ((B>>1)&1)))|(S_2_2&C_2_1);
  tmp = S_2_3^C_2_2;
  S_3_2 = tmp^(((A>>3)&1) & ((B>>2)&1));
  C_3_2 = (tmp&(((A>>3)&1) & ((B>>2)&1)))|(S_2_3&C_2_2);
  tmp = S_2_4^C_2_3;
  S_3_3 = tmp^(((A>>3)&1) & ((B>>3)&1));
  C_3_3 = (tmp&(((A>>3)&1) & ((B>>3)&1)))|(S_2_4&C_2_3);
  tmp = S_2_5^C_2_4;
  S_3_4 = tmp^(((A>>3)&1) & ((B>>4)&1));
  C_3_4 = (tmp&(((A>>3)&1) & ((B>>4)&1)))|(S_2_5&C_2_4);
  tmp = S_2_6^C_2_5;
  S_3_5 = tmp^(((A>>3)&1) & ((B>>5)&1));
  C_3_5 = (tmp&(((A>>3)&1) & ((B>>5)&1)))|(S_2_6&C_2_5);
  tmp = S_2_7^C_2_6;
  S_3_6 = tmp^(((A>>3)&1) & ((B>>6)&1));
  C_3_6 = (tmp&(((A>>3)&1) & ((B>>6)&1)))|(S_2_7&C_2_6);
  S_3_7 = C_2_7^(((((A>>3)&1) & ((B>>7)&1)))^1);
  C_3_7 = C_2_7&(((((A>>3)&1) & ((B>>7)&1)))^1);
  tmp = S_3_1^C_3_0;
  S_4_0 = tmp^(((A>>4)&1) & ((B>>0)&1));
  C_4_0 = (tmp&(((A>>4)&1) & ((B>>0)&1)))|(S_3_1&C_3_0);
  tmp = S_3_2^C_3_1;
  S_4_1 = tmp^(((A>>4)&1) & ((B>>1)&1));
  C_4_1 = (tmp&(((A>>4)&1) & ((B>>1)&1)))|(S_3_2&C_3_1);
  tmp = S_3_3^C_3_2;
  S_4_2 = tmp^(((A>>4)&1) & ((B>>2)&1));
  C_4_2 = (tmp&(((A>>4)&1) & ((B>>2)&1)))|(S_3_3&C_3_2);
  tmp = S_3_4^C_3_3;
  S_4_3 = tmp^(((A>>4)&1) & ((B>>3)&1));
  C_4_3 = (tmp&(((A>>4)&1) & ((B>>3)&1)))|(S_3_4&C_3_3);
  tmp = S_3_5^C_3_4;
  S_4_4 = tmp^(((A>>4)&1) & ((B>>4)&1));
  C_4_4 = (tmp&(((A>>4)&1) & ((B>>4)&1)))|(S_3_5&C_3_4);
  tmp = S_3_6^C_3_5;
  S_4_5 = tmp^(((A>>4)&1) & ((B>>5)&1));
  C_4_5 = (tmp&(((A>>4)&1) & ((B>>5)&1)))|(S_3_6&C_3_5);
  tmp = S_3_7^C_3_6;
  S_4_6 = tmp^(((A>>4)&1) & ((B>>6)&1));
  C_4_6 = (tmp&(((A>>4)&1) & ((B>>6)&1)))|(S_3_7&C_3_6);
  S_4_7 = C_3_7^(((((A>>4)&1) & ((B>>7)&1)))^1);
  C_4_7 = C_3_7&(((((A>>4)&1) & ((B>>7)&1)))^1);
  tmp = S_4_1^C_4_0;
  S_5_0 = tmp^(((A>>5)&1) & ((B>>0)&1));
  C_5_0 = (tmp&(((A>>5)&1) & ((B>>0)&1)))|(S_4_1&C_4_0);
  tmp = S_4_2^C_4_1;
  S_5_1 = tmp^(((A>>5)&1) & ((B>>1)&1));
  C_5_1 = (tmp&(((A>>5)&1) & ((B>>1)&1)))|(S_4_2&C_4_1);
  tmp = S_4_3^C_4_2;
  S_5_2 = tmp^(((A>>5)&1) & ((B>>2)&1));
  C_5_2 = (tmp&(((A>>5)&1) & ((B>>2)&1)))|(S_4_3&C_4_2);
  tmp = S_4_4^C_4_3;
  S_5_3 = tmp^(((A>>5)&1) & ((B>>3)&1));
  C_5_3 = (tmp&(((A>>5)&1) & ((B>>3)&1)))|(S_4_4&C_4_3);
  tmp = S_4_5^C_4_4;
  S_5_4 = tmp^(((A>>5)&1) & ((B>>4)&1));
  C_5_4 = (tmp&(((A>>5)&1) & ((B>>4)&1)))|(S_4_5&C_4_4);
  tmp = S_4_6^C_4_5;
  S_5_5 = tmp^(((A>>5)&1) & ((B>>5)&1));
  C_5_5 = (tmp&(((A>>5)&1) & ((B>>5)&1)))|(S_4_6&C_4_5);
  tmp = S_4_7^C_4_6;
  S_5_6 = tmp^(((A>>5)&1) & ((B>>6)&1));
  C_5_6 = (tmp&(((A>>5)&1) & ((B>>6)&1)))|(S_4_7&C_4_6);
  S_5_7 = C_4_7^(((((A>>5)&1) & ((B>>7)&1)))^1);
  C_5_7 = C_4_7&(((((A>>5)&1) & ((B>>7)&1)))^1);
  tmp = S_5_1^C_5_0;
  S_6_0 = tmp^(((A>>6)&1) & ((B>>0)&1));
  C_6_0 = (tmp&(((A>>6)&1) & ((B>>0)&1)))|(S_5_1&C_5_0);
  tmp = S_5_2^C_5_1;
  S_6_1 = tmp^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = (tmp&(((A>>6)&1) & ((B>>1)&1)))|(S_5_2&C_5_1);
  tmp = S_5_3^C_5_2;
  S_6_2 = tmp^(((A>>6)&1) & ((B>>2)&1));
  C_6_2 = (tmp&(((A>>6)&1) & ((B>>2)&1)))|(S_5_3&C_5_2);
  tmp = S_5_4^C_5_3;
  S_6_3 = tmp^(((A>>6)&1) & ((B>>3)&1));
  C_6_3 = (tmp&(((A>>6)&1) & ((B>>3)&1)))|(S_5_4&C_5_3);
  tmp = S_5_5^C_5_4;
  S_6_4 = tmp^(((A>>6)&1) & ((B>>4)&1));
  C_6_4 = (tmp&(((A>>6)&1) & ((B>>4)&1)))|(S_5_5&C_5_4);
  tmp = S_5_6^C_5_5;
  S_6_5 = tmp^(((A>>6)&1) & ((B>>5)&1));
  C_6_5 = (tmp&(((A>>6)&1) & ((B>>5)&1)))|(S_5_6&C_5_5);
  tmp = S_5_7^C_5_6;
  S_6_6 = tmp^(((A>>6)&1) & ((B>>6)&1));
  C_6_6 = (tmp&(((A>>6)&1) & ((B>>6)&1)))|(S_5_7&C_5_6);
  S_6_7 = C_5_7^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = C_5_7&(((((A>>6)&1) & ((B>>7)&1)))^1);
  tmp = S_6_1^C_6_0;
  S_7_0 = tmp^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = (tmp&(((((A>>7)&1) & ((B>>0)&1)))^1))|(S_6_1&C_6_0);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  tmp = S_6_3^C_6_2;
  S_7_2 = tmp^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = (tmp&(((((A>>7)&1) & ((B>>2)&1)))^1))|(S_6_3&C_6_2);
  tmp = S_6_4^C_6_3;
  S_7_3 = tmp^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = (tmp&(((((A>>7)&1) & ((B>>3)&1)))^1))|(S_6_4&C_6_3);
  tmp = S_6_5^C_6_4;
  S_7_4 = tmp^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = (tmp&(((((A>>7)&1) & ((B>>4)&1)))^1))|(S_6_5&C_6_4);
  tmp = S_6_6^C_6_5;
  S_7_5 = tmp^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = (tmp&(((((A>>7)&1) & ((B>>5)&1)))^1))|(S_6_6&C_6_5);
  tmp = S_6_7^C_6_6;
  S_7_6 = tmp^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = (tmp&(((((A>>7)&1) & ((B>>6)&1)))^1))|(S_6_7&C_6_6);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  S_8_0 = S_7_1^C_7_0;
  C_8_0 = S_7_1&C_7_0;
  tmp = S_7_2^C_8_0;
  S_8_1 = tmp^C_7_1;
  C_8_1 = (tmp&C_7_1)|(S_7_2&C_8_0);
  tmp = S_7_3^C_8_1;
  S_8_2 = tmp^C_7_2;
  C_8_2 = (tmp&C_7_2)|(S_7_3&C_8_1);
  tmp = S_7_4^C_8_2;
  S_8_3 = tmp^C_7_3;
  C_8_3 = (tmp&C_7_3)|(S_7_4&C_8_2);
  tmp = S_7_5^C_8_3;
  S_8_4 = tmp^C_7_4;
  C_8_4 = (tmp&C_7_4)|(S_7_5&C_8_3);
  tmp = S_7_6^C_8_4;
  S_8_5 = tmp^C_7_5;
  C_8_5 = (tmp&C_7_5)|(S_7_6&C_8_4);
  tmp = S_7_7^C_8_5;
  S_8_6 = tmp^C_7_6;
  C_8_6 = (tmp&C_7_6)|(S_7_7&C_8_5);
  tmp = 1^C_8_6;
  S_8_7 = tmp^C_7_7;
  C_8_7 = (tmp&C_7_7)|(1&C_8_6);
  P = 0;
  P |= (S_0_0 & 1) << 0;
  P |= (S_1_0 & 1) << 1;
  P |= (S_2_0 & 1) << 2;
  P |= (S_3_0 & 1) << 3;
  P |= (S_4_0 & 1) << 4;
  P |= (S_5_0 & 1) << 5;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.52 %
// MAE = 340 
// WCE% = 2.66 %
// WCE = 1743 
// WCRE% = 6300.00 %
// EP% = 97.75 %
// MRE% = 27.44 %
// MSE = 191238 
// PDK45_PWR = 0.126 mW
// PDK45_AREA = 284.9 um2
// PDK45_DELAY = 0.94 ns


int16_t mul8s_1L1G(int8_t A, int8_t B)
{
 uint16_t O;
 uint8_t n38,n39,O10,n95,O5,n36,n37,O2,n132,n133,n130,n131,n136,n137,n134,n135,n138,n139,n111,O1,n151,O4,n84,n87,n86,n81,n80,n83,n82,n89,n129,n128,n125,n124,n127,n126,n121,n120,n123,n122,n88,n98,n99,n92,n93,n90,n91,n96,n97,n94,O0,n158,n159,n150,n152,n153,n154,n155,n156,n157,n67,n66,n65,n63,n62,n61,n60,n69,n68,O15,O3,n149,n148,n143,n142,n141,n147,n146,n145,n144,n74,n75,n76,n77,n70,n71,n72,n73,O9,n78,n79,n174,n172,O6,n170,n171,n49,n48,n40,n43,n42,n45,n44,n47,O8,n161,n160,n163,n162,n165,n167,n166,n169,n168,O14,O11,n58,n59,n56,n57,n54,n55,n52,n53,n50,n51,n114,n115,n116,n117,n110,n113,O12,n118,n119,O13,n100,O7,n107,n106,n105,n104,n103,n102,n101,n109,n108;
 O0=0;
 O1=0;
 O2=0;
 O3=0;
 O4=0;
 O5=0;
 O6=((B >> 3)&1)&((A >> 3)&1);
 n109=((B >> 6)&1)&((A >> 5)&1);
 n110=((B >> 7)&1)&((A >> 4)&1);
 n111=((B >> 5)&1)&((A >> 6)&1);
 n126=((B >> 5)&1)&((A >> 7)&1);
 n134=((B >> 6)&1)&((A >> 6)&1);
 n137=~(((A >> 5)&1)|((A >> 4)&1));
 n161=((B >> 7)&1)&((A >> 6)&1);
 n163=((B >> 6)&1)&((A >> 7)&1);
 n172=((B >> 7)&1)&((A >> 7)&1);
 n37=((B >> 4)&1)&((A >> 4)&1);
 n39=((B >> 3)&1)&((A >> 4)&1);
 n40=((B >> 4)&1)&((A >> 3)&1);
 n43=((B >> 3)&1)&((A >> 5)&1);
 n45=((B >> 5)&1)&((A >> 3)&1);
 n56=((B >> 6)&1)&((A >> 4)&1);
 n58=((B >> 5)&1)&((A >> 4)&1);
 n59=((B >> 6)&1)&((A >> 3)&1);
 n62=((B >> 4)&1)&((A >> 5)&1);
 n63=((B >> 3)&1)&((A >> 6)&1);
 n71=((B >> 3)&1)&((A >> 7)&1);
 n81=((B >> 5)&1)&((A >> 5)&1);
 n83=((B >> 7)&1)&((A >> 3)&1);
 n84=((B >> 4)&1)&((A >> 6)&1);
 n98=((B >> 4)&1)&((A >> 7)&1);
 n108=~n83&n56;
 n132=n109&n110;
 n136=((B >> 7)&1)&~n137;
 n138=((A >> 5)&1)&n110;
 n36=n37&O6;
 n38=~(n40|n39);
 n44=n45^n37;
 n55=n56&n45;
 n57=~(n59|n58);
 n61=n45&n37;
 n82=~(n83^n56);
 O7=~(n38|n36);
 n103=n81&n55;
 n104=n81&n82;
 n105=n82&n55;
 n107=~(n109^n108);
 n131=n109&n108;
 n133=n110&n108;
 n135=~n138&n136;
 n160=~(n161|n136);
 n162=((A >> 6)&1)&n136;
 n42=~(n43^n36);
 n50=n43&n36;
 n51=n43&n44;
 n52=n44&n36;
 n54=~(n57|n55);
 n60=~(n62^n61);
 n77=n62&n61;
 n80=~(n81^n55);
 O8=~(n44^n42);
 n102=~(n104|n103);
 n106=n110^n107;
 n130=~(n132|n131);
 n157=n134&n135;
 n159=~(n162|n160);
 n171=~(n172^n160);
 n49=~(n51|n50);
 n53=n60^n54;
 n76=n62&n54;
 n78=n61&n54;
 n79=n82^n80;
 n101=~n105&n102;
 n124=n111&~n106;
 n129=~n133&n130;
 n48=~n52&n49;
 n69=n63&~n53;
 n75=~(n77|n76);
 n96=n84&~n79;
 n100=~(n106^n101);
 n123=~(n106|n101);
 n125=n111&~n101;
 n128=n134^n129;
 n156=n134&~n129;
 n158=n135&~n129;
 n47=~(n53^n48);
 n68=~(n53|n48);
 n70=n63&~n48;
 n74=~n78&n75;
 O9=~(n63^n47);
 n122=~(n124|n123);
 n127=n135^n128;
 n155=~(n157|n156);
 n67=~(n69|n68);
 n73=~(n79^n74);
 n95=~(n79|n74);
 n97=n84&~n74;
 n99=n111^n100;
 n117=~(n98|n99);
 n121=~n125&n122;
 n150=~(n126|n127);
 n154=~n158&n155;
 n66=~n70&n67;
 n72=n84^n73;
 n94=~(n96|n95);
 n120=~(n126^n121);
 n149=~(n126|n121);
 n151=~(n127|n121);
 n153=n159^n154;
 n65=~(n71^n66);
 n88=~(n71|n66);
 n89=~(n71|n72);
 n90=~(n66|n72);
 n93=~n97&n94;
 O10=n72^n65;
 n116=~(n98|n93);
 n118=~(n99|n93);
 n119=~(n127^n120);
 n148=~(n150|n149);
 n152=~(n163^n153);
 n87=~(n89|n88);
 n92=~(n98^n93);
 n115=~(n117|n116);
 n147=~n151&n148;
 n86=~n90&n87;
 n91=~(n99^n92);
 O11=n91^n86;
 n114=~n118&n115;
 n139=~(n91|n86);
 n113=~(n119^n114);
 n144=~(n119|n114);
 n145=~n119&n139;
 n146=~n114&n139;
 O12=~(n139^n113);
 n143=~(n145|n144);
 n142=~n146&n143;
 n141=n147^n142;
 n168=n147&n142;
 O13=~(n152^n141);
 n167=n154&n168;
 n170=~(n154|n168);
 n166=~(n163|n167);
 n169=~(n159|n170);
 n165=n169&~n166;
 O14=n171^n165;
 n174=n160&~n165;
 O15=~(n172|n174);
 O = (O0 << 0)|(O1 << 1)|(O2 << 2)|(O3 << 3)|(O4 << 4)|(O5 << 5)|(O6 << 6)|(O7 << 7)|(O8 << 8)|(O9 << 9)|(O10 << 10)|(O11 << 11)|(O12 << 12)|(O13 << 13)|(O14 << 14)|(O15 << 15);
 return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, Z. Vasicek, L. Sekanina, H. Jiang and J. Han, "Scalable Construction of Approximate Multipliers With Formally Guaranteed Worst Case Error" in IEEE Transactions on Very Large Scale Integration (VLSI) Systems, vol. 26, no. 11, pp. 2572-2576, Nov. 2018. doi: 10.1109/TVLSI.2018.2856362 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 3.08 %
// MAE = 2016 
// WCE% = 12.30 %
// WCE = 8064 
// WCRE% = 6300.00 %
// EP% = 98.05 %
// MRE% = 135.77 %
// MSE = 72829.102e2 
// PDK45_PWR = 0.052 mW
// PDK45_AREA = 172.2 um2
// PDK45_DELAY = 0.89 ns


int16_t mul8s_1KR3(int8_t A, int8_t B)
{
  int16_t P, P_;
  uint8_t tmp, C_6_1,C_6_7,C_7_0,C_7_1,C_7_2,C_7_3,C_7_4,C_7_5,C_7_6,C_7_7,S_0_7,S_1_6,S_2_5,S_3_4,S_4_3,S_5_2,S_6_0,S_6_1,S_6_2,S_6_3,S_6_4,S_6_5,S_6_6,S_6_7,S_7_0,S_7_1,S_7_2,S_7_3,S_7_4,S_7_5,S_7_6,S_7_7,S_8_0,S_8_1,S_8_2,S_8_3,S_8_4,S_8_5,S_8_6,S_8_7,S_8_8;
  S_0_7 = 1;
  S_1_6 = 1;
  S_2_5 = 1;
  S_3_4 = 1;
  S_4_3 = 1;
  S_5_2 = 1;
  S_6_0 = (((A>>6)&1) & ((B>>0)&1));
  S_6_1 = S_5_2^(((A>>6)&1) & ((B>>1)&1));
  C_6_1 = S_5_2&(((A>>6)&1) & ((B>>1)&1));
  S_6_2 = (((A>>6)&1) & ((B>>2)&1));
  S_6_3 = (((A>>6)&1) & ((B>>3)&1));
  S_6_4 = (((A>>6)&1) & ((B>>4)&1));
  S_6_5 = (((A>>6)&1) & ((B>>5)&1));
  S_6_6 = (((A>>6)&1) & ((B>>6)&1));
  S_6_7 = 1^(((((A>>6)&1) & ((B>>7)&1)))^1);
  C_6_7 = 1&(((((A>>6)&1) & ((B>>7)&1)))^1);
  S_7_0 = S_6_1^(((((A>>7)&1) & ((B>>0)&1)))^1);
  C_7_0 = S_6_1&(((((A>>7)&1) & ((B>>0)&1)))^1);
  tmp = S_6_2^C_6_1;
  S_7_1 = tmp^(((((A>>7)&1) & ((B>>1)&1)))^1);
  C_7_1 = (tmp&(((((A>>7)&1) & ((B>>1)&1)))^1))|(S_6_2&C_6_1);
  S_7_2 = S_6_3^(((((A>>7)&1) & ((B>>2)&1)))^1);
  C_7_2 = S_6_3&(((((A>>7)&1) & ((B>>2)&1)))^1);
  S_7_3 = S_6_4^(((((A>>7)&1) & ((B>>3)&1)))^1);
  C_7_3 = S_6_4&(((((A>>7)&1) & ((B>>3)&1)))^1);
  S_7_4 = S_6_5^(((((A>>7)&1) & ((B>>4)&1)))^1);
  C_7_4 = S_6_5&(((((A>>7)&1) & ((B>>4)&1)))^1);
  S_7_5 = S_6_6^(((((A>>7)&1) & ((B>>5)&1)))^1);
  C_7_5 = S_6_6&(((((A>>7)&1) & ((B>>5)&1)))^1);
  S_7_6 = S_6_7^(((((A>>7)&1) & ((B>>6)&1)))^1);
  C_7_6 = S_6_7&(((((A>>7)&1) & ((B>>6)&1)))^1);
  S_7_7 = C_6_7^(((A>>7)&1) & ((B>>7)&1));
  C_7_7 = C_6_7&(((A>>7)&1) & ((B>>7)&1));
  P_ = (((C_7_0 & 1)<<0)|((C_7_1 & 1)<<1)|((C_7_2 & 1)<<2)|((C_7_3 & 1)<<3)|((C_7_4 & 1)<<4)|((C_7_5 & 1)<<5)|((C_7_6 & 1)<<6)|((C_7_7 & 1)<<7)) + (((S_7_1 & 1)<<0)|((S_7_2 & 1)<<1)|((S_7_3 & 1)<<2)|((S_7_4 & 1)<<3)|((S_7_5 & 1)<<4)|((S_7_6 & 1)<<5)|((S_7_7 & 1)<<6)|((1 & 1)<<7));
  S_8_0 = (P_ >> 0) & 1;
  S_8_1 = (P_ >> 1) & 1;
  S_8_2 = (P_ >> 2) & 1;
  S_8_3 = (P_ >> 3) & 1;
  S_8_4 = (P_ >> 4) & 1;
  S_8_5 = (P_ >> 5) & 1;
  S_8_6 = (P_ >> 6) & 1;
  S_8_7 = (P_ >> 7) & 1;
  S_8_8 = (P_ >> 8) & 1;
  P = 0;
  P |= (S_6_0 & 1) << 6;
  P |= (S_7_0 & 1) << 7;
  P |= (S_8_0 & 1) << 8;
  P |= (S_8_1 & 1) << 9;
  P |= (S_8_2 & 1) << 10;
  P |= (S_8_3 & 1) << 11;
  P |= (S_8_4 & 1) << 12;
  P |= (S_8_5 & 1) << 13;
  P |= (S_8_6 & 1) << 14;
  P |= (S_8_7 & 1) << 15;
  return P;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.0046 %
// MAE = 3.0 
// WCE% = 0.017 %
// WCE = 11 
// WCRE% = 100.00 %
// EP% = 75.00 %
// MRE% = 0.18 %
// MSE = 17 
// PDK45_PWR = 0.370 mW
// PDK45_AREA = 637.8 um2
// PDK45_DELAY = 1.40 ns


uint64_t mul8u_KEM(const uint64_t B,const uint64_t A)
{
   uint64_t O, dout_19, dout_20, dout_21, dout_22, dout_23, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_59, dout_60, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_35=((B >> 6)&1)&dout_31;
   dout_36=dout_19|dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=((A >> 0)&1)&dout_35;
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_59=dout_36|dout_47;
   dout_60=dout_36&dout_47;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_35&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_59|dout_89;
   dout_98=dout_59&dout_89;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_60;
   dout_105=dout_102^dout_60;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_98;
   dout_143=dout_140^dout_98;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_97&1) << 1;
   O |= (0&1) << 2;
   O |= (dout_97&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.67 %
// MAE = 442 
// WCE% = 2.94 %
// WCE = 1925 
// WCRE% = 300.00 %
// EP% = 99.05 %
// MRE% = 12.14 %
// MSE = 305440 
// PDK45_PWR = 0.095 mW
// PDK45_AREA = 228.5 um2
// PDK45_DELAY = 1.08 ns


uint16_t mul8u_1AGV(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_72, dout_118, dout_147, dout_151, dout_152, dout_153, dout_154, dout_155, dout_161, dout_162, dout_163, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_205, dout_206, dout_207, dout_208, dout_231, dout_232, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_249, dout_250, dout_251, dout_252, dout_253, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_295, dout_296, dout_297, dout_298, dout_307, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_72=((B >> 7)&1)&((A >> 2)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_147=((B >> 6)&1)&((A >> 3)&1);
   dout_151=dout_72^dout_118;
   dout_152=dout_72&((A >> 3)&1);
   dout_153=((B >> 7)&1)&dout_147;
   dout_154=dout_151^dout_147;
   dout_155=dout_152|dout_153;
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_161;
   dout_194=dout_191^dout_161;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&dout_163;
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_232;
   dout_239=dout_236^dout_232;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&dout_208;
   dout_243=((B >> 7)&1)&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_249=((B >> 2)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_271=dout_231^dout_250;
   dout_272=dout_231&dout_250;
   dout_273=dout_271&dout_249;
   dout_274=dout_271^dout_249;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&dout_253;
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_307=((A >> 7)&1)&((B >> 3)&1);
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_307;
   dout_319=dout_316^dout_307;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=dout_298&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_205&1) << 1;
   O |= (dout_163&1) << 2;
   O |= (dout_194&1) << 3;
   O |= (0&1) << 4;
   O |= (dout_250&1) << 5;
   O |= (0&1) << 6;
   O |= (0&1) << 7;
   O |= (dout_205&1) << 8;
   O |= (dout_205&1) << 9;
   O |= (dout_274&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 2.28 %
// MAE = 1491 
// WCE% = 9.08 %
// WCE = 5953 
// WCRE% = 100.00 %
// EP% = 99.16 %
// MRE% = 28.42 %
// MSE = 33959.043e2 
// PDK45_PWR = 0.031 mW
// PDK45_AREA = 96.7 um2
// PDK45_DELAY = 0.53 ns


uint16_t mul8u_18DU(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_118, dout_163, dout_196, dout_197, dout_207, dout_208, dout_240, dout_241, dout_244, dout_251, dout_252, dout_253, dout_281, dout_282, dout_286, dout_287, dout_288, dout_289, dout_290, dout_295, dout_296, dout_297, dout_298, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_118=((B >> 7)&1)&((A >> 5)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_196=dout_118^dout_163;
   dout_197=dout_118&((A >> 4)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_240=dout_196|dout_207;
   dout_241=dout_197^dout_208;
   dout_244=dout_241^dout_240;
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_286=dout_208^dout_253;
   dout_287=((A >> 5)&1)&dout_253;
   dout_288=((B >> 7)&1)&dout_282;
   dout_289=dout_286^dout_282;
   dout_290=dout_287|dout_288;
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_321=dout_281^dout_296;
   dout_322=dout_281&dout_296;
   dout_323=dout_321&dout_295;
   dout_324=dout_321^dout_295;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=dout_298&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (0&1) << 2;
   O |= (0&1) << 3;
   O |= (0&1) << 4;
   O |= (dout_331&1) << 5;
   O |= (0&1) << 6;
   O |= (dout_290&1) << 7;
   O |= (dout_251&1) << 8;
   O |= (dout_251&1) << 9;
   O |= (0&1) << 10;
   O |= (dout_251&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}



uint16_t mul8u_DM1(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_31, dout_60, dout_63, dout_64, dout_68, dout_71, dout_72, dout_73, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_112, dout_117, dout_118, dout_141, dout_142, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_157, dout_160, dout_161, dout_162, dout_163, dout_172, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_203, dout_204, dout_206, dout_207, dout_208, dout_220, dout_221, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_261, dout_264, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_301, dout_302, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_60=((A >> 1)&1)&((B >> 6)&1);
   dout_63=dout_60&((B >> 7)&1);
   dout_64=dout_60^dout_31;
   dout_68=((B >> 6)&1)|dout_31;
   dout_71=((B >> 5)&1)&((A >> 2)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_101=dout_64^dout_72;
   dout_102=dout_64&dout_72;
   dout_103=dout_68&dout_71;
   dout_104=dout_101^dout_71;
   dout_105=dout_102|dout_103;
   dout_106=dout_63^dout_73;
   dout_107=dout_63&((A >> 2)&1);
   dout_108=dout_73&dout_103;
   dout_109=dout_106^dout_105;
   dout_110=dout_107|dout_108;
   dout_112=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_141=dout_104^dout_112;
   dout_142=dout_104&dout_112;
   dout_146=dout_109^dout_117;
   dout_147=dout_109&dout_117;
   dout_148=dout_146&dout_142;
   dout_149=dout_146^dout_142;
   dout_150=dout_147|dout_148;
   dout_151=dout_110^dout_118;
   dout_152=dout_110&dout_118;
   dout_153=((B >> 7)&1)&dout_150;
   dout_154=dout_151^dout_150;
   dout_155=dout_152|dout_153;
   dout_157=((B >> 1)&1)&((A >> 4)&1);
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_172=((A >> 3)&1)&((B >> 4)&1);
   dout_181=dout_141^dout_160;
   dout_182=dout_141&dout_160;
   dout_183=dout_181&dout_157;
   dout_184=dout_181^dout_157;
   dout_185=dout_182|dout_183;
   dout_186=dout_149^dout_161;
   dout_187=dout_149&dout_161;
   dout_188=dout_186&dout_185;
   dout_189=dout_186^dout_185;
   dout_190=dout_187|dout_188;
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_190;
   dout_194=dout_191^dout_190;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&((A >> 4)&1);
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_203=((B >> 4)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_220=dout_204|dout_172;
   dout_221=dout_184^dout_204;
   dout_223=dout_221&dout_220;
   dout_224=dout_221^dout_220;
   dout_225=dout_204|dout_223;
   dout_226=dout_189^dout_203;
   dout_227=dout_189&dout_203;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&((A >> 5)&1);
   dout_243=dout_208&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_261=dout_224^((B >> 4)&1);
   dout_264=dout_261^((B >> 4)&1);
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_248;
   dout_269=dout_266^dout_248;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&((A >> 6)&1);
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 7)&1)&((A >> 0)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_301=dout_264^dout_292;
   dout_302=dout_264&dout_292;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_308=dout_306&dout_302;
   dout_309=dout_306^dout_302;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=dout_298&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_249&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_206&1) << 2;
   O |= (dout_277&1) << 3;
   O |= (dout_312&1) << 4;
   O |= (dout_293&1) << 5;
   O |= (dout_203&1) << 6;
   O |= (dout_291&1) << 7;
   O |= (dout_301&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 7.41 %
// MAE = 4858 
// WCE% = 25.78 %
// WCE = 16896 
// WCRE% = 300.00 %
// EP% = 99.21 %
// MRE% = 57.81 %
// MSE = 37660.75e3 
// PDK45_PWR = 0.0019 mW
// PDK45_AREA = 15.5 um2
// PDK45_DELAY = 0.10 ns


uint16_t mul8u_17C8(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_181, dout_223, dout_267, dout_268, dout_303, dout_308, dout_328;   int avg=0;

   dout_181=((B >> 5)&1)&((A >> 6)&1);
   dout_223=((B >> 7)&1)&((A >> 5)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_303=dout_267|((B >> 7)&1);
   dout_308=((B >> 6)&1)&((A >> 6)&1);
   dout_328=((B >> 7)&1)^dout_303;

   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (0&1) << 2;
   O |= (0&1) << 3;
   O |= (0&1) << 4;
   O |= (0&1) << 5;
   O |= (0&1) << 6;
   O |= (0&1) << 7;
   O |= (0&1) << 8;
   O |= (dout_223&1) << 9;
   O |= (dout_181&1) << 10;
   O |= (dout_181&1) << 11;
   O |= (dout_223&1) << 12;
   O |= (dout_328&1) << 13;
   O |= (dout_308&1) << 14;
   O |= (dout_268&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 24.81 %
// MAE = 16256 
// WCE% = 99.22 %
// WCE = 65025 
// WCRE% = 100.00 %
// EP% = 99.22 %
// MRE% = 100.00 %
// MSE = 47164.981e4 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.065 %
// MAE = 42 
// WCE% = 0.25 %
// WCE = 161 
// WCRE% = 150.00 %
// EP% = 96.37 %
// MRE% = 1.90 %
// MSE = 2764 
// PDK45_PWR = 0.276 mW
// PDK45_AREA = 511.5 um2
// PDK45_DELAY = 1.37 ns


uint16_t mul8u_NGR(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_22, dout_23, dout_27, dout_29, dout_30, dout_33, dout_42, dout_43, dout_44, dout_45, dout_50, dout_51, dout_52, dout_53, dout_74, dout_75, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_92, dout_93, dout_94, dout_95, dout_96, dout_110, dout_113, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_135, dout_136, dout_137, dout_138, dout_139, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_228, dout_229, dout_230, dout_231, dout_232, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_27=((B >> 2)&1)&((A >> 4)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_33=((B >> 7)&1)&((A >> 1)&1);
   dout_42=dout_22|dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_74=dout_42|dout_50;
   dout_75=dout_42&dout_50;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_33^dout_52;
   dout_85=dout_33&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_110=dout_74|dout_92;
   dout_113=dout_74&dout_92;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_75;
   dout_120=dout_117^dout_75;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_113;
   dout_158=dout_155^dout_113;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_27;
   dout_196=dout_193^dout_27;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_228=dout_218&dout_110;
   dout_229=dout_218|dout_110;
   dout_230=dout_176|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_231^dout_261;
   dout_270=dout_231&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_232;
   dout_277=dout_274^dout_232;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_265&1) << 0;
   O |= (dout_207&1) << 1;
   O |= (dout_74&1) << 2;
   O |= (dout_229&1) << 3;
   O |= (0&1) << 4;
   O |= (dout_176&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mse parameters
***/
// MAE% = 0.017 %
// MAE = 11 
// WCE% = 0.082 %
// WCE = 54 
// WCRE% = 200.00 %
// EP% = 74.80 %
// MRE% = 0.51 %
// MSE = 241 
// PDK45_PWR = 0.344 mW
// PDK45_AREA = 624.2 um2
// PDK45_DELAY = 1.40 ns


uint16_t mul8u_QJD(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_21, dout_22, dout_23, dout_28, dout_29, dout_30, dout_31, dout_32, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_47, dout_49, dout_50, dout_51, dout_52, dout_53, dout_67, dout_69, dout_70, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_102, dout_103, dout_107, dout_108, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 0)&1)&((A >> 1)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_18|dout_17;
   dout_40=dout_21|dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_67=((B >> 2)&1)&((A >> 2)&1);
   dout_69=dout_40|dout_49;
   dout_70=dout_40&dout_49;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_47|dout_89;
   dout_102=dout_67|dout_90;
   dout_103=dout_67&dout_90;
   dout_107=dout_69^dout_91;
   dout_108=dout_69&dout_91;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_70;
   dout_115=dout_112^dout_70;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_102|dout_132;
   dout_141=dout_102&dout_132;
   dout_145=dout_107^dout_133;
   dout_146=dout_107&dout_133;
   dout_147=dout_145&dout_103;
   dout_148=dout_145^dout_103;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_108;
   dout_153=dout_150^dout_108;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_141;
   dout_186=dout_183^dout_141;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=dout_268&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_17&1) << 2;
   O |= (dout_97&1) << 3;
   O |= (dout_140&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.00095 %
// MAE = 0.62 
// WCE% = 0.0092 %
// WCE = 6.0 
// WCRE% = 28.57 %
// EP% = 17.19 %
// MRE% = 0.023 %
// MSE = 2.5 
// PDK45_PWR = 0.384 mW
// PDK45_AREA = 674.9 um2
// PDK45_DELAY = 1.42 ns


uint16_t mul8u_125K(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_22&dout_31;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34|dout_46;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_47&dout_24;
   dout_62=dout_59^dout_61;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_98;
   dout_143=dout_140^dout_98;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_97&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 5.09 %
// MAE = 3334 
// WCE% = 49.23 %
// WCE = 32261 
// WCRE% = 100.00 %
// EP% = 97.47 %
// MRE% = 21.95 %
// MSE = 34405.106e3 
// PDK45_PWR = 0.029 mW
// PDK45_AREA = 112.2 um2
// PDK45_DELAY = 0.18 ns


uint16_t mul8u_QKX(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_21, dout_22, dout_29, dout_31, dout_42, dout_52, dout_84, dout_94, dout_95, dout_96, dout_122, dout_123, dout_126, dout_133, dout_134, dout_137, dout_138, dout_139, dout_166, dout_168, dout_170, dout_180, dout_181, dout_182, dout_208, dout_211, dout_213, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_236, dout_241, dout_246, dout_251, dout_255, dout_256, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_277, dout_282, dout_284, dout_289, dout_294, dout_299;   int avg=0;

   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_42=dout_22|dout_29;
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_84=dout_31|dout_52;
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_122=dout_84|dout_94;
   dout_123=((A >> 2)&1)&((B >> 7)&1);
   dout_126=dout_123|dout_95;
   dout_133=((B >> 0)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 0)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_166=((B >> 0)&1)&((A >> 3)&1);
   dout_168=dout_137|dout_126;
   dout_170=dout_96|dout_138;
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_208=dout_170|dout_180;
   dout_211=((B >> 0)&1)&((A >> 6)&1);
   dout_213=dout_139|dout_181;
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_42|dout_211;
   dout_236=dout_122|dout_220;
   dout_241=dout_168|dout_221;
   dout_246=dout_208|dout_222;
   dout_251=dout_213|dout_223;
   dout_255=((B >> 7)&1)&((A >> 0)&1);
   dout_256=dout_182|dout_224;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_255|dout_261;
   dout_277=dout_236|dout_262;
   dout_282=dout_241|dout_263;
   dout_284=dout_246|dout_264;
   dout_289=dout_251|dout_265;
   dout_294=dout_256|dout_266;
   dout_299=dout_225|dout_267;

   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_134&1) << 2;
   O |= (dout_166&1) << 3;
   O |= (dout_133&1) << 4;
   O |= (dout_21&1) << 5;
   O |= (dout_226&1) << 6;
   O |= (dout_269&1) << 7;
   O |= (dout_277&1) << 8;
   O |= (dout_282&1) << 9;
   O |= (dout_284&1) << 10;
   O |= (dout_289&1) << 11;
   O |= (dout_294&1) << 12;
   O |= (dout_299&1) << 13;
   O |= (dout_268&1) << 14;
   O |= (0&1) << 15;
   return O;
}

uint16_t mul8u_ZFB(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_82, dout_85, dout_87, dout_90, dout_92, dout_95, dout_97, dout_100, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_116, dout_117, dout_119, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_153, dout_158, dout_163, dout_166, dout_168, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_230, dout_231, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_262, dout_264, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_353, dout_356, dout_358, dout_363, dout_367, dout_368, dout_370, dout_372, dout_374, dout_378, dout_382, dout_383, dout_389, dout_390, dout_391, dout_401, dout_402, dout_404, dout_405, dout_407, dout_409, dout_411, dout_425, dout_432, dout_434, dout_435, dout_437, dout_448, dout_451, dout_452, dout_456, dout_457, dout_463, dout_464, dout_498, dout_499, dout_500, dout_501, dout_502, dout_503, dout_504, dout_505;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=((B >> 0)&1)&((A >> 2)&1);
   dout_33=((B >> 1)&1)&((A >> 2)&1);
   dout_34=((B >> 2)&1)&((A >> 2)&1);
   dout_35=((B >> 3)&1)&((A >> 2)&1);
   dout_36=((B >> 4)&1)&((A >> 2)&1);
   dout_37=((B >> 5)&1)&((A >> 2)&1);
   dout_38=((B >> 6)&1)&((A >> 2)&1);
   dout_39=((B >> 7)&1)&((A >> 2)&1);
   dout_40=((B >> 0)&1)&((A >> 3)&1);
   dout_41=((B >> 1)&1)&((A >> 3)&1);
   dout_42=((B >> 2)&1)&((A >> 3)&1);
   dout_43=((B >> 3)&1)&((A >> 3)&1);
   dout_44=((B >> 4)&1)&((A >> 3)&1);
   dout_45=((B >> 5)&1)&((A >> 3)&1);
   dout_46=((B >> 6)&1)&((A >> 3)&1);
   dout_47=((B >> 7)&1)&((A >> 3)&1);
   dout_48=((B >> 0)&1)&((A >> 4)&1);
   dout_49=((B >> 1)&1)&((A >> 4)&1);
   dout_50=((B >> 2)&1)&((A >> 4)&1);
   dout_51=((B >> 3)&1)&((A >> 4)&1);
   dout_52=((B >> 4)&1)&((A >> 4)&1);
   dout_53=((B >> 5)&1)&((A >> 4)&1);
   dout_54=((B >> 6)&1)&((A >> 4)&1);
   dout_55=((B >> 7)&1)&((A >> 4)&1);
   dout_56=((B >> 0)&1)&((A >> 5)&1);
   dout_57=((B >> 1)&1)&((A >> 5)&1);
   dout_58=((B >> 2)&1)&((A >> 5)&1);
   dout_59=((B >> 3)&1)&((A >> 5)&1);
   dout_60=((B >> 4)&1)&((A >> 5)&1);
   dout_61=((B >> 5)&1)&((A >> 5)&1);
   dout_62=((B >> 6)&1)&((A >> 5)&1);
   dout_63=((B >> 7)&1)&((A >> 5)&1);
   dout_64=((B >> 0)&1)&((A >> 6)&1);
   dout_65=((B >> 1)&1)&((A >> 6)&1);
   dout_66=((B >> 2)&1)&((A >> 6)&1);
   dout_67=((B >> 3)&1)&((A >> 6)&1);
   dout_68=((B >> 4)&1)&((A >> 6)&1);
   dout_69=((B >> 5)&1)&((A >> 6)&1);
   dout_70=((B >> 6)&1)&((A >> 6)&1);
   dout_71=((B >> 7)&1)&((A >> 6)&1);
   dout_72=((B >> 0)&1)&((A >> 7)&1);
   dout_73=((B >> 1)&1)&((A >> 7)&1);
   dout_74=((B >> 2)&1)&((A >> 7)&1);
   dout_75=((B >> 3)&1)&((A >> 7)&1);
   dout_76=((B >> 4)&1)&((A >> 7)&1);
   dout_77=((B >> 5)&1)&((A >> 7)&1);
   dout_78=((B >> 6)&1)&((A >> 7)&1);
   dout_79=((B >> 7)&1)&((A >> 7)&1);
   dout_80=dout_17|dout_24;
   dout_82=dout_18|dout_25;
   dout_85=dout_82|dout_32;
   dout_87=dout_19|dout_26;
   dout_90=dout_87|dout_33;
   dout_92=dout_20|dout_27;
   dout_95=dout_92|dout_34;
   dout_97=dout_21|dout_28;
   dout_100=dout_97|dout_35;
   dout_102=dout_22|dout_29;
   dout_103=dout_22&dout_29;
   dout_104=dout_102&dout_36;
   dout_105=dout_102|dout_36;
   dout_106=dout_103|dout_104;
   dout_107=dout_23^dout_30;
   dout_108=dout_23&dout_30;
   dout_109=dout_107&dout_37;
   dout_110=dout_107^dout_37;
   dout_111=dout_108|dout_109;
   dout_112=dout_31&dout_38;
   dout_113=dout_31^dout_38;
   dout_114=dout_41|dout_48;
   dout_116=dout_42|dout_49;
   dout_117=dout_42&((B >> 5)&1);
   dout_119=dout_116|dout_56;
   dout_121=dout_43^dout_50;
   dout_122=dout_43&dout_50;
   dout_123=dout_121&dout_57;
   dout_124=dout_121^dout_57;
   dout_125=dout_122|dout_123;
   dout_126=dout_44^dout_51;
   dout_127=dout_44&dout_51;
   dout_128=dout_126&dout_58;
   dout_129=dout_126^dout_58;
   dout_130=dout_127|dout_128;
   dout_131=dout_45^dout_52;
   dout_132=dout_45&dout_52;
   dout_133=dout_131&dout_59;
   dout_134=dout_131^dout_59;
   dout_135=dout_132|dout_133;
   dout_136=dout_46^dout_53;
   dout_137=dout_46&dout_53;
   dout_138=dout_136&dout_60;
   dout_139=dout_136^dout_60;
   dout_140=dout_137|dout_138;
   dout_141=dout_47^dout_54;
   dout_142=dout_47&dout_54;
   dout_143=dout_141&dout_61;
   dout_144=dout_141^dout_61;
   dout_145=dout_142|dout_143;
   dout_146=dout_55&dout_62;
   dout_147=dout_55^dout_62;
   dout_153=dout_90|dout_40;
   dout_158=dout_95|dout_114;
   dout_163=dout_100|dout_119;
   dout_166=dout_105&dout_124;
   dout_168=dout_105|dout_124;
   dout_170=dout_110^dout_106;
   dout_171=dout_110&dout_106;
   dout_172=dout_170&dout_129;
   dout_173=dout_170^dout_129;
   dout_174=dout_171|dout_172;
   dout_175=dout_113^dout_111;
   dout_176=dout_113&dout_111;
   dout_177=dout_175&dout_134;
   dout_178=dout_175^dout_134;
   dout_179=dout_176|dout_177;
   dout_180=dout_39^dout_112;
   dout_181=((B >> 6)&1)&dout_112;
   dout_182=dout_180&dout_139;
   dout_183=dout_180^dout_139;
   dout_184=dout_181|dout_182;
   dout_185=dout_117|dout_64;
   dout_187=dout_125^dout_65;
   dout_188=dout_125&dout_65;
   dout_189=dout_187&dout_72;
   dout_190=dout_187|dout_72;
   dout_191=dout_188|dout_189;
   dout_192=dout_130^dout_66;
   dout_193=dout_130&dout_66;
   dout_194=dout_192&dout_73;
   dout_195=dout_192^dout_73;
   dout_196=dout_193|dout_194;
   dout_197=dout_135^dout_67;
   dout_198=dout_135&dout_67;
   dout_199=dout_197&dout_74;
   dout_200=dout_197^dout_74;
   dout_201=dout_198|dout_199;
   dout_202=dout_140^dout_68;
   dout_203=dout_140&dout_68;
   dout_204=dout_202&dout_75;
   dout_205=dout_202^dout_75;
   dout_206=dout_203|dout_204;
   dout_207=dout_145^dout_69;
   dout_208=dout_145&dout_69;
   dout_209=dout_207&dout_76;
   dout_210=dout_207^dout_76;
   dout_211=dout_208|dout_209;
   dout_212=dout_146^dout_70;
   dout_213=dout_146&dout_70;
   dout_214=dout_212&dout_77;
   dout_215=dout_212^dout_77;
   dout_216=dout_213|dout_214;
   dout_217=dout_71&((A >> 7)&1);
   dout_218=dout_71^dout_78;
   dout_230=dout_188&dout_185;
   dout_231=dout_168|dout_185;
   dout_233=dout_173^dout_166;
   dout_234=dout_173&dout_166;
   dout_235=dout_233&dout_190;
   dout_236=dout_233^dout_190;
   dout_237=dout_234|dout_235;
   dout_238=dout_178^dout_174;
   dout_239=dout_178&dout_174;
   dout_240=dout_238&dout_195;
   dout_241=dout_238^dout_195;
   dout_242=dout_239|dout_240;
   dout_243=dout_183^dout_179;
   dout_244=dout_183&dout_179;
   dout_245=dout_243&dout_200;
   dout_246=dout_243^dout_200;
   dout_247=dout_244|dout_245;
   dout_248=dout_144^dout_184;
   dout_249=dout_144&dout_184;
   dout_250=dout_248&dout_205;
   dout_251=dout_248^dout_205;
   dout_252=dout_249|dout_250;
   dout_253=dout_147&dout_210;
   dout_254=dout_147^dout_210;
   dout_255=dout_63&dout_215;
   dout_256=dout_63^dout_215;
   dout_262=((A >> 2)&1)&dout_235;
   dout_264=((A >> 1)&1)&dout_230;
   dout_268=dout_241^dout_237;
   dout_269=dout_241&dout_237;
   dout_270=dout_268&dout_191;
   dout_271=dout_268^dout_191;
   dout_272=dout_269|dout_270;
   dout_273=dout_246^dout_242;
   dout_274=dout_246&dout_242;
   dout_275=dout_273&dout_196;
   dout_276=dout_273^dout_196;
   dout_277=dout_274|dout_275;
   dout_278=dout_251^dout_247;
   dout_279=dout_251&dout_247;
   dout_280=dout_278&dout_201;
   dout_281=dout_278^dout_201;
   dout_282=dout_279|dout_280;
   dout_283=dout_254^dout_252;
   dout_284=dout_254&dout_252;
   dout_285=dout_283&dout_206;
   dout_286=dout_283^dout_206;
   dout_287=dout_284|dout_285;
   dout_288=dout_256^dout_253;
   dout_289=dout_256&dout_253;
   dout_290=dout_288&dout_211;
   dout_291=dout_288^dout_211;
   dout_292=dout_289|dout_290;
   dout_293=dout_218^dout_255;
   dout_294=dout_218&dout_255;
   dout_295=dout_293&dout_216;
   dout_296=dout_293^dout_216;
   dout_297=dout_294|dout_295;
   dout_298=((B >> 6)&1)&dout_217;
   dout_299=dout_79^dout_298;
   dout_305=dout_236&dout_262;
   dout_306=dout_271^dout_264;
   dout_307=dout_271&dout_264;
   dout_308=dout_276^dout_272;
   dout_309=dout_276&dout_272;
   dout_310=dout_281^dout_277;
   dout_311=dout_281&dout_277;
   dout_312=dout_286^dout_282;
   dout_313=dout_286&dout_282;
   dout_314=dout_291^dout_287;
   dout_315=dout_291&dout_287;
   dout_316=dout_296^dout_292;
   dout_317=dout_296&dout_292;
   dout_318=dout_299^dout_297;
   dout_319=dout_299&dout_297;
   dout_353=dout_308&dout_307;
   dout_356=dout_353|dout_309;
   dout_358=dout_310&dout_308;
   dout_363=dout_358&dout_356;
   dout_367=dout_310&dout_309;
   dout_368=dout_311|dout_367;
   dout_370=dout_305|dout_363;
   dout_372=dout_368|dout_370;
   dout_374=dout_307&((B >> 1)&1);
   dout_378=dout_312&dout_363;
   dout_382=dout_374&dout_358;
   dout_383=dout_312&dout_368;
   dout_389=dout_383|dout_378;
   dout_390=dout_313|dout_389;
   dout_391=dout_314&dout_312;
   dout_401=dout_391&dout_382;
   dout_402=dout_391&dout_368;
   dout_404=dout_314&dout_313;
   dout_405=dout_315|dout_404;
   dout_407=dout_401|dout_404;
   dout_409=dout_405|dout_402;
   dout_411=dout_409|dout_407;
   dout_425=dout_316&dout_409;
   dout_432=dout_316&dout_407;
   dout_434=dout_425|dout_432;
   dout_435=dout_317|dout_434;
   dout_437=dout_318&dout_316;
   dout_448=dout_437&dout_391;
   dout_451=dout_448&dout_382;
   dout_452=dout_437&dout_409;
   dout_456=dout_318&dout_317;
   dout_457=dout_319|dout_456;
   dout_463=dout_452|dout_457;
   dout_464=dout_451|dout_463;
   dout_498=dout_306^dout_305;
   dout_499=dout_308^dout_307;
   dout_500=dout_310^dout_356;
   dout_501=dout_312^dout_372;
   dout_502=dout_314^dout_390;
   dout_503=dout_316^dout_411;
   dout_504=dout_318^dout_435;
   dout_505=dout_298|dout_464;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_80&1) << 1;
   O |= (dout_85&1) << 2;
   O |= (dout_153&1) << 3;
   O |= (dout_158&1) << 4;
   O |= (dout_163&1) << 5;
   O |= (dout_231&1) << 6;
   O |= (dout_236&1) << 7;
   O |= (dout_498&1) << 8;
   O |= (dout_499&1) << 9;
   O |= (dout_500&1) << 10;
   O |= (dout_501&1) << 11;
   O |= (dout_502&1) << 12;
   O |= (dout_503&1) << 13;
   O |= (dout_504&1) << 14;
   O |= (dout_505&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.43 %
// MAE = 284 
// WCE% = 2.15 %
// WCE = 1408 
// WCRE% = 80.00 %
// EP% = 87.31 %
// MRE% = 4.20 %
// MSE = 139814 
// PDK45_PWR = 0.142 mW
// PDK45_AREA = 390.5 um2
// PDK45_DELAY = 1.09 ns


uint16_t mul8u_12N4(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_39, dout_42, dout_49, dout_54, dout_57, dout_59, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_74, dout_76, dout_81, dout_86, dout_91, dout_99, dout_103, dout_105, dout_106, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_121, dout_126, dout_131, dout_136, dout_141, dout_147, dout_149, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_166, dout_171, dout_176, dout_181, dout_186, dout_187, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_211, dout_216, dout_221, dout_226, dout_227, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_256, dout_261, dout_266, dout_267, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_301, dout_306, dout_307, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_39=dout_19|dout_26;
   dout_42=dout_39|dout_27;
   dout_49=dout_21|dout_28;
   dout_54=dout_22|dout_29;
   dout_57=dout_54|dout_31;
   dout_59=dout_23|dout_30;
   dout_66=((B >> 0)&1)&((A >> 2)&1);
   dout_67=((B >> 1)&1)&((A >> 2)&1);
   dout_68=((B >> 2)&1)&((A >> 2)&1);
   dout_69=((B >> 3)&1)&((A >> 2)&1);
   dout_70=((B >> 4)&1)&((A >> 2)&1);
   dout_71=((B >> 5)&1)&((A >> 2)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_74=dout_34|dout_66;
   dout_76=dout_42|dout_67;
   dout_81=dout_20|dout_68;
   dout_86=dout_49|dout_69;
   dout_91=dout_57|dout_70;
   dout_99=dout_59|dout_71;
   dout_103=((B >> 6)&1)^0xFFFFFFFFFFFFFFFFU;
   dout_105=(((B >> 6)&1)|dout_103)^0xFFFFFFFFFFFFFFFFU;
   dout_106=((B >> 7)&1)&((A >> 2)&1);
   dout_111=((B >> 0)&1)&((A >> 3)&1);
   dout_112=((B >> 1)&1)&((A >> 3)&1);
   dout_113=((B >> 2)&1)&((A >> 3)&1);
   dout_114=((B >> 3)&1)&((A >> 3)&1);
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_119=dout_76|dout_111;
   dout_121=dout_81|dout_112;
   dout_126=dout_86|dout_113;
   dout_131=dout_91|dout_114;
   dout_136=dout_99|dout_115;
   dout_141=dout_72|dout_116;
   dout_147=dout_106&dout_117;
   dout_149=dout_106|dout_117;
   dout_154=dout_118^dout_147;
   dout_155=dout_147|dout_105;
   dout_156=((B >> 0)&1)&((A >> 4)&1);
   dout_157=((B >> 1)&1)&((A >> 4)&1);
   dout_158=((B >> 2)&1)&((A >> 4)&1);
   dout_159=((B >> 3)&1)&((A >> 4)&1);
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_164=dout_121|dout_156;
   dout_166=dout_126|dout_157;
   dout_171=dout_131|dout_158;
   dout_176=dout_136|dout_159;
   dout_181=dout_141|dout_160;
   dout_186=dout_149|dout_161;
   dout_187=dout_149&dout_161;
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_187;
   dout_194=dout_191^dout_187;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&((A >> 4)&1);
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_201=((B >> 0)&1)&((A >> 5)&1);
   dout_202=((B >> 1)&1)&((A >> 5)&1);
   dout_203=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_209=dout_166|dout_201;
   dout_211=dout_171|dout_202;
   dout_216=dout_176|dout_203;
   dout_221=dout_181|dout_204;
   dout_226=dout_186|dout_205;
   dout_227=dout_186&dout_205;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_227;
   dout_234=dout_231^dout_227;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&dout_208;
   dout_243=dout_208&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_246=((B >> 0)&1)&((A >> 6)&1);
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_254=dout_211|dout_246;
   dout_256=dout_216|dout_247;
   dout_261=dout_221|dout_248;
   dout_266=dout_226|dout_249;
   dout_267=dout_226&dout_249;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_267;
   dout_274=dout_271^dout_267;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&dout_253;
   dout_288=((B >> 7)&1)&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_256|dout_291;
   dout_301=dout_261|dout_292;
   dout_306=dout_266|dout_293;
   dout_307=dout_266&dout_293;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_307;
   dout_314=dout_311^dout_307;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&dout_298;
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_74&1) << 2;
   O |= (dout_119&1) << 3;
   O |= (dout_164&1) << 4;
   O |= (dout_209&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_301&1) << 8;
   O |= (dout_306&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 24.81 %
// MAE = 16256 
// WCE% = 99.22 %
// WCE = 65025 
// WCRE% = 100.00 %
// EP% = 99.22 %
// MRE% = 100.00 %
// MSE = 47164.981e4 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mre parameters
***/
// MAE% = 0.0076 %
// MAE = 5.0 
// WCE% = 0.064 %
// WCE = 42 
// WCRE% = 40.00 %
// EP% = 39.26 %
// MRE% = 0.14 %
// MSE = 87 
// PDK45_PWR = 0.364 mW
// PDK45_AREA = 654.2 um2
// PDK45_DELAY = 1.38 ns


uint16_t mul8u_14VP(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_36, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_59, dout_64, dout_65, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_102, dout_103, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_36=dout_19|dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34|dout_46;
   dout_59=dout_36|dout_47;
   dout_64=dout_38|dout_48;
   dout_65=dout_31&dout_48;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_59|dout_89;
   dout_102=dout_64|dout_90;
   dout_103=dout_64&dout_90;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_65;
   dout_110=dout_107^dout_65;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_102^dout_132;
   dout_141=dout_102&dout_132;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_103;
   dout_148=dout_145^dout_103;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_141;
   dout_186=dout_183^dout_141;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=dout_268&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_97&1) << 3;
   O |= (dout_140&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.89 %
// MAE = 581 
// WCE% = 4.29 %
// WCE = 2809 
// WCRE% = 125.00 %
// EP% = 98.74 %
// MRE% = 13.96 %
// MSE = 543210 
// PDK45_PWR = 0.084 mW
// PDK45_AREA = 214.5 um2
// PDK45_DELAY = 0.95 ns


uint16_t mul8u_FTA(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_115, dout_118, dout_127, dout_152, dout_154, dout_162, dout_163, dout_192, dout_195, dout_196, dout_198, dout_199, dout_206, dout_207, dout_208, dout_232, dout_234, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_249, dout_250, dout_251, dout_252, dout_253, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_311, dout_312, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_115=((A >> 3)&1)&((B >> 7)&1);
   dout_118=((B >> 4)&1)&((A >> 5)&1);
   dout_127=((B >> 7)&1)&((A >> 2)&1);
   dout_152=((B >> 6)&1)&dout_115;
   dout_154=dout_118|dout_127;
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_192=dout_163&((A >> 3)&1);
   dout_195=dout_192|dout_162;
   dout_196=dout_152^dout_163;
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_232=dout_154&dout_206;
   dout_234=dout_154^dout_206;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_232;
   dout_239=dout_236^dout_232;
   dout_240=dout_237|dout_238;
   dout_241=dout_198^dout_208;
   dout_242=dout_198&((A >> 5)&1);
   dout_243=dout_208&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_246=((B >> 0)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_249;
   dout_274=dout_271^dout_249;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&dout_253;
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_274|dout_291;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_312;
   dout_319=dout_316^dout_312;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&dout_298;
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (0&1) << 2;
   O |= (dout_152&1) << 3;
   O |= (dout_272&1) << 4;
   O |= (dout_115&1) << 5;
   O |= (dout_246&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_206&1) << 8;
   O |= (dout_293&1) << 9;
   O |= (dout_311&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.037 %
// MAE = 25 
// WCE% = 0.12 %
// WCE = 79 
// WCRE% = 3100.00 %
// EP% = 98.12 %
// MRE% = 1.25 %
// MSE = 892 
// PDK45_PWR = 0.311 mW
// PDK45_AREA = 508.3 um2
// PDK45_DELAY = 1.39 ns


uint16_t mul8u_2AC(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_20, dout_21, dout_22, dout_23, dout_29, dout_31, dout_40, dout_41, dout_42, dout_43, dout_44, dout_47, dout_49, dout_50, dout_51, dout_52, dout_53, dout_56, dout_70, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_86, dout_87, dout_88, dout_92, dout_93, dout_94, dout_95, dout_96, dout_106, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_150, dout_151, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_186, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_20=((B >> 6)&1)&((A >> 1)&1);
   dout_21=((A >> 1)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_40=((A >> 1)&1)|((A >> 0)&1);
   dout_41=dout_21&((B >> 4)&1);
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_20;
   dout_47=((B >> 7)&1)&dout_21;
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_56=dout_52&dout_31;
   dout_70=dout_40&dout_49;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_86=((B >> 6)&1)&dout_47;
   dout_87=dout_84^dout_86;
   dout_88=dout_56|dout_86;
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_106=((B >> 2)&1)&((A >> 3)&1);
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_70;
   dout_115=dout_112^dout_70;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_186=dout_133^0xFFFFFFFFFFFFFFFFU;
   dout_188=dout_150^dout_176;
   dout_189=dout_150&dout_176;
   dout_190=dout_188&dout_106;
   dout_191=dout_188^dout_106;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_151;
   dout_196=dout_193^dout_151;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_133;
   dout_229=dout_226^dout_133;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_134&1) << 0;
   O |= (dout_252&1) << 1;
   O |= (((A >> 5)&1)&1) << 2;
   O |= (dout_180&1) << 3;
   O |= (dout_133&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.0076 %
// MAE = 5.0 
// WCE% = 0.064 %
// WCE = 42 
// WCRE% = 40.00 %
// EP% = 37.30 %
// MRE% = 0.15 %
// MSE = 93 
// PDK45_PWR = 0.360 mW
// PDK45_AREA = 660.3 um2
// PDK45_DELAY = 1.39 ns


uint16_t mul8u_150Q(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_36, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_59, dout_64, dout_65, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_102, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_144, dout_145, dout_146, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_36=dout_19|dout_26;
   dout_38=dout_20|dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34|dout_46;
   dout_59=dout_36|dout_47;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_86=((B >> 7)&1)&dout_45;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_86;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_59|dout_89;
   dout_102=dout_64|dout_90;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_65;
   dout_110=dout_107^dout_65;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_102^dout_132;
   dout_141=dout_102&dout_132;
   dout_142=dout_133&dout_141;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_145^dout_175;
   dout_184=dout_145&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_141;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_146;
   dout_191=dout_188^dout_146;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=dout_268&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_97&1) << 3;
   O |= (dout_140&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.00019 %
// MAE = 0.12 
// WCE% = 0.0031 %
// WCE = 2.0 
// WCRE% = 22.22 %
// EP% = 6.25 %
// MRE% = 0.0053 %
// MSE = 0.25 
// PDK45_PWR = 0.390 mW
// PDK45_AREA = 682.8 um2
// PDK45_DELAY = 1.41 ns


uint16_t mul8u_Y48(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18^dout_25;
   dout_35=dout_18&dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_31&dout_22;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_55;
   dout_100=dout_97^dout_55;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 4.83 %
// MAE = 3168 
// WCE% = 19.46 %
// WCE = 12754 
// WCRE% = 100.00 %
// EP% = 99.20 %
// MRE% = 44.00 %
// MSE = 15608.397e3 
// PDK45_PWR = 0.0085 mW
// PDK45_AREA = 41.3 um2
// PDK45_DELAY = 0.20 ns


uint16_t mul8u_13QR(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_180, dout_256, dout_257, dout_259, dout_266, dout_268, dout_283, dout_307, dout_311, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_180=((B >> 7)&1)&((A >> 5)&1);
   dout_256=((A >> 6)&1)&((B >> 6)&1);
   dout_257=((B >> 7)&1)&((A >> 6)&1);
   dout_259=dout_256|dout_180;
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_283=((A >> 7)&1)&((B >> 5)&1);
   dout_307=((A >> 7)&1)&((B >> 6)&1);
   dout_311=dout_266&((B >> 6)&1);
   dout_329=dout_307^dout_283;
   dout_330=dout_307&((B >> 5)&1);
   dout_331=dout_268^dout_257;
   dout_332=((A >> 7)&1)&dout_257;
   dout_333=((B >> 7)&1)&dout_311;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_268&1) << 1;
   O |= (0&1) << 2;
   O |= (0&1) << 3;
   O |= (dout_180&1) << 4;
   O |= (0&1) << 5;
   O |= (dout_332&1) << 6;
   O |= (dout_259&1) << 7;
   O |= (dout_259&1) << 8;
   O |= (0&1) << 9;
   O |= (dout_180&1) << 10;
   O |= (dout_259&1) << 11;
   O |= (dout_259&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}

uint16_t mul8u_LM7(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_35, dout_36, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_59, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_35=dout_19&dout_26;
   dout_36=dout_19|dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_31&dout_22;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34|dout_46;
   dout_59=dout_36^dout_47;
   dout_63=dout_36&dout_47;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_35;
   dout_67=dout_64^dout_35;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_59^dout_89;
   dout_98=dout_59&dout_89;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_98;
   dout_143=dout_140^dout_98;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_97&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 24.81 %
// MAE = 16256 
// WCE% = 99.22 %
// WCE = 65025 
// WCRE% = 100.00 %
// EP% = 99.22 %
// MRE% = 100.00 %
// MSE = 47164.981e4 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.18 %
// MAE = 119 
// WCE% = 0.79 %
// WCE = 518 
// WCRE% = 125.00 %
// EP% = 98.05 %
// MRE% = 4.16 %
// MSE = 22286 
// PDK45_PWR = 0.206 mW
// PDK45_AREA = 427.5 um2
// PDK45_DELAY = 1.41 ns


uint16_t mul8u_185Q(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_17, dout_30, dout_39, dout_59, dout_62, dout_63, dout_72, dout_73, dout_81, dout_98, dout_100, dout_101, dout_104, dout_106, dout_107, dout_108, dout_109, dout_110, dout_115, dout_116, dout_117, dout_118, dout_136, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_160, dout_161, dout_162, dout_163, dout_167, dout_177, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_202, dout_204, dout_205, dout_206, dout_207, dout_208, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_259, dout_260, dout_261, dout_262, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_17=((B >> 7)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_39=dout_17^0xFFFFFFFFFFFFFFFFU;
   dout_59=((A >> 3)&1)|dout_30;
   dout_62=dout_59^((A >> 3)&1);
   dout_63=((A >> 0)&1)&dout_17;
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_81=(((A >> 0)&1)|dout_39)^0xFFFFFFFFFFFFFFFFU;
   dout_98=dout_62&((A >> 2)&1);
   dout_100=((A >> 2)&1)&dout_98;
   dout_101=dout_81|dout_72;
   dout_104=dout_101^dout_98;
   dout_106=dout_63^dout_73;
   dout_107=dout_63&((A >> 2)&1);
   dout_108=((B >> 7)&1)&dout_100;
   dout_109=dout_106^dout_100;
   dout_110=dout_107|dout_108;
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_136=dout_117|dout_115;
   dout_141=dout_104^dout_116;
   dout_142=dout_101&dout_116;
   dout_143=dout_115&dout_72;
   dout_144=dout_141^dout_143;
   dout_145=dout_142|dout_143;
   dout_146=dout_109^dout_117;
   dout_147=dout_109&dout_117;
   dout_148=dout_146&dout_145;
   dout_149=dout_146^dout_145;
   dout_150=dout_147|dout_148;
   dout_151=dout_110^dout_118;
   dout_152=dout_110&((A >> 3)&1);
   dout_153=dout_151&dout_150;
   dout_154=dout_151^dout_150;
   dout_155=dout_152|dout_153;
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_167=((B >> 5)&1)&((A >> 2)&1);
   dout_177=((A >> 4)&1)&((B >> 3)&1);
   dout_179=dout_136|dout_167;
   dout_180=dout_177|dout_142;
   dout_181=dout_144^dout_160;
   dout_182=dout_144&dout_160;
   dout_183=dout_181&dout_180;
   dout_184=dout_181^dout_180;
   dout_185=dout_182|dout_183;
   dout_186=dout_149^dout_161;
   dout_187=dout_149&dout_161;
   dout_188=dout_186&dout_185;
   dout_189=dout_186^dout_185;
   dout_190=dout_187|dout_188;
   dout_191=dout_154^dout_162;
   dout_192=dout_154&dout_162;
   dout_193=dout_191&dout_190;
   dout_194=dout_191^dout_190;
   dout_195=dout_192|dout_193;
   dout_196=dout_155^dout_163;
   dout_197=dout_155&((A >> 4)&1);
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_196^dout_195;
   dout_200=dout_197|dout_198;
   dout_202=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_221=dout_184^dout_204;
   dout_222=dout_184&dout_204;
   dout_223=dout_221&dout_179;
   dout_224=dout_221^dout_179;
   dout_225=dout_222|dout_223;
   dout_226=dout_189^dout_205;
   dout_227=dout_189&dout_205;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_199^dout_207;
   dout_237=dout_199&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_241=dout_200^dout_208;
   dout_242=dout_200&dout_208;
   dout_243=dout_241&dout_240;
   dout_244=dout_241^dout_240;
   dout_245=dout_242|dout_243;
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_259=dout_247|dout_202;
   dout_260=dout_247&dout_202;
   dout_261=dout_224^dout_248;
   dout_262=dout_224&dout_248;
   dout_264=dout_261^dout_260;
   dout_265=dout_262|dout_260;
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_265;
   dout_269=dout_266^dout_265;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&((A >> 6)&1);
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_259|dout_291;
   dout_300=dout_259&dout_291;
   dout_301=dout_264^dout_292;
   dout_302=dout_264&dout_292;
   dout_303=dout_301&dout_300;
   dout_304=dout_301^dout_300;
   dout_305=dout_302|dout_303;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_147&1) << 1;
   O |= (dout_290&1) << 2;
   O |= (0&1) << 3;
   O |= (dout_110&1) << 4;
   O |= (dout_304&1) << 5;
   O |= (dout_162&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 1.54 %
// MAE = 1011 
// WCE% = 13.92 %
// WCE = 9124 
// WCRE% = 152.38 %
// EP% = 74.91 %
// MRE% = 7.46 %
// MSE = 36892.825e2 
// PDK45_PWR = 0.189 mW
// PDK45_AREA = 437.4 um2
// PDK45_DELAY = 1.48 ns


uint16_t mul8u_L40(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_37, dout_39, dout_44, dout_49, dout_54, dout_59, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_76, dout_81, dout_86, dout_91, dout_96, dout_101, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_121, dout_126, dout_131, dout_136, dout_141, dout_146, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_166, dout_171, dout_176, dout_181, dout_186, dout_194, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_233, dout_234, dout_236, dout_239, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_288, dout_289, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_304, dout_306, dout_307, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_37=dout_18|dout_25;
   dout_39=dout_19|dout_26;
   dout_44=dout_20|dout_27;
   dout_49=dout_21|dout_28;
   dout_54=dout_22|dout_29;
   dout_59=dout_23|dout_30;
   dout_66=((B >> 0)&1)&((A >> 2)&1);
   dout_67=((B >> 1)&1)&((A >> 2)&1);
   dout_68=((B >> 2)&1)&((A >> 2)&1);
   dout_69=((B >> 3)&1)&((A >> 2)&1);
   dout_70=((B >> 4)&1)&((A >> 2)&1);
   dout_71=((B >> 5)&1)&((A >> 2)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_74=dout_37|dout_66;
   dout_76=dout_39|dout_67;
   dout_81=dout_44|dout_68;
   dout_86=dout_49|dout_69;
   dout_91=dout_54|dout_70;
   dout_96=dout_59|dout_71;
   dout_101=dout_31|dout_72;
   dout_111=((B >> 0)&1)&((A >> 3)&1);
   dout_112=((B >> 1)&1)&((A >> 3)&1);
   dout_113=((B >> 2)&1)&((A >> 3)&1);
   dout_114=((B >> 3)&1)&((A >> 3)&1);
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_119=dout_76|dout_111;
   dout_121=dout_81|dout_112;
   dout_126=dout_86|dout_113;
   dout_131=dout_91|dout_114;
   dout_136=dout_96|dout_115;
   dout_141=dout_101|dout_116;
   dout_146=dout_73|dout_117;
   dout_156=((B >> 0)&1)&((A >> 4)&1);
   dout_157=((B >> 1)&1)&((A >> 4)&1);
   dout_158=((B >> 2)&1)&((A >> 4)&1);
   dout_159=((B >> 3)&1)&((A >> 4)&1);
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_164=dout_121|dout_156;
   dout_166=dout_126|dout_157;
   dout_171=dout_131|dout_158;
   dout_176=dout_136|dout_159;
   dout_181=dout_141|dout_160;
   dout_186=dout_146|dout_161;
   dout_194=dout_118|dout_162;
   dout_201=((B >> 0)&1)&((A >> 5)&1);
   dout_202=((B >> 1)&1)&((A >> 5)&1);
   dout_203=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_209=dout_166^dout_201;
   dout_210=dout_166&dout_201;
   dout_211=dout_171^dout_202;
   dout_212=dout_171&dout_202;
   dout_214=dout_211^dout_210;
   dout_215=dout_212|dout_210;
   dout_216=dout_176^dout_203;
   dout_217=dout_176&dout_203;
   dout_218=dout_216&dout_215;
   dout_219=dout_216^dout_215;
   dout_220=dout_217|dout_218;
   dout_221=dout_181^dout_204;
   dout_222=dout_181&dout_204;
   dout_223=dout_221&dout_220;
   dout_224=dout_221^dout_220;
   dout_225=dout_222|dout_223;
   dout_226=dout_186^dout_205;
   dout_227=dout_186&dout_205;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_194|dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_236=dout_163|dout_207;
   dout_239=dout_236|dout_233;
   dout_246=((B >> 0)&1)&((A >> 6)&1);
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_254=dout_214^dout_246;
   dout_255=dout_214&dout_246;
   dout_256=dout_219^dout_247;
   dout_257=dout_219&dout_247;
   dout_259=dout_256^dout_255;
   dout_260=dout_257|dout_255;
   dout_261=dout_224^dout_248;
   dout_262=dout_224&dout_248;
   dout_263=dout_261&dout_260;
   dout_264=dout_261^dout_260;
   dout_265=dout_262|dout_263;
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_265;
   dout_269=dout_266^dout_265;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_208^dout_252;
   dout_282=dout_208&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_288=dout_253&dout_285;
   dout_289=dout_253^dout_285;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_259^dout_291;
   dout_300=dout_259&dout_291;
   dout_301=dout_264^dout_292;
   dout_302=dout_264&dout_292;
   dout_304=dout_301|dout_300;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_309=dout_306^dout_302;
   dout_310=dout_307|dout_302;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_288^dout_298;
   dout_332=dout_288&((A >> 7)&1);
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_74&1) << 2;
   O |= (dout_119&1) << 3;
   O |= (dout_164&1) << 4;
   O |= (dout_209&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.43 %
// MAE = 284 
// WCE% = 4.48 %
// WCE = 2938 
// WCRE% = 52.95 %
// EP% = 49.91 %
// MRE% = 2.61 %
// MSE = 386332 
// PDK45_PWR = 0.309 mW
// PDK45_AREA = 561.8 um2
// PDK45_DELAY = 1.73 ns


uint16_t mul8u_RCG(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_39, dout_44, dout_49, dout_51, dout_54, dout_59, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_76, dout_80, dout_81, dout_86, dout_91, dout_96, dout_101, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_143, dout_144, dout_146, dout_149, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_198, dout_199, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_238, dout_239, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_39=dout_19|dout_26;
   dout_44=dout_20|dout_27;
   dout_49=dout_21|dout_28;
   dout_51=((B >> 0)&1)&((A >> 2)&1);
   dout_54=dout_22|dout_29;
   dout_59=dout_23|dout_30;
   dout_67=((B >> 1)&1)&((A >> 2)&1);
   dout_68=((B >> 2)&1)&((A >> 2)&1);
   dout_69=((B >> 3)&1)&((A >> 2)&1);
   dout_70=((B >> 4)&1)&((A >> 2)&1);
   dout_71=((B >> 5)&1)&((A >> 2)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_74=dout_34|dout_51;
   dout_76=dout_39|dout_67;
   dout_80=dout_76|dout_67;
   dout_81=dout_44|dout_68;
   dout_86=dout_49|dout_69;
   dout_91=dout_54|dout_70;
   dout_96=dout_59|dout_71;
   dout_101=dout_31|dout_72;
   dout_111=((B >> 0)&1)&((A >> 3)&1);
   dout_112=((B >> 1)&1)&((A >> 3)&1);
   dout_113=((B >> 2)&1)&((A >> 3)&1);
   dout_114=((B >> 3)&1)&((A >> 3)&1);
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_119=dout_80^dout_111;
   dout_120=dout_76&dout_111;
   dout_121=dout_81^dout_112;
   dout_122=dout_81&dout_112;
   dout_123=dout_121&dout_120;
   dout_124=dout_121^dout_120;
   dout_125=dout_122|dout_123;
   dout_126=dout_86^dout_113;
   dout_127=dout_86&dout_113;
   dout_128=dout_126&dout_125;
   dout_129=dout_126^dout_125;
   dout_130=dout_127|dout_128;
   dout_131=dout_91^dout_114;
   dout_132=dout_91&dout_114;
   dout_133=dout_131&dout_130;
   dout_134=dout_131^dout_130;
   dout_135=dout_132|dout_133;
   dout_136=dout_96^dout_115;
   dout_137=dout_96&dout_115;
   dout_138=dout_136&dout_135;
   dout_139=dout_136^dout_135;
   dout_140=dout_137|dout_138;
   dout_141=dout_101^dout_116;
   dout_143=dout_116&dout_140;
   dout_144=dout_141^dout_140;
   dout_146=dout_73|dout_117;
   dout_149=dout_146|dout_143;
   dout_156=((B >> 0)&1)&((A >> 4)&1);
   dout_157=((B >> 1)&1)&((A >> 4)&1);
   dout_158=((B >> 2)&1)&((A >> 4)&1);
   dout_159=((B >> 3)&1)&((A >> 4)&1);
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_164=dout_124^dout_156;
   dout_165=dout_124&dout_156;
   dout_166=dout_129^dout_157;
   dout_167=dout_129&dout_157;
   dout_168=dout_166&dout_165;
   dout_169=dout_166^dout_165;
   dout_170=dout_167|dout_168;
   dout_171=dout_134^dout_158;
   dout_172=dout_134&dout_158;
   dout_173=dout_171&dout_170;
   dout_174=dout_171^dout_170;
   dout_175=dout_172|dout_173;
   dout_176=dout_139^dout_159;
   dout_177=dout_139&dout_159;
   dout_178=dout_176&dout_175;
   dout_179=dout_176^dout_175;
   dout_180=dout_177|dout_178;
   dout_181=dout_144^dout_160;
   dout_182=dout_144&dout_160;
   dout_183=dout_181&dout_180;
   dout_184=dout_181^dout_180;
   dout_185=dout_182|dout_183;
   dout_186=dout_149^dout_161;
   dout_187=dout_149&dout_161;
   dout_188=dout_186&dout_185;
   dout_189=dout_186^dout_185;
   dout_190=dout_187|dout_188;
   dout_191=dout_118^dout_162;
   dout_192=dout_118&dout_162;
   dout_193=dout_191&dout_190;
   dout_194=dout_191^dout_190;
   dout_195=dout_192|dout_193;
   dout_198=((B >> 7)&1)&dout_195;
   dout_199=dout_163^dout_195;
   dout_201=((B >> 0)&1)&((A >> 5)&1);
   dout_202=((B >> 1)&1)&((A >> 5)&1);
   dout_203=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_209=dout_169^dout_201;
   dout_210=dout_169&dout_201;
   dout_211=dout_174^dout_202;
   dout_212=dout_174&dout_202;
   dout_213=dout_211&dout_210;
   dout_214=dout_211^dout_210;
   dout_215=dout_212|dout_213;
   dout_216=dout_179^dout_203;
   dout_217=dout_179&dout_203;
   dout_218=dout_216&dout_215;
   dout_219=dout_216^dout_215;
   dout_220=dout_217|dout_218;
   dout_221=dout_184^dout_204;
   dout_222=dout_184&dout_204;
   dout_223=dout_221&dout_220;
   dout_224=dout_221^dout_220;
   dout_225=dout_222|dout_223;
   dout_226=dout_189^dout_205;
   dout_227=dout_189&dout_205;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_194^dout_206;
   dout_232=dout_194&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_199|dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_241=dout_198^dout_208;
   dout_242=dout_198&dout_208;
   dout_243=dout_208&dout_238;
   dout_244=dout_241^dout_238;
   dout_245=dout_242|dout_243;
   dout_246=((B >> 0)&1)&((A >> 6)&1);
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_254=dout_214^dout_246;
   dout_255=dout_214&dout_246;
   dout_256=dout_219^dout_247;
   dout_257=dout_219&dout_247;
   dout_258=dout_256&dout_255;
   dout_259=dout_256^dout_255;
   dout_260=dout_257|dout_258;
   dout_261=dout_224^dout_248;
   dout_262=dout_224&dout_248;
   dout_263=dout_261&dout_260;
   dout_264=dout_261^dout_260;
   dout_265=dout_262|dout_263;
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_265;
   dout_269=dout_266^dout_265;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_245^dout_253;
   dout_287=dout_245&((A >> 6)&1);
   dout_288=((B >> 7)&1)&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_259^dout_291;
   dout_300=dout_259&dout_291;
   dout_301=dout_264^dout_292;
   dout_302=dout_264&dout_292;
   dout_303=dout_301&dout_300;
   dout_304=dout_301^dout_300;
   dout_305=dout_302|dout_303;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_74&1) << 2;
   O |= (dout_119&1) << 3;
   O |= (dout_164&1) << 4;
   O |= (dout_209&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.65 %
// MAE = 426 
// WCE% = 6.23 %
// WCE = 4084 
// WCRE% = 65.98 %
// EP% = 65.97 %
// MRE% = 4.05 %
// MSE = 645336 
// PDK45_PWR = 0.237 mW
// PDK45_AREA = 479.2 um2
// PDK45_DELAY = 1.59 ns


uint16_t mul8u_1CMB(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_37, dout_42, dout_44, dout_49, dout_54, dout_59, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_76, dout_81, dout_86, dout_87, dout_91, dout_94, dout_96, dout_101, dout_111, dout_112, dout_113, dout_115, dout_116, dout_117, dout_118, dout_119, dout_121, dout_126, dout_136, dout_141, dout_146, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_169, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_183, dout_184, dout_186, dout_189, dout_191, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_243, dout_244, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_33=((A >> 2)&1)&((B >> 0)&1);
   dout_34=dout_18|dout_25;
   dout_37=dout_34|dout_33;
   dout_42=dout_26|dout_19;
   dout_44=dout_20|dout_27;
   dout_49=dout_21|dout_28;
   dout_54=dout_22|dout_29;
   dout_59=dout_23|dout_30;
   dout_67=((B >> 1)&1)&((A >> 2)&1);
   dout_68=((B >> 2)&1)&((A >> 2)&1);
   dout_69=((B >> 3)&1)&((A >> 2)&1);
   dout_70=((B >> 4)&1)&((A >> 2)&1);
   dout_71=((B >> 5)&1)&((A >> 2)&1);
   dout_72=((B >> 6)&1)&((A >> 2)&1);
   dout_73=((B >> 7)&1)&((A >> 2)&1);
   dout_76=dout_42|dout_67;
   dout_81=dout_44|dout_68;
   dout_86=dout_49|dout_69;
   dout_87=((A >> 3)&1)&((B >> 3)&1);
   dout_91=dout_54|dout_70;
   dout_94=dout_91|dout_87;
   dout_96=dout_59|dout_71;
   dout_101=dout_31|dout_72;
   dout_111=((B >> 0)&1)&((A >> 3)&1);
   dout_112=((B >> 1)&1)&((A >> 3)&1);
   dout_113=((B >> 2)&1)&((A >> 3)&1);
   dout_115=((B >> 4)&1)&((A >> 3)&1);
   dout_116=((B >> 5)&1)&((A >> 3)&1);
   dout_117=((B >> 6)&1)&((A >> 3)&1);
   dout_118=((B >> 7)&1)&((A >> 3)&1);
   dout_119=dout_76|dout_111;
   dout_121=dout_81|dout_112;
   dout_126=dout_86|dout_113;
   dout_136=dout_96|dout_115;
   dout_141=dout_101|dout_116;
   dout_146=dout_73|dout_117;
   dout_156=((B >> 0)&1)&((A >> 4)&1);
   dout_157=((B >> 1)&1)&((A >> 4)&1);
   dout_158=((B >> 2)&1)&((A >> 4)&1);
   dout_159=((B >> 3)&1)&((A >> 4)&1);
   dout_160=((B >> 4)&1)&((A >> 4)&1);
   dout_161=((B >> 5)&1)&((A >> 4)&1);
   dout_162=((B >> 6)&1)&((A >> 4)&1);
   dout_163=((B >> 7)&1)&((A >> 4)&1);
   dout_164=dout_121^dout_156;
   dout_165=dout_121&dout_156;
   dout_166=dout_126^dout_157;
   dout_167=dout_126&dout_157;
   dout_169=dout_166|dout_165;
   dout_171=dout_94^dout_158;
   dout_172=dout_94&dout_158;
   dout_173=dout_171&dout_167;
   dout_174=dout_171^dout_167;
   dout_175=dout_172|dout_173;
   dout_176=dout_136^dout_159;
   dout_177=dout_136&dout_159;
   dout_178=dout_176&dout_175;
   dout_179=dout_176^dout_175;
   dout_180=dout_177|dout_178;
   dout_181=dout_141|dout_160;
   dout_183=dout_160&dout_180;
   dout_184=dout_181^dout_180;
   dout_186=dout_146|dout_161;
   dout_189=dout_186|dout_183;
   dout_191=dout_118|dout_162;
   dout_201=((B >> 0)&1)&((A >> 5)&1);
   dout_202=((B >> 1)&1)&((A >> 5)&1);
   dout_203=((B >> 2)&1)&((A >> 5)&1);
   dout_204=((B >> 3)&1)&((A >> 5)&1);
   dout_205=((B >> 4)&1)&((A >> 5)&1);
   dout_206=((B >> 5)&1)&((A >> 5)&1);
   dout_207=((B >> 6)&1)&((A >> 5)&1);
   dout_208=((B >> 7)&1)&((A >> 5)&1);
   dout_209=dout_169^dout_201;
   dout_210=dout_169&dout_201;
   dout_211=dout_174^dout_202;
   dout_212=dout_174&dout_202;
   dout_214=dout_211^dout_210;
   dout_215=dout_212|dout_210;
   dout_216=dout_179^dout_203;
   dout_217=dout_179&dout_203;
   dout_218=dout_216&dout_215;
   dout_219=dout_216^dout_215;
   dout_220=dout_217|dout_218;
   dout_221=dout_184^dout_204;
   dout_222=dout_184&dout_204;
   dout_223=dout_221&dout_220;
   dout_224=dout_221^dout_220;
   dout_225=dout_222|dout_223;
   dout_226=dout_189^dout_205;
   dout_227=dout_189&dout_205;
   dout_228=dout_226&dout_225;
   dout_229=dout_226^dout_225;
   dout_230=dout_227|dout_228;
   dout_231=dout_191^dout_206;
   dout_232=dout_191&dout_206;
   dout_233=dout_231&dout_230;
   dout_234=dout_231^dout_230;
   dout_235=dout_232|dout_233;
   dout_236=dout_163^dout_207;
   dout_237=dout_163&dout_207;
   dout_238=dout_236&dout_235;
   dout_239=dout_236^dout_235;
   dout_240=dout_237|dout_238;
   dout_243=dout_208&dout_240;
   dout_244=dout_208^dout_240;
   dout_246=((B >> 0)&1)&((A >> 6)&1);
   dout_247=((B >> 1)&1)&((A >> 6)&1);
   dout_248=((B >> 2)&1)&((A >> 6)&1);
   dout_249=((B >> 3)&1)&((A >> 6)&1);
   dout_250=((B >> 4)&1)&((A >> 6)&1);
   dout_251=((B >> 5)&1)&((A >> 6)&1);
   dout_252=((B >> 6)&1)&((A >> 6)&1);
   dout_253=((B >> 7)&1)&((A >> 6)&1);
   dout_254=dout_214^dout_246;
   dout_255=dout_214&dout_246;
   dout_256=dout_219^dout_247;
   dout_257=dout_219&dout_247;
   dout_258=dout_256&dout_255;
   dout_259=dout_256^dout_255;
   dout_260=dout_257|dout_258;
   dout_261=dout_224^dout_248;
   dout_262=dout_224&dout_248;
   dout_263=dout_261&dout_260;
   dout_264=dout_261^dout_260;
   dout_265=dout_262|dout_263;
   dout_266=dout_229^dout_249;
   dout_267=dout_229&dout_249;
   dout_268=dout_266&dout_265;
   dout_269=dout_266^dout_265;
   dout_270=dout_267|dout_268;
   dout_271=dout_234^dout_250;
   dout_272=dout_234&dout_250;
   dout_273=dout_271&dout_270;
   dout_274=dout_271^dout_270;
   dout_275=dout_272|dout_273;
   dout_276=dout_239^dout_251;
   dout_277=dout_239&dout_251;
   dout_278=dout_276&dout_275;
   dout_279=dout_276^dout_275;
   dout_280=dout_277|dout_278;
   dout_281=dout_244^dout_252;
   dout_282=dout_244&dout_252;
   dout_283=dout_281&dout_280;
   dout_284=dout_281^dout_280;
   dout_285=dout_282|dout_283;
   dout_286=dout_243^dout_253;
   dout_287=dout_243&((A >> 6)&1);
   dout_288=dout_253&dout_285;
   dout_289=dout_286^dout_285;
   dout_290=dout_287|dout_288;
   dout_291=((B >> 0)&1)&((A >> 7)&1);
   dout_292=((B >> 1)&1)&((A >> 7)&1);
   dout_293=((B >> 2)&1)&((A >> 7)&1);
   dout_294=((B >> 3)&1)&((A >> 7)&1);
   dout_295=((B >> 4)&1)&((A >> 7)&1);
   dout_296=((B >> 5)&1)&((A >> 7)&1);
   dout_297=((B >> 6)&1)&((A >> 7)&1);
   dout_298=((B >> 7)&1)&((A >> 7)&1);
   dout_299=dout_259^dout_291;
   dout_300=dout_259&dout_291;
   dout_301=dout_264^dout_292;
   dout_302=dout_264&dout_292;
   dout_303=dout_301&dout_300;
   dout_304=dout_301^dout_300;
   dout_305=dout_302|dout_303;
   dout_306=dout_269^dout_293;
   dout_307=dout_269&dout_293;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_274^dout_294;
   dout_312=dout_274&dout_294;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_279^dout_295;
   dout_317=dout_279&dout_295;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_284^dout_296;
   dout_322=dout_284&dout_296;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_289^dout_297;
   dout_327=dout_289&dout_297;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_290^dout_298;
   dout_332=dout_290&((A >> 7)&1);
   dout_333=((B >> 7)&1)&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_37&1) << 2;
   O |= (dout_119&1) << 3;
   O |= (dout_164&1) << 4;
   O |= (dout_209&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_299&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 1.12 %
// MAE = 731 
// WCE% = 15.53 %
// WCE = 10176 
// WCRE% = 44.44 %
// EP% = 19.82 %
// MRE% = 2.64 %
// MSE = 55767.68e2 
// PDK45_PWR = 0.371 mW
// PDK45_AREA = 661.2 um2
// PDK45_DELAY = 1.36 ns


uint16_t mul8u_JQQ(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_72, dout_73, dout_74, dout_75, dout_77, dout_79, dout_80, dout_82, dout_83, dout_84, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_259, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_302, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17^dout_24;
   dout_33=dout_17&dout_24;
   dout_34=dout_18^dout_25;
   dout_35=dout_18&dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23|dout_30;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_56=dout_54&dout_33;
   dout_57=dout_54^dout_33;
   dout_58=dout_55|dout_56;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_39;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_77=dout_74|dout_41;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_43;
   dout_84=dout_31|dout_52;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_58;
   dout_100=dout_97^dout_58;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_75;
   dout_120=dout_117^dout_75;
   dout_121=dout_118|dout_119;
   dout_122=dout_84^dout_94;
   dout_123=dout_84&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53|dout_95;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_127^dout_137;
   dout_166=dout_127&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96|dout_138;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_170^dout_180;
   dout_209=dout_170&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_213^dout_223;
   dout_252=dout_213&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_259=dout_256^dout_214;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225|dout_267;
   dout_300=dout_225&dout_267;
   dout_302=dout_299|dout_214;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_299&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_300;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_300|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_57&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.018 %
// MAE = 12 
// WCE% = 0.29 %
// WCE = 192 
// WCRE% = 28.57 %
// EP% = 9.38 %
// MRE% = 0.13 %
// MSE = 1792 
// PDK45_PWR = 0.388 mW
// PDK45_AREA = 683.3 um2
// PDK45_DELAY = 1.35 ns


uint16_t mul8u_1446(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_86, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17^dout_24;
   dout_33=dout_17&dout_24;
   dout_34=dout_18^dout_25;
   dout_35=dout_18&dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22|dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23|dout_30;
   dout_45=dout_23&dout_30;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_56=dout_54&dout_33;
   dout_57=dout_54^dout_33;
   dout_58=dout_55|dout_56;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_86=dout_84&dout_45;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_86;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_58;
   dout_100=dout_97^dout_58;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=dout_268&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_57&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.13 %
// MAE = 87 
// WCE% = 2.38 %
// WCE = 1558 
// WCRE% = 64.00 %
// EP% = 39.93 %
// MRE% = 1.04 %
// MSE = 52863 
// PDK45_PWR = 0.329 mW
// PDK45_AREA = 606.8 um2
// PDK45_DELAY = 1.36 ns


uint16_t mul8u_7C1(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_36, dout_38, dout_40, dout_42, dout_44, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_59, dout_64, dout_69, dout_74, dout_79, dout_80, dout_84, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_100, dout_102, dout_103, dout_107, dout_108, dout_112, dout_113, dout_117, dout_118, dout_122, dout_123, dout_125, dout_127, dout_128, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_168, dout_169, dout_170, dout_171, dout_173, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_335, dout_336, dout_339, dout_340, dout_341, dout_344, dout_345, dout_347, dout_348, dout_349, dout_350, dout_351, dout_352, dout_353, dout_354, dout_355, dout_356, dout_357, dout_358, dout_361, dout_362;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_36=dout_19|dout_26;
   dout_38=dout_20|dout_27;
   dout_40=dout_21|dout_28;
   dout_42=dout_22|dout_29;
   dout_44=dout_23|dout_30;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_59=dout_36|dout_47;
   dout_64=dout_38|dout_48;
   dout_69=dout_40|dout_49;
   dout_74=dout_42|dout_50;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_52;
   dout_84=dout_31|dout_52;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_59^dout_89;
   dout_98=dout_59&dout_89;
   dout_100=dout_97|dout_55;
   dout_102=dout_64^dout_90;
   dout_103=dout_64&dout_90;
   dout_107=dout_69^dout_91;
   dout_108=dout_69&dout_91;
   dout_112=dout_74^dout_92;
   dout_113=dout_74&dout_92;
   dout_117=dout_79^dout_93;
   dout_118=dout_79&dout_93;
   dout_122=dout_84^dout_94;
   dout_123=dout_84&dout_94;
   dout_125=dout_122|dout_80;
   dout_127=dout_53^dout_95;
   dout_128=((A >> 2)&1)&dout_96;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_102^dout_132;
   dout_141=dout_102&dout_132;
   dout_142=dout_140&dout_98;
   dout_143=dout_140^dout_98;
   dout_144=dout_141|dout_142;
   dout_145=dout_107^dout_133;
   dout_146=dout_107&dout_133;
   dout_147=dout_145&dout_103;
   dout_148=dout_145^dout_103;
   dout_149=dout_146|dout_147;
   dout_150=dout_112^dout_134;
   dout_151=dout_112&dout_134;
   dout_152=dout_150&dout_108;
   dout_153=dout_150^dout_108;
   dout_154=dout_151|dout_152;
   dout_155=dout_117^dout_135;
   dout_156=dout_117&dout_135;
   dout_157=dout_155&dout_113;
   dout_158=dout_155^dout_113;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_118;
   dout_163=dout_160^dout_118;
   dout_164=dout_161|dout_162;
   dout_165=dout_127^dout_137;
   dout_166=dout_127&dout_137;
   dout_168=dout_165^dout_123;
   dout_169=dout_166|dout_123;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_173=dout_170|dout_128;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_216=dout_213^dout_171;
   dout_217=dout_214|dout_171;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_322=dout_297&dout_293;
   dout_323=dout_302^dout_298;
   dout_324=dout_302&dout_298;
   dout_325=dout_323&dout_322;
   dout_326=dout_323^dout_322;
   dout_327=dout_324|dout_325;
   dout_328=dout_268^dout_303;
   dout_329=((A >> 7)&1)&dout_303;
   dout_330=dout_328&dout_327;
   dout_331=dout_328^dout_327;
   dout_332=dout_329|dout_330;
   dout_333=dout_297^dout_293;
   dout_335=dout_333^0xFFFFFFFFFFFFFFFFU;
   dout_336=dout_322|dout_333;
   dout_339=dout_323&dout_336;
   dout_340=dout_323^dout_336;
   dout_341=dout_324|dout_339;
   dout_344=dout_328&dout_341;
   dout_345=dout_328^dout_341;
   dout_347=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_348=dout_333&dout_347;
   dout_349=dout_335&dout_320;
   dout_350=dout_348|dout_349;
   dout_351=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_352=dout_326&dout_351;
   dout_353=dout_340&dout_320;
   dout_354=dout_352|dout_353;
   dout_355=dout_320^0xFFFFFFFFFFFFFFFFU;
   dout_356=dout_331&dout_355;
   dout_357=dout_345&dout_320;
   dout_358=dout_356|dout_357;
   dout_361=dout_344&dout_320;
   dout_362=dout_332|dout_361;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_350&1) << 12;
   O |= (dout_354&1) << 13;
   O |= (dout_358&1) << 14;
   O |= (dout_362&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.057 %
// MAE = 37 
// WCE% = 1.14 %
// WCE = 748 
// WCRE% = 64.00 %
// EP% = 29.93 %
// MRE% = 0.51 %
// MSE = 12684 
// PDK45_PWR = 0.356 mW
// PDK45_AREA = 632.6 um2
// PDK45_DELAY = 1.38 ns


uint16_t mul8u_GS2(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_34, dout_36, dout_38, dout_40, dout_42, dout_44, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_59, dout_60, dout_64, dout_69, dout_70, dout_74, dout_75, dout_79, dout_80, dout_84, dout_85, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_100, dout_101, dout_102, dout_103, dout_105, dout_107, dout_108, dout_112, dout_113, dout_115, dout_116, dout_117, dout_118, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_130, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=dout_17|dout_24;
   dout_34=dout_18|dout_25;
   dout_36=dout_19|dout_26;
   dout_38=dout_20|dout_27;
   dout_40=dout_21|dout_28;
   dout_42=dout_22|dout_29;
   dout_44=dout_23|dout_30;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_64=dout_38|dout_48;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&((A >> 2)&1);
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_59^dout_89;
   dout_98=dout_59&dout_89;
   dout_100=dout_97^dout_55;
   dout_101=dout_98|dout_55;
   dout_102=dout_64^dout_90;
   dout_103=dout_64&dout_90;
   dout_105=dout_102|dout_60;
   dout_107=dout_69^dout_91;
   dout_108=dout_69&dout_91;
   dout_112=dout_74^dout_92;
   dout_113=dout_74&dout_92;
   dout_115=dout_112^dout_70;
   dout_116=dout_113|dout_70;
   dout_117=dout_79^dout_93;
   dout_118=dout_79&dout_93;
   dout_120=dout_117^dout_75;
   dout_121=dout_118|dout_75;
   dout_122=dout_84^dout_94;
   dout_123=dout_84&dout_94;
   dout_124=dout_122&dout_80;
   dout_125=dout_122^dout_80;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_130=dout_127|dout_85;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_107^dout_133;
   dout_146=dout_107&dout_133;
   dout_147=dout_145&dout_103;
   dout_148=dout_145^dout_103;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_108;
   dout_153=dout_150^dout_108;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_137&dout_130;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_173=dout_170^dout_128;
   dout_174=dout_171|dout_128;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=dout_268&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_32&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}



uint16_t mul8u_YX7(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_16, dout_17, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_24, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_32, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_62, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_82, dout_85, dout_87, dout_90, dout_92, dout_95, dout_97, dout_98, dout_100, dout_102, dout_105, dout_107, dout_110, dout_113, dout_114, dout_116, dout_119, dout_121, dout_124, dout_126, dout_129, dout_131, dout_134, dout_136, dout_139, dout_141, dout_146, dout_147, dout_153, dout_158, dout_163, dout_168, dout_183, dout_185, dout_187, dout_192, dout_195, dout_197, dout_200, dout_202, dout_205, dout_210, dout_212, dout_215, dout_218, dout_231, dout_236, dout_241, dout_246, dout_251, dout_254;   int avg=0;

   dout_16=((B >> 0)&1)&((A >> 0)&1);
   dout_17=((B >> 1)&1)&((A >> 0)&1);
   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((B >> 0)&1)&((A >> 1)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_32=((B >> 0)&1)&((A >> 2)&1);
   dout_33=((B >> 1)&1)&((A >> 2)&1);
   dout_34=((B >> 2)&1)&((A >> 2)&1);
   dout_35=((B >> 3)&1)&((A >> 2)&1);
   dout_36=((B >> 4)&1)&((A >> 2)&1);
   dout_37=((B >> 5)&1)&((A >> 2)&1);
   dout_38=((B >> 6)&1)&((A >> 2)&1);
   dout_39=((B >> 7)&1)&((A >> 2)&1);
   dout_40=((B >> 0)&1)&((A >> 3)&1);
   dout_41=((B >> 1)&1)&((A >> 3)&1);
   dout_42=((B >> 2)&1)&((A >> 3)&1);
   dout_43=((B >> 3)&1)&((A >> 3)&1);
   dout_44=((B >> 4)&1)&((A >> 3)&1);
   dout_45=((B >> 5)&1)&((A >> 3)&1);
   dout_46=((B >> 6)&1)&((A >> 3)&1);
   dout_47=((B >> 7)&1)&((A >> 3)&1);
   dout_48=((B >> 0)&1)&((A >> 4)&1);
   dout_49=((B >> 1)&1)&((A >> 4)&1);
   dout_50=((B >> 2)&1)&((A >> 4)&1);
   dout_51=((B >> 3)&1)&((A >> 4)&1);
   dout_52=((B >> 4)&1)&((A >> 4)&1);
   dout_53=((B >> 5)&1)&((A >> 4)&1);
   dout_54=((B >> 6)&1)&((A >> 4)&1);
   dout_55=((B >> 7)&1)&((A >> 4)&1);
   dout_56=((B >> 0)&1)&((A >> 5)&1);
   dout_57=((B >> 1)&1)&((A >> 5)&1);
   dout_58=((B >> 2)&1)&((A >> 5)&1);
   dout_59=((B >> 3)&1)&((A >> 5)&1);
   dout_60=((B >> 4)&1)&((A >> 5)&1);
   dout_62=((B >> 6)&1)&((A >> 5)&1);
   dout_64=((B >> 0)&1)&((A >> 6)&1);
   dout_65=((B >> 1)&1)&((A >> 6)&1);
   dout_66=((B >> 2)&1)&((A >> 6)&1);
   dout_67=((B >> 3)&1)&((A >> 6)&1);
   dout_68=((B >> 4)&1)&((A >> 6)&1);
   dout_69=((B >> 5)&1)&((A >> 6)&1);
   dout_70=((B >> 6)&1)&((A >> 6)&1);
   dout_71=((B >> 7)&1)&((A >> 6)&1);
   dout_72=((B >> 0)&1)&((A >> 7)&1);
   dout_73=((B >> 1)&1)&((A >> 7)&1);
   dout_74=((B >> 2)&1)&((A >> 7)&1);
   dout_75=((B >> 3)&1)&((A >> 7)&1);
   dout_76=((B >> 4)&1)&((A >> 7)&1);
   dout_77=((B >> 5)&1)&((A >> 7)&1);
   dout_78=((B >> 6)&1)&((A >> 7)&1);
   dout_79=((B >> 7)&1)&((A >> 7)&1);
   dout_80=dout_17|dout_24;
   dout_82=dout_18|dout_25;
   dout_85=dout_82|dout_32;
   dout_87=dout_19|dout_26;
   dout_90=dout_87|dout_33;
   dout_92=dout_20|dout_27;
   dout_95=dout_92|dout_34;
   dout_97=dout_21|dout_28;
   dout_98=((A >> 5)&1)&((B >> 5)&1);
   dout_100=dout_97|dout_35;
   dout_102=dout_22|dout_29;
   dout_105=dout_102|dout_36;
   dout_107=dout_23|dout_30;
   dout_110=dout_107|dout_37;
   dout_113=dout_31|dout_38;
   dout_114=dout_41|dout_48;
   dout_116=dout_42|dout_49;
   dout_119=dout_116|dout_56;
   dout_121=dout_43|dout_50;
   dout_124=dout_72|dout_57;
   dout_126=dout_44|dout_51;
   dout_129=dout_126|dout_58;
   dout_131=dout_45|dout_52;
   dout_134=dout_131|dout_59;
   dout_136=dout_46|dout_53;
   dout_139=dout_136|dout_60;
   dout_141=dout_47|dout_54;
   dout_146=((B >> 7)&1)&((A >> 5)&1);
   dout_147=dout_55|dout_62;
   dout_153=dout_90|dout_40;
   dout_158=dout_95|dout_114;
   dout_163=dout_100|dout_119;
   dout_168=dout_121|dout_124;
   dout_183=dout_39|dout_139;
   dout_185=dout_105|dout_64;
   dout_187=dout_110|dout_65;
   dout_192=dout_113|dout_66;
   dout_195=dout_192|dout_73;
   dout_197=dout_39|dout_67;
   dout_200=dout_197|dout_74;
   dout_202=dout_98|dout_68;
   dout_205=dout_202|dout_75;
   dout_210=dout_69|dout_76;
   dout_212=dout_146|dout_70;
   dout_215=dout_212|dout_77;
   dout_218=dout_71|dout_78;
   dout_231=dout_168|dout_185;
   dout_236=dout_129|dout_187;
   dout_241=dout_134|dout_195;
   dout_246=dout_183|dout_200;
   dout_251=dout_141|dout_205;
   dout_254=dout_147|dout_210;

   O = 0;
   O |= (dout_16&1) << 0;
   O |= (dout_80&1) << 1;
   O |= (dout_85&1) << 2;
   O |= (dout_153&1) << 3;
   O |= (dout_158&1) << 4;
   O |= (dout_163&1) << 5;
   O |= (dout_231&1) << 6;
   O |= (dout_236&1) << 7;
   O |= (dout_241&1) << 8;
   O |= (dout_246&1) << 9;
   O |= (dout_251&1) << 10;
   O |= (dout_254&1) << 11;
   O |= (dout_215&1) << 12;
   O |= (dout_218&1) << 13;
   O |= (dout_79&1) << 14;
   O |= (0&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.017 %
// MAE = 11 
// WCE% = 0.061 %
// WCE = 40 
// WCRE% = 300.00 %
// EP% = 87.54 %
// MRE% = 0.59 %
// MSE = 212 
// PDK45_PWR = 0.345 mW
// PDK45_AREA = 604.5 um2
// PDK45_DELAY = 1.41 ns


uint16_t mul8u_CK5(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_20, dout_21, dout_22, dout_23, dout_26, dout_28, dout_29, dout_30, dout_31, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_49, dout_50, dout_51, dout_52, dout_53, dout_68, dout_69, dout_70, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_145, dout_146, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_20=((B >> 3)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_26=((B >> 2)&1)&((A >> 2)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_39=dout_20&dout_26;
   dout_40=dout_21|dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_68=dout_20|dout_26;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_39;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_90|dout_132;
   dout_141=dout_90&dout_132;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_145^dout_175;
   dout_184=dout_145&dout_175;
   dout_185=dout_183&dout_141;
   dout_186=dout_183^dout_141;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_146;
   dout_191=dout_188^dout_146;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_295&1) << 0;
   O |= (dout_123&1) << 1;
   O |= (0&1) << 2;
   O |= (dout_90&1) << 3;
   O |= (dout_140&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.56 %
// MAE = 370 
// WCE% = 2.41 %
// WCE = 1577 
// WCRE% = 103.12 %
// EP% = 98.99 %
// MRE% = 10.85 %
// MSE = 209723 
// PDK45_PWR = 0.104 mW
// PDK45_AREA = 239.3 um2
// PDK45_DELAY = 1.00 ns


uint16_t mul8u_17KS(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_52, dout_53, dout_85, dout_95, dout_96, dout_127, dout_128, dout_130, dout_137, dout_138, dout_139, dout_165, dout_166, dout_170, dout_171, dout_173, dout_174, dout_180, dout_181, dout_182, dout_199, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_222, dout_223, dout_224, dout_225, dout_239, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_309, dout_313, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_52=((B >> 7)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_85=((A >> 3)&1)&dout_52;
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_127=dout_53^dout_95;
   dout_128=dout_53&((A >> 3)&1);
   dout_130=dout_127^dout_85;
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_165=dout_130|dout_137;
   dout_166=dout_130&dout_137;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_173=dout_170^dout_85;
   dout_174=dout_171|dout_128;
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_199=((B >> 3)&1)&((A >> 6)&1);
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_166;
   dout_211=dout_208^dout_166;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_239=((A >> 5)&1)&((B >> 4)&1);
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_165;
   dout_249=dout_246^dout_165;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_199;
   dout_287=dout_284^dout_199;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_309=dout_239^dout_263;
   dout_313=dout_239&dout_263;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_313;
   dout_319=dout_316^dout_313;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_268&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_217&1) << 0;
   O |= (dout_291&1) << 1;
   O |= (dout_309&1) << 2;
   O |= (0&1) << 3;
   O |= (dout_127&1) << 4;
   O |= (dout_225&1) << 5;
   O |= (dout_254&1) << 6;
   O |= (dout_214&1) << 7;
   O |= (dout_309&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_287&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.0046 %
// MAE = 3.0 
// WCE% = 0.017 %
// WCE = 11 
// WCRE% = 100.00 %
// EP% = 75.00 %
// MRE% = 0.18 %
// MSE = 17 
// PDK45_PWR = 0.370 mW
// PDK45_AREA = 637.8 um2
// PDK45_DELAY = 1.40 ns


uint16_t mul8u_KEM(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_19, dout_20, dout_21, dout_22, dout_23, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_59, dout_60, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_35=((B >> 6)&1)&dout_31;
   dout_36=dout_19|dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=((A >> 0)&1)&dout_35;
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_59=dout_36|dout_47;
   dout_60=dout_36&dout_47;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_35&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_59|dout_89;
   dout_98=dout_59&dout_89;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_60;
   dout_105=dout_102^dout_60;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_98;
   dout_143=dout_140^dout_98;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (0&1) << 0;
   O |= (dout_97&1) << 1;
   O |= (0&1) << 2;
   O |= (dout_97&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 2.15 %
// MAE = 1409 
// WCE% = 8.21 %
// WCE = 5380 
// WCRE% = 7100.00 %
// EP% = 99.16 %
// MRE% = 39.78 %
// MSE = 30865.11e2 
// PDK45_PWR = 0.034 mW
// PDK45_AREA = 110.8 um2
// PDK45_DELAY = 0.58 ns


uint16_t mul8u_JV3(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_138, dout_139, dout_171, dout_181, dout_182, dout_209, dout_213, dout_216, dout_224, dout_225, dout_247, dout_256, dout_257, dout_259, dout_265, dout_266, dout_267, dout_268, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332;   int avg=0;

   dout_138=((B >> 6)&1)&((A >> 5)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_171=((B >> 7)&1)&dout_138;
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_209=((A >> 6)&1)&((B >> 5)&1);
   dout_213=dout_139^dout_181;
   dout_216=dout_213^dout_171;
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_247=((B >> 3)&1)&((A >> 3)&1);
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_181;
   dout_259=dout_256^dout_171;
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_293=dout_265|dout_247;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_209;
   dout_297=dout_294^dout_209;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_257;
   dout_302=dout_299^dout_257;
   dout_303=dout_300|dout_301;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_302^dout_298;
   dout_324=dout_302&dout_298;
   dout_325=dout_323&dout_322;
   dout_326=dout_323^dout_322;
   dout_327=dout_324|dout_325;
   dout_328=dout_268^dout_303;
   dout_329=((A >> 7)&1)&dout_303;
   dout_330=dout_268&dout_327;
   dout_331=dout_328^dout_327;
   dout_332=dout_329|dout_330;

   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_326&1) << 2;
   O |= (0&1) << 3;
   O |= (0&1) << 4;
   O |= (dout_303&1) << 5;
   O |= (dout_181&1) << 6;
   O |= (dout_139&1) << 7;
   O |= (dout_216&1) << 8;
   O |= (dout_321&1) << 9;
   O |= (dout_216&1) << 10;
   O |= (dout_216&1) << 11;
   O |= (dout_321&1) << 12;
   O |= (dout_326&1) << 13;
   O |= (dout_331&1) << 14;
   O |= (dout_332&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.391 mW
// PDK45_AREA = 709.6 um2
// PDK45_DELAY = 1.43 ns


uint16_t mul8u_1JFF(uint8_t a, uint8_t b)
{
  uint16_t c = 0;
  uint8_t n0 = (a >> 0) & 0x1;
  uint8_t n2 = (a >> 1) & 0x1;
  uint8_t n4 = (a >> 2) & 0x1;
  uint8_t n6 = (a >> 3) & 0x1;
  uint8_t n8 = (a >> 4) & 0x1;
  uint8_t n10 = (a >> 5) & 0x1;
  uint8_t n12 = (a >> 6) & 0x1;
  uint8_t n14 = (a >> 7) & 0x1;
  uint8_t n16 = (b >> 0) & 0x1;
  uint8_t n18 = (b >> 1) & 0x1;
  uint8_t n20 = (b >> 2) & 0x1;
  uint8_t n22 = (b >> 3) & 0x1;
  uint8_t n24 = (b >> 4) & 0x1;
  uint8_t n26 = (b >> 5) & 0x1;
  uint8_t n28 = (b >> 6) & 0x1;
  uint8_t n30 = (b >> 7) & 0x1;
  uint8_t n32;
  uint8_t n48;
  uint8_t n64;
  uint8_t n82;
  uint8_t n98;
  uint8_t n114;
  uint8_t n132;
  uint8_t n148;
  uint8_t n164;
  uint8_t n182;
  uint8_t n198;
  uint8_t n214;
  uint8_t n232;
  uint8_t n248;
  uint8_t n264;
  uint8_t n282;
  uint8_t n298;
  uint8_t n299;
  uint8_t n314;
  uint8_t n315;
  uint8_t n332;
  uint8_t n333;
  uint8_t n348;
  uint8_t n349;
  uint8_t n364;
  uint8_t n365;
  uint8_t n382;
  uint8_t n383;
  uint8_t n398;
  uint8_t n399;
  uint8_t n414;
  uint8_t n432;
  uint8_t n448;
  uint8_t n464;
  uint8_t n482;
  uint8_t n498;
  uint8_t n514;
  uint8_t n532;
  uint8_t n548;
  uint8_t n549;
  uint8_t n564;
  uint8_t n565;
  uint8_t n582;
  uint8_t n583;
  uint8_t n598;
  uint8_t n599;
  uint8_t n614;
  uint8_t n615;
  uint8_t n632;
  uint8_t n633;
  uint8_t n648;
  uint8_t n649;
  uint8_t n664;
  uint8_t n682;
  uint8_t n698;
  uint8_t n714;
  uint8_t n732;
  uint8_t n748;
  uint8_t n764;
  uint8_t n782;
  uint8_t n798;
  uint8_t n799;
  uint8_t n814;
  uint8_t n815;
  uint8_t n832;
  uint8_t n833;
  uint8_t n848;
  uint8_t n849;
  uint8_t n864;
  uint8_t n865;
  uint8_t n882;
  uint8_t n883;
  uint8_t n898;
  uint8_t n899;
  uint8_t n914;
  uint8_t n932;
  uint8_t n948;
  uint8_t n964;
  uint8_t n982;
  uint8_t n998;
  uint8_t n1014;
  uint8_t n1032;
  uint8_t n1048;
  uint8_t n1049;
  uint8_t n1064;
  uint8_t n1065;
  uint8_t n1082;
  uint8_t n1083;
  uint8_t n1098;
  uint8_t n1099;
  uint8_t n1114;
  uint8_t n1115;
  uint8_t n1132;
  uint8_t n1133;
  uint8_t n1148;
  uint8_t n1149;
  uint8_t n1164;
  uint8_t n1182;
  uint8_t n1198;
  uint8_t n1214;
  uint8_t n1232;
  uint8_t n1248;
  uint8_t n1264;
  uint8_t n1282;
  uint8_t n1298;
  uint8_t n1299;
  uint8_t n1314;
  uint8_t n1315;
  uint8_t n1332;
  uint8_t n1333;
  uint8_t n1348;
  uint8_t n1349;
  uint8_t n1364;
  uint8_t n1365;
  uint8_t n1382;
  uint8_t n1383;
  uint8_t n1398;
  uint8_t n1399;
  uint8_t n1414;
  uint8_t n1432;
  uint8_t n1448;
  uint8_t n1464;
  uint8_t n1482;
  uint8_t n1498;
  uint8_t n1514;
  uint8_t n1533;
  uint8_t n1548;
  uint8_t n1549;
  uint8_t n1564;
  uint8_t n1565;
  uint8_t n1582;
  uint8_t n1583;
  uint8_t n1598;
  uint8_t n1599;
  uint8_t n1614;
  uint8_t n1615;
  uint8_t n1632;
  uint8_t n1633;
  uint8_t n1648;
  uint8_t n1649;
  uint8_t n1664;
  uint8_t n1682;
  uint8_t n1698;
  uint8_t n1714;
  uint8_t n1732;
  uint8_t n1748;
  uint8_t n1764;
  uint8_t n1782;
  uint8_t n1798;
  uint8_t n1799;
  uint8_t n1814;
  uint8_t n1815;
  uint8_t n1832;
  uint8_t n1833;
  uint8_t n1848;
  uint8_t n1849;
  uint8_t n1864;
  uint8_t n1865;
  uint8_t n1882;
  uint8_t n1883;
  uint8_t n1898;
  uint8_t n1899;
  uint8_t n1914;
  uint8_t n1915;
  uint8_t n1932;
  uint8_t n1933;
  uint8_t n1948;
  uint8_t n1949;
  uint8_t n1964;
  uint8_t n1965;
  uint8_t n1982;
  uint8_t n1983;
  uint8_t n1998;
  uint8_t n1999;
  uint8_t n2014;
  uint8_t n2015;

  n32 = n0 & n16;
  n48 = n2 & n16;
  n64 = n4 & n16;
  n82 = n6 & n16;
  n98 = n8 & n16;
  n114 = n10 & n16;
  n132 = n12 & n16;
  n148 = n14 & n16;
  n164 = n0 & n18;
  n182 = n2 & n18;
  n198 = n4 & n18;
  n214 = n6 & n18;
  n232 = n8 & n18;
  n248 = n10 & n18;
  n264 = n12 & n18;
  n282 = n14 & n18;
  n298 = n48 ^ n164;
  n299 = n48 & n164;
  n314 = n64 ^ n182;
  n315 = n64 & n182;
  n332 = n82 ^ n198;
  n333 = n82 & n198;
  n348 = n98 ^ n214;
  n349 = n98 & n214;
  n364 = n114 ^ n232;
  n365 = n114 & n232;
  n382 = n132 ^ n248;
  n383 = n132 & n248;
  n398 = n148 ^ n264;
  n399 = n148 & n264;
  n414 = n0 & n20;
  n432 = n2 & n20;
  n448 = n4 & n20;
  n464 = n6 & n20;
  n482 = n8 & n20;
  n498 = n10 & n20;
  n514 = n12 & n20;
  n532 = n14 & n20;
  n548 = (n314 ^ n414) ^ n299;
  n549 = (n314 & n414) | (n414 & n299) | (n314 & n299);
  n564 = (n332 ^ n432) ^ n315;
  n565 = (n332 & n432) | (n432 & n315) | (n332 & n315);
  n582 = (n348 ^ n448) ^ n333;
  n583 = (n348 & n448) | (n448 & n333) | (n348 & n333);
  n598 = (n364 ^ n464) ^ n349;
  n599 = (n364 & n464) | (n464 & n349) | (n364 & n349);
  n614 = (n382 ^ n482) ^ n365;
  n615 = (n382 & n482) | (n482 & n365) | (n382 & n365);
  n632 = (n398 ^ n498) ^ n383;
  n633 = (n398 & n498) | (n498 & n383) | (n398 & n383);
  n648 = (n282 ^ n514) ^ n399;
  n649 = (n282 & n514) | (n514 & n399) | (n282 & n399);
  n664 = n0 & n22;
  n682 = n2 & n22;
  n698 = n4 & n22;
  n714 = n6 & n22;
  n732 = n8 & n22;
  n748 = n10 & n22;
  n764 = n12 & n22;
  n782 = n14 & n22;
  n798 = (n564 ^ n664) ^ n549;
  n799 = (n564 & n664) | (n664 & n549) | (n564 & n549);
  n814 = (n582 ^ n682) ^ n565;
  n815 = (n582 & n682) | (n682 & n565) | (n582 & n565);
  n832 = (n598 ^ n698) ^ n583;
  n833 = (n598 & n698) | (n698 & n583) | (n598 & n583);
  n848 = (n614 ^ n714) ^ n599;
  n849 = (n614 & n714) | (n714 & n599) | (n614 & n599);
  n864 = (n632 ^ n732) ^ n615;
  n865 = (n632 & n732) | (n732 & n615) | (n632 & n615);
  n882 = (n648 ^ n748) ^ n633;
  n883 = (n648 & n748) | (n748 & n633) | (n648 & n633);
  n898 = (n532 ^ n764) ^ n649;
  n899 = (n532 & n764) | (n764 & n649) | (n532 & n649);
  n914 = n0 & n24;
  n932 = n2 & n24;
  n948 = n4 & n24;
  n964 = n6 & n24;
  n982 = n8 & n24;
  n998 = n10 & n24;
  n1014 = n12 & n24;
  n1032 = n14 & n24;
  n1048 = (n814 ^ n914) ^ n799;
  n1049 = (n814 & n914) | (n914 & n799) | (n814 & n799);
  n1064 = (n832 ^ n932) ^ n815;
  n1065 = (n832 & n932) | (n932 & n815) | (n832 & n815);
  n1082 = (n848 ^ n948) ^ n833;
  n1083 = (n848 & n948) | (n948 & n833) | (n848 & n833);
  n1098 = (n864 ^ n964) ^ n849;
  n1099 = (n864 & n964) | (n964 & n849) | (n864 & n849);
  n1114 = (n882 ^ n982) ^ n865;
  n1115 = (n882 & n982) | (n982 & n865) | (n882 & n865);
  n1132 = (n898 ^ n998) ^ n883;
  n1133 = (n898 & n998) | (n998 & n883) | (n898 & n883);
  n1148 = (n782 ^ n1014) ^ n899;
  n1149 = (n782 & n1014) | (n1014 & n899) | (n782 & n899);
  n1164 = n0 & n26;
  n1182 = n2 & n26;
  n1198 = n4 & n26;
  n1214 = n6 & n26;
  n1232 = n8 & n26;
  n1248 = n10 & n26;
  n1264 = n12 & n26;
  n1282 = n14 & n26;
  n1298 = (n1064 ^ n1164) ^ n1049;
  n1299 = (n1064 & n1164) | (n1164 & n1049) | (n1064 & n1049);
  n1314 = (n1082 ^ n1182) ^ n1065;
  n1315 = (n1082 & n1182) | (n1182 & n1065) | (n1082 & n1065);
  n1332 = (n1098 ^ n1198) ^ n1083;
  n1333 = (n1098 & n1198) | (n1198 & n1083) | (n1098 & n1083);
  n1348 = (n1114 ^ n1214) ^ n1099;
  n1349 = (n1114 & n1214) | (n1214 & n1099) | (n1114 & n1099);
  n1364 = (n1132 ^ n1232) ^ n1115;
  n1365 = (n1132 & n1232) | (n1232 & n1115) | (n1132 & n1115);
  n1382 = (n1148 ^ n1248) ^ n1133;
  n1383 = (n1148 & n1248) | (n1248 & n1133) | (n1148 & n1133);
  n1398 = (n1032 ^ n1264) ^ n1149;
  n1399 = (n1032 & n1264) | (n1264 & n1149) | (n1032 & n1149);
  n1414 = n0 & n28;
  n1432 = n2 & n28;
  n1448 = n4 & n28;
  n1464 = n6 & n28;
  n1482 = n8 & n28;
  n1498 = n10 & n28;
  n1514 = n12 & n28;
  n1533 = n14 & n28;
  n1548 = (n1314 ^ n1414) ^ n1299;
  n1549 = (n1314 & n1414) | (n1414 & n1299) | (n1314 & n1299);
  n1564 = (n1332 ^ n1432) ^ n1315;
  n1565 = (n1332 & n1432) | (n1432 & n1315) | (n1332 & n1315);
  n1582 = (n1348 ^ n1448) ^ n1333;
  n1583 = (n1348 & n1448) | (n1448 & n1333) | (n1348 & n1333);
  n1598 = (n1364 ^ n1464) ^ n1349;
  n1599 = (n1364 & n1464) | (n1464 & n1349) | (n1364 & n1349);
  n1614 = (n1382 ^ n1482) ^ n1365;
  n1615 = (n1382 & n1482) | (n1482 & n1365) | (n1382 & n1365);
  n1632 = (n1398 ^ n1498) ^ n1383;
  n1633 = (n1398 & n1498) | (n1498 & n1383) | (n1398 & n1383);
  n1648 = (n1282 ^ n1514) ^ n1399;
  n1649 = (n1282 & n1514) | (n1514 & n1399) | (n1282 & n1399);
  n1664 = n0 & n30;
  n1682 = n2 & n30;
  n1698 = n4 & n30;
  n1714 = n6 & n30;
  n1732 = n8 & n30;
  n1748 = n10 & n30;
  n1764 = n12 & n30;
  n1782 = n14 & n30;
  n1798 = (n1564 ^ n1664) ^ n1549;
  n1799 = (n1564 & n1664) | (n1664 & n1549) | (n1564 & n1549);
  n1814 = (n1582 ^ n1682) ^ n1565;
  n1815 = (n1582 & n1682) | (n1682 & n1565) | (n1582 & n1565);
  n1832 = (n1598 ^ n1698) ^ n1583;
  n1833 = (n1598 & n1698) | (n1698 & n1583) | (n1598 & n1583);
  n1848 = (n1614 ^ n1714) ^ n1599;
  n1849 = (n1614 & n1714) | (n1714 & n1599) | (n1614 & n1599);
  n1864 = (n1632 ^ n1732) ^ n1615;
  n1865 = (n1632 & n1732) | (n1732 & n1615) | (n1632 & n1615);
  n1882 = (n1648 ^ n1748) ^ n1633;
  n1883 = (n1648 & n1748) | (n1748 & n1633) | (n1648 & n1633);
  n1898 = (n1533 ^ n1764) ^ n1649;
  n1899 = (n1533 & n1764) | (n1764 & n1649) | (n1533 & n1649);
  n1914 = n1814 ^ n1799;
  n1915 = n1814 & n1799;
  n1932 = (n1832 ^ n1815) ^ n1915;
  n1933 = (n1832 & n1815) | (n1815 & n1915) | (n1832 & n1915);
  n1948 = (n1848 ^ n1833) ^ n1933;
  n1949 = (n1848 & n1833) | (n1833 & n1933) | (n1848 & n1933);
  n1964 = (n1864 ^ n1849) ^ n1949;
  n1965 = (n1864 & n1849) | (n1849 & n1949) | (n1864 & n1949);
  n1982 = (n1882 ^ n1865) ^ n1965;
  n1983 = (n1882 & n1865) | (n1865 & n1965) | (n1882 & n1965);
  n1998 = (n1898 ^ n1883) ^ n1983;
  n1999 = (n1898 & n1883) | (n1883 & n1983) | (n1898 & n1983);
  n2014 = (n1782 ^ n1899) ^ n1999;
  n2015 = (n1782 & n1899) | (n1899 & n1999) | (n1782 & n1999);

  c |= (n32 & 0x1) << 0;
  c |= (n298 & 0x1) << 1;
  c |= (n548 & 0x1) << 2;
  c |= (n798 & 0x1) << 3;
  c |= (n1048 & 0x1) << 4;
  c |= (n1298 & 0x1) << 5;
  c |= (n1548 & 0x1) << 6;
  c |= (n1798 & 0x1) << 7;
  c |= (n1914 & 0x1) << 8;
  c |= (n1932 & 0x1) << 9;
  c |= (n1948 & 0x1) << 10;
  c |= (n1964 & 0x1) << 11;
  c |= (n1982 & 0x1) << 12;
  c |= (n1998 & 0x1) << 13;
  c |= (n2014 & 0x1) << 14;
  c |= (n2015 & 0x1) << 15;

  return c;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.18 %
// MAE = 119 
// WCE% = 0.66 %
// WCE = 431 
// WCRE% = 101.56 %
// EP% = 98.37 %
// MRE% = 4.42 %
// MSE = 21037 
// PDK45_PWR = 0.206 mW
// PDK45_AREA = 395.6 um2
// PDK45_DELAY = 1.34 ns


uint16_t mul8u_19DB(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_23, dout_24, dout_30, dout_31, dout_44, dout_45, dout_52, dout_53, dout_79, dout_80, dout_82, dout_85, dout_87, dout_88, dout_93, dout_94, dout_95, dout_96, dout_113, dout_117, dout_118, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_136, dout_137, dout_138, dout_139, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_196, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_231, dout_232, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_301, dout_302, dout_303, dout_306, dout_307, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_24=((A >> 2)&1)&((B >> 5)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_44=dout_23|dout_30;
   dout_45=dout_23&dout_30;
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_79=dout_44^((A >> 4)&1);
   dout_80=dout_52^dout_31;
   dout_82=dout_79^((A >> 4)&1);
   dout_85=dout_31&dout_52;
   dout_87=dout_80^dout_45;
   dout_88=dout_85|dout_45;
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_113=((B >> 3)&1)&((A >> 4)&1);
   dout_117=dout_82|dout_93;
   dout_118=dout_82&dout_93;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_24;
   dout_125=dout_122^dout_24;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_118;
   dout_163=dout_160|dout_118;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_196=dout_162^dout_117;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_113;
   dout_201=dout_198^dout_113;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_177;
   dout_239=dout_236^dout_177;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_273=dout_225&dout_267;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_232;
   dout_277=dout_274|dout_232;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_273|dout_301;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_307;
   dout_314=dout_311^dout_307;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_268&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_177&1) << 0;
   O |= (dout_163&1) << 1;
   O |= (dout_260&1) << 2;
   O |= (dout_117&1) << 3;
   O |= (dout_264&1) << 4;
   O |= (dout_199&1) << 5;
   O |= (dout_231&1) << 6;
   O |= (dout_261&1) << 7;
   O |= (dout_277&1) << 8;
   O |= (dout_306&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 24.81 %
// MAE = 16256 
// WCE% = 99.22 %
// WCE = 65025 
// WCRE% = 100.00 %
// EP% = 99.22 %
// MRE% = 100.00 %
// MSE = 47164.981e4 
// PDK45_PWR = 0.000 mW
// PDK45_AREA = 0.0 um2
// PDK45_DELAY = 0.00 ns


uint16_t mul8u_E9R(const uint8_t B,const uint8_t A)
{
   uint64_t O;   int avg=0;


   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (0&1) << 2;
   O |= (0&1) << 3;
   O |= (0&1) << 4;
   O |= (0&1) << 5;
   O |= (0&1) << 6;
   O |= (0&1) << 7;
   O |= (0&1) << 8;
   O |= (0&1) << 9;
   O |= (0&1) << 10;
   O |= (0&1) << 11;
   O |= (0&1) << 12;
   O |= (0&1) << 13;
   O |= (0&1) << 14;
   O |= (0&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 8.01 %
// MAE = 5249 
// WCE% = 27.24 %
// WCE = 17853 
// WCRE% = 300.00 %
// EP% = 99.22 %
// MRE% = 59.69 %
// MSE = 42811.074e3 
// PDK45_PWR = 0.0017 mW
// PDK45_AREA = 13.1 um2
// PDK45_DELAY = 0.10 ns


uint16_t mul8u_17QU(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_71, dout_79, dout_293, dout_338, dout_340, dout_345;   int avg=0;

   dout_71=((B >> 6)&1)&((A >> 7)&1);
   dout_79=((B >> 7)&1)&((A >> 7)&1);
   dout_293=((A >> 6)&1)|((A >> 7)&1);
   dout_338=dout_293&((B >> 7)&1);
   dout_340=((A >> 6)&1)&((B >> 5)&1);
   dout_345=dout_79^dout_338;

   O = 0;
   O |= (0&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_71&1) << 2;
   O |= (0&1) << 3;
   O |= (0&1) << 4;
   O |= (0&1) << 5;
   O |= (0&1) << 6;
   O |= (dout_79&1) << 7;
   O |= (dout_71&1) << 8;
   O |= (0&1) << 9;
   O |= (0&1) << 10;
   O |= (dout_71&1) << 11;
   O |= (dout_71&1) << 12;
   O |= (dout_340&1) << 13;
   O |= (dout_345&1) << 14;
   O |= (dout_79&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.057 %
// MAE = 37 
// WCE% = 0.18 %
// WCE = 115 
// WCRE% = 8300.00 %
// EP% = 97.72 %
// MRE% = 2.56 %
// MSE = 2008 
// PDK45_PWR = 0.302 mW
// PDK45_AREA = 542.5 um2
// PDK45_DELAY = 1.44 ns


uint16_t mul8u_2HH(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_22, dout_23, dout_28, dout_29, dout_30, dout_31, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_49, dout_50, dout_51, dout_52, dout_53, dout_70, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_92, dout_93, dout_94, dout_95, dout_96, dout_108, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_189, dout_190, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_229, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_40=((A >> 0)&1)|((A >> 1)&1);
   dout_41=((A >> 0)&1)&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=dout_23&dout_30;
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_70=dout_40&dout_49;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_108=((A >> 3)&1)&((B >> 2)&1);
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_70;
   dout_115=dout_112^dout_70;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_150=dout_115|dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_108;
   dout_153=dout_150^dout_108;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_189=dout_153&dout_176;
   dout_190=dout_176&((A >> 4)&1);
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_229=dout_218^0xFFFFFFFFFFFFFFFFU;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_218;
   dout_272=dout_269^dout_218;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_75&1) << 0;
   O |= (dout_137&1) << 1;
   O |= (((B >> 0)&1)&1) << 2;
   O |= (dout_172&1) << 3;
   O |= (((B >> 0)&1)&1) << 4;
   O |= (0&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}
/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and wce parameters
***/
// MAE% = 0.0015 %
// MAE = 1.0 
// WCE% = 0.0046 %
// WCE = 3.0 
// WCRE% = 100.00 %
// EP% = 64.06 %
// MRE% = 0.052 %
// MSE = 1.9 
// PDK45_PWR = 0.386 mW
// PDK45_AREA = 676.3 um2
// PDK45_DELAY = 1.42 ns


uint16_t mul8u_2P7(const uint8_t B,const uint8_t A)
{
   uint64_t O, dout_18, dout_19, dout_20, dout_21, dout_22, dout_23, dout_25, dout_26, dout_27, dout_28, dout_29, dout_30, dout_31, dout_33, dout_34, dout_35, dout_36, dout_37, dout_38, dout_39, dout_40, dout_41, dout_42, dout_43, dout_44, dout_45, dout_46, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_65, dout_66, dout_67, dout_68, dout_69, dout_70, dout_71, dout_72, dout_73, dout_74, dout_75, dout_76, dout_77, dout_78, dout_79, dout_80, dout_81, dout_82, dout_83, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_109, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_117, dout_118, dout_119, dout_120, dout_121, dout_122, dout_123, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_154, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_162, dout_163, dout_164, dout_165, dout_166, dout_167, dout_168, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243, dout_244, dout_245, dout_246, dout_247, dout_248, dout_249, dout_250, dout_251, dout_252, dout_253, dout_254, dout_255, dout_256, dout_257, dout_258, dout_259, dout_260, dout_261, dout_262, dout_263, dout_264, dout_265, dout_266, dout_267, dout_268, dout_269, dout_270, dout_271, dout_272, dout_273, dout_274, dout_275, dout_276, dout_277, dout_278, dout_279, dout_280, dout_281, dout_282, dout_283, dout_284, dout_285, dout_286, dout_287, dout_288, dout_289, dout_290, dout_291, dout_292, dout_293, dout_294, dout_295, dout_296, dout_297, dout_298, dout_299, dout_300, dout_301, dout_302, dout_303, dout_304, dout_305, dout_306, dout_307, dout_308, dout_309, dout_310, dout_311, dout_312, dout_313, dout_314, dout_315, dout_316, dout_317, dout_318, dout_319, dout_320, dout_321, dout_322, dout_323, dout_324, dout_325, dout_326, dout_327, dout_328, dout_329, dout_330, dout_331, dout_332, dout_333, dout_334, dout_335;   int avg=0;

   dout_18=((B >> 2)&1)&((A >> 0)&1);
   dout_19=((B >> 3)&1)&((A >> 0)&1);
   dout_20=((B >> 4)&1)&((A >> 0)&1);
   dout_21=((B >> 5)&1)&((A >> 0)&1);
   dout_22=((B >> 6)&1)&((A >> 0)&1);
   dout_23=((B >> 7)&1)&((A >> 0)&1);
   dout_25=((B >> 1)&1)&((A >> 1)&1);
   dout_26=((B >> 2)&1)&((A >> 1)&1);
   dout_27=((B >> 3)&1)&((A >> 1)&1);
   dout_28=((B >> 4)&1)&((A >> 1)&1);
   dout_29=((B >> 5)&1)&((A >> 1)&1);
   dout_30=((B >> 6)&1)&((A >> 1)&1);
   dout_31=((B >> 7)&1)&((A >> 1)&1);
   dout_33=((B >> 6)&1)&dout_31;
   dout_34=dout_18|dout_25;
   dout_35=dout_18&dout_25;
   dout_36=dout_19^dout_26;
   dout_37=dout_19&dout_26;
   dout_38=dout_20^dout_27;
   dout_39=dout_20&dout_27;
   dout_40=dout_21^dout_28;
   dout_41=dout_21&dout_28;
   dout_42=dout_22^dout_29;
   dout_43=dout_22&dout_29;
   dout_44=dout_23^dout_30;
   dout_45=((A >> 0)&1)&dout_33;
   dout_46=((B >> 0)&1)&((A >> 2)&1);
   dout_47=((B >> 1)&1)&((A >> 2)&1);
   dout_48=((B >> 2)&1)&((A >> 2)&1);
   dout_49=((B >> 3)&1)&((A >> 2)&1);
   dout_50=((B >> 4)&1)&((A >> 2)&1);
   dout_51=((B >> 5)&1)&((A >> 2)&1);
   dout_52=((B >> 6)&1)&((A >> 2)&1);
   dout_53=((B >> 7)&1)&((A >> 2)&1);
   dout_54=dout_34^dout_46;
   dout_55=dout_34&dout_46;
   dout_59=dout_36^dout_47;
   dout_60=dout_36&dout_47;
   dout_61=dout_59&dout_35;
   dout_62=dout_59^dout_35;
   dout_63=dout_60|dout_61;
   dout_64=dout_38^dout_48;
   dout_65=dout_38&dout_48;
   dout_66=dout_64&dout_37;
   dout_67=dout_64^dout_37;
   dout_68=dout_65|dout_66;
   dout_69=dout_40^dout_49;
   dout_70=dout_40&dout_49;
   dout_71=dout_69&dout_39;
   dout_72=dout_69^dout_39;
   dout_73=dout_70|dout_71;
   dout_74=dout_42^dout_50;
   dout_75=dout_42&dout_50;
   dout_76=dout_74&dout_41;
   dout_77=dout_74^dout_41;
   dout_78=dout_75|dout_76;
   dout_79=dout_44^dout_51;
   dout_80=dout_44&dout_51;
   dout_81=dout_79&dout_43;
   dout_82=dout_79^dout_43;
   dout_83=dout_80|dout_81;
   dout_84=dout_31^dout_52;
   dout_85=dout_31&dout_52;
   dout_87=dout_84^dout_45;
   dout_88=dout_85|dout_45;
   dout_89=((B >> 0)&1)&((A >> 3)&1);
   dout_90=((B >> 1)&1)&((A >> 3)&1);
   dout_91=((B >> 2)&1)&((A >> 3)&1);
   dout_92=((B >> 3)&1)&((A >> 3)&1);
   dout_93=((B >> 4)&1)&((A >> 3)&1);
   dout_94=((B >> 5)&1)&((A >> 3)&1);
   dout_95=((B >> 6)&1)&((A >> 3)&1);
   dout_96=((B >> 7)&1)&((A >> 3)&1);
   dout_97=dout_62^dout_89;
   dout_98=dout_62&dout_89;
   dout_99=dout_97&dout_55;
   dout_100=dout_97^dout_55;
   dout_101=dout_98|dout_99;
   dout_102=dout_67^dout_90;
   dout_103=dout_67&dout_90;
   dout_104=dout_102&dout_63;
   dout_105=dout_102^dout_63;
   dout_106=dout_103|dout_104;
   dout_107=dout_72^dout_91;
   dout_108=dout_72&dout_91;
   dout_109=dout_107&dout_68;
   dout_110=dout_107^dout_68;
   dout_111=dout_108|dout_109;
   dout_112=dout_77^dout_92;
   dout_113=dout_77&dout_92;
   dout_114=dout_112&dout_73;
   dout_115=dout_112^dout_73;
   dout_116=dout_113|dout_114;
   dout_117=dout_82^dout_93;
   dout_118=dout_82&dout_93;
   dout_119=dout_117&dout_78;
   dout_120=dout_117^dout_78;
   dout_121=dout_118|dout_119;
   dout_122=dout_87^dout_94;
   dout_123=dout_87&dout_94;
   dout_124=dout_122&dout_83;
   dout_125=dout_122^dout_83;
   dout_126=dout_123|dout_124;
   dout_127=dout_53^dout_95;
   dout_128=dout_53&dout_95;
   dout_129=dout_127&dout_88;
   dout_130=dout_127^dout_88;
   dout_131=dout_128|dout_129;
   dout_132=((B >> 0)&1)&((A >> 4)&1);
   dout_133=((B >> 1)&1)&((A >> 4)&1);
   dout_134=((B >> 2)&1)&((A >> 4)&1);
   dout_135=((B >> 3)&1)&((A >> 4)&1);
   dout_136=((B >> 4)&1)&((A >> 4)&1);
   dout_137=((B >> 5)&1)&((A >> 4)&1);
   dout_138=((B >> 6)&1)&((A >> 4)&1);
   dout_139=((B >> 7)&1)&((A >> 4)&1);
   dout_140=dout_105^dout_132;
   dout_141=dout_105&dout_132;
   dout_142=dout_140&dout_101;
   dout_143=dout_140^dout_101;
   dout_144=dout_141|dout_142;
   dout_145=dout_110^dout_133;
   dout_146=dout_110&dout_133;
   dout_147=dout_145&dout_106;
   dout_148=dout_145^dout_106;
   dout_149=dout_146|dout_147;
   dout_150=dout_115^dout_134;
   dout_151=dout_115&dout_134;
   dout_152=dout_150&dout_111;
   dout_153=dout_150^dout_111;
   dout_154=dout_151|dout_152;
   dout_155=dout_120^dout_135;
   dout_156=dout_120&dout_135;
   dout_157=dout_155&dout_116;
   dout_158=dout_155^dout_116;
   dout_159=dout_156|dout_157;
   dout_160=dout_125^dout_136;
   dout_161=dout_125&dout_136;
   dout_162=dout_160&dout_121;
   dout_163=dout_160^dout_121;
   dout_164=dout_161|dout_162;
   dout_165=dout_130^dout_137;
   dout_166=dout_130&dout_137;
   dout_167=dout_165&dout_126;
   dout_168=dout_165^dout_126;
   dout_169=dout_166|dout_167;
   dout_170=dout_96^dout_138;
   dout_171=dout_96&dout_138;
   dout_172=dout_170&dout_131;
   dout_173=dout_170^dout_131;
   dout_174=dout_171|dout_172;
   dout_175=((B >> 0)&1)&((A >> 5)&1);
   dout_176=((B >> 1)&1)&((A >> 5)&1);
   dout_177=((B >> 2)&1)&((A >> 5)&1);
   dout_178=((B >> 3)&1)&((A >> 5)&1);
   dout_179=((B >> 4)&1)&((A >> 5)&1);
   dout_180=((B >> 5)&1)&((A >> 5)&1);
   dout_181=((B >> 6)&1)&((A >> 5)&1);
   dout_182=((B >> 7)&1)&((A >> 5)&1);
   dout_183=dout_148^dout_175;
   dout_184=dout_148&dout_175;
   dout_185=dout_183&dout_144;
   dout_186=dout_183^dout_144;
   dout_187=dout_184|dout_185;
   dout_188=dout_153^dout_176;
   dout_189=dout_153&dout_176;
   dout_190=dout_188&dout_149;
   dout_191=dout_188^dout_149;
   dout_192=dout_189|dout_190;
   dout_193=dout_158^dout_177;
   dout_194=dout_158&dout_177;
   dout_195=dout_193&dout_154;
   dout_196=dout_193^dout_154;
   dout_197=dout_194|dout_195;
   dout_198=dout_163^dout_178;
   dout_199=dout_163&dout_178;
   dout_200=dout_198&dout_159;
   dout_201=dout_198^dout_159;
   dout_202=dout_199|dout_200;
   dout_203=dout_168^dout_179;
   dout_204=dout_168&dout_179;
   dout_205=dout_203&dout_164;
   dout_206=dout_203^dout_164;
   dout_207=dout_204|dout_205;
   dout_208=dout_173^dout_180;
   dout_209=dout_173&dout_180;
   dout_210=dout_208&dout_169;
   dout_211=dout_208^dout_169;
   dout_212=dout_209|dout_210;
   dout_213=dout_139^dout_181;
   dout_214=dout_139&dout_181;
   dout_215=dout_213&dout_174;
   dout_216=dout_213^dout_174;
   dout_217=dout_214|dout_215;
   dout_218=((B >> 0)&1)&((A >> 6)&1);
   dout_219=((B >> 1)&1)&((A >> 6)&1);
   dout_220=((B >> 2)&1)&((A >> 6)&1);
   dout_221=((B >> 3)&1)&((A >> 6)&1);
   dout_222=((B >> 4)&1)&((A >> 6)&1);
   dout_223=((B >> 5)&1)&((A >> 6)&1);
   dout_224=((B >> 6)&1)&((A >> 6)&1);
   dout_225=((B >> 7)&1)&((A >> 6)&1);
   dout_226=dout_191^dout_218;
   dout_227=dout_191&dout_218;
   dout_228=dout_226&dout_187;
   dout_229=dout_226^dout_187;
   dout_230=dout_227|dout_228;
   dout_231=dout_196^dout_219;
   dout_232=dout_196&dout_219;
   dout_233=dout_231&dout_192;
   dout_234=dout_231^dout_192;
   dout_235=dout_232|dout_233;
   dout_236=dout_201^dout_220;
   dout_237=dout_201&dout_220;
   dout_238=dout_236&dout_197;
   dout_239=dout_236^dout_197;
   dout_240=dout_237|dout_238;
   dout_241=dout_206^dout_221;
   dout_242=dout_206&dout_221;
   dout_243=dout_241&dout_202;
   dout_244=dout_241^dout_202;
   dout_245=dout_242|dout_243;
   dout_246=dout_211^dout_222;
   dout_247=dout_211&dout_222;
   dout_248=dout_246&dout_207;
   dout_249=dout_246^dout_207;
   dout_250=dout_247|dout_248;
   dout_251=dout_216^dout_223;
   dout_252=dout_216&dout_223;
   dout_253=dout_251&dout_212;
   dout_254=dout_251^dout_212;
   dout_255=dout_252|dout_253;
   dout_256=dout_182^dout_224;
   dout_257=dout_182&dout_224;
   dout_258=dout_256&dout_217;
   dout_259=dout_256^dout_217;
   dout_260=dout_257|dout_258;
   dout_261=((B >> 0)&1)&((A >> 7)&1);
   dout_262=((B >> 1)&1)&((A >> 7)&1);
   dout_263=((B >> 2)&1)&((A >> 7)&1);
   dout_264=((B >> 3)&1)&((A >> 7)&1);
   dout_265=((B >> 4)&1)&((A >> 7)&1);
   dout_266=((B >> 5)&1)&((A >> 7)&1);
   dout_267=((B >> 6)&1)&((A >> 7)&1);
   dout_268=((B >> 7)&1)&((A >> 7)&1);
   dout_269=dout_234^dout_261;
   dout_270=dout_234&dout_261;
   dout_271=dout_269&dout_230;
   dout_272=dout_269^dout_230;
   dout_273=dout_270|dout_271;
   dout_274=dout_239^dout_262;
   dout_275=dout_239&dout_262;
   dout_276=dout_274&dout_235;
   dout_277=dout_274^dout_235;
   dout_278=dout_275|dout_276;
   dout_279=dout_244^dout_263;
   dout_280=dout_244&dout_263;
   dout_281=dout_279&dout_240;
   dout_282=dout_279^dout_240;
   dout_283=dout_280|dout_281;
   dout_284=dout_249^dout_264;
   dout_285=dout_249&dout_264;
   dout_286=dout_284&dout_245;
   dout_287=dout_284^dout_245;
   dout_288=dout_285|dout_286;
   dout_289=dout_254^dout_265;
   dout_290=dout_254&dout_265;
   dout_291=dout_289&dout_250;
   dout_292=dout_289^dout_250;
   dout_293=dout_290|dout_291;
   dout_294=dout_259^dout_266;
   dout_295=dout_259&dout_266;
   dout_296=dout_294&dout_255;
   dout_297=dout_294^dout_255;
   dout_298=dout_295|dout_296;
   dout_299=dout_225^dout_267;
   dout_300=dout_225&dout_267;
   dout_301=dout_299&dout_260;
   dout_302=dout_299^dout_260;
   dout_303=dout_300|dout_301;
   dout_304=dout_277^dout_273;
   dout_305=dout_277&dout_273;
   dout_306=dout_282^dout_278;
   dout_307=dout_282&dout_278;
   dout_308=dout_306&dout_305;
   dout_309=dout_306^dout_305;
   dout_310=dout_307|dout_308;
   dout_311=dout_287^dout_283;
   dout_312=dout_287&dout_283;
   dout_313=dout_311&dout_310;
   dout_314=dout_311^dout_310;
   dout_315=dout_312|dout_313;
   dout_316=dout_292^dout_288;
   dout_317=dout_292&dout_288;
   dout_318=dout_316&dout_315;
   dout_319=dout_316^dout_315;
   dout_320=dout_317|dout_318;
   dout_321=dout_297^dout_293;
   dout_322=dout_297&dout_293;
   dout_323=dout_321&dout_320;
   dout_324=dout_321^dout_320;
   dout_325=dout_322|dout_323;
   dout_326=dout_302^dout_298;
   dout_327=dout_302&dout_298;
   dout_328=dout_326&dout_325;
   dout_329=dout_326^dout_325;
   dout_330=dout_327|dout_328;
   dout_331=dout_268^dout_303;
   dout_332=((A >> 7)&1)&dout_303;
   dout_333=dout_331&dout_330;
   dout_334=dout_331^dout_330;
   dout_335=dout_332|dout_333;

   O = 0;
   O |= (dout_130&1) << 0;
   O |= (((B >> 0)&1)&1) << 1;
   O |= (dout_54&1) << 2;
   O |= (dout_100&1) << 3;
   O |= (dout_143&1) << 4;
   O |= (dout_186&1) << 5;
   O |= (dout_229&1) << 6;
   O |= (dout_272&1) << 7;
   O |= (dout_304&1) << 8;
   O |= (dout_309&1) << 9;
   O |= (dout_314&1) << 10;
   O |= (dout_319&1) << 11;
   O |= (dout_324&1) << 12;
   O |= (dout_329&1) << 13;
   O |= (dout_334&1) << 14;
   O |= (dout_335&1) << 15;
   return O;
}


typedef int16_t(*mul8s_fptr)(int8_t, int8_t);
typedef struct {
   mul8s_fptr fptr;
   double power;
   double area;
} mult_8s_t;
const int mult_8s_N = 13;
mult_8s_t mult_8s_array[mult_8s_N] = {
   {.fptr = mul8s_1KV8, .power = 0.425, .area = 729.800},
   {.fptr = mul8s_1KVA, .power = 0.422, .area = 711.000},
   {.fptr = mul8s_1KVB, .power = 0.41,  .area = 685.200},
   {.fptr = mul8s_1KR6, .power = 0.363, .area = 635.000},
   {.fptr = mul8s_1L2H, .power = 0.301, .area = 558.900},
   {.fptr = mul8s_1L2D, .power = 0.2,   .area = 411.600},
   {.fptr = mul8s_1L1G, .power = 0.126, .area = 284.900},
   {.fptr = mul8s_1KR3, .power = 0.052, .area = 172.200},
   {.fptr = mul8s_1KX2, .power = 0.391, .area = 641.1},
   {.fptr = mul8s_1KRC, .power = 0.351, .area = 599.8},
   {.fptr = mul8s_1KVL, .power = 0.289, .area = 543},
   {.fptr = mul8s_1KR8, .power = 0.369, .area = 652.8},
   {.fptr = mul8s_1KTY, .power = 0.237, .area = 482.4},
};

int16_t evoapproxlib::evoapprox_s8_t::mul8s (int8_t multiplicand, int8_t multiplier, uint32_t approx_component)
{
   if (approx_component < mult_8s_N)
      return mult_8s_array[approx_component].fptr(multiplicand, multiplier);
   else
      return multiplicand * multiplier;
}

double evoapproxlib::evoapprox_s8_t::mul8s_power(uint32_t approx_component)
{
   if (approx_component < mult_8s_N)
      return mult_8s_array[approx_component].power;
   else
      return std::numeric_limits<double>::infinity();
}

double evoapproxlib::evoapprox_s8_t::mul8s_area(uint32_t approx_component)
{
   if (approx_component < mult_8s_N)
      return mult_8s_array[approx_component].area;
   else
      return std::numeric_limits<double>::infinity();
}

typedef uint16_t(*mul8u_fptr)(uint8_t, uint8_t);
typedef struct {
   mul8u_fptr fptr;
   float power;
   float area;
} mult_8u_t;

const int mult_8u_N = 36;
mult_8u_t mult_8u_array[mult_8u_N]= {
   {.fptr = mul8u_1JFF, .power = 0.391 , .area = 709.6 },
   {.fptr = mul8u_2P7 , .power = 0.386 , .area = 676.3 },
   {.fptr = mul8u_KEM , .power = 0.370 , .area = 637.8 },
   {.fptr = mul8u_CK5 , .power = 0.345 , .area = 604.5 },
   {.fptr = mul8u_2HH , .power = 0.302 , .area = 542.5 },
   {.fptr = mul8u_19DB, .power = 0.206 , .area = 395.6 },
   {.fptr = mul8u_17KS, .power = 0.104 , .area = 239.3 },
   {.fptr = mul8u_JV3 , .power = 0.034 , .area = 110.8 },
   {.fptr = mul8u_17QU, .power = 0.0017, .area = 13.1 },
   {.fptr = mul8u_E9R , .power = 0.000 , .area = 0.0},
   {.fptr = mul8u_Y48 , .power = 0.390 , .area = 682.8 },
   {.fptr = mul8u_LM7 , .power = 0.380 , .area = 663.6 },
   {.fptr = mul8u_150Q, .power = 0.360 , .area = 660.3 },
   {.fptr = mul8u_2AC , .power = 0.311 , .area = 508.3 },
   {.fptr = mul8u_185Q, .power = 0.206 , .area = 427.5 },
   {.fptr = mul8u_FTA , .power = 0.084 , .area = 214.5 },
   {.fptr = mul8u_13QR, .power = 0.0085, .area =  41.3 },
   {.fptr = mul8u_125K, .power = 0.384 , .area = 674.9 },
   {.fptr = mul8u_14VP, .power = 0.364 , .area = 654.2 },
   {.fptr = mul8u_ZFB , .power = 0.304 , .area = 590.4 },
   {.fptr = mul8u_12N4, .power = 0.142 , .area = 390.5 },
   {.fptr = mul8u_QKX , .power = 0.029 , .area = 112.2 },
   {.fptr = mul8u_1446, .power = 0.388 , .area = 683.3 },
   {.fptr = mul8u_JQQ , .power = 0.371 , .area = 661.2 },
   {.fptr = mul8u_GS2 , .power = 0.356 , .area = 632.6 },
   {.fptr = mul8u_7C1 , .power = 0.329 , .area = 606.8 },
   {.fptr = mul8u_RCG , .power = 0.309 , .area = 561.8 },
   {.fptr = mul8u_1CMB, .power = 0.237 , .area = 479.2 },
   {.fptr = mul8u_L40 , .power = 0.189 , .area = 437.4 },
   {.fptr = mul8u_YX7 , .power = 0.061 , .area = 220.6 },
   {.fptr = mul8u_QJD , .power = 0.344 , .area = 624.2 },
   {.fptr = mul8u_NGR , .power = 0.276 , .area = 511.5 },
   {.fptr = mul8u_DM1 , .power = 0.195 , .area = 401.7 },
   {.fptr = mul8u_1AGV, .power = 0.095 , .area = 228.5 },
   {.fptr = mul8u_18DU, .power = 0.031 , .area = 96.7 },
   {.fptr = mul8u_17C8, .power = 0.0019, .area =  15.5 },
};

uint16_t evoapproxlib::evoapprox_u8_t::mul8u (uint8_t multiplicand, uint8_t multiplier, uint32_t approx_component)
{
   if (approx_component < mult_8u_N)
      return mult_8u_array[approx_component].fptr(multiplicand, multiplier);
   else
      return multiplicand * multiplier;
}

double evoapproxlib::evoapprox_u8_t::mul8u_power(uint32_t approx_component)
{
   if (approx_component < mult_8u_N)
      return mult_8u_array[approx_component].power;
   else
      return std::numeric_limits<double>::infinity();
}

double evoapproxlib::evoapprox_u8_t::mul8u_area(uint32_t approx_component)
{
   if (approx_component < mult_8u_N)
      return mult_8u_array[approx_component].area;
   else
      return std::numeric_limits<double>::infinity();
}

typedef int8_t(*add8s_fptr)(int8_t, int8_t);
typedef struct {
   add8s_fptr fptr;
   float power;
   float area;
} add_8s_t;
const int add_8s_N = 56;
add_8s_t add_8s_array[add_8s_N]= {
   {add8s_83C, 0.034, 70.4},
   {add8s_83N, 0.033, 74.1},
   {add8s_6FR, 0.032, 67.1},
   {add8s_6TR, 0.03, 67.6},
   {add8s_6UN, 0.025, 57.3},
   {add8s_6PM, 0.021, 48.3},
   {add8s_6H2, 0.017, 44.6},
   {add8s_6J2, 0.012, 32.9},
   {add8s_701, 0.0054, 21.6},
   {add8s_6HF, 0, 0},
   {add8s_6X7, 0.033, 64.8},
   {add8s_6SN, 0.032, 71.8},
   {add8s_6FC, 0.027, 55.8},
   {add8s_6ZP, 0.025, 57.3},
   {add8s_6X9, 0.016, 39.4},
   {add8s_6T8, 0.0063, 26.8},
   {add8s_6XL, 0.03, 63.8},
   {add8s_704, 0.024, 54.4},
   {add8s_6UC, 0.02, 51.2},
   {add8s_6PA, 0.017, 40.8},
   {add8s_6YG, 0.031, 75.6},
   {add8s_7YK, 0.03, 71.8},
   {add8s_6S5, 0.028, 63.4},
   {add8s_70Z, 0.02, 57.7},
   {add8s_6QJ, 0.029, 60.5},
   {add8s_6TN, 0.022, 56.8},
   {add8s_6YE, 0.017, 38},
   {add8s_70S, 0.013, 31.4},
   {add8s_70F, 0.0099, 35.7},
   {add8s_6R6, 0.0039, 18.8},
   {add8se_7A2, 0.035, 74.6},
   {add8se_8YC, 0.034, 70.4},
   {add8se_72D, 0.03, 65.7},
   {add8se_7LN, 0.026, 59.1},
   {add8se_7J7, 0.021, 52.6},
   {add8se_91D, 0.019, 39.9},
   {add8se_92J, 0.014, 31},
   {add8se_90Z, 0.0093, 22.1},
   {add8se_8UN, 0.0042, 11.7},
   {add8se_8XS, 0, 0},
   {add8se_91X, 0.032, 70.4},
   {add8se_76P, 0.016, 41.3},
   {add8se_8UF, 0.0094, 23.5},
   {add8se_7N1, 0.002, 10.8},
   {add8se_90X, 0.000065, 1.4},
   {add8se_7C9, 0.034, 78.4},
   {add8se_78P, 0.03, 65.2},
   {add8se_90J, 0.024, 54.9},
   {add8se_8VV, 0.019, 41.3},
   {add8se_8V4, 0.033, 66.6},
   {add8se_91Y, 0.028, 57.7},
   {add8se_90R, 0.023, 48.8},
   {add8se_8UT, 0.019, 41.3},
   {add8se_8ZX, 0.014, 32.4},
   {add8se_8TX, 0.0094, 23.5},
   {add8se_91V, 0.0042, 11.7}
};

int8_t evoapproxlib::evoapprox_s8_t::add8s (int8_t addendum1, int8_t addendum2, uint32_t approx_component) {
   if (approx_component < add_8s_N)
      return add_8s_array[approx_component].fptr(addendum1, addendum2);
   else
      return addendum1 * addendum2;
}

double evoapproxlib::evoapprox_s8_t::add8s_power(uint32_t approx_component) {
   if (approx_component < add_8s_N)
      return add_8s_array[approx_component].power;
   else
      return std::numeric_limits<double>::infinity();
}

double evoapproxlib::evoapprox_s8_t::add8s_area(uint32_t approx_component) {
   if (approx_component < add_8s_N)
      return add_8s_array[approx_component].area;
   else
      return std::numeric_limits<double>::infinity();
}

typedef uint8_t(*add8u_fptr)(uint8_t, uint8_t);
typedef struct {
   add8u_fptr fptr;
   float power;
   float area;
} add_8u_t;
const int add_8u_N = 31;
add_8u_t add_8u_array[add_8u_N]= {
   {add8u_0FP, 0.033, 70.400},
   {add8u_5R3, 0.029, 63.800},
   {add8u_5QL, 0.024, 57.300},
   {add8u_5LT, 0.021, 56.300},
   {add8u_5HQ, 0.017, 53.000},
   {add8u_5SY, 0.012, 28.200},
   {add8u_8LL, 0.0095, 25.800},
   {add8u_006, 0.0046, 15.000},
   {add8u_8ES, 0.0015, 8},
   {add8u_88L, 0, 0},
   {add8u_4T8, 0.028, 61.5},
   {add8u_01R, 0.023, 52.6},
   {add8u_5EZ, 0.019, 43.6},
   {add8u_1DK, 0.016, 53},
   {add8u_2XT, 0.012, 26.8},
   {add8u_0H4, 0.0075, 17.8},
   {add8u_8AS, 0.0032, 8.9},
   {add8u_04A, 0, 0},
   {add8u_5ME, 0.019, 48.3},
   {add8u_5G5, 0.014, 37.1},
   {add8u_8KZ, 0.011, 32.9},
   {add8u_8GM, 0.0015, 8},
   {add8u_5NQ, 0.026, 63.8},
   {add8u_8MK, 0.023, 65.7},
   {add8u_8FF, 0.019, 56.8},
   {add8u_8FD, 0.018, 65.2},
   {add8u_8KJ, 0.014, 45.5},
   {add8u_8BB, 0.0092, 35.2},
   {add8u_5M7, 0.023, 50.7},
   {add8u_5NH, 0.014, 34.7},
   {add8u_0CA, 0.0032, 8.9},
};

uint8_t evoapproxlib::evoapprox_u8_t::add8u (uint8_t addendum1, uint8_t addendum2, uint32_t approx_component) {
   if (approx_component < add_8u_N)
      return add_8u_array[approx_component].fptr(addendum1, addendum2);
   else
      return addendum1 * addendum2;
}
double evoapproxlib::evoapprox_u8_t::add8u_power(uint32_t approx_component) {
   if (approx_component < add_8u_N)
      return add_8u_array[approx_component].power;
   else
      return std::numeric_limits<double>::infinity();
}

double evoapproxlib::evoapprox_u8_t::add8u_area(uint32_t approx_component) {
   if (approx_component < add_8u_N)
      return add_8u_array[approx_component].area;
   else
      return std::numeric_limits<double>::infinity();
}