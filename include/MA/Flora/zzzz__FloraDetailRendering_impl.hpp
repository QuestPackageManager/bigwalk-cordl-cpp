#pragma once
// IWYU pragma private; include "MA/Flora/FloraDetailRendering.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MA/Flora/zzzz__FloraDetailRendering_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraDetailRendering._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraDetailRendering::*)()>(&::MA::Flora::FloraDetailRendering::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180538bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDetailRendering*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& MA::Flora::FloraDetailRendering::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& MA::Flora::FloraDetailRendering::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void MA::Flora::FloraDetailRendering::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
inline void MA::Flora::FloraDetailRendering::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDetailRendering*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraDetailRendering* MA::Flora::FloraDetailRendering::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraDetailRendering*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraDetailRendering::FloraDetailRendering()   {
}
