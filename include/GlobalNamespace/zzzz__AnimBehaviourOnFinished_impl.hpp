#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimBehaviourOnFinished.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimBehaviourOnFinished_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimBehaviourOnFinished.OnStateEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimBehaviourOnFinished::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int32_t)>(&::GlobalNamespace::AnimBehaviourOnFinished::OnStateEnter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180445b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AnimBehaviourOnFinished*>(),
                    {::i2c::class_of<::GlobalNamespace::AnimBehaviourOnFinished*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimBehaviourOnFinished._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimBehaviourOnFinished::*)()>(&::GlobalNamespace::AnimBehaviourOnFinished::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimBehaviourOnFinished*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AnimBehaviourOnFinished::OnStateEnter(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AnimBehaviourOnFinished*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, stateInfo, layerIndex);
}
inline void GlobalNamespace::AnimBehaviourOnFinished::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimBehaviourOnFinished*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimBehaviourOnFinished* GlobalNamespace::AnimBehaviourOnFinished::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimBehaviourOnFinished*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimBehaviourOnFinished::AnimBehaviourOnFinished()   {
}
