/*
   Copyright (C) 2011  Statoil ASA, Norway. 
    
   The file 'plplot_driver.h' is part of ERT - Ensemble based Reservoir Tool. 
    
   ERT is free software: you can redistribute it and/or modify 
   it under the terms of the GNU General Public License as published by 
   the Free Software Foundation, either version 3 of the License, or 
   (at your option) any later version. 
    
   ERT is distributed in the hope that it will be useful, but WITHOUT ANY 
   WARRANTY; without even the implied warranty of MERCHANTABILITY or 
   FITNESS FOR A PARTICULAR PURPOSE.   
    
   See the GNU General Public License at <http://www.gnu.org/licenses/gpl.html> 
   for more details. 
*/

#ifndef __PLPLOT_DRIVER_H__
#define __PLPLOT_DRIVER_H__

#ifdef __cplusplus
extern "C" {
#endif
#include <stdbool.h>

#include <ert/plot/plot_driver.h>

  void               plplot_close_driver( plot_driver_type * driver );
  bool               plplot_driver_check_init_arg( const void * init_arg );
  plot_driver_type * plplot_driver_alloc(const void * init_arg); 

#ifdef __cplusplus
}
#endif

#endif
