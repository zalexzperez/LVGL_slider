#include <stdio.h>
#include <lvgl.h>

#include "vars.h"
#include "screens.h"
#include "structs.h"
#include "ui.h"

int32_t RPM_percent;

/* Get-set functions */

int32_t get_var_rpm_percent (){
    return RPM_percent;
}
void set_var_rpm_percent (int32_t value){
    RPM_percent = value;
}
