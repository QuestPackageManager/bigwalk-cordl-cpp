#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Extensions/StringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/Common/Extensions/zzzz__StringExtensions_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::Common::Extensions::StringExtensions.ToUlong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, uint64_t)>(&::PlayEveryWare::Common::Extensions::StringExtensions::ToUlong)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180546940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::StringExtensions*>(),
                        {"ToUlong", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t PlayEveryWare::Common::Extensions::StringExtensions::ToUlong(::StringW  value, uint64_t  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::StringExtensions*>(),
                        {"ToUlong", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, defaultValue);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::Common::Extensions::StringExtensions::StringExtensions()   {
}
