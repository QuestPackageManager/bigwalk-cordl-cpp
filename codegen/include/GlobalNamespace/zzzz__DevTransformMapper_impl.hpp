#pragma once
// IWYU pragma private; include "GlobalNamespace/DevTransformMapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__DevTransformMapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevTransformMapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevTransformMapper::*)()>(&::GlobalNamespace::DevTransformMapper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevTransformMapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::DevTransformMapper::__cordl_internal_get_from()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___from;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::DevTransformMapper::__cordl_internal_get_from() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___from;
}
constexpr void GlobalNamespace::DevTransformMapper::__cordl_internal_set_from(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___from = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::DevTransformMapper::__cordl_internal_get_to()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___to;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::DevTransformMapper::__cordl_internal_get_to() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___to;
}
constexpr void GlobalNamespace::DevTransformMapper::__cordl_internal_set_to(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___to = value;
}
constexpr bool& GlobalNamespace::DevTransformMapper::__cordl_internal_get_applyBlenderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyBlenderOffset;
}
constexpr bool const& GlobalNamespace::DevTransformMapper::__cordl_internal_get_applyBlenderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyBlenderOffset;
}
constexpr void GlobalNamespace::DevTransformMapper::__cordl_internal_set_applyBlenderOffset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyBlenderOffset = value;
}
inline void GlobalNamespace::DevTransformMapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevTransformMapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevTransformMapper* GlobalNamespace::DevTransformMapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevTransformMapper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevTransformMapper::DevTransformMapper()   {
}
