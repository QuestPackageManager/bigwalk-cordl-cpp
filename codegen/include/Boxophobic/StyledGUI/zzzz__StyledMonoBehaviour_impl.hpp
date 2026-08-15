#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledMonoBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledMonoBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledMonoBehaviour::*)()>(&::Boxophobic::StyledGUI::StyledMonoBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledMonoBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Boxophobic::StyledGUI::StyledMonoBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledMonoBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::StyledGUI::StyledMonoBehaviour* Boxophobic::StyledGUI::StyledMonoBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledMonoBehaviour*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledMonoBehaviour::StyledMonoBehaviour()   {
}
