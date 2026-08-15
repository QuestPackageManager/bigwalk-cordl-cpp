#pragma once
// IWYU pragma private; include "Mirror/MatchInterestManagement.hpp"
#include "Mirror/zzzz__InterestManagement_impl.hpp"
#include "Mirror/zzzz__MatchInterestManagement_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Mirror::MatchInterestManagement.OnSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MatchInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::MatchInterestManagement::OnSpawned)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181518c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                    {::i2c::class_of<::Mirror::MatchInterestManagement*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MatchInterestManagement.OnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MatchInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::MatchInterestManagement::OnDestroyed)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181518940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                    {::i2c::class_of<::Mirror::MatchInterestManagement*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MatchInterestManagement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MatchInterestManagement::*)()>(&::Mirror::MatchInterestManagement::Update)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1815190e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MatchInterestManagement.UpdateDirtyMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MatchInterestManagement::*)(::System::Guid, ::System::Guid)>(&::Mirror::MatchInterestManagement::UpdateDirtyMatches)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181518ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {"UpdateDirtyMatches", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MatchInterestManagement.UpdateMatchObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MatchInterestManagement::*)(::Mirror::NetworkIdentity*, ::System::Guid, ::System::Guid)>(&::Mirror::MatchInterestManagement::UpdateMatchObjects)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181518f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {"UpdateMatchObjects", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MatchInterestManagement.RebuildMatchObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MatchInterestManagement::*)(::System::Guid)>(&::Mirror::MatchInterestManagement::RebuildMatchObservers)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181518dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {"RebuildMatchObservers", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MatchInterestManagement.OnCheckObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::MatchInterestManagement::*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::MatchInterestManagement::OnCheckObserver)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181518800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                    {::i2c::class_of<::Mirror::MatchInterestManagement*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MatchInterestManagement.OnRebuildObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MatchInterestManagement::*)(::Mirror::NetworkIdentity*, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::MatchInterestManagement::OnRebuildObservers)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181518a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                    {::i2c::class_of<::Mirror::MatchInterestManagement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::MatchInterestManagement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::MatchInterestManagement::*)()>(&::Mirror::MatchInterestManagement::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181519480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*& Mirror::MatchInterestManagement::__cordl_internal_get_matchObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchObjects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>* const& Mirror::MatchInterestManagement::__cordl_internal_get_matchObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchObjects;
}
constexpr void Mirror::MatchInterestManagement::__cordl_internal_set_matchObjects(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchObjects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::System::Guid>*& Mirror::MatchInterestManagement::__cordl_internal_get_lastObjectMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastObjectMatch;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::System::Guid>* const& Mirror::MatchInterestManagement::__cordl_internal_get_lastObjectMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastObjectMatch;
}
constexpr void Mirror::MatchInterestManagement::__cordl_internal_set_lastObjectMatch(::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::System::Guid>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastObjectMatch = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>*& Mirror::MatchInterestManagement::__cordl_internal_get_dirtyMatches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyMatches;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Guid>* const& Mirror::MatchInterestManagement::__cordl_internal_get_dirtyMatches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtyMatches;
}
constexpr void Mirror::MatchInterestManagement::__cordl_internal_set_dirtyMatches(::System::Collections::Generic::HashSet_1<::System::Guid>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirtyMatches = value;
}
inline void Mirror::MatchInterestManagement::OnSpawned(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MatchInterestManagement*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::MatchInterestManagement::OnDestroyed(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MatchInterestManagement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::MatchInterestManagement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::MatchInterestManagement::UpdateDirtyMatches(::System::Guid  newMatch, ::System::Guid  currentMatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {"UpdateDirtyMatches", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMatch, currentMatch);
}
inline void Mirror::MatchInterestManagement::UpdateMatchObjects(::Mirror::NetworkIdentity*  netIdentity, ::System::Guid  newMatch, ::System::Guid  currentMatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {"UpdateMatchObjects", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netIdentity, newMatch, currentMatch);
}
inline void Mirror::MatchInterestManagement::RebuildMatchObservers(::System::Guid  matchId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {"RebuildMatchObservers", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matchId);
}
inline bool Mirror::MatchInterestManagement::OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MatchInterestManagement*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identity, newObserver);
}
inline void Mirror::MatchInterestManagement::OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::MatchInterestManagement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, newObservers);
}
inline void Mirror::MatchInterestManagement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::MatchInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::MatchInterestManagement* Mirror::MatchInterestManagement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::MatchInterestManagement*>());
}
// Ctor Parameters []
constexpr ::Mirror::MatchInterestManagement::MatchInterestManagement()   {
}
