/**
 * This file is part of SCGaz.
 *
 * SCGaz is free software; you can redistribute it and/or modify it under 
 * the terms of the GNU General Public License as published by the Free 
 * Software Foundation; either version 2 of the License, or (at your option) 
 * any later version.
 *
 * SCGaz is distributed in the hope that it will be useful, but WITHOUT ANY 
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more 
 * details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with SCGaz; if not, write to the Free Software Foundation, Inc., 51 
 * Franklin St, Fifth Floor, Boston, MA 02110-1301 USA 
*/

#include <cstdio>
#include <cstdarg>
#include <exceptions/DensityException.h>
#include <exceptions/MemoryException.h>

/**
 * Define error message.
*/
DensityException::DensityException(const char *fmt, ...) {
  va_list ap;

  va_start(ap, fmt);
  vsnprintf(msg, MAX_MSG_SIZE, fmt, ap);
  va_end(ap);
}

/**
 * Exception destructor.
*/
DensityException::~DensityException( ) throw( ) {
}

/**
 * Get error message.
*/
const char *DensityException::what( ) const throw( ) {
  return msg;
}
