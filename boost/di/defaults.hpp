//
// Copyright (c) 2012 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOST_DI_DEFAULTS_HPP
#define BOOST_DI_DEFAULTS_HPP

#include <memory>
#include "boost/di/policy.hpp"

namespace boost {
namespace di {

namespace policies {
class check_for_binding_correctness;
class check_for_circular_dependencies;
class check_for_creation_ownership;
} // namespace policies

class specialized { };

/**
 * @code
 * #include <boost/di/defaults.hpp>
 *
 * namespace boost {
 * namespace di {
 *
 * template<>
 * struct defaults<specialized>
 *     : defaults<>
 * {
 *     typedef policy<
 *         di::policies::check_for_circular_dependencies
 *     > policies;
 * };
 *
 * } // namespace di
 * } // namespace boost
 * @endcode
 */
template<typename TDefault = void>
struct defaults
{
    typedef policy<
        policies::check_for_binding_correctness
      , policies::check_for_circular_dependencies
      , policies::check_for_creation_ownership
    > policies;

    template<typename T>
    struct allocator
        : std::allocator<T>
    { };
};

} // namespace di
} // namespace boost

#endif

