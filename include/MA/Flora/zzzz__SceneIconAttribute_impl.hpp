#pragma once
// IWYU pragma private; include "MA/Flora/SceneIconAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "MA/Flora/zzzz__SceneIconAttribute_def.hpp"
//  Writing Method size for method: ::MA::Flora::SceneIconAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SceneIconAttribute::*)(::StringW)>(&::MA::Flora::SceneIconAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SceneIconAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& MA::Flora::SceneIconAttribute::__cordl_internal_get_Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Path;
}
constexpr ::StringW const& MA::Flora::SceneIconAttribute::__cordl_internal_get_Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Path;
}
constexpr void MA::Flora::SceneIconAttribute::__cordl_internal_set_Path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Path = value;
}
inline void MA::Flora::SceneIconAttribute::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SceneIconAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline ::MA::Flora::SceneIconAttribute* MA::Flora::SceneIconAttribute::New_ctor(::StringW  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::SceneIconAttribute*>(path));
}
// Ctor Parameters []
constexpr ::MA::Flora::SceneIconAttribute::SceneIconAttribute()   {
}
