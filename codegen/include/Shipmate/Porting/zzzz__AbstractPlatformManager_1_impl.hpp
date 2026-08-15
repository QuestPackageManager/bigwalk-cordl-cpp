#pragma once
// IWYU pragma private; include "Shipmate/Porting/AbstractPlatformManager_1.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Shipmate/Utils/zzzz__SingletonBehaviour_1_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "GlobalNamespace/zzzz__AbstractPlatformEnvironment_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformAchievements_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformCore_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLeaderboards_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformLobby_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformMarketplace_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformRichPresence_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformStorage_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformUsers_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlayablePlatform_def.hpp"
#include "Shipmate/Porting/zzzz__IPlatformAddon_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename T>
inline void Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "aPlatform", ty: "::Shipmate::Porting::AbstractPlayablePlatform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>::AbstractPlatformManager_1__Initialize_d__2(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityW<T>  __4__this, ::Shipmate::Porting::AbstractPlayablePlatform*  aPlatform, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->aPlatform = aPlatform;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::Shipmate::Porting::AbstractPlatformManager_1__Initialize_d__2<T>::AbstractPlatformManager_1__Initialize_d__2()   {
}
template<typename T>
constexpr ::Shipmate::Porting::AbstractPlayablePlatform*& Shipmate::Porting::AbstractPlatformManager_1<T>::__cordl_internal_get_mPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPlatform;
}
template<typename T>
constexpr ::Shipmate::Porting::AbstractPlayablePlatform* const& Shipmate::Porting::AbstractPlatformManager_1<T>::__cordl_internal_get_mPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mPlatform;
}
template<typename T>
constexpr void Shipmate::Porting::AbstractPlatformManager_1<T>::__cordl_internal_set_mPlatform(::Shipmate::Porting::AbstractPlayablePlatform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mPlatform = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::IPlatformAddon*>*& Shipmate::Porting::AbstractPlatformManager_1<T>::__cordl_internal_get_mRegisteredAddons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mRegisteredAddons;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::Shipmate::Porting::IPlatformAddon*>* const& Shipmate::Porting::AbstractPlatformManager_1<T>::__cordl_internal_get_mRegisteredAddons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mRegisteredAddons;
}
template<typename T>
constexpr void Shipmate::Porting::AbstractPlatformManager_1<T>::__cordl_internal_set_mRegisteredAddons(::System::Collections::Generic::List_1<::Shipmate::Porting::IPlatformAddon*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mRegisteredAddons = value;
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::AbstractPlatformManager_1<T>::Initialize(::Shipmate::Porting::AbstractPlayablePlatform*  aPlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"Initialize", {}, {::i2c::type_of<::Shipmate::Porting::AbstractPlayablePlatform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aPlatform);
}
template<typename T>
inline void Shipmate::Porting::AbstractPlatformManager_1<T>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Shipmate::Porting::AbstractPlatformManager_1<T>::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Shipmate::Porting::AbstractPlatformManager_1<T>::PlatformExists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"PlatformExists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename T>
template<typename T2>
inline T2 Shipmate::Porting::AbstractPlatformManager_1<T>::RegisterAddon(T2  addon)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                    {"RegisterAddon", {::i2c::class_of<T2>()}, {::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<T2>(nullptr, ___internal_method, addon);
}
template<typename T>
template<typename T2>
inline T2 Shipmate::Porting::AbstractPlatformManager_1<T>::GetAddon()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                    {"GetAddon", {::i2c::class_of<T2>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<T2>(nullptr, ___internal_method);
}
template<typename T>
inline bool Shipmate::Porting::AbstractPlatformManager_1<T>::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlayablePlatform* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Platform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Platform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlayablePlatform*>(this, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformCore* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Core()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Core", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformCore*>(nullptr, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformAchievements* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Achievements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Achievements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformAchievements*>(nullptr, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformMarketplace* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Market()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Market", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformMarketplace*>(nullptr, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformStorage* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Storage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Storage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformStorage*>(nullptr, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformRichPresence* Shipmate::Porting::AbstractPlatformManager_1<T>::get_RichPresence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_RichPresence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformRichPresence*>(nullptr, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::AbstractPlatformEnvironment* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Environment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Environment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AbstractPlatformEnvironment*>(nullptr, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformUsers* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Users()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Users", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformUsers*>(nullptr, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformLobby* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Lobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Lobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformLobby*>(nullptr, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformLeaderboards* Shipmate::Porting::AbstractPlatformManager_1<T>::get_Leaderboards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {"get_Leaderboards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmate::Porting::AbstractPlatformLeaderboards*>(nullptr, ___internal_method);
}
template<typename T>
inline void Shipmate::Porting::AbstractPlatformManager_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Shipmate::Porting::AbstractPlatformManager_1<T>* Shipmate::Porting::AbstractPlatformManager_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::AbstractPlatformManager_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Shipmate::Porting::AbstractPlatformManager_1<T>::AbstractPlatformManager_1()   {
}
