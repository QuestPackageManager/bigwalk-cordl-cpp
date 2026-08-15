#pragma once
// IWYU pragma private; include "Mirror/SyncVarAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Mirror/zzzz__SyncVarAttribute_def.hpp"
//  Writing Method size for method: ::Mirror::SyncVarAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SyncVarAttribute::*)()>(&::Mirror::SyncVarAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncVarAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mirror::SyncVarAttribute::__cordl_internal_get_hook()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hook;
}
constexpr ::StringW const& Mirror::SyncVarAttribute::__cordl_internal_get_hook() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hook;
}
constexpr void Mirror::SyncVarAttribute::__cordl_internal_set_hook(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hook = value;
}
inline void Mirror::SyncVarAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SyncVarAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SyncVarAttribute* Mirror::SyncVarAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SyncVarAttribute*>());
}
// Ctor Parameters []
constexpr ::Mirror::SyncVarAttribute::SyncVarAttribute()   {
}
