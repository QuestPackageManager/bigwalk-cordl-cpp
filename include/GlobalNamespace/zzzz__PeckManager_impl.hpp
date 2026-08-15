#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckManager.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "GlobalNamespace/zzzz__PeckManager_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__SyncDictionary_2_def.hpp"
#include "Mirror/zzzz__SyncIDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::*)()>(&::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18045a280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PeckManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::PeckManager__DelayedSetReadyForEffects_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PeckManager>  __4__this, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckManager__DelayedSetReadyForEffects_d__12::PeckManager__DelayedSetReadyForEffects_d__12()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PeckManager> (*)()>(&::GlobalNamespace::PeckManager::get_Instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180452b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.get_isReadyForEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckManager::*)()>(&::GlobalNamespace::PeckManager::get_isReadyForEffects)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"get_isReadyForEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.set_isReadyForEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)(bool)>(&::GlobalNamespace::PeckManager::set_isReadyForEffects)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180452bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"set_isReadyForEffects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)()>(&::GlobalNamespace::PeckManager::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180451640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.DelayedInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckManager::DelayedInitialize)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180451690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"DelayedInitialize", {}, {::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)()>(&::GlobalNamespace::PeckManager::OnStartClient)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180451d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                    {::i2c::class_of<::GlobalNamespace::PeckManager*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.DelayedSetReadyForEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)()>(&::GlobalNamespace::PeckManager::DelayedSetReadyForEffects)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180451850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"DelayedSetReadyForEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.OnContextChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)(::Mirror::SyncIDictionary_2_Operation<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>, ::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckManager::OnContextChange)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180451cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"OnContextChange", {}, {::i2c::type_of<::Mirror::SyncIDictionary_2_Operation<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.SendContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)(::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckManager::SendContext)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180452290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"SendContext", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TrackedPeckState*, ::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckManager::SetState)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804526d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::TrackedPeckState*>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.ServerReject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TrackedPeckState*, ::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PeckManager::ServerReject)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180452340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"ServerReject", {}, {::i2c::type_of<::GlobalNamespace::TrackedPeckState*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.Reject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)(::Mirror::NetworkConnection*, ::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PeckManager::Reject)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180452090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"Reject", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.ServerRetrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TrackedPeckState*, ::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckManager::ServerRetrigger)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1804524f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"ServerRetrigger", {}, {::i2c::type_of<::GlobalNamespace::TrackedPeckState*>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.Retrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)(::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckManager::Retrigger)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180452180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"Retrigger", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)()>(&::GlobalNamespace::PeckManager::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180452b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)()>(&::GlobalNamespace::PeckManager::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.UserCode_Reject__NetworkConnection__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)(::Mirror::NetworkConnection*, ::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::PeckManager::UserCode_Reject__NetworkConnection__ShellReference)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180452840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"UserCode_Reject__NetworkConnection__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.InvokeUserCode_Reject__NetworkConnection__ShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PeckManager::InvokeUserCode_Reject__NetworkConnection__ShellReference)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804518e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"InvokeUserCode_Reject__NetworkConnection__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.UserCode_Retrigger__ShellReference__PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckManager::*)(::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckManager::UserCode_Retrigger__ShellReference__PeckContext)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180452910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"UserCode_Retrigger__ShellReference__PeckContext", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckManager.InvokeUserCode_Retrigger__ShellReference__PeckContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PeckManager::InvokeUserCode_Retrigger__ShellReference__PeckContext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180451a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"InvokeUserCode_Retrigger__ShellReference__PeckContext", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PeckManager::__cordl_internal_get__isReadyForEffects_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReadyForEffects_k__BackingField;
}
constexpr bool const& GlobalNamespace::PeckManager::__cordl_internal_get__isReadyForEffects_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReadyForEffects_k__BackingField;
}
constexpr void GlobalNamespace::PeckManager::__cordl_internal_set__isReadyForEffects_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isReadyForEffects_k__BackingField = value;
}
constexpr ::Mirror::SyncDictionary_2<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>*& GlobalNamespace::PeckManager::__cordl_internal_get_peckContexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckContexts;
}
constexpr ::Mirror::SyncDictionary_2<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>* const& GlobalNamespace::PeckManager::__cordl_internal_get_peckContexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckContexts;
}
constexpr void GlobalNamespace::PeckManager::__cordl_internal_set_peckContexts(::Mirror::SyncDictionary_2<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckContexts = value;
}
inline void GlobalNamespace::PeckManager::setStaticF__instance(::UnityW<::GlobalNamespace::PeckManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PeckManager>, "_instance", ::GlobalNamespace::PeckManager*>(std::forward<::UnityW<::GlobalNamespace::PeckManager>>(value));
}
inline ::UnityW<::GlobalNamespace::PeckManager> GlobalNamespace::PeckManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PeckManager>, "_instance", ::GlobalNamespace::PeckManager*>();
}
inline void GlobalNamespace::PeckManager::setStaticF_initializationQueue(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*, "initializationQueue", ::GlobalNamespace::PeckManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>* GlobalNamespace::PeckManager::getStaticF_initializationQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*, "initializationQueue", ::GlobalNamespace::PeckManager*>();
}
inline ::UnityW<::GlobalNamespace::PeckManager> GlobalNamespace::PeckManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PeckManager>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PeckManager::get_isReadyForEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"get_isReadyForEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PeckManager::set_isReadyForEffects(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"set_isReadyForEffects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckManager::DelayedInitialize(::GlobalNamespace::TrackedPeckState*  trackedPeckState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"DelayedInitialize", {}, {::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trackedPeckState);
}
inline void GlobalNamespace::PeckManager::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PeckManager*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckManager::DelayedSetReadyForEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"DelayedSetReadyForEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckManager::OnContextChange(::Mirror::SyncIDictionary_2_Operation<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>  op, ::GlobalNamespace::SeaShell_ShellReference  key, ::GlobalNamespace::PeckContext  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"OnContextChange", {}, {::i2c::type_of<::Mirror::SyncIDictionary_2_Operation<::GlobalNamespace::SeaShell_ShellReference,::GlobalNamespace::PeckContext>>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, key, item);
}
inline void GlobalNamespace::PeckManager::SendContext(::GlobalNamespace::SeaShell_ShellReference  shellReference, ::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"SendContext", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shellReference, peckContext);
}
inline void GlobalNamespace::PeckManager::SetState(::GlobalNamespace::TrackedPeckState*  peckState, ::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::TrackedPeckState*>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peckState, peckContext);
}
inline void GlobalNamespace::PeckManager::ServerReject(::GlobalNamespace::TrackedPeckState*  peckState, ::GlobalNamespace::PlayerCharacter*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"ServerReject", {}, {::i2c::type_of<::GlobalNamespace::TrackedPeckState*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peckState, player);
}
inline void GlobalNamespace::PeckManager::Reject(::Mirror::NetworkConnection*  target, ::GlobalNamespace::SeaShell_ShellReference  shellReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"Reject", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, shellReference);
}
inline void GlobalNamespace::PeckManager::ServerRetrigger(::GlobalNamespace::TrackedPeckState*  peckState, ::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"ServerRetrigger", {}, {::i2c::type_of<::GlobalNamespace::TrackedPeckState*>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, peckState, peckContext);
}
inline void GlobalNamespace::PeckManager::Retrigger(::GlobalNamespace::SeaShell_ShellReference  shellReference, ::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"Retrigger", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shellReference, peckContext);
}
inline void GlobalNamespace::PeckManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckManager::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckManager::UserCode_Reject__NetworkConnection__ShellReference(::Mirror::NetworkConnection*  target, ::GlobalNamespace::SeaShell_ShellReference  shellReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"UserCode_Reject__NetworkConnection__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, shellReference);
}
inline void GlobalNamespace::PeckManager::InvokeUserCode_Reject__NetworkConnection__ShellReference(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"InvokeUserCode_Reject__NetworkConnection__ShellReference", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PeckManager::UserCode_Retrigger__ShellReference__PeckContext(::GlobalNamespace::SeaShell_ShellReference  shellReference, ::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"UserCode_Retrigger__ShellReference__PeckContext", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shellReference, peckContext);
}
inline void GlobalNamespace::PeckManager::InvokeUserCode_Retrigger__ShellReference__PeckContext(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckManager*>(),
                        {"InvokeUserCode_Retrigger__ShellReference__PeckContext", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline ::GlobalNamespace::PeckManager* GlobalNamespace::PeckManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckManager::PeckManager()   {
}
