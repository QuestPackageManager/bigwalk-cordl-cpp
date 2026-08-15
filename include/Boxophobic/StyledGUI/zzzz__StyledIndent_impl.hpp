#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledIndent.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledIndent_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledIndent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledIndent::*)(int32_t)>(&::Boxophobic::StyledGUI::StyledIndent::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804bd4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledIndent*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Boxophobic::StyledGUI::StyledIndent::__cordl_internal_get_indent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indent;
}
constexpr int32_t const& Boxophobic::StyledGUI::StyledIndent::__cordl_internal_get_indent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indent;
}
constexpr void Boxophobic::StyledGUI::StyledIndent::__cordl_internal_set_indent(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indent = value;
}
inline void Boxophobic::StyledGUI::StyledIndent::_ctor(int32_t  indent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledIndent*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indent);
}
inline ::Boxophobic::StyledGUI::StyledIndent* Boxophobic::StyledGUI::StyledIndent::New_ctor(int32_t  indent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledIndent*>(indent));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledIndent::StyledIndent()   {
}
