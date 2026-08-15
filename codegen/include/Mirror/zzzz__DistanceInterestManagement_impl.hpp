#pragma once
// IWYU pragma private; include "Mirror/DistanceInterestManagement.hpp"
#include "Mirror/zzzz__InterestManagement_impl.hpp"
#include "Mirror/zzzz__DistanceInterestManagement_def.hpp"
#include "Mirror/zzzz__DistanceInterestManagementCustomRange_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Mirror::DistanceInterestManagement.GetVisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::DistanceInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::DistanceInterestManagement::GetVisRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181517e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                        {"GetVisRange", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DistanceInterestManagement.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::DistanceInterestManagement::*)()>(&::Mirror::DistanceInterestManagement::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181518240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                    {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DistanceInterestManagement.OnSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::DistanceInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::DistanceInterestManagement::OnSpawned)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815181d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                    {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DistanceInterestManagement.OnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::DistanceInterestManagement::*)(::Mirror::NetworkIdentity*)>(&::Mirror::DistanceInterestManagement::OnDestroyed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181517fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                    {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DistanceInterestManagement.OnCheckObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::DistanceInterestManagement::*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::DistanceInterestManagement::OnCheckObserver)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181517eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                    {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DistanceInterestManagement.OnRebuildObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::DistanceInterestManagement::*)(::Mirror::NetworkIdentity*, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::DistanceInterestManagement::OnRebuildObservers)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181517fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                    {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DistanceInterestManagement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::DistanceInterestManagement::*)()>(&::Mirror::DistanceInterestManagement::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815182a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::DistanceInterestManagement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::DistanceInterestManagement::*)()>(&::Mirror::DistanceInterestManagement::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181518310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::DistanceInterestManagement::__cordl_internal_get_visRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visRange;
}
constexpr int32_t const& Mirror::DistanceInterestManagement::__cordl_internal_get_visRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visRange;
}
constexpr void Mirror::DistanceInterestManagement::__cordl_internal_set_visRange(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visRange = value;
}
constexpr float_t& Mirror::DistanceInterestManagement::__cordl_internal_get_rebuildInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebuildInterval;
}
constexpr float_t const& Mirror::DistanceInterestManagement::__cordl_internal_get_rebuildInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebuildInterval;
}
constexpr void Mirror::DistanceInterestManagement::__cordl_internal_set_rebuildInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebuildInterval = value;
}
constexpr double_t& Mirror::DistanceInterestManagement::__cordl_internal_get_lastRebuildTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRebuildTime;
}
constexpr double_t const& Mirror::DistanceInterestManagement::__cordl_internal_get_lastRebuildTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRebuildTime;
}
constexpr void Mirror::DistanceInterestManagement::__cordl_internal_set_lastRebuildTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRebuildTime = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::DistanceInterestManagementCustomRange>>*& Mirror::DistanceInterestManagement::__cordl_internal_get_CustomRanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomRanges;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::DistanceInterestManagementCustomRange>>* const& Mirror::DistanceInterestManagement::__cordl_internal_get_CustomRanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomRanges;
}
constexpr void Mirror::DistanceInterestManagement::__cordl_internal_set_CustomRanges(::System::Collections::Generic::Dictionary_2<::UnityW<::Mirror::NetworkIdentity>,::UnityW<::Mirror::DistanceInterestManagementCustomRange>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomRanges = value;
}
inline int32_t Mirror::DistanceInterestManagement::GetVisRange(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                        {"GetVisRange", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, identity);
}
inline void Mirror::DistanceInterestManagement::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::DistanceInterestManagement::OnSpawned(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline void Mirror::DistanceInterestManagement::OnDestroyed(::Mirror::NetworkIdentity*  identity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline bool Mirror::DistanceInterestManagement::OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identity, newObserver);
}
inline void Mirror::DistanceInterestManagement::OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::DistanceInterestManagement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, newObservers);
}
inline void Mirror::DistanceInterestManagement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::DistanceInterestManagement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::DistanceInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::DistanceInterestManagement* Mirror::DistanceInterestManagement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::DistanceInterestManagement*>());
}
// Ctor Parameters []
constexpr ::Mirror::DistanceInterestManagement::DistanceInterestManagement()   {
}
