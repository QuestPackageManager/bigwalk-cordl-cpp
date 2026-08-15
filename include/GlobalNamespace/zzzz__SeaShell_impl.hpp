#pragma once
// IWYU pragma private; include "GlobalNamespace/SeaShell.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference.get_networkIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (::GlobalNamespace::SeaShell_ShellReference::*)()>(&::GlobalNamespace::SeaShell_ShellReference::get_networkIdentity)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18046cd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"get_networkIdentity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference.set_networkIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeaShell_ShellReference::*)(::Mirror::NetworkIdentity*)>(&::GlobalNamespace::SeaShell_ShellReference::set_networkIdentity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18046ce50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"set_networkIdentity", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference.get_isEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SeaShell_ShellReference::*)()>(&::GlobalNamespace::SeaShell_ShellReference::get_isEmpty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18046cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"get_isEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SeaShell_ShellReference::*)(::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::SeaShell_ShellReference::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18046cb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeaShell_ShellReference::*)(uint16_t)>(&::GlobalNamespace::SeaShell_ShellReference::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18046ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference.GetShell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SeaShell> (::GlobalNamespace::SeaShell_ShellReference::*)()>(&::GlobalNamespace::SeaShell_ShellReference::GetShell)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18046cc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"GetShell", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference.GetPeckSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PeckSwitch> (::GlobalNamespace::SeaShell_ShellReference::*)()>(&::GlobalNamespace::SeaShell_ShellReference::GetPeckSwitch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18046cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"GetPeckSwitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference.GetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerPose> (::GlobalNamespace::SeaShell_ShellReference::*)()>(&::GlobalNamespace::SeaShell_ShellReference::GetPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18046cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"GetPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell_ShellReference.GetPropHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropHome> (::GlobalNamespace::SeaShell_ShellReference::*)()>(&::GlobalNamespace::SeaShell_ShellReference::GetPropHome)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18046cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"GetPropHome", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Mirror::NetworkIdentity> GlobalNamespace::SeaShell_ShellReference::get_networkIdentity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"get_networkIdentity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(*this, ___internal_method);
}
inline void GlobalNamespace::SeaShell_ShellReference::set_networkIdentity(::Mirror::NetworkIdentity*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"set_networkIdentity", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::SeaShell_ShellReference::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"get_isEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::SeaShell_ShellReference::Equals(::GlobalNamespace::SeaShell_ShellReference  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void GlobalNamespace::SeaShell_ShellReference::_ctor(uint16_t  ticket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ticket);
}
inline ::UnityW<::GlobalNamespace::SeaShell> GlobalNamespace::SeaShell_ShellReference::GetShell()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"GetShell", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SeaShell>>(*this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PeckSwitch> GlobalNamespace::SeaShell_ShellReference::GetPeckSwitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"GetPeckSwitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PeckSwitch>>(*this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayerPose> GlobalNamespace::SeaShell_ShellReference::GetPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"GetPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerPose>>(*this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PropHome> GlobalNamespace::SeaShell_ShellReference::GetPropHome()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                        {"GetPropHome", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropHome>>(*this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::SeaShell_ShellReference::GetTicketed()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SeaShell_ShellReference>(),
                    {"GetTicketed", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>"
constexpr  GlobalNamespace::SeaShell_ShellReference::operator ::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>* GlobalNamespace::SeaShell_ShellReference::i___System__IEquatable_1___GlobalNamespace__SeaShell_ShellReference_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SeaShell_ShellReference>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ticket", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SeaShell_ShellReference::SeaShell_ShellReference(uint16_t  ticket, uint32_t  netId, int32_t  index) noexcept  {
this->ticket = ticket;
this->netId = netId;
this->index = index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeaShell_ShellReference::SeaShell_ShellReference()   {
}
//  Writing Method size for method: ::GlobalNamespace::SeaShell.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeaShell::*)()>(&::GlobalNamespace::SeaShell::OnStartClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046cb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                    {::i2c::class_of<::GlobalNamespace::SeaShell*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeaShell::*)()>(&::GlobalNamespace::SeaShell::OnStartServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046cb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                    {::i2c::class_of<::GlobalNamespace::SeaShell*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeaShell::*)()>(&::GlobalNamespace::SeaShell::Initialize)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x18046c6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeaShell::*)()>(&::GlobalNamespace::SeaShell::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SeaShell.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SeaShell::*)()>(&::GlobalNamespace::SeaShell::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerPose>>*& GlobalNamespace::SeaShell::__cordl_internal_get_poses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poses;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerPose>>* const& GlobalNamespace::SeaShell::__cordl_internal_get_poses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poses;
}
constexpr void GlobalNamespace::SeaShell::__cordl_internal_set_poses(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerPose>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poses = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSwitch>>*& GlobalNamespace::SeaShell::__cordl_internal_get_peckSwitches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSwitches;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSwitch>>* const& GlobalNamespace::SeaShell::__cordl_internal_get_peckSwitches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSwitches;
}
constexpr void GlobalNamespace::SeaShell::__cordl_internal_set_peckSwitches(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSwitch>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSwitches = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*& GlobalNamespace::SeaShell::__cordl_internal_get_propHomes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>* const& GlobalNamespace::SeaShell::__cordl_internal_get_propHomes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomes;
}
constexpr void GlobalNamespace::SeaShell::__cordl_internal_set_propHomes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHomes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*& GlobalNamespace::SeaShell::__cordl_internal_get_trackedPeckStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedPeckStates;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>* const& GlobalNamespace::SeaShell::__cordl_internal_get_trackedPeckStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedPeckStates;
}
constexpr void GlobalNamespace::SeaShell::__cordl_internal_set_trackedPeckStates(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TrackedPeckState>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedPeckStates = value;
}
constexpr ::UnityW<::Mirror::NetworkIdentity>& GlobalNamespace::SeaShell::__cordl_internal_get_networkIdentity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkIdentity;
}
constexpr ::UnityW<::Mirror::NetworkIdentity> const& GlobalNamespace::SeaShell::__cordl_internal_get_networkIdentity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkIdentity;
}
constexpr void GlobalNamespace::SeaShell::__cordl_internal_set_networkIdentity(::UnityW<::Mirror::NetworkIdentity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkIdentity = value;
}
constexpr bool& GlobalNamespace::SeaShell::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::SeaShell::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::SeaShell::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GlobalNamespace::SeaShell::setStaticF_logVerbose(bool  value)  {
::cordl_internals::setStaticField<bool, "logVerbose", ::GlobalNamespace::SeaShell*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SeaShell::getStaticF_logVerbose()  {
return ::cordl_internals::getStaticField<bool, "logVerbose", ::GlobalNamespace::SeaShell*>();
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::SeaShell::GetCollection()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                    {"GetCollection", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
inline void GlobalNamespace::SeaShell::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SeaShell*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SeaShell::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SeaShell*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SeaShell::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::SeaShell_ShellReference GlobalNamespace::SeaShell::CreateShellReference(T  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                    {"CreateShellReference", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SeaShell_ShellReference>(this, ___internal_method, component);
}
inline void GlobalNamespace::SeaShell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SeaShell::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SeaShell*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SeaShell* GlobalNamespace::SeaShell::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SeaShell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeaShell::SeaShell()   {
}
