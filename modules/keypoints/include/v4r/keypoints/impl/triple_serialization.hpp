/**
 * $Id$
 * 
 * Software License Agreement (GNU General Public License)
 *
 *  Copyright (C) 2015:
 *
 *    Johann Prankl, prankl@acin.tuwien.ac.at
 *    Aitor Aldoma, aldoma@acin.tuwien.ac.at
 *
 *      Automation and Control Institute
 *      Vienna University of Technology
 *      Gusshausstraße 25-29
 *      1170 Vienn, Austria
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @author Johann Prankl, Aitor Aldoma
 *
 */

#ifndef KP_TRIPLE_SERI_HPP
#define KP_TRIPLE_SERI_HPP


#include <opencv2/opencv.hpp>
#include <boost/serialization/split_free.hpp>
#include <boost/serialization/vector.hpp>

#include "triple.hpp"

namespace boost {
    namespace serialization {

    template<class Archive, typename F, typename S, typename T>
    void serialize(Archive & ar, v4r::triple<F,S,T> &t, const unsigned int version)
    {
      ar & t.first;
      ar & t.second;
      ar & t.third;
    }

  }
}

#endif
