#pragma once
// IWYU pragma private; include "GlobalNamespace/NmouseObject.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NmouseObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NmouseObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NmouseObject::*)()>(&::GlobalNamespace::NmouseObject::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NmouseObject::__cordl_internal_get_cursor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cursor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NmouseObject::__cordl_internal_get_cursor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cursor;
}
constexpr void GlobalNamespace::NmouseObject::__cordl_internal_set_cursor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cursor = value;
}
inline void GlobalNamespace::NmouseObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NmouseObject* GlobalNamespace::NmouseObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NmouseObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NmouseObject::NmouseObject()   {
}
