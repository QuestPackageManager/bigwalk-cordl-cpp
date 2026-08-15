#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorLoopSound.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AnimatorLoopSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimatorLoopSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimatorLoopSound::*)()>(&::GlobalNamespace::AnimatorLoopSound::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorLoopSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AnimatorLoopSound::__cordl_internal_get_Sound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AnimatorLoopSound::__cordl_internal_get_Sound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sound;
}
constexpr void GlobalNamespace::AnimatorLoopSound::__cordl_internal_set_Sound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sound = value;
}
constexpr ::StringW& GlobalNamespace::AnimatorLoopSound::__cordl_internal_get_AudioTransformName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransformName;
}
constexpr ::StringW const& GlobalNamespace::AnimatorLoopSound::__cordl_internal_get_AudioTransformName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransformName;
}
constexpr void GlobalNamespace::AnimatorLoopSound::__cordl_internal_set_AudioTransformName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioTransformName = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AnimatorLoopSound::__cordl_internal_get_AudioTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AnimatorLoopSound::__cordl_internal_get_AudioTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AudioTransform;
}
constexpr void GlobalNamespace::AnimatorLoopSound::__cordl_internal_set_AudioTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AudioTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AnimatorLoopSound::__cordl_internal_get_Asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AnimatorLoopSound::__cordl_internal_get_Asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asc;
}
constexpr void GlobalNamespace::AnimatorLoopSound::__cordl_internal_set_Asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asc = value;
}
inline void GlobalNamespace::AnimatorLoopSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimatorLoopSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimatorLoopSound* GlobalNamespace::AnimatorLoopSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimatorLoopSound*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatorLoopSound::AnimatorLoopSound()   {
}
