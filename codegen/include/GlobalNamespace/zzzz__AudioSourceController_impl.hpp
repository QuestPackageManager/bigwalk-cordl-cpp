#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSourceController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioBus_def.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "GlobalNamespace/zzzz__AudioFilterMixer_def.hpp"
#include "GlobalNamespace/zzzz__AudioFilterType_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionBase_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceRefs_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__FuncOneOut_3_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__IAudioFilter_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__UnityFilterBase_def.hpp"
#include "GlobalNamespace/zzzz__UnityFilterType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioSourceController_AudioState::AudioSourceController_AudioState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceController_AudioState::AudioSourceController_AudioState()   {
}
constexpr ::GlobalNamespace::AudioSourceController_AudioState  GlobalNamespace::AudioSourceController_AudioState::Stopped{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioSourceController_AudioState  GlobalNamespace::AudioSourceController_AudioState::Playing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioSourceController_AudioState  GlobalNamespace::AudioSourceController_AudioState::Standby{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController_Storage16.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController_Storage16::*)(::GlobalNamespace::AudioSourceController_Storage16)>(&::GlobalNamespace::AudioSourceController_Storage16::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804a5a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController_Storage16.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController_Storage16::*)(::System::Object*)>(&::GlobalNamespace::AudioSourceController_Storage16::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804a5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(),
                    {::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController_Storage16.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioSourceController_Storage16::*)()>(&::GlobalNamespace::AudioSourceController_Storage16::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a5b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(),
                    {::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController_Storage16.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioSourceController_Storage16, ::GlobalNamespace::AudioSourceController_Storage16)>(&::GlobalNamespace::AudioSourceController_Storage16::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a5b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController_Storage16.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::AudioSourceController_Storage16, ::GlobalNamespace::AudioSourceController_Storage16)>(&::GlobalNamespace::AudioSourceController_Storage16::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a5b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::AudioSourceController_Storage16::Equals(::GlobalNamespace::AudioSourceController_Storage16  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::AudioSourceController_Storage16::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::AudioSourceController_Storage16::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController_Storage16::op_Equality(::GlobalNamespace::AudioSourceController_Storage16  left, ::GlobalNamespace::AudioSourceController_Storage16  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool GlobalNamespace::AudioSourceController_Storage16::op_Inequality(::GlobalNamespace::AudioSourceController_Storage16  left, ::GlobalNamespace::AudioSourceController_Storage16  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController_Storage16>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController_Storage16>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>"
constexpr  GlobalNamespace::AudioSourceController_Storage16::operator ::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>"
constexpr ::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>* GlobalNamespace::AudioSourceController_Storage16::i___System__IEquatable_1___GlobalNamespace__AudioSourceController_Storage16_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::AudioSourceController_Storage16>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "A", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "B", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioSourceController_Storage16::AudioSourceController_Storage16(uint64_t  A, uint64_t  B) noexcept  {
this->A = A;
this->B = B;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceController_Storage16::AudioSourceController_Storage16()   {
}
// Ctor Parameters [CppParam { name: "Owner", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Action", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "RefData", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ValData", ty: "::GlobalNamespace::AudioSourceController_Storage16", modifiers: "", def_value: Some("{}") }, CppParam { name: "Runner", ty: "::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioSourceController_ASCEvent::AudioSourceController_ASCEvent(::System::Object*  Owner, ::System::Object*  Action, ::System::Object*  RefData, ::GlobalNamespace::AudioSourceController_Storage16  ValData, ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  Runner) noexcept  {
this->Owner = Owner;
this->Action = Action;
this->RefData = RefData;
this->ValData = ValData;
this->Runner = Runner;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceController_ASCEvent::AudioSourceController_ASCEvent()   {
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>::setStaticF___9(::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*, "<>9", ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*>(std::forward<::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*>(value));
}
template<typename TOwner,typename UData>
inline ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>* GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*, "<>9", ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*>();
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>::__cctor_b__1_0(::GlobalNamespace::AudioSourceController_ASCEvent  e, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*>(),
                        {"<.cctor>b__1_0", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_ASCEvent>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, c);
}
template<typename TOwner,typename UData>
inline ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>* GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>*>());
}
// Ctor Parameters []
template<typename TOwner,typename UData>
constexpr ::GlobalNamespace::ActionRunnerWithData_2_AudioSourceController___c<TOwner,UData>::ActionRunnerWithData_2_AudioSourceController___c()   {
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController_ActionRunnerWithData_2<TOwner,UData>::setStaticF_Invoke(::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*, "Invoke", ::GlobalNamespace::AudioSourceController_ActionRunnerWithData_2<TOwner,UData>*>(std::forward<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*>(value));
}
template<typename TOwner,typename UData>
inline ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioSourceController_ActionRunnerWithData_2<TOwner,UData>::getStaticF_Invoke()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*, "Invoke", ::GlobalNamespace::AudioSourceController_ActionRunnerWithData_2<TOwner,UData>*>();
}
// Ctor Parameters []
template<typename TOwner,typename UData>
constexpr ::GlobalNamespace::AudioSourceController_ActionRunnerWithData_2<TOwner,UData>::AudioSourceController_ActionRunnerWithData_2()   {
}
template<typename TOwner>
inline void GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>::setStaticF___9(::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*, "<>9", ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*>(std::forward<::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*>(value));
}
template<typename TOwner>
inline ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>* GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*, "<>9", ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*>();
}
template<typename TOwner>
inline void GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner>
inline void GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>::__cctor_b__1_0(::GlobalNamespace::AudioSourceController_ASCEvent  e, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*>(),
                        {"<.cctor>b__1_0", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_ASCEvent>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, c);
}
template<typename TOwner>
inline ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>* GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>*>());
}
// Ctor Parameters []
template<typename TOwner>
constexpr ::GlobalNamespace::ActionRunner_1_AudioSourceController___c<TOwner>::ActionRunner_1_AudioSourceController___c()   {
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController_ActionRunner_1<TOwner>::setStaticF_Invoke(::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*, "Invoke", ::GlobalNamespace::AudioSourceController_ActionRunner_1<TOwner>*>(std::forward<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*>(value));
}
template<typename TOwner>
inline ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioSourceController_ActionRunner_1<TOwner>::getStaticF_Invoke()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*, "Invoke", ::GlobalNamespace::AudioSourceController_ActionRunner_1<TOwner>*>();
}
// Ctor Parameters []
template<typename TOwner>
constexpr ::GlobalNamespace::AudioSourceController_ActionRunner_1<TOwner>::AudioSourceController_ActionRunner_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::*)()>(&::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c.__cctor_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::*)(::GlobalNamespace::AudioSourceController_ASCEvent, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::__cctor_b__1_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804a61a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*>(),
                        {"<.cctor>b__1_0", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_ASCEvent>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::setStaticF___9(::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*, "<>9", ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*>(std::forward<::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*>(value));
}
inline ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c* GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*, "<>9", ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*>();
}
inline void GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::__cctor_b__1_0(::GlobalNamespace::AudioSourceController_ASCEvent  e, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*>(),
                        {"<.cctor>b__1_0", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_ASCEvent>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, c);
}
inline ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c* GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActionRunnerSimple_AudioSourceController___c::ActionRunnerSimple_AudioSourceController___c()   {
}
inline void GlobalNamespace::AudioSourceController_ActionRunnerSimple::setStaticF_Invoke(::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*, "Invoke", ::GlobalNamespace::AudioSourceController_ActionRunnerSimple*>(std::forward<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>* GlobalNamespace::AudioSourceController_ActionRunnerSimple::getStaticF_Invoke()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::AudioSourceController_ASCEvent,::UnityW<::GlobalNamespace::AudioSourceController>>*, "Invoke", ::GlobalNamespace::AudioSourceController_ActionRunnerSimple*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceController_ActionRunnerSimple::AudioSourceController_ActionRunnerSimple()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_CachedTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_CachedTransform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804976b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_CachedTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_AudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_AudioSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_AudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_AudioSourceRefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceRefs> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_AudioSourceRefs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_AudioSourceRefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Cue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundCue> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Cue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Cue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_OriginAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>* (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_OriginAssets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_OriginAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioSourceController_AudioState (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::AudioSourceController_AudioState)>(&::GlobalNamespace::AudioSourceController::set_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_AudioState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(int32_t)>(&::GlobalNamespace::AudioSourceController::set_Priority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_Priority", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_ChainOfVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>* (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_ChainOfVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ChainOfVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Owner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Owner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_FollowTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_FollowTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FollowTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_FollowTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::AudioSourceController::set_FollowTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_FollowTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Clip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Clip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Clip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Bus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioBus> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Bus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Bus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Loop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_FinalVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_FinalVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FinalVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_AttenuationVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_AttenuationVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180497640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_AttenuationVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_FadeVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_FadeVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180497710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FadeVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_RTPCVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_RTPCVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180497950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_RTPCVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_HibernationVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_HibernationVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_HibernationVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_AudioSettingsVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_AudioSettingsVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180497660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_AudioSettingsVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_ScriptableVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_ScriptableVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptableVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_ScriptableVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::set_ScriptableVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d99d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptableVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Pitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Pitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18033c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Pitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_ScriptablePitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_ScriptablePitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d39c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptablePitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_ScriptablePitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::set_ScriptablePitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d3a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptablePitch", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Pan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Pan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803826d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Pan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_ScriptablePan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_ScriptablePan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptablePan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_ScriptablePan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::set_ScriptablePan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptablePan", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_SpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_SpatialBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_SpatialBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_ScriptableSpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_ScriptableSpatialBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptableSpatialBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_ScriptableSpatialBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::set_ScriptableSpatialBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptableSpatialBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Spread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Spread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Spread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_ScriptableSpread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_ScriptableSpread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptableSpread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_ScriptableSpread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::set_ScriptableSpread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptableSpread", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Doppler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Doppler)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Doppler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_PlayHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_PlayHead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_PlayHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_PlayHeadMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_PlayHeadMoving)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180497910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_PlayHeadMoving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_FadeTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_FadeTimer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FadeTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_TargetFadeInTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_TargetFadeInTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_TargetFadeInTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_TargetFadeOutTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_TargetFadeOutTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_TargetFadeOutTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_ScheduledStartDSPTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_ScheduledStartDSPTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScheduledStartDSPTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_ScheduledEndDSPTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_ScheduledEndDSPTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScheduledEndDSPTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_PlayedDSPTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_PlayedDSPTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_PlayedDSPTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Occlusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioOcclusionBase> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Occlusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Occlusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_FilterMixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioFilterMixer> (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_FilterMixer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FilterMixer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Filters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>* (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Filters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Filters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_UnityFilterWrappers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>* (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_UnityFilterWrappers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_UnityFilterWrappers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_FilterSynthesizerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_FilterSynthesizerMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FilterSynthesizerMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_FilterSynthesizerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::set_FilterSynthesizerMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180497a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_FilterSynthesizerMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_BypassFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_BypassFilters)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180497680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_BypassFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_BypassFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::set_BypassFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_BypassFilters", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_SyncPitchMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_SyncPitchMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_SyncPitchMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_SyncPitchMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::set_SyncPitchMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_SyncPitchMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_XProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IAudioRTPCXProvider* (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_XProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_XProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_XProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::IAudioRTPCXProvider*)>(&::GlobalNamespace::AudioSourceController::set_XProvider)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_XProvider", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_RTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_RTPC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_RTPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_RTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::set_RTPC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_RTPC", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_UpdatingAttenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_UpdatingAttenuation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_UpdatingAttenuation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_UpdatingAttenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::set_UpdatingAttenuation)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180497ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_UpdatingAttenuation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f5370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_IsPlaying)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804978c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_IsActuallyPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_IsActuallyPlaying)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180497780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsActuallyPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_IsScheduledToPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_IsScheduledToPlay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804978d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsScheduledToPlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_IsFadingOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_IsFadingOut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804977a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsFadingOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_IsHibernating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_IsHibernating)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804977f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsHibernating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Hibernated_VoiceLimiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Hibernated_VoiceLimiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Hibernated_VoiceLimiting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_Hibernated_VoiceLimiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::set_Hibernated_VoiceLimiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_Hibernated_VoiceLimiting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Hibernated_Forced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Hibernated_Forced)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Hibernated_Forced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_Hibernated_Forced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::set_Hibernated_Forced)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_Hibernated_Forced", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.get_Hibernated_Attenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::get_Hibernated_Attenuation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Hibernated_Attenuation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.set_Hibernated_Attenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::set_Hibernated_Attenuation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_Hibernated_Attenuation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180493370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180490b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180490c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::AudioUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.DoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::DoUpdate)> {
  constexpr static std::size_t size = 0xb10;
  constexpr static std::size_t addrs = 0x180490e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"DoUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::SoundCue*, ::UnityEngine::Vector3, ::UnityEngine::Object*, ::GlobalNamespace::IAudioRTPCXProvider*, bool, ::UnityEngine::Transform*, double_t, float_t, ::UnityEngine::AudioClip*, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, bool)>(&::GlobalNamespace::AudioSourceController::Play)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x1804943a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Play", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.PlayAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::PlayAudioSource)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180494000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PlayAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.PlayAudioSourceScheduled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::PlayAudioSourceScheduled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180493fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PlayAudioSourceScheduled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.SetPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::SoundCue*)>(&::GlobalNamespace::AudioSourceController::SetPlaying)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180495810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetPlaying", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::Stop)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180496b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.FadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::FadeOut)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180491950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"FadeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::Pause)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1804937f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Pause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::Play)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804942d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.PlayInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(double_t, bool)>(&::GlobalNamespace::AudioSourceController::PlayInternal)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x180494050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PlayInternal", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.SetupController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(float_t, ::UnityEngine::AudioClip*, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, bool)>(&::GlobalNamespace::AudioSourceController::SetupController)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0x180496130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetupController", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.ResetController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::ResetController)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x180495130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"ResetController", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.SetupAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::SetupAudioSource)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x180495ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetupAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.ResetAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::ResetAudioSource)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x180494bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"ResetAudioSource", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.HibernateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::HibernateInternal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180492f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"HibernateInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.Hibernate_Force
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::Hibernate_Force)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180493170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Hibernate_Force", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.Hibernate_VoiceLimiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::Hibernate_VoiceLimiting)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180493270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Hibernate_VoiceLimiting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.Hibernate_Attenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::Hibernate_Attenuation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804930c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Hibernate_Attenuation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.WakeUpInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::WakeUpInternal)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180496f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"WakeUpInternal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.WakeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::WakeUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180497230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"WakeUp", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.VirtualizeTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::VirtualizeTest)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180496e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"VirtualizeTest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.WakeUp_VoiceLimiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(bool)>(&::GlobalNamespace::AudioSourceController::WakeUp_VoiceLimiting)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180497190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"WakeUp_VoiceLimiting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.WakeUp_Attenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::WakeUp_Attenuation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180497120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"WakeUp_Attenuation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.CalculateVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::CalculateVolume)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180490d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"CalculateVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::IAudioVolume*, ::UnityEngine::Object*)>(&::GlobalNamespace::AudioSourceController::AddVolume)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180490a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddVolume", {}, {::i2c::type_of<::GlobalNamespace::IAudioVolume*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::IAudioVolume*, ::UnityEngine::Object*)>(&::GlobalNamespace::AudioSourceController::RemoveVolume)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180494ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveVolume", {}, {::i2c::type_of<::GlobalNamespace::IAudioVolume*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.PerformFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t, float_t, ::by_ref<float_t>, ::by_ref<::GlobalNamespace::AudioVolume*>)>(&::GlobalNamespace::AudioSourceController::PerformFade)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180493a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PerformFade", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AudioVolume*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.PerformRTPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(bool, float_t)>(&::GlobalNamespace::AudioSourceController::PerformRTPC)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x180493b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PerformRTPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.GetRTPCValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::AudioRTPC_YAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AudioSourceController::GetRTPCValue)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x180491ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"GetRTPCValue", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.PerformOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::PerformOcclusion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180493ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PerformOcclusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.TriggerEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*, bool)>(&::GlobalNamespace::AudioSourceController::TriggerEvents)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180496d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"TriggerEvents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*, ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::AddEvent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18048fed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*, ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::RemoveEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180494880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::OnStop)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180493680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddEventOnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::AddEventOnStop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnStop", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveEventOnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::RemoveEventOnStop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180494840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnStop", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.OnFadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::OnFadeOut)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180493380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnFadeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddEventOnFadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::AddEventOnFadeOut)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnFadeOut", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveEventOnFadeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::RemoveEventOnFadeOut)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804947c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnFadeOut", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.OnPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::OnPause)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804934f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnPause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddEventOnPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::AddEventOnPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnPause", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveEventOnPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::RemoveEventOnPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180494800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnPause", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.OnPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::OnPlay)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180493590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnPlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddEventOnPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::AddEventOnPlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048fe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveEventOnPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::RemoveEventOnPlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180494820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.OnHibernate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::OnHibernate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180493450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnHibernate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddEventOnHibernate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::AddEventOnHibernate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048fe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnHibernate", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveEventOnHibernate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::RemoveEventOnHibernate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804947e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnHibernate", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.OnWakeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::OnWakeUp)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180493750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnWakeUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddEventOnWakeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::AddEventOnWakeUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnWakeUp", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveEventOnWakeUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioSourceController::RemoveEventOnWakeUp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180494860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnWakeUp", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AudioSourceController::GetX)> {
  constexpr static std::size_t size = 0x11f0;
  constexpr static std::size_t addrs = 0x180491d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.OnScheduledStartTimeReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(double_t)>(&::GlobalNamespace::AudioSourceController::OnScheduledStartTimeReached)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180493630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnScheduledStartTimeReached", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.SetScheduledStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(double_t, bool, bool)>(&::GlobalNamespace::AudioSourceController::SetScheduledStartTime)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180495950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetScheduledStartTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.SetScheduledEndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioSourceController::*)(double_t, bool)>(&::GlobalNamespace::AudioSourceController::SetScheduledEndTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804958d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetScheduledEndTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.SeekTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(float_t)>(&::GlobalNamespace::AudioSourceController::SeekTo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180495720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SeekTo", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioFilterBase> (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::AudioFilterType, int32_t)>(&::GlobalNamespace::AudioSourceController::AddFilter)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1804901f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddFilter", {}, {::i2c::type_of<::GlobalNamespace::AudioFilterType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::IAudioFilter*, int32_t)>(&::GlobalNamespace::AudioSourceController::AddFilter)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180490040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddFilter", {}, {::i2c::type_of<::GlobalNamespace::IAudioFilter*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.RemoveFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::IAudioFilter*)>(&::GlobalNamespace::AudioSourceController::RemoveFilter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804949e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveFilter", {}, {::i2c::type_of<::GlobalNamespace::IAudioFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.AddUnityFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::UnityFilterBase> (::GlobalNamespace::AudioSourceController::*)(::GlobalNamespace::UnityFilterType)>(&::GlobalNamespace::AudioSourceController::AddUnityFilter)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x180490660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddUnityFilter", {}, {::i2c::type_of<::GlobalNamespace::UnityFilterType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.ChangeTransformToFollow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::AudioSourceController::ChangeTransformToFollow)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180490e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"ChangeTransformToFollow", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioSourceController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioSourceController::*)()>(&::GlobalNamespace::AudioSourceController::_ctor)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1804972e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioSourceController::__cordl_internal_get__cachedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__cachedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTransform;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTransform = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioSourceController::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSource = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceRefs>& GlobalNamespace::AudioSourceController::__cordl_internal_get__audioSourceRefs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSourceRefs;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceRefs> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__audioSourceRefs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSourceRefs;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__audioSourceRefs(::UnityW<::GlobalNamespace::AudioSourceRefs>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSourceRefs = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::AudioSourceController::__cordl_internal_get__currentCue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCue;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__currentCue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCue;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__currentCue(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentCue = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__originAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originAssets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__originAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originAssets;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__originAssets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originAssets = value;
}
constexpr ::GlobalNamespace::AudioSourceController_AudioState& GlobalNamespace::AudioSourceController::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::GlobalNamespace::AudioSourceController_AudioState const& GlobalNamespace::AudioSourceController::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__State_k__BackingField(::GlobalNamespace::AudioSourceController_AudioState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__Priority_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Priority_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__Priority_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Priority_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__Priority_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Priority_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__chainOfVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chainOfVolume;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__chainOfVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chainOfVolume;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__chainOfVolume(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chainOfVolume = value;
}
constexpr ::UnityW<::UnityEngine::Object>& GlobalNamespace::AudioSourceController::__cordl_internal_get__owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____owner;
}
constexpr ::UnityW<::UnityEngine::Object> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____owner;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__owner(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____owner = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioSourceController::__cordl_internal_get__followTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__followTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followTransform;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__followTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followTransform = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::AudioSourceController::__cordl_internal_get__clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clip;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__clip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clip = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioBus>& GlobalNamespace::AudioSourceController::__cordl_internal_get__bus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bus;
}
constexpr ::UnityW<::GlobalNamespace::AudioBus> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__bus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bus;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__bus(::UnityW<::GlobalNamespace::AudioBus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bus = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loop = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__finalVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalVolume;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__finalVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalVolume;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__finalVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finalVolume = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioSourceController::__cordl_internal_get__attenuationVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attenuationVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__attenuationVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attenuationVol;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__attenuationVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attenuationVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioSourceController::__cordl_internal_get__fadeVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__fadeVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeVol;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__fadeVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioSourceController::__cordl_internal_get__rtpcVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rtpcVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__rtpcVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rtpcVol;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__rtpcVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rtpcVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioSourceController::__cordl_internal_get__hibernationVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hibernationVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__hibernationVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hibernationVol;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__hibernationVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hibernationVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioSourceController::__cordl_internal_get__audioSettingsVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSettingsVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__audioSettingsVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSettingsVol;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__audioSettingsVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSettingsVol = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptableVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptableVolume_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptableVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptableVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__ScriptableVolume_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScriptableVolume_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitch;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitch = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptablePitch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptablePitch_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptablePitch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptablePitch_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__ScriptablePitch_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScriptablePitch_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__pan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pan;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__pan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pan;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__pan(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pan = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptablePan_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptablePan_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptablePan_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptablePan_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__ScriptablePan_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScriptablePan_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__spatialBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialBlend;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__spatialBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialBlend;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__spatialBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spatialBlend = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptableSpatialBlend_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptableSpatialBlend_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptableSpatialBlend_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptableSpatialBlend_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__ScriptableSpatialBlend_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScriptableSpatialBlend_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spread;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spread;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__spread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spread = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptableSpread_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptableSpread_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__ScriptableSpread_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScriptableSpread_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__ScriptableSpread_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScriptableSpread_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__doppler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doppler;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__doppler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doppler;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__doppler(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doppler = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__playHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playHead;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__playHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playHead;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__playHead(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playHead = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__playHeadOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playHeadOffset;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__playHeadOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playHeadOffset;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__playHeadOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playHeadOffset = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__lastPlayHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPlayHead;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__lastPlayHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPlayHead;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__lastPlayHead(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPlayHead = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__fadeTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeTimer;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__fadeTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeTimer;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__fadeTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeTimer = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__targetFadeInTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetFadeInTime;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__targetFadeInTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetFadeInTime;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__targetFadeInTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetFadeInTime = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__targetFadeOutTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetFadeOutTime;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__targetFadeOutTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetFadeOutTime;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__targetFadeOutTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetFadeOutTime = value;
}
constexpr double_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__scheduledStartDSPTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledStartDSPTime;
}
constexpr double_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__scheduledStartDSPTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledStartDSPTime;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__scheduledStartDSPTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scheduledStartDSPTime = value;
}
constexpr double_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__scheduledEndDSPTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledEndDSPTime;
}
constexpr double_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__scheduledEndDSPTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduledEndDSPTime;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__scheduledEndDSPTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scheduledEndDSPTime = value;
}
constexpr double_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__playedDSPTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playedDSPTime;
}
constexpr double_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__playedDSPTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playedDSPTime;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__playedDSPTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playedDSPTime = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionBase>& GlobalNamespace::AudioSourceController::__cordl_internal_get__occlusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____occlusion;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionBase> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__occlusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____occlusion;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__occlusion(::UnityW<::GlobalNamespace::AudioOcclusionBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____occlusion = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioFilterMixer>& GlobalNamespace::AudioSourceController::__cordl_internal_get__filterMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterMixer;
}
constexpr ::UnityW<::GlobalNamespace::AudioFilterMixer> const& GlobalNamespace::AudioSourceController::__cordl_internal_get__filterMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterMixer;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__filterMixer(::UnityW<::GlobalNamespace::AudioFilterMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterMixer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__filters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filters;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__filters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filters;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__filters(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__unityFilterWrappers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityFilterWrappers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__unityFilterWrappers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityFilterWrappers;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__unityFilterWrappers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unityFilterWrappers = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__filterSynthesizerMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterSynthesizerMode;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__filterSynthesizerMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterSynthesizerMode;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__filterSynthesizerMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterSynthesizerMode = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__bypassFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypassFilters;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__bypassFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypassFilters;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__bypassFilters(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypassFilters = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__SyncPitchMultiplier_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SyncPitchMultiplier_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__SyncPitchMultiplier_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SyncPitchMultiplier_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__SyncPitchMultiplier_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SyncPitchMultiplier_k__BackingField = value;
}
constexpr ::GlobalNamespace::IAudioRTPCXProvider*& GlobalNamespace::AudioSourceController::__cordl_internal_get__XProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____XProvider_k__BackingField;
}
constexpr ::GlobalNamespace::IAudioRTPCXProvider* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__XProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____XProvider_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__XProvider_k__BackingField(::GlobalNamespace::IAudioRTPCXProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____XProvider_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__RTPC_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RTPC_k__BackingField;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__RTPC_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RTPC_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__RTPC_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RTPC_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__UpdatingAttenuation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdatingAttenuation_k__BackingField;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__UpdatingAttenuation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdatingAttenuation_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__UpdatingAttenuation_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdatingAttenuation_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__Hibernated_VoiceLimiting_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hibernated_VoiceLimiting_k__BackingField;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__Hibernated_VoiceLimiting_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hibernated_VoiceLimiting_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__Hibernated_VoiceLimiting_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hibernated_VoiceLimiting_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__Hibernated_Forced_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hibernated_Forced_k__BackingField;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__Hibernated_Forced_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hibernated_Forced_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__Hibernated_Forced_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hibernated_Forced_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AudioSourceController::__cordl_internal_get__Hibernated_Attenuation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hibernated_Attenuation_k__BackingField;
}
constexpr bool const& GlobalNamespace::AudioSourceController::__cordl_internal_get__Hibernated_Attenuation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hibernated_Attenuation_k__BackingField;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__Hibernated_Attenuation_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hibernated_Attenuation_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioSourceController::__cordl_internal_get__hibernationFadeTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hibernationFadeTimer;
}
constexpr float_t const& GlobalNamespace::AudioSourceController::__cordl_internal_get__hibernationFadeTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hibernationFadeTimer;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__hibernationFadeTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hibernationFadeTimer = value;
}
constexpr ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__getXFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getXFunc;
}
constexpr ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__getXFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getXFunc;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__getXFunc(::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getXFunc = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__onStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStop;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__onStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStop;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__onStop(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStop = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__onFadeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFadeOut;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__onFadeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onFadeOut;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__onFadeOut(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onFadeOut = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__onPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPlay;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__onPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPlay;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__onPlay(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPlay = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__onPause()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPause;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__onPause() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPause;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__onPause(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPause = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__onHibernate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onHibernate;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__onHibernate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onHibernate;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__onHibernate(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onHibernate = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*& GlobalNamespace::AudioSourceController::__cordl_internal_get__onWakeUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onWakeUp;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>* const& GlobalNamespace::AudioSourceController::__cordl_internal_get__onWakeUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onWakeUp;
}
constexpr void GlobalNamespace::AudioSourceController::__cordl_internal_set__onWakeUp(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onWakeUp = value;
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::AudioSourceController::get_CachedTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_CachedTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioSource> GlobalNamespace::AudioSourceController::get_AudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_AudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioSourceRefs> GlobalNamespace::AudioSourceController::get_AudioSourceRefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_AudioSourceRefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceRefs>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SoundCue> GlobalNamespace::AudioSourceController::get_Cue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Cue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundCue>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>* GlobalNamespace::AudioSourceController::get_OriginAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_OriginAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSourceController_AudioState GlobalNamespace::AudioSourceController::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioSourceController_AudioState>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_State(::GlobalNamespace::AudioSourceController_AudioState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_State", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController_AudioState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::AudioSourceController::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_Priority(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_Priority", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>* GlobalNamespace::AudioSourceController::get_ChainOfVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ChainOfVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioVolume*>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> GlobalNamespace::AudioSourceController::get_Owner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Owner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::AudioSourceController::get_FollowTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FollowTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_FollowTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_FollowTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::AudioSourceController::get_Clip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Clip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioBus> GlobalNamespace::AudioSourceController::get_Bus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Bus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioBus>>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_FinalVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FinalVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_AttenuationVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_AttenuationVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_FadeVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FadeVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_RTPCVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_RTPCVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_HibernationVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_HibernationVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_AudioSettingsVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_AudioSettingsVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_ScriptableVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptableVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_ScriptableVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptableVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioSourceController::get_Pitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Pitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_ScriptablePitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptablePitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_ScriptablePitch(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptablePitch", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioSourceController::get_Pan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Pan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_ScriptablePan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptablePan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_ScriptablePan(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptablePan", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioSourceController::get_SpatialBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_SpatialBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_ScriptableSpatialBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptableSpatialBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_ScriptableSpatialBlend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptableSpatialBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioSourceController::get_Spread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Spread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_ScriptableSpread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScriptableSpread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_ScriptableSpread(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_ScriptableSpread", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioSourceController::get_Doppler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Doppler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_PlayHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_PlayHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_PlayHeadMoving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_PlayHeadMoving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_FadeTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FadeTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_TargetFadeInTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_TargetFadeInTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::get_TargetFadeOutTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_TargetFadeOutTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::AudioSourceController::get_ScheduledStartDSPTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScheduledStartDSPTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::AudioSourceController::get_ScheduledEndDSPTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_ScheduledEndDSPTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::AudioSourceController::get_PlayedDSPTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_PlayedDSPTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioOcclusionBase> GlobalNamespace::AudioSourceController::get_Occlusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Occlusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioOcclusionBase>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioFilterMixer> GlobalNamespace::AudioSourceController::get_FilterMixer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FilterMixer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioFilterMixer>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>* GlobalNamespace::AudioSourceController::get_Filters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Filters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>* GlobalNamespace::AudioSourceController::get_UnityFilterWrappers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_UnityFilterWrappers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnityFilterBase>>*>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_FilterSynthesizerMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_FilterSynthesizerMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_FilterSynthesizerMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_FilterSynthesizerMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioSourceController::get_BypassFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_BypassFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_BypassFilters(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_BypassFilters", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioSourceController::get_SyncPitchMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_SyncPitchMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_SyncPitchMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_SyncPitchMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::AudioSourceController::get_XProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_XProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IAudioRTPCXProvider*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_XProvider(::GlobalNamespace::IAudioRTPCXProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_XProvider", {}, {::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioSourceController::get_RTPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_RTPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_RTPC(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_RTPC", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioSourceController::get_UpdatingAttenuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_UpdatingAttenuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_UpdatingAttenuation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_UpdatingAttenuation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::AudioSourceController::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_IsActuallyPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsActuallyPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_IsScheduledToPlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsScheduledToPlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_IsFadingOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsFadingOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_IsHibernating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_IsHibernating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::get_Hibernated_VoiceLimiting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Hibernated_VoiceLimiting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_Hibernated_VoiceLimiting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_Hibernated_VoiceLimiting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioSourceController::get_Hibernated_Forced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Hibernated_Forced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_Hibernated_Forced(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_Hibernated_Forced", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioSourceController::get_Hibernated_Attenuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"get_Hibernated_Attenuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::set_Hibernated_Attenuation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"set_Hibernated_Attenuation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioSourceController::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioSourceController::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioSourceController::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioSourceController::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioSourceController::DoUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"DoUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline bool GlobalNamespace::AudioSourceController::Play(::GlobalNamespace::SoundCue*  cue, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, bool  rtpc, ::UnityEngine::Transform*  followTransform, double_t  delayOverride, float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes, bool  virtualize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Play", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cue, worldPosition, owner, xProvider, rtpc, followTransform, delayOverride, fadeInOverride, clipOverride, getXFunc, volumes, virtualize);
}
inline bool GlobalNamespace::AudioSourceController::PlayAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PlayAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::PlayAudioSourceScheduled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PlayAudioSourceScheduled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::SetPlaying(::GlobalNamespace::SoundCue*  cue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetPlaying", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cue);
}
inline void GlobalNamespace::AudioSourceController::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::FadeOut(float_t  fadeOutOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"FadeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fadeOutOverride);
}
inline void GlobalNamespace::AudioSourceController::Pause(bool  freeAudioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Pause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, freeAudioSource);
}
inline bool GlobalNamespace::AudioSourceController::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::PlayInternal(double_t  delay, bool  virtualize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PlayInternal", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, delay, virtualize);
}
inline bool GlobalNamespace::AudioSourceController::SetupController(float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes, bool  virtualize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetupController", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fadeInOverride, clipOverride, volumes, virtualize);
}
inline void GlobalNamespace::AudioSourceController::ResetController(bool  stopUpdating)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"ResetController", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stopUpdating);
}
inline bool GlobalNamespace::AudioSourceController::SetupAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetupAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::ResetAudioSource(bool  freeAudioSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"ResetAudioSource", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, freeAudioSource);
}
inline void GlobalNamespace::AudioSourceController::HibernateInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"HibernateInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::Hibernate_Force(bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Hibernate_Force", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, immediate);
}
inline void GlobalNamespace::AudioSourceController::Hibernate_VoiceLimiting(bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Hibernate_VoiceLimiting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, immediate);
}
inline void GlobalNamespace::AudioSourceController::Hibernate_Attenuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"Hibernate_Attenuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::WakeUpInternal(bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"WakeUpInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, immediate);
}
inline bool GlobalNamespace::AudioSourceController::WakeUp(bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"WakeUp", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, immediate);
}
inline bool GlobalNamespace::AudioSourceController::VirtualizeTest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"VirtualizeTest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioSourceController::WakeUp_VoiceLimiting(bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"WakeUp_VoiceLimiting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, immediate);
}
inline void GlobalNamespace::AudioSourceController::WakeUp_Attenuation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"WakeUp_Attenuation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioSourceController::CalculateVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"CalculateVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::AddVolume(::GlobalNamespace::IAudioVolume*  vol, ::UnityEngine::Object*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddVolume", {}, {::i2c::type_of<::GlobalNamespace::IAudioVolume*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vol, owner);
}
inline void GlobalNamespace::AudioSourceController::RemoveVolume(::GlobalNamespace::IAudioVolume*  vol, ::UnityEngine::Object*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveVolume", {}, {::i2c::type_of<::GlobalNamespace::IAudioVolume*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vol, owner);
}
inline void GlobalNamespace::AudioSourceController::PerformFade(float_t  dt, float_t  duration, ::by_ref<float_t>  timer, ::by_ref<::GlobalNamespace::AudioVolume*>  vol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PerformFade", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AudioVolume*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt, duration, timer, vol);
}
inline void GlobalNamespace::AudioSourceController::PerformRTPC(bool  perform, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PerformRTPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, perform, deltaTime);
}
inline bool GlobalNamespace::AudioSourceController::GetRTPCValue(::GlobalNamespace::AudioRTPC_YAxisType  type, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"GetRTPCValue", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_YAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, value);
}
inline void GlobalNamespace::AudioSourceController::PerformOcclusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"PerformOcclusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::TriggerEvents(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, bool  clearAfter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"TriggerEvents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventList, clearAfter);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::AddEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEvent", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventList, owner, data, callback);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::AddEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEvent", {::i2c::class_of<TOwner>()}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventList, owner, callback);
}
inline void GlobalNamespace::AudioSourceController::AddEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventList, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::RemoveEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEvent", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventList, owner, data, callback);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::RemoveEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEvent", {::i2c::class_of<TOwner>()}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventList, owner, callback);
}
inline void GlobalNamespace::AudioSourceController::RemoveEvent(::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*  eventList, ::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::AudioSourceController_ASCEvent>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventList, callback);
}
inline void GlobalNamespace::AudioSourceController::OnStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::AddEventOnStop(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnStop", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::AddEventOnStop(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnStop", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::AddEventOnStop(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnStop", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnStop(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnStop", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnStop(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnStop", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::RemoveEventOnStop(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnStop", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::AudioSourceController::OnFadeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnFadeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::AddEventOnFadeOut(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnFadeOut", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::AddEventOnFadeOut(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnFadeOut", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::AddEventOnFadeOut(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnFadeOut", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnFadeOut(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnFadeOut", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnFadeOut(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnFadeOut", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::RemoveEventOnFadeOut(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnFadeOut", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::AudioSourceController::OnPause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnPause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::AddEventOnPause(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnPause", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::AddEventOnPause(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnPause", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::AddEventOnPause(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnPause", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnPause(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnPause", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnPause(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnPause", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::RemoveEventOnPause(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnPause", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::AudioSourceController::OnPlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnPlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::AddEventOnPlay(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnPlay", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::AddEventOnPlay(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnPlay", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::AddEventOnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnPlay(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnPlay", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnPlay(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnPlay", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::RemoveEventOnPlay(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnPlay", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::AudioSourceController::OnHibernate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnHibernate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::AddEventOnHibernate(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnHibernate", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::AddEventOnHibernate(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnHibernate", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::AddEventOnHibernate(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnHibernate", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnHibernate(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnHibernate", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnHibernate(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnHibernate", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::RemoveEventOnHibernate(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnHibernate", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::AudioSourceController::OnWakeUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnWakeUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::AddEventOnWakeUp(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnWakeUp", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::AddEventOnWakeUp(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"AddEventOnWakeUp", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::AddEventOnWakeUp(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddEventOnWakeUp", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename TOwner>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnWakeUp(TOwner  owner, ::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnWakeUp", {::i2c::class_of<TOwner>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<::System::Action_2<TOwner,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, callback);
}
template<typename TOwner,typename UData>
inline void GlobalNamespace::AudioSourceController::RemoveEventOnWakeUp(TOwner  owner, UData  data, ::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                    {"RemoveEventOnWakeUp", {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}, {::i2c::type_of<TOwner>(), ::i2c::type_of<UData>(), ::i2c::type_of<::System::Action_3<TOwner,UData,::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOwner>(), ::i2c::class_of<UData>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, data, callback);
}
inline void GlobalNamespace::AudioSourceController::RemoveEventOnWakeUp(::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveEventOnWakeUp", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline bool GlobalNamespace::AudioSourceController::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::AudioSourceController::OnScheduledStartTimeReached(double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnScheduledStartTimeReached", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline bool GlobalNamespace::AudioSourceController::SetScheduledStartTime(double_t  dspTime, bool  moveEnd, bool  skipFadeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetScheduledStartTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dspTime, moveEnd, skipFadeOut);
}
inline bool GlobalNamespace::AudioSourceController::SetScheduledEndTime(double_t  dspTime, bool  skipFadeOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SetScheduledEndTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dspTime, skipFadeOut);
}
inline void GlobalNamespace::AudioSourceController::SeekTo(float_t  targetTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"SeekTo", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTime);
}
inline ::UnityW<::GlobalNamespace::AudioFilterBase> GlobalNamespace::AudioSourceController::AddFilter(::GlobalNamespace::AudioFilterType  type, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddFilter", {}, {::i2c::type_of<::GlobalNamespace::AudioFilterType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioFilterBase>>(this, ___internal_method, type, index);
}
inline void GlobalNamespace::AudioSourceController::AddFilter(::GlobalNamespace::IAudioFilter*  filter, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddFilter", {}, {::i2c::type_of<::GlobalNamespace::IAudioFilter*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter, index);
}
inline void GlobalNamespace::AudioSourceController::RemoveFilter(::GlobalNamespace::IAudioFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"RemoveFilter", {}, {::i2c::type_of<::GlobalNamespace::IAudioFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline ::UnityW<::GlobalNamespace::UnityFilterBase> GlobalNamespace::AudioSourceController::AddUnityFilter(::GlobalNamespace::UnityFilterType  filterType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"AddUnityFilter", {}, {::i2c::type_of<::GlobalNamespace::UnityFilterType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::UnityFilterBase>>(this, ___internal_method, filterType);
}
inline void GlobalNamespace::AudioSourceController::ChangeTransformToFollow(::UnityEngine::Transform*  newTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"ChangeTransformToFollow", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTransform);
}
inline void GlobalNamespace::AudioSourceController::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioSourceController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioSourceController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioSourceController* GlobalNamespace::AudioSourceController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioSourceController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::AudioSourceController::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::AudioSourceController::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::AudioSourceController::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::AudioSourceController::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSourceController::AudioSourceController()   {
}
