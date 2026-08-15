#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveEntryString.hpp"
#include "GlobalNamespace/zzzz__SaveEntryString_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaveEntryString._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveEntryString::*)(::StringW, ::StringW)>(&::GlobalNamespace::SaveEntryString::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180397590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveEntryString>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SaveEntryString::_ctor(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveEntryString>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SaveEntryString::SaveEntryString(::StringW  key, ::StringW  value) noexcept  {
this->key = key;
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveEntryString::SaveEntryString()   {
}
