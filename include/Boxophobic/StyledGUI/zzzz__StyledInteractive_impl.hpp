#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledInteractive.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledInteractive_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledInteractive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledInteractive::*)()>(&::Boxophobic::StyledGUI::StyledInteractive::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledInteractive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Boxophobic::StyledGUI::StyledInteractive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledInteractive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::StyledGUI::StyledInteractive* Boxophobic::StyledGUI::StyledInteractive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledInteractive*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledInteractive::StyledInteractive()   {
}
