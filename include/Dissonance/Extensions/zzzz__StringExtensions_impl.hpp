#pragma once
// IWYU pragma private; include "Dissonance/Extensions/StringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Extensions/zzzz__StringExtensions_def.hpp"
//  Writing Method size for method: ::Dissonance::Extensions::StringExtensions.GetFnvHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Dissonance::Extensions::StringExtensions::GetFnvHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805eac70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::StringExtensions*>(),
                        {"GetFnvHashCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Dissonance::Extensions::StringExtensions::GetFnvHashCode(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::StringExtensions*>(),
                        {"GetFnvHashCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str);
}
// Ctor Parameters []
constexpr ::Dissonance::Extensions::StringExtensions::StringExtensions()   {
}
