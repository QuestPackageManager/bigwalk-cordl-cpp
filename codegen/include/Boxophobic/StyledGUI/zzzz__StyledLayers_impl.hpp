#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledLayers.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledLayers_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledLayers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledLayers::*)()>(&::Boxophobic::StyledGUI::StyledLayers::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804bd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledLayers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledLayers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledLayers::*)(::StringW)>(&::Boxophobic::StyledGUI::StyledLayers::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804bd310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledLayers*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Boxophobic::StyledGUI::StyledLayers::__cordl_internal_get_display()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledLayers::__cordl_internal_get_display() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr void Boxophobic::StyledGUI::StyledLayers::__cordl_internal_set_display(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___display = value;
}
inline void Boxophobic::StyledGUI::StyledLayers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledLayers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::StyledGUI::StyledLayers::_ctor(::StringW  display)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledLayers*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, display);
}
inline ::Boxophobic::StyledGUI::StyledLayers* Boxophobic::StyledGUI::StyledLayers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledLayers*>());
}
inline ::Boxophobic::StyledGUI::StyledLayers* Boxophobic::StyledGUI::StyledLayers::New_ctor(::StringW  display)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledLayers*>(display));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledLayers::StyledLayers()   {
}
