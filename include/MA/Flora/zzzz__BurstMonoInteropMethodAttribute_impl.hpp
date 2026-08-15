#pragma once
// IWYU pragma private; include "MA/Flora/BurstMonoInteropMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "MA/Flora/zzzz__BurstMonoInteropMethodAttribute_def.hpp"
//  Writing Method size for method: ::MA::Flora::BurstMonoInteropMethodAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BurstMonoInteropMethodAttribute::*)(bool)>(&::MA::Flora::BurstMonoInteropMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BurstMonoInteropMethodAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& MA::Flora::BurstMonoInteropMethodAttribute::__cordl_internal_get_MakePublic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MakePublic;
}
constexpr bool const& MA::Flora::BurstMonoInteropMethodAttribute::__cordl_internal_get_MakePublic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MakePublic;
}
constexpr void MA::Flora::BurstMonoInteropMethodAttribute::__cordl_internal_set_MakePublic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MakePublic = value;
}
inline void MA::Flora::BurstMonoInteropMethodAttribute::_ctor(bool  makePublic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BurstMonoInteropMethodAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, makePublic);
}
inline ::MA::Flora::BurstMonoInteropMethodAttribute* MA::Flora::BurstMonoInteropMethodAttribute::New_ctor(bool  makePublic)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::BurstMonoInteropMethodAttribute*>(makePublic));
}
// Ctor Parameters []
constexpr ::MA::Flora::BurstMonoInteropMethodAttribute::BurstMonoInteropMethodAttribute()   {
}
