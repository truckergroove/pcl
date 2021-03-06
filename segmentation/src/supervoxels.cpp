/*
 * Software License Agreement (BSD License)
 *
 *  Point Cloud Library (PCL) - www.pointclouds.org
 *
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 * Author : jpapon@gmail.com
 * Email  : jpapon@gmail.com
 *
 */

#include <pcl/point_types.h>
#include <pcl/impl/instantiate.hpp>
#include <pcl/segmentation/supervoxels.h>
#include <pcl/segmentation/impl/supervoxels.hpp>
//These are needed to link with our local PointSuperVoxel
#include <pcl/features/impl/normal_3d_omp.hpp>
#include <pcl/features/impl/normal_3d.hpp>
#include <pcl/search/impl/organized.hpp>
#include <pcl/kdtree/impl/kdtree_flann.hpp>
#include <pcl/impl/pcl_base.hpp>
#include <pcl/search/impl/kdtree.hpp>
#include <pcl/search/impl/search.hpp>

// Instantiations of specific point types
template class pcl::PCLBase<pcl::PointSuperVoxel>;
template class pcl::search::Search<pcl::PointSuperVoxel>;
template class pcl::search::KdTree<pcl::PointSuperVoxel>;
template class pcl::SuperVoxels<pcl::PointXYZRGBA>;
template class pcl::SuperVoxels<pcl::PointXYZRGB>;
template class pcl::NormalEstimationOMP<pcl::PointSuperVoxel,pcl::PointSuperVoxel>;
template class pcl::NormalEstimation<pcl::PointSuperVoxel,pcl::PointSuperVoxel>;
template class pcl::KdTreeFLANN<pcl::PointSuperVoxel>;
template class pcl::search::OrganizedNeighbor<pcl::PointSuperVoxel>;
