#pragma once
// IWYU pragma private; include "GlobalNamespace/ShellReferenceWithActionNumber.hpp"
#include "GlobalNamespace/zzzz__SeaShell_impl.hpp"
#include "GlobalNamespace/zzzz__ShellReferenceWithActionNumber_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShellReferenceWithActionNumber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShellReferenceWithActionNumber::*)(::GlobalNamespace::SeaShell_ShellReference, int32_t)>(&::GlobalNamespace::ShellReferenceWithActionNumber::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803223e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShellReferenceWithActionNumber>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ShellReferenceWithActionNumber::_ctor(::GlobalNamespace::SeaShell_ShellReference  shellReference, int32_t  actionNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ShellReferenceWithActionNumber>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shellReference, actionNumber);
}
// Ctor Parameters [CppParam { name: "shellReference", ty: "::GlobalNamespace::SeaShell_ShellReference", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ShellReferenceWithActionNumber::ShellReferenceWithActionNumber(::GlobalNamespace::SeaShell_ShellReference  shellReference, int32_t  actionNumber) noexcept  {
this->shellReference = shellReference;
this->actionNumber = actionNumber;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShellReferenceWithActionNumber::ShellReferenceWithActionNumber()   {
}
