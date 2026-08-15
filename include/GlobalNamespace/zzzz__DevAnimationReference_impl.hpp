#pragma once
// IWYU pragma private; include "GlobalNamespace/DevAnimationReference.hpp"
#include "UnityEngine/zzzz__AnimationClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevAnimationReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevAnimationReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevAnimationReference::*)()>(&::GlobalNamespace::DevAnimationReference::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevAnimationReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>& GlobalNamespace::DevAnimationReference::__cordl_internal_get_clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> const& GlobalNamespace::DevAnimationReference::__cordl_internal_get_clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clips;
}
constexpr void GlobalNamespace::DevAnimationReference::__cordl_internal_set_clips(::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clips = value;
}
inline void GlobalNamespace::DevAnimationReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevAnimationReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevAnimationReference* GlobalNamespace::DevAnimationReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevAnimationReference*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevAnimationReference::DevAnimationReference()   {
}
