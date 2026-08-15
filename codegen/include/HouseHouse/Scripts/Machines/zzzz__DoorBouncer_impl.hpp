#pragma once
// IWYU pragma private; include "HouseHouse/Scripts/Machines/DoorBouncer.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "HouseHouse/Scripts/Machines/zzzz__DoorBouncer_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::HouseHouse::Scripts::Machines::DoorBouncer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Scripts::Machines::DoorBouncer::*)()>(&::HouseHouse::Scripts::Machines::DoorBouncer::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803bfc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Scripts::Machines::DoorBouncer.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Scripts::Machines::DoorBouncer::*)()>(&::HouseHouse::Scripts::Machines::DoorBouncer::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803bfd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Scripts::Machines::DoorBouncer.OnBounceCheckPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Scripts::Machines::DoorBouncer::*)(::GlobalNamespace::PeckContext)>(&::HouseHouse::Scripts::Machines::DoorBouncer::OnBounceCheckPeck)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803bfe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"OnBounceCheckPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Scripts::Machines::DoorBouncer.OnRecordBlacklist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Scripts::Machines::DoorBouncer::*)(::GlobalNamespace::PeckContext)>(&::HouseHouse::Scripts::Machines::DoorBouncer::OnRecordBlacklist)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803bfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"OnRecordBlacklist", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Scripts::Machines::DoorBouncer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Scripts::Machines::DoorBouncer::*)()>(&::HouseHouse::Scripts::Machines::DoorBouncer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseHouse::Scripts::Machines::DoorBouncer.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Scripts::Machines::DoorBouncer::*)()>(&::HouseHouse::Scripts::Machines::DoorBouncer::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_bounceCheckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceCheckSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_bounceCheckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceCheckSystem;
}
constexpr void HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_set_bounceCheckSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceCheckSystem = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_recordBlacklist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordBlacklist;
}
constexpr ::GlobalNamespace::PeckSystemReference const& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_recordBlacklist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordBlacklist;
}
constexpr void HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_set_recordBlacklist(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordBlacklist = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_vipArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vipArea;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_vipArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vipArea;
}
constexpr void HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_set_vipArea(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vipArea = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_blacklistZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blacklistZone;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_blacklistZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blacklistZone;
}
constexpr void HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_set_blacklistZone(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blacklistZone = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr bool& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_isOnBlacklist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOnBlacklist;
}
constexpr bool const& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_isOnBlacklist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOnBlacklist;
}
constexpr void HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_set_isOnBlacklist(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOnBlacklist = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_teleportBehind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportBehind;
}
constexpr ::UnityW<::UnityEngine::Transform> const& HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_get_teleportBehind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportBehind;
}
constexpr void HouseHouse::Scripts::Machines::DoorBouncer::__cordl_internal_set_teleportBehind(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportBehind = value;
}
inline void HouseHouse::Scripts::Machines::DoorBouncer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Scripts::Machines::DoorBouncer::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Scripts::Machines::DoorBouncer::OnBounceCheckPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"OnBounceCheckPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void HouseHouse::Scripts::Machines::DoorBouncer::OnRecordBlacklist(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"OnRecordBlacklist", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void HouseHouse::Scripts::Machines::DoorBouncer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseHouse::Scripts::Machines::DoorBouncer::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Scripts::Machines::DoorBouncer*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Scripts::Machines::DoorBouncer* HouseHouse::Scripts::Machines::DoorBouncer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Scripts::Machines::DoorBouncer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  HouseHouse::Scripts::Machines::DoorBouncer::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* HouseHouse::Scripts::Machines::DoorBouncer::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HouseHouse::Scripts::Machines::DoorBouncer::DoorBouncer()   {
}
