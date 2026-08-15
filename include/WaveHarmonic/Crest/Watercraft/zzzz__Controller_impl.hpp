#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Watercraft/Controller.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/Watercraft/zzzz__Controller_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "WaveHarmonic/Crest/Watercraft/zzzz__Control_def.hpp"
#include "WaveHarmonic/Crest/zzzz__FloatingObject_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.get_BuoyancyCurveFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::get_BuoyancyCurveFactor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_BuoyancyCurveFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.set_BuoyancyCurveFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)(::UnityEngine::AnimationCurve*)>(&::WaveHarmonic::Crest::Watercraft::Controller::set_BuoyancyCurveFactor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_BuoyancyCurveFactor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.get_Control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::Watercraft::Control> (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::get_Control)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_Control", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.set_Control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)(::WaveHarmonic::Crest::Watercraft::Control*)>(&::WaveHarmonic::Crest::Watercraft::Controller::set_Control)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_Control", {}, {::i2c::type_of<::WaveHarmonic::Crest::Watercraft::Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.get_FloatingObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::FloatingObject> (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::get_FloatingObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_FloatingObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.set_FloatingObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)(::WaveHarmonic::Crest::FloatingObject*)>(&::WaveHarmonic::Crest::Watercraft::Controller::set_FloatingObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_FloatingObject", {}, {::i2c::type_of<::WaveHarmonic::Crest::FloatingObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.get_ForceHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::get_ForceHeightOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_ForceHeightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.set_ForceHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)(float_t)>(&::WaveHarmonic::Crest::Watercraft::Controller::set_ForceHeightOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_ForceHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.get_SteerPower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::get_SteerPower)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_SteerPower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.set_SteerPower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)(float_t)>(&::WaveHarmonic::Crest::Watercraft::Controller::set_SteerPower)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_SteerPower", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.get_ThrustPower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::get_ThrustPower)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_ThrustPower", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.set_ThrustPower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)(float_t)>(&::WaveHarmonic::Crest::Watercraft::Controller::set_ThrustPower)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_ThrustPower", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.get_TurningHeel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::get_TurningHeel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_TurningHeel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.set_TurningHeel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)(float_t)>(&::WaveHarmonic::Crest::Watercraft::Controller::set_TurningHeel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_TurningHeel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::OnStart)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18259e540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.get_OnFixedUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::get_OnFixedUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18259e780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller.OnFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::Watercraft::Controller::OnFixedUpdate)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18259e200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"OnFixedUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Watercraft::Controller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Watercraft::Controller::*)()>(&::WaveHarmonic::Crest::Watercraft::Controller::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18259e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::FloatingObject>& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__FloatingObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FloatingObject;
}
constexpr ::UnityW<::WaveHarmonic::Crest::FloatingObject> const& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__FloatingObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FloatingObject;
}
constexpr void WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_set__FloatingObject(::UnityW<::WaveHarmonic::Crest::FloatingObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FloatingObject = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::Watercraft::Control>& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__Control()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Control;
}
constexpr ::UnityW<::WaveHarmonic::Crest::Watercraft::Control> const& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__Control() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Control;
}
constexpr void WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_set__Control(::UnityW<::WaveHarmonic::Crest::Watercraft::Control>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Control = value;
}
constexpr float_t& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__ForceHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceHeightOffset;
}
constexpr float_t const& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__ForceHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceHeightOffset;
}
constexpr void WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_set__ForceHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceHeightOffset = value;
}
constexpr float_t& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__ThrustPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrustPower;
}
constexpr float_t const& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__ThrustPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrustPower;
}
constexpr void WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_set__ThrustPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThrustPower = value;
}
constexpr float_t& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__SteerPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SteerPower;
}
constexpr float_t const& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__SteerPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SteerPower;
}
constexpr void WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_set__SteerPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SteerPower = value;
}
constexpr float_t& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__TurningHeel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurningHeel;
}
constexpr float_t const& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__TurningHeel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurningHeel;
}
constexpr void WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_set__TurningHeel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TurningHeel = value;
}
constexpr ::UnityEngine::AnimationCurve*& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__BuoyancyCurveFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuoyancyCurveFactor;
}
constexpr ::UnityEngine::AnimationCurve* const& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__BuoyancyCurveFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuoyancyCurveFactor;
}
constexpr void WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_set__BuoyancyCurveFactor(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BuoyancyCurveFactor = value;
}
constexpr float_t& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__BuoyancyFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuoyancyFactor;
}
constexpr float_t const& WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_get__BuoyancyFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuoyancyFactor;
}
constexpr void WaveHarmonic::Crest::Watercraft::Controller::__cordl_internal_set__BuoyancyFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BuoyancyFactor = value;
}
inline ::UnityEngine::AnimationCurve* WaveHarmonic::Crest::Watercraft::Controller::get_BuoyancyCurveFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_BuoyancyCurveFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::set_BuoyancyCurveFactor(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_BuoyancyCurveFactor", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::WaveHarmonic::Crest::Watercraft::Control> WaveHarmonic::Crest::Watercraft::Controller::get_Control()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_Control", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::Watercraft::Control>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::set_Control(::WaveHarmonic::Crest::Watercraft::Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_Control", {}, {::i2c::type_of<::WaveHarmonic::Crest::Watercraft::Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::WaveHarmonic::Crest::FloatingObject> WaveHarmonic::Crest::Watercraft::Controller::get_FloatingObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_FloatingObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::FloatingObject>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::set_FloatingObject(::WaveHarmonic::Crest::FloatingObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_FloatingObject", {}, {::i2c::type_of<::WaveHarmonic::Crest::FloatingObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::Watercraft::Controller::get_ForceHeightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_ForceHeightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::set_ForceHeightOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_ForceHeightOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::Watercraft::Controller::get_SteerPower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_SteerPower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::set_SteerPower(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_SteerPower", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::Watercraft::Controller::get_ThrustPower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_ThrustPower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::set_ThrustPower(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_ThrustPower", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::Watercraft::Controller::get_TurningHeel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"get_TurningHeel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::set_TurningHeel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"set_TurningHeel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::Watercraft::Controller::get_OnFixedUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::OnFixedUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {"OnFixedUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::Watercraft::Controller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Watercraft::Controller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Watercraft::Controller* WaveHarmonic::Crest::Watercraft::Controller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Watercraft::Controller*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Watercraft::Controller::Controller()   {
}
