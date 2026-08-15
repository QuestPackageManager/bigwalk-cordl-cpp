#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHomeGrasperPositioner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropHomeGrasperPositioner_def.hpp"
#include "GlobalNamespace/zzzz__Corpse_def.hpp"
#include "GlobalNamespace/zzzz__ICustomHomePositioner_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.get_holdRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PropHomeGrasperPositioner::*)()>(&::GlobalNamespace::PropHomeGrasperPositioner::get_holdRaised)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"get_holdRaised", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.set_holdRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeGrasperPositioner::*)(bool)>(&::GlobalNamespace::PropHomeGrasperPositioner::set_holdRaised)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803834e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"set_holdRaised", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.get_holdRaisedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PropHomeGrasperPositioner::*)()>(&::GlobalNamespace::PropHomeGrasperPositioner::get_holdRaisedness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"get_holdRaisedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.set_holdRaisedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeGrasperPositioner::*)(float_t)>(&::GlobalNamespace::PropHomeGrasperPositioner::set_holdRaisedness)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180383510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"set_holdRaisedness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeGrasperPositioner::*)()>(&::GlobalNamespace::PropHomeGrasperPositioner::Awake)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180382d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.OnChangePinOrHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeGrasperPositioner::*)()>(&::GlobalNamespace::PropHomeGrasperPositioner::OnChangePinOrHold)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180382fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"OnChangePinOrHold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeGrasperPositioner::*)()>(&::GlobalNamespace::PropHomeGrasperPositioner::OccasionalUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180382eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeGrasperPositioner::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PropHomeGrasperPositioner::Position)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180383000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"Position", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner.Reposition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeGrasperPositioner::*)()>(&::GlobalNamespace::PropHomeGrasperPositioner::Reposition)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x180383240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"Reposition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PropHomeGrasperPositioner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropHomeGrasperPositioner::*)()>(&::GlobalNamespace::PropHomeGrasperPositioner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Corpse>& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get_corpse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpse;
}
constexpr ::UnityW<::GlobalNamespace::Corpse> const& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get_corpse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corpse;
}
constexpr void GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_set_corpse(::UnityW<::GlobalNamespace::Corpse>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corpse = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr float_t& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get_dampTimeRaise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampTimeRaise;
}
constexpr float_t const& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get_dampTimeRaise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampTimeRaise;
}
constexpr void GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_set_dampTimeRaise(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampTimeRaise = value;
}
constexpr float_t& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get_dampTimeLower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampTimeLower;
}
constexpr float_t const& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get_dampTimeLower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampTimeLower;
}
constexpr void GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_set_dampTimeLower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampTimeLower = value;
}
constexpr bool& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get__holdRaised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdRaised;
}
constexpr bool const& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get__holdRaised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdRaised;
}
constexpr void GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_set__holdRaised(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____holdRaised = value;
}
constexpr float_t& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get__dampVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dampVelocity;
}
constexpr float_t const& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get__dampVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dampVelocity;
}
constexpr void GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_set__dampVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dampVelocity = value;
}
constexpr float_t& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get__holdRaisedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdRaisedness;
}
constexpr float_t const& GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_get__holdRaisedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdRaisedness;
}
constexpr void GlobalNamespace::PropHomeGrasperPositioner::__cordl_internal_set__holdRaisedness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____holdRaisedness = value;
}
inline bool GlobalNamespace::PropHomeGrasperPositioner::get_holdRaised()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"get_holdRaised", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PropHomeGrasperPositioner::set_holdRaised(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"set_holdRaised", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PropHomeGrasperPositioner::get_holdRaisedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"get_holdRaisedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PropHomeGrasperPositioner::set_holdRaisedness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"set_holdRaisedness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PropHomeGrasperPositioner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHomeGrasperPositioner::OnChangePinOrHold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"OnChangePinOrHold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHomeGrasperPositioner::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHomeGrasperPositioner::Position(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"Position", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void GlobalNamespace::PropHomeGrasperPositioner::Reposition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {"Reposition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PropHomeGrasperPositioner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropHomeGrasperPositioner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropHomeGrasperPositioner* GlobalNamespace::PropHomeGrasperPositioner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropHomeGrasperPositioner*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICustomHomePositioner"
constexpr  GlobalNamespace::PropHomeGrasperPositioner::operator ::GlobalNamespace::ICustomHomePositioner*() noexcept {
return static_cast<::GlobalNamespace::ICustomHomePositioner*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICustomHomePositioner"
constexpr ::GlobalNamespace::ICustomHomePositioner* GlobalNamespace::PropHomeGrasperPositioner::i___GlobalNamespace__ICustomHomePositioner() noexcept {
return static_cast<::GlobalNamespace::ICustomHomePositioner*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::PropHomeGrasperPositioner::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::PropHomeGrasperPositioner::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHomeGrasperPositioner::PropHomeGrasperPositioner()   {
}
