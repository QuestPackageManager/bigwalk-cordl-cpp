#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledScriptableObject.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledScriptableObject_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledScriptableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledScriptableObject::*)()>(&::Boxophobic::StyledGUI::StyledScriptableObject::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Boxophobic::StyledGUI::StyledScriptableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::StyledGUI::StyledScriptableObject* Boxophobic::StyledGUI::StyledScriptableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledScriptableObject*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledScriptableObject::StyledScriptableObject()   {
}
