#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledSpace.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledSpace_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledSpace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledSpace::*)(int32_t)>(&::Boxophobic::StyledGUI::StyledSpace::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804bd4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledSpace*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Boxophobic::StyledGUI::StyledSpace::__cordl_internal_get_space()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___space;
}
constexpr int32_t const& Boxophobic::StyledGUI::StyledSpace::__cordl_internal_get_space() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___space;
}
constexpr void Boxophobic::StyledGUI::StyledSpace::__cordl_internal_set_space(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___space = value;
}
inline void Boxophobic::StyledGUI::StyledSpace::_ctor(int32_t  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledSpace*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space);
}
inline ::Boxophobic::StyledGUI::StyledSpace* Boxophobic::StyledGUI::StyledSpace::New_ctor(int32_t  space)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledSpace*>(space));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledSpace::StyledSpace()   {
}
