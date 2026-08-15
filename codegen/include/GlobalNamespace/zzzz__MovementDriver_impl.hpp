#pragma once
// IWYU pragma private; include "GlobalNamespace/MovementDriver.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MovementDriver_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180404910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.OnPeckActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::MovementDriver::OnPeckActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180404ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnPeckActive", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.OnSetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(float_t, float_t)>(&::GlobalNamespace::MovementDriver::OnSetPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180404ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnSetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.OnSetTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(double_t, double_t)>(&::GlobalNamespace::MovementDriver::OnSetTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180404ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnSetTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.OnSetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(float_t, float_t)>(&::GlobalNamespace::MovementDriver::OnSetSpeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180404ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnSetSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.ServerSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::ServerSync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180404f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"ServerSync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.OnAnimationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::OnAnimationFocus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180404ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnAnimationFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180404c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.get_NetworksyncPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::get_NetworksyncPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"get_NetworksyncPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.set_NetworksyncPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::MovementDriver::set_NetworksyncPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180405060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"set_NetworksyncPosition", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.get_NetworksyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::get_NetworksyncTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180403870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"get_NetworksyncTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.set_NetworksyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(::ByRefConst<double_t>)>(&::GlobalNamespace::MovementDriver::set_NetworksyncTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180405140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"set_NetworksyncTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.get_NetworksyncSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MovementDriver::*)()>(&::GlobalNamespace::MovementDriver::get_NetworksyncSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180403860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"get_NetworksyncSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.set_NetworksyncSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::MovementDriver::set_NetworksyncSpeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804050d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"set_NetworksyncSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::MovementDriver::SerializeSyncVars)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804037c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                    {::i2c::class_of<::GlobalNamespace::MovementDriver*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementDriver.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovementDriver::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::MovementDriver::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180404990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                    {::i2c::class_of<::GlobalNamespace::MovementDriver*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MovementDriver::__cordl_internal_get_syncPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncPosition;
}
constexpr float_t const& GlobalNamespace::MovementDriver::__cordl_internal_get_syncPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncPosition;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_syncPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncPosition = value;
}
constexpr double_t& GlobalNamespace::MovementDriver::__cordl_internal_get_syncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncTime;
}
constexpr double_t const& GlobalNamespace::MovementDriver::__cordl_internal_get_syncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncTime;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_syncTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncTime = value;
}
constexpr float_t& GlobalNamespace::MovementDriver::__cordl_internal_get_syncSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncSpeed;
}
constexpr float_t const& GlobalNamespace::MovementDriver::__cordl_internal_get_syncSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncSpeed;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_syncSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncSpeed = value;
}
constexpr float_t& GlobalNamespace::MovementDriver::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::MovementDriver::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GlobalNamespace::MovementDriver::__cordl_internal_get_acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr float_t const& GlobalNamespace::MovementDriver::__cordl_internal_get_acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceleration = value;
}
constexpr float_t& GlobalNamespace::MovementDriver::__cordl_internal_get_speedSyncThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedSyncThreshold;
}
constexpr float_t const& GlobalNamespace::MovementDriver::__cordl_internal_get_speedSyncThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedSyncThreshold;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_speedSyncThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedSyncThreshold = value;
}
constexpr float_t& GlobalNamespace::MovementDriver::__cordl_internal_get__aimSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aimSpeed;
}
constexpr float_t const& GlobalNamespace::MovementDriver::__cordl_internal_get__aimSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aimSpeed;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set__aimSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aimSpeed = value;
}
constexpr float_t& GlobalNamespace::MovementDriver::__cordl_internal_get__localSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localSpeed;
}
constexpr float_t const& GlobalNamespace::MovementDriver::__cordl_internal_get__localSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localSpeed;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set__localSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localSpeed = value;
}
constexpr float_t& GlobalNamespace::MovementDriver::__cordl_internal_get__localPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPosition;
}
constexpr float_t const& GlobalNamespace::MovementDriver::__cordl_internal_get__localPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPosition;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set__localPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPosition = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::MovementDriver::__cordl_internal_get_activeSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::MovementDriver::__cordl_internal_get_activeSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSystem;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_activeSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::MovementDriver::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::MovementDriver::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr ::System::Action_1<double_t>*& GlobalNamespace::MovementDriver::__cordl_internal_get_OnUpdatePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUpdatePosition;
}
constexpr ::System::Action_1<double_t>* const& GlobalNamespace::MovementDriver::__cordl_internal_get_OnUpdatePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUpdatePosition;
}
constexpr void GlobalNamespace::MovementDriver::__cordl_internal_set_OnUpdatePosition(::System::Action_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUpdatePosition = value;
}
inline void GlobalNamespace::MovementDriver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MovementDriver::OnPeckActive(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnPeckActive", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::MovementDriver::OnSetPosition(float_t  oldValue, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnSetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::MovementDriver::OnSetTime(double_t  oldValue, double_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnSetTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::MovementDriver::OnSetSpeed(float_t  oldValue, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnSetSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::MovementDriver::ServerSync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"ServerSync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MovementDriver::OnAnimationFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OnAnimationFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MovementDriver::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MovementDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MovementDriver::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::MovementDriver::get_NetworksyncPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"get_NetworksyncPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MovementDriver::set_NetworksyncPosition(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"set_NetworksyncPosition", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t GlobalNamespace::MovementDriver::get_NetworksyncTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"get_NetworksyncTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::MovementDriver::set_NetworksyncTime(::ByRefConst<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"set_NetworksyncTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MovementDriver::get_NetworksyncSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"get_NetworksyncSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MovementDriver::set_NetworksyncSpeed(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovementDriver*>(),
                        {"set_NetworksyncSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MovementDriver::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MovementDriver*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::MovementDriver::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MovementDriver*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::MovementDriver* GlobalNamespace::MovementDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MovementDriver*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::MovementDriver::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::MovementDriver::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MovementDriver::MovementDriver()   {
}
