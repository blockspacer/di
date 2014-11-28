//
// Copyright (c) 2014 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOST_DI_BINDINGS_HPP
#define BOOST_DI_BINDINGS_HPP

#include "boost/di/core/dependency.hpp"
#include "boost/di/scopes/deduce.hpp"
#include "boost/di/scopes/session.hpp"
#include "boost/di/scopes/singleton.hpp"
#include "boost/di/scopes/shared.hpp"
#include "boost/di/scopes/unique.hpp"

namespace boost {
namespace di {

template<class TExpected, class TGiven = TExpected>
core::dependency<scopes::deduce, TExpected, TGiven> bind{};

template<class TName>
constexpr scopes::session<TName> session(const TName&) noexcept { return {}; }

extern constexpr scopes::deduce deduce{};
extern constexpr scopes::unique unique{};
extern constexpr scopes::shared shared{};
extern constexpr scopes::singleton singleton{};

template<class... Ts>
using any_of = type_list<Ts...>;

} // namespace di
} // namespace boost

#endif

