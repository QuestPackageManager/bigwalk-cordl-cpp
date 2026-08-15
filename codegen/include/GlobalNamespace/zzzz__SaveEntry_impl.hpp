#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveEntry.hpp"
#include "GlobalNamespace/zzzz__SaveEntry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaveEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveEntry::*)(::StringW, int32_t)>(&::GlobalNamespace::SaveEntry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f17c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SaveEntry::_ctor(::StringW  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SaveEntry::SaveEntry(::StringW  key, int32_t  value) noexcept  {
this->key = key;
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveEntry::SaveEntry()   {
}
