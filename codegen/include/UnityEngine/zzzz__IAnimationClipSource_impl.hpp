#pragma once
// IWYU pragma private; include "UnityEngine/IAnimationClipSource.hpp"
#include "UnityEngine/zzzz__IAnimationClipSource_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::IAnimationClipSource.GetAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::IAnimationClipSource::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::UnityEngine::IAnimationClipSource::GetAnimationClips)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::IAnimationClipSource*>(),
                    {::i2c::class_of<::UnityEngine::IAnimationClipSource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::IAnimationClipSource::GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::IAnimationClipSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
