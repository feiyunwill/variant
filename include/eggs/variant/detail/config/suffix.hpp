//! \file eggs/variant/detail/config/suffix.hpp
// Eggs.Variant
//
// Copyright Agustin K-ballo Berge, Fusion Fenix 2014
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

/// no header guards

/// constexpr support
#ifdef EGGS_CXX11_CONSTEXPR_DEFINED
#  undef EGGS_CXX11_CONSTEXPR
#  undef EGGS_CXX11_CONSTEXPR_DEFINED
#endif

#ifdef EGGS_CXX11_STATIC_CONSTEXPR_DEFINED
#  undef EGGS_CXX11_STATIC_CONSTEXPR
#  undef EGGS_CXX11_STATIC_CONSTEXPR_DEFINED
#endif

#ifdef EGGS_CXX14_CONSTEXPR_DEFINED
#  undef EGGS_CXX14_CONSTEXPR
#  undef EGGS_CXX14_CONSTEXPR_DEFINED
#endif

/// defaulted functions support
#ifdef EGGS_CXX11_HAS_DEFAULTED_FUNCTIONS_DEFINED
#  undef EGGS_CXX11_HAS_DEFAULTED_FUNCTIONS
#  undef EGGS_CXX11_HAS_DEFAULTED_FUNCTIONS_DEFINED
#endif

/// noexcept support
#ifdef EGGS_CXX11_NOEXCEPT_DEFINED
#  undef EGGS_CXX11_NOEXCEPT
#  undef EGGS_CXX11_NOEXCEPT_DEFINED
#endif

#ifdef EGGS_CXX11_NOEXCEPT_IF_DEFINED
#  undef EGGS_CXX11_NOEXCEPT_IF
#  undef EGGS_CXX11_NOEXCEPT_IF_DEFINED
#endif

#ifdef EGGS_CXX11_NOEXCEPT_EXPR_DEFINED
#  undef EGGS_CXX11_NOEXCEPT_EXPR
#  undef EGGS_CXX11_NOEXCEPT_EXPR_DEFINED
#endif

/// noreturn support
#ifdef EGGS_CXX11_NORETURN_DEFINED
#  undef EGGS_CXX11_NORETURN
#  undef EGGS_CXX11_NORETURN_DEFINED
#endif

/// sfinae for expressions support
#ifdef EGGS_CXX11_HAS_SFINAE_FOR_EXPRESSIONS_DEFINED
#  undef EGGS_CXX11_HAS_SFINAE_FOR_EXPRESSIONS
#  undef EGGS_CXX11_HAS_SFINAE_FOR_EXPRESSIONS_DEFINED
#endif

/// variable templates support
#ifdef EGGS_CXX14_HAS_VARIABLE_TEMPLATES_DEFINED
#  undef EGGS_CXX14_HAS_VARIABLE_TEMPLATES
#  undef EGGS_CXX14_HAS_VARIABLE_TEMPLATES_DEFINED
#endif

/// std::aligned_union support
#ifdef EGGS_CXX11_STD_HAS_ALIGNED_UNION_DEFINED
#  undef EGGS_CXX11_STD_HAS_ALIGNED_UNION
#  undef EGGS_CXX11_STD_HAS_ALIGNED_UNION_DEFINED
#endif

/// std::integer_sequence support
#ifdef EGGS_CXX14_STD_HAS_INTEGER_SEQUENCE_DEFINED
#  undef EGGS_CXX14_STD_HAS_INTEGER_SEQUENCE
#  undef EGGS_CXX14_STD_HAS_INTEGER_SEQUENCE_DEFINED
#endif

/// std::is_nothrow_* support
#ifdef EGGS_CXX11_STD_HAS_IS_NOTHROW_TRAITS_DEFINED
#  undef EGGS_CXX11_STD_HAS_IS_NOTHROW_TRAITS
#  undef EGGS_CXX11_STD_HAS_IS_NOTHROW_TRAITS_DEFINED
#endif

/// std::is_trivially_copyable support
#ifdef EGGS_CXX11_STD_HAS_IS_TRIVIALLY_COPYABLE_DEFINED
#  undef EGGS_CXX11_STD_HAS_IS_TRIVIALLY_COPYABLE
#  undef EGGS_CXX11_STD_HAS_IS_TRIVIALLY_COPYABLE_DEFINED
#endif

/// std::is_trivially_destructible support
#ifdef EGGS_CXX11_STD_HAS_IS_TRIVIALLY_DESTRUCTIBLE_DEFINED
#  undef EGGS_CXX11_STD_HAS_IS_TRIVIALLY_DESTRUCTIBLE
#  undef EGGS_CXX11_STD_HAS_IS_TRIVIALLY_DESTRUCTIBLE_DEFINED
#endif
