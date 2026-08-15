#pragma once
// IWYU pragma private; include "Mirror/NetworkLoop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkLoop_def.hpp"
#include "Mirror/zzzz__NetworkLoop_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkLoop_AddMode::NetworkLoop_AddMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkLoop_AddMode::NetworkLoop_AddMode()   {
}
constexpr ::Mirror::NetworkLoop_AddMode  Mirror::NetworkLoop_AddMode::Beginning{static_cast<int32_t>(0x0)};
constexpr ::Mirror::NetworkLoop_AddMode  Mirror::NetworkLoop_AddMode::End{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Mirror::NetworkLoop___c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkLoop___c__DisplayClass4_0::*)()>(&::Mirror::NetworkLoop___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkLoop___c__DisplayClass4_0._FindPlayerLoopEntryIndex_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkLoop___c__DisplayClass4_0::*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&::Mirror::NetworkLoop___c__DisplayClass4_0::_FindPlayerLoopEntryIndex_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181552810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop___c__DisplayClass4_0*>(),
                        {"<FindPlayerLoopEntryIndex>b__0", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*& Mirror::NetworkLoop___c__DisplayClass4_0::__cordl_internal_get_function()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* const& Mirror::NetworkLoop___c__DisplayClass4_0::__cordl_internal_get_function() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr void Mirror::NetworkLoop___c__DisplayClass4_0::__cordl_internal_set_function(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___function = value;
}
inline void Mirror::NetworkLoop___c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop___c__DisplayClass4_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkLoop___c__DisplayClass4_0::_FindPlayerLoopEntryIndex_b__0(::UnityEngine::LowLevel::PlayerLoopSystem  elem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop___c__DisplayClass4_0*>(),
                        {"<FindPlayerLoopEntryIndex>b__0", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elem);
}
inline ::Mirror::NetworkLoop___c__DisplayClass4_0* Mirror::NetworkLoop___c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkLoop___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkLoop___c__DisplayClass4_0::NetworkLoop___c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::Mirror::NetworkLoop___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkLoop___c__DisplayClass5_0::*)()>(&::Mirror::NetworkLoop___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkLoop___c__DisplayClass5_0._AddToPlayerLoop_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkLoop___c__DisplayClass5_0::*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&::Mirror::NetworkLoop___c__DisplayClass5_0::_AddToPlayerLoop_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181552810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop___c__DisplayClass5_0*>(),
                        {"<AddToPlayerLoop>b__0", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*& Mirror::NetworkLoop___c__DisplayClass5_0::__cordl_internal_get_function()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* const& Mirror::NetworkLoop___c__DisplayClass5_0::__cordl_internal_get_function() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr void Mirror::NetworkLoop___c__DisplayClass5_0::__cordl_internal_set_function(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___function = value;
}
inline void Mirror::NetworkLoop___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop___c__DisplayClass5_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkLoop___c__DisplayClass5_0::_AddToPlayerLoop_b__0(::UnityEngine::LowLevel::PlayerLoopSystem  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop___c__DisplayClass5_0*>(),
                        {"<AddToPlayerLoop>b__0", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::Mirror::NetworkLoop___c__DisplayClass5_0* Mirror::NetworkLoop___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkLoop___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkLoop___c__DisplayClass5_0::NetworkLoop___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::Mirror::NetworkLoop.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkLoop::ResetStatics)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181545710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkLoop.FindPlayerLoopEntryIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, ::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Type*)>(&::Mirror::NetworkLoop::FindPlayerLoopEntryIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181545450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"FindPlayerLoopEntryIndex", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkLoop.AddToPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*, ::System::Type*, ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::System::Type*, ::Mirror::NetworkLoop_AddMode)>(&::Mirror::NetworkLoop::AddToPlayerLoop)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1815451d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"AddToPlayerLoop", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Mirror::NetworkLoop_AddMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkLoop.RuntimeInitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkLoop::RuntimeInitializeOnLoad)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181545780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"RuntimeInitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkLoop.NetworkEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkLoop::NetworkEarlyUpdate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181545550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"NetworkEarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkLoop.NetworkLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkLoop::NetworkLateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815456c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"NetworkLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkLoop::setStaticF_OnEarlyUpdate(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnEarlyUpdate", ::Mirror::NetworkLoop*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Mirror::NetworkLoop::getStaticF_OnEarlyUpdate()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnEarlyUpdate", ::Mirror::NetworkLoop*>();
}
inline void Mirror::NetworkLoop::setStaticF_OnLateUpdate(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnLateUpdate", ::Mirror::NetworkLoop*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Mirror::NetworkLoop::getStaticF_OnLateUpdate()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnLateUpdate", ::Mirror::NetworkLoop*>();
}
inline void Mirror::NetworkLoop::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t Mirror::NetworkLoop::FindPlayerLoopEntryIndex(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function, ::UnityEngine::LowLevel::PlayerLoopSystem  playerLoop, ::System::Type*  playerLoopSystemType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"FindPlayerLoopEntryIndex", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), ::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, function, playerLoop, playerLoopSystemType);
}
inline bool Mirror::NetworkLoop::AddToPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  function, ::System::Type*  ownerType, ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  playerLoop, ::System::Type*  playerLoopSystemType, ::Mirror::NetworkLoop_AddMode  addMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"AddToPlayerLoop", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Mirror::NetworkLoop_AddMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, function, ownerType, playerLoop, playerLoopSystemType, addMode);
}
inline void Mirror::NetworkLoop::RuntimeInitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"RuntimeInitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkLoop::NetworkEarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"NetworkEarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkLoop::NetworkLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkLoop*>(),
                        {"NetworkLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkLoop::NetworkLoop()   {
}
