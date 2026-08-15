#pragma once
// IWYU pragma private; include "MA/Flora/StringUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__StringUtility_def.hpp"
//  Writing Method size for method: ::MA::Flora::StringUtility.FormatBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::MA::Flora::StringUtility::FormatBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18150d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StringUtility*>(),
                        {"FormatBytes", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::StringUtility.FormatLargeNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::MA::Flora::StringUtility::FormatLargeNumber)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18150d6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StringUtility*>(),
                        {"FormatLargeNumber", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW MA::Flora::StringUtility::FormatBytes(int64_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StringUtility*>(),
                        {"FormatBytes", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline ::StringW MA::Flora::StringUtility::FormatLargeNumber(int64_t  num)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StringUtility*>(),
                        {"FormatLargeNumber", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, num);
}
// Ctor Parameters []
constexpr ::MA::Flora::StringUtility::StringUtility()   {
}
