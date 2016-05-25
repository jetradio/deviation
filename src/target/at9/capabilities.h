#ifdef CHANDEF
  CHANDEF(AILERON)
  CHANDEF(ELEVATOR)
  CHANDEF(THROTTLE)
  CHANDEF(RUDDER)
  CHANDEF(AUX4)
  CHANDEF(AUX5)
  CHANDEF(AUX6)
  CHANDEF(AUX7)
  CHANDEF(SWA0)
  CHANDEF(SWA1)
  CHANDEF(SWB0)
  CHANDEF(SWB1)
  CHANDEF(SWC0)
  CHANDEF(SWC1)
  CHANDEF(SWC2)
  CHANDEF(SWD0)
  CHANDEF(SWD1)
  CHANDEF(SWE0)
  CHANDEF(SWE1)
  CHANDEF(SWE2)
  CHANDEF(SWF0)
  CHANDEF(SWF1)
  CHANDEF(SWG0)
  CHANDEF(SWG1)
  CHANDEF(SWG2)
  CHANDEF(SWH0)
  CHANDEF(SWH1)
#endif

#ifdef UNDEF_INP
#define INP_RUD_DR0 INP_SWA0
#define INP_RUD_DR1 INP_SWA1
#define INP_ELE_DR0 INP_SWB0
#define INP_ELE_DR1 INP_SWB1
#define INP_AIL_DR0 INP_SWC0
#define INP_AIL_DR1 INP_SWC1
#define INP_FMOD0  INP_SWD0
#define INP_MIX0   INP_SWE0
#define INP_MIX1   INP_SWE1
#define INP_MIX2   INP_SWE2
#define INP_GEAR0  INP_SWF0
#define INP_GEAR1  INP_SWF1
#endif


#ifdef BUTTONDEF
  BUTTONDEF(TRIM_LV_NEG) /* LEFT-VERTICAL */
  BUTTONDEF(TRIM_LV_POS)
  BUTTONDEF(TRIM_RV_NEG) /* RIGHT-VERTICAL */
  BUTTONDEF(TRIM_RV_POS)
  BUTTONDEF(TRIM_LH_NEG) /* LEFT-HORIZONTAL */
  BUTTONDEF(TRIM_LH_POS)
  BUTTONDEF(TRIM_RH_NEG) /* RIGHT-HORIZONTAL */
  BUTTONDEF(TRIM_RH_POS)
  BUTTONDEF(LEFT)
  BUTTONDEF(RIGHT)
  BUTTONDEF(DOWN)
  BUTTONDEF(UP)
  BUTTONDEF(ENTER)
  BUTTONDEF(EXIT)
#endif
