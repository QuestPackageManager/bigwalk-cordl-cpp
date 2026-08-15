#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyQualityManager.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SkyQualityManager_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "GlobalNamespace/zzzz__LightQualityData_def.hpp"
#include "GlobalNamespace/zzzz__SkyQualityManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::*)()>(&::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x18042d890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SkyQualityManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_myId_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::SkyQualityManager__EnableAfterWait_d__7(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::SkyQualityManager>  __4__this, int32_t  _myId_5__2, int32_t  _i_5__3, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_myId_5__2 = _myId_5__2;
this->_i_5__3 = _i_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyQualityManager__EnableAfterWait_d__7::SkyQualityManager__EnableAfterWait_d__7()   {
}
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyQualityManager::*)()>(&::GlobalNamespace::SkyQualityManager::Awake)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180429f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager.ApplyQualityEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyQualityManager::*)(int32_t)>(&::GlobalNamespace::SkyQualityManager::ApplyQualityEffects)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180429e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager.EnableAfterWait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::SkyQualityManager::*)()>(&::GlobalNamespace::SkyQualityManager::EnableAfterWait)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18042a0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"EnableAfterWait", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyQualityManager::*)()>(&::GlobalNamespace::SkyQualityManager::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18042a200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyQualityManager::*)()>(&::GlobalNamespace::SkyQualityManager::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18042a110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager.SetVegetationShadowCullDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::SkyQualityManager::SetVegetationShadowCullDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18042a2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"SetVegetationShadowCullDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyQualityManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyQualityManager::*)()>(&::GlobalNamespace::SkyQualityManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::SkyQualityManager::__cordl_internal_get_sunLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::SkyQualityManager::__cordl_internal_get_sunLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunLight;
}
constexpr void GlobalNamespace::SkyQualityManager::__cordl_internal_set_sunLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunLight = value;
}
constexpr ::UnityW<::GlobalNamespace::LightQualityData>& GlobalNamespace::SkyQualityManager::__cordl_internal_get_sunlightQualityData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunlightQualityData;
}
constexpr ::UnityW<::GlobalNamespace::LightQualityData> const& GlobalNamespace::SkyQualityManager::__cordl_internal_get_sunlightQualityData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunlightQualityData;
}
constexpr void GlobalNamespace::SkyQualityManager::__cordl_internal_set_sunlightQualityData(::UnityW<::GlobalNamespace::LightQualityData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunlightQualityData = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SkyQualityManager::__cordl_internal_get_mappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mappings;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SkyQualityManager::__cordl_internal_get_mappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mappings;
}
constexpr void GlobalNamespace::SkyQualityManager::__cordl_internal_set_mappings(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mappings = value;
}
constexpr bool& GlobalNamespace::SkyQualityManager::__cordl_internal_get_ignoreQualityChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreQualityChanges;
}
constexpr bool const& GlobalNamespace::SkyQualityManager::__cordl_internal_get_ignoreQualityChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreQualityChanges;
}
constexpr void GlobalNamespace::SkyQualityManager::__cordl_internal_set_ignoreQualityChanges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreQualityChanges = value;
}
constexpr int32_t& GlobalNamespace::SkyQualityManager::__cordl_internal_get__currentTimerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTimerId;
}
constexpr int32_t const& GlobalNamespace::SkyQualityManager::__cordl_internal_get__currentTimerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTimerId;
}
constexpr void GlobalNamespace::SkyQualityManager::__cordl_internal_set__currentTimerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTimerId = value;
}
inline void GlobalNamespace::SkyQualityManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyQualityManager::ApplyQualityEffects(int32_t  qualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityLevel);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::SkyQualityManager::EnableAfterWait()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"EnableAfterWait", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void GlobalNamespace::SkyQualityManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyQualityManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyQualityManager::SetVegetationShadowCullDistance(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {"SetVegetationShadowCullDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, distance);
}
inline void GlobalNamespace::SkyQualityManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyQualityManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkyQualityManager* GlobalNamespace::SkyQualityManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkyQualityManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyQualityManager::SkyQualityManager()   {
}
