#pragma once
// IWYU pragma private; include "GlobalNamespace/Maypole.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Maypole_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Maypole.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)()>(&::GlobalNamespace::Maypole::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180403120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.OnPeckActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::Maypole::OnPeckActive)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180403580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OnPeckActive", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.OnSetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(float_t, float_t)>(&::GlobalNamespace::Maypole::OnSetPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180403790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OnSetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.OnSetTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(double_t, double_t)>(&::GlobalNamespace::Maypole::OnSetTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180403790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OnSetTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.OnSetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(float_t, float_t)>(&::GlobalNamespace::Maypole::OnSetSpeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180403790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OnSetSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)()>(&::GlobalNamespace::Maypole::OccasionalUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804034a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)()>(&::GlobalNamespace::Maypole::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)()>(&::GlobalNamespace::Maypole::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.get_NetworksyncPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::Maypole::*)()>(&::GlobalNamespace::Maypole::get_NetworksyncPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"get_NetworksyncPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.set_NetworksyncPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::Maypole::set_NetworksyncPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180403880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"set_NetworksyncPosition", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.get_NetworksyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::Maypole::*)()>(&::GlobalNamespace::Maypole::get_NetworksyncTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180403870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"get_NetworksyncTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.set_NetworksyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(::ByRefConst<double_t>)>(&::GlobalNamespace::Maypole::set_NetworksyncTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180403960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"set_NetworksyncTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.get_NetworksyncSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::Maypole::*)()>(&::GlobalNamespace::Maypole::get_NetworksyncSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180403860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"get_NetworksyncSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.set_NetworksyncSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::Maypole::set_NetworksyncSpeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804038f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"set_NetworksyncSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::Maypole::SerializeSyncVars)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804037c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                    {::i2c::class_of<::GlobalNamespace::Maypole*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Maypole.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Maypole::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::Maypole::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1804031a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                    {::i2c::class_of<::GlobalNamespace::Maypole*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::Maypole::__cordl_internal_get_syncPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncPosition;
}
constexpr float_t const& GlobalNamespace::Maypole::__cordl_internal_get_syncPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncPosition;
}
constexpr void GlobalNamespace::Maypole::__cordl_internal_set_syncPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncPosition = value;
}
constexpr double_t& GlobalNamespace::Maypole::__cordl_internal_get_syncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncTime;
}
constexpr double_t const& GlobalNamespace::Maypole::__cordl_internal_get_syncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncTime;
}
constexpr void GlobalNamespace::Maypole::__cordl_internal_set_syncTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncTime = value;
}
constexpr float_t& GlobalNamespace::Maypole::__cordl_internal_get_syncSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncSpeed;
}
constexpr float_t const& GlobalNamespace::Maypole::__cordl_internal_get_syncSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncSpeed;
}
constexpr void GlobalNamespace::Maypole::__cordl_internal_set_syncSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncSpeed = value;
}
constexpr float_t& GlobalNamespace::Maypole::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::Maypole::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::Maypole::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GlobalNamespace::Maypole::__cordl_internal_get_localPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPosition;
}
constexpr float_t const& GlobalNamespace::Maypole::__cordl_internal_get_localPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPosition;
}
constexpr void GlobalNamespace::Maypole::__cordl_internal_set_localPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Maypole::__cordl_internal_get_targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Maypole::__cordl_internal_get_targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr void GlobalNamespace::Maypole::__cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTransform = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::Maypole::__cordl_internal_get_activeSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::Maypole::__cordl_internal_get_activeSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeSystem;
}
constexpr void GlobalNamespace::Maypole::__cordl_internal_set_activeSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::Maypole::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::Maypole::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::Maypole::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
inline void GlobalNamespace::Maypole::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Maypole::OnPeckActive(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OnPeckActive", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::Maypole::OnSetPosition(float_t  oldValue, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OnSetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::Maypole::OnSetTime(double_t  oldValue, double_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OnSetTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::Maypole::OnSetSpeed(float_t  oldValue, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OnSetSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::Maypole::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Maypole::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Maypole::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::Maypole::get_NetworksyncPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"get_NetworksyncPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::Maypole::set_NetworksyncPosition(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"set_NetworksyncPosition", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t GlobalNamespace::Maypole::get_NetworksyncTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"get_NetworksyncTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::Maypole::set_NetworksyncTime(::ByRefConst<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"set_NetworksyncTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::Maypole::get_NetworksyncSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"get_NetworksyncSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::Maypole::set_NetworksyncSpeed(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Maypole*>(),
                        {"set_NetworksyncSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Maypole::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Maypole*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::Maypole::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Maypole*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::Maypole* GlobalNamespace::Maypole::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Maypole*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::Maypole::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::Maypole::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Maypole::Maypole()   {
}
