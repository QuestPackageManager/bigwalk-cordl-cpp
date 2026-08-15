#pragma once
// IWYU pragma private; include "Mirror/TeamInterestManagement.hpp"
#include "Mirror/zzzz__InterestManagement_impl.hpp"
#include "Mirror/zzzz__TeamInterestManagement_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Mirror::TeamInterestManagement.OnSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::TeamInterestManagement::OnSpawned)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18152f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                    {::i2c::class_of<::Mirror::TeamInterestManagement*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement.OnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::TeamInterestManagement::OnDestroyed)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18152f340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                    {::i2c::class_of<::Mirror::TeamInterestManagement*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)()>(&::Mirror::TeamInterestManagement::Update)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18152f9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement.UpdateDirtyTeams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)(::StringW, ::StringW)>(&::Mirror::TeamInterestManagement::UpdateDirtyTeams)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18152f800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"UpdateDirtyTeams", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement.UpdateTeamObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)(::Mirror::NetworkIdentity*, ::StringW, ::StringW)>(&::Mirror::TeamInterestManagement::UpdateTeamObjects)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18152f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"UpdateTeamObjects", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement.RebuildTeamObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)(::StringW)>(&::Mirror::TeamInterestManagement::RebuildTeamObservers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18152f740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"RebuildTeamObservers", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement.OnCheckObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::TeamInterestManagement::*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::TeamInterestManagement::OnCheckObserver)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18152f260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                    {::i2c::class_of<::Mirror::TeamInterestManagement*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement.OnRebuildObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)(::Mirror::NetworkIdentity*, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::TeamInterestManagement::OnRebuildObservers)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18152f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                    {::i2c::class_of<::Mirror::TeamInterestManagement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement.AddAllConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::TeamInterestManagement::AddAllConnections)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18152f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"AddAllConnections", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TeamInterestManagement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TeamInterestManagement::*)()>(&::Mirror::TeamInterestManagement::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18152fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*& Mirror::TeamInterestManagement::__cordl_internal_get_teamObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamObjects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>* const& Mirror::TeamInterestManagement::__cordl_internal_get_teamObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamObjects;
}
constexpr void Mirror::TeamInterestManagement::__cordl_internal_set_teamObjects(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamObjects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::StringW>*& Mirror::TeamInterestManagement::__cordl_internal_get_lastObjectTeam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastObjectTeam;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::StringW>* const& Mirror::TeamInterestManagement::__cordl_internal_get_lastObjectTeam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastObjectTeam;
}
constexpr void Mirror::TeamInterestManagement::__cordl_internal_set_lastObjectTeam(::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastObjectTeam = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Mirror::TeamInterestManagement::__cordl_internal_get_dirtyTeams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyTeams;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Mirror::TeamInterestManagement::__cordl_internal_get_dirtyTeams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyTeams;
}
constexpr void Mirror::TeamInterestManagement::__cordl_internal_set_dirtyTeams(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirtyTeams = value;
}
inline void Mirror::TeamInterestManagement::OnSpawned(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TeamInterestManagement*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::TeamInterestManagement::OnDestroyed(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TeamInterestManagement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::TeamInterestManagement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::TeamInterestManagement::UpdateDirtyTeams(::StringW  newTeam, ::StringW  currentTeam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"UpdateDirtyTeams", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTeam, currentTeam);
}
inline void Mirror::TeamInterestManagement::UpdateTeamObjects(::Mirror::NetworkIdentity*  netIdentity, ::StringW  newTeam, ::StringW  currentTeam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"UpdateTeamObjects", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netIdentity, newTeam, currentTeam);
}
inline void Mirror::TeamInterestManagement::RebuildTeamObservers(::StringW  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"RebuildTeamObservers", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId);
}
inline bool Mirror::TeamInterestManagement::OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TeamInterestManagement*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identity, newObserver);
}
inline void Mirror::TeamInterestManagement::OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::TeamInterestManagement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, newObservers);
}
inline void Mirror::TeamInterestManagement::AddAllConnections(::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {"AddAllConnections", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newObservers);
}
inline void Mirror::TeamInterestManagement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TeamInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::TeamInterestManagement* Mirror::TeamInterestManagement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::TeamInterestManagement*>());
}
// Ctor Parameters []
constexpr ::Mirror::TeamInterestManagement::TeamInterestManagement()   {
}
