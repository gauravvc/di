//
// Copyright (c) 2012 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOST_DI_HPP
#define BOOST_DI_HPP

#include "di/config.hpp"

// front ends
#include "di/front/ctor.hpp"
#include "di/front/base/module.hpp"
#include "di/front/fusion/module.hpp"

// utility
#include "di/utility/injector.hpp"
#include "di/utility/named.hpp"
#include "di/utility/provider.hpp"

// policies
#include "di/back/policies/check_for_binding_correctness.hpp"
#include "di/back/policies/check_for_circular_dependencies.hpp"
#include "di/back/policies/check_for_creation_ownership.hpp"
#include "di/back/policies/check_for_references_without_ownership.hpp"

namespace boost
{
namespace di
{

} // namespace di
} // namespace boost

boost::di::fusion::module
boost::di::fusion::singletons
boost::di::fusion::per_request

boost::di::base::module
boost::di::base::singletons

boost::di::injector
boost::di::named
boost::di::provider

#endif

