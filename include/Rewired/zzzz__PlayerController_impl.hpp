#pragma once
// IWYU pragma private; include "Rewired/PlayerController.hpp"
#include "Rewired/zzzz__AxisCoordinateMode_impl.hpp"
#include "Rewired/zzzz__ControllerElementType_impl.hpp"
#include "Rewired/zzzz__PlayerController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/zzzz__PlayerController_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__AList_1_def.hpp"
#include "Rewired/zzzz__AxisCoordinateMode_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__IPlayerController_def.hpp"
#include "Rewired/zzzz__PlayerController_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Definition::*)()>(&::Rewired::PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18191c4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::PlayerController_Definition::__cordl_internal_get_enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr bool const& Rewired::PlayerController_Definition::__cordl_internal_get_enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr void Rewired::PlayerController_Definition::__cordl_internal_set_enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabled = value;
}
constexpr int32_t& Rewired::PlayerController_Definition::__cordl_internal_get_playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr int32_t const& Rewired::PlayerController_Definition::__cordl_internal_get_playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr void Rewired::PlayerController_Definition::__cordl_internal_set_playerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerId = value;
}
constexpr ::System::Collections::Generic::ICollection_1<::Rewired::Element_PlayerController_Definition*>*& Rewired::PlayerController_Definition::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::System::Collections::Generic::ICollection_1<::Rewired::Element_PlayerController_Definition*>* const& Rewired::PlayerController_Definition::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void Rewired::PlayerController_Definition::__cordl_internal_set_elements(::System::Collections::Generic::ICollection_1<::Rewired::Element_PlayerController_Definition*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
inline void Rewired::PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Definition* Rewired::PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_Definition::PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_Factory.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController* (*)(::Rewired::PlayerController_Definition*)>(&::Rewired::PlayerController_Factory::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18191c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Factory*>(),
                        {"Create", {}, {::i2c::type_of<::Rewired::PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::PlayerController* Rewired::PlayerController_Factory::Create(::Rewired::PlayerController_Definition*  definition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Factory*>(),
                        {"Create", {}, {::i2c::type_of<::Rewired::PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController*>(nullptr, ___internal_method, definition);
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_Factory::PlayerController_Factory()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode::PlayerController_AbsoluteToRelativeScalingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode::PlayerController_AbsoluteToRelativeScalingMode()   {
}
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::ScreenWidth{static_cast<int32_t>(0x1)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::ScreenHeight{static_cast<int32_t>(0x2)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::MaxScreenDimension{static_cast<int32_t>(0x3)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::MinScreenDimension{static_cast<int32_t>(0x4)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::ViewportWidth{static_cast<int32_t>(0x5)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::ViewportHeight{static_cast<int32_t>(0x6)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::MaxViewportDimension{static_cast<int32_t>(0x7)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_AbsoluteToRelativeScalingMode::MinViewportDimension{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::Rewired::Element_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Element_PlayerController_Definition::*)()>(&::Rewired::Element_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18195cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Element_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Element_PlayerController_Definition.hRrfCMfqwsoafJXgnSpFrRrhyTcSA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::Element_PlayerController_Definition::*)(::Rewired::PlayerController*)>(&::Rewired::Element_PlayerController_Definition::hRrfCMfqwsoafJXgnSpFrRrhyTcSA)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Element_PlayerController_Definition*>(),
                    {::i2c::class_of<::Rewired::Element_PlayerController_Definition*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Element_PlayerController_Definition::__cordl_internal_get_enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr bool const& Rewired::Element_PlayerController_Definition::__cordl_internal_get_enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr void Rewired::Element_PlayerController_Definition::__cordl_internal_set_enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabled = value;
}
constexpr ::StringW& Rewired::Element_PlayerController_Definition::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Rewired::Element_PlayerController_Definition::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Rewired::Element_PlayerController_Definition::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void Rewired::Element_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Element_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Element* Rewired::Element_PlayerController_Definition::hRrfCMfqwsoafJXgnSpFrRrhyTcSA(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Element_PlayerController_Definition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Element_PlayerController_Definition* Rewired::Element_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Element_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::Element_PlayerController_Definition::Element_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::ElementWithSource_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementWithSource_PlayerController_Definition::*)()>(&::Rewired::ElementWithSource_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18195cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementWithSource_PlayerController_Definition.get_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ElementWithSource_PlayerController_Definition::*)()>(&::Rewired::ElementWithSource_PlayerController_Definition::get_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {"get_actionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementWithSource_PlayerController_Definition.set_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementWithSource_PlayerController_Definition::*)(int32_t)>(&::Rewired::ElementWithSource_PlayerController_Definition::set_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementWithSource_PlayerController_Definition.get_actionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ElementWithSource_PlayerController_Definition::*)()>(&::Rewired::ElementWithSource_PlayerController_Definition::get_actionName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195cc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {"get_actionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ElementWithSource_PlayerController_Definition.set_actionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ElementWithSource_PlayerController_Definition::*)(::StringW)>(&::Rewired::ElementWithSource_PlayerController_Definition::set_actionName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18195cf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {"set_actionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ElementWithSource_PlayerController_Definition::__cordl_internal_get_eAfZAUAAoSzTNzGdgSOfTdLKgVFM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eAfZAUAAoSzTNzGdgSOfTdLKgVFM;
}
constexpr int32_t const& Rewired::ElementWithSource_PlayerController_Definition::__cordl_internal_get_eAfZAUAAoSzTNzGdgSOfTdLKgVFM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eAfZAUAAoSzTNzGdgSOfTdLKgVFM;
}
constexpr void Rewired::ElementWithSource_PlayerController_Definition::__cordl_internal_set_eAfZAUAAoSzTNzGdgSOfTdLKgVFM(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eAfZAUAAoSzTNzGdgSOfTdLKgVFM = value;
}
inline void Rewired::ElementWithSource_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::ElementWithSource_PlayerController_Definition::get_actionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {"get_actionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ElementWithSource_PlayerController_Definition::set_actionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::ElementWithSource_PlayerController_Definition::get_actionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {"get_actionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::ElementWithSource_PlayerController_Definition::set_actionName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ElementWithSource_PlayerController_Definition*>(),
                        {"set_actionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ElementWithSource_PlayerController_Definition* Rewired::ElementWithSource_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ElementWithSource_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::ElementWithSource_PlayerController_Definition::ElementWithSource_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::Axis_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Axis_PlayerController_Definition::*)()>(&::Rewired::Axis_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18195cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis_PlayerController_Definition.rPOaqSAPvYtnGmkBvVRBWlytbSYI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::Axis_PlayerController_Definition::*)(::Rewired::PlayerController*)>(&::Rewired::Axis_PlayerController_Definition::rPOaqSAPvYtnGmkBvVRBWlytbSYI)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195cf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Axis_PlayerController_Definition*>(),
                    {::i2c::class_of<::Rewired::Axis_PlayerController_Definition*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::AxisCoordinateMode& Rewired::Axis_PlayerController_Definition::__cordl_internal_get_coordinateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coordinateMode;
}
constexpr ::Rewired::AxisCoordinateMode const& Rewired::Axis_PlayerController_Definition::__cordl_internal_get_coordinateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coordinateMode;
}
constexpr void Rewired::Axis_PlayerController_Definition::__cordl_internal_set_coordinateMode(::Rewired::AxisCoordinateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coordinateMode = value;
}
constexpr float_t& Rewired::Axis_PlayerController_Definition::__cordl_internal_get_absoluteToRelativeSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteToRelativeSensitivity;
}
constexpr float_t const& Rewired::Axis_PlayerController_Definition::__cordl_internal_get_absoluteToRelativeSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteToRelativeSensitivity;
}
constexpr void Rewired::Axis_PlayerController_Definition::__cordl_internal_set_absoluteToRelativeSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absoluteToRelativeSensitivity = value;
}
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode& Rewired::Axis_PlayerController_Definition::__cordl_internal_get_absoluteToRelativeScalingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteToRelativeScalingMode;
}
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const& Rewired::Axis_PlayerController_Definition::__cordl_internal_get_absoluteToRelativeScalingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteToRelativeScalingMode;
}
constexpr void Rewired::Axis_PlayerController_Definition::__cordl_internal_set_absoluteToRelativeScalingMode(::Rewired::PlayerController_AbsoluteToRelativeScalingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absoluteToRelativeScalingMode = value;
}
inline void Rewired::Axis_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Element* Rewired::Axis_PlayerController_Definition::rPOaqSAPvYtnGmkBvVRBWlytbSYI(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Axis_PlayerController_Definition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Axis_PlayerController_Definition* Rewired::Axis_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Axis_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::Axis_PlayerController_Definition::Axis_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_Element._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Element::*)(::Rewired::PlayerController*, ::Rewired::Element_PlayerController_Definition*)>(&::Rewired::PlayerController_Element::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18195d660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Element_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.get_player
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::Rewired::PlayerController_Element::*)()>(&::Rewired::PlayerController_Element::get_player)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195d6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"get_player", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.get_selfAndParentEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController_Element::*)()>(&::Rewired::PlayerController_Element::get_selfAndParentEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18195d770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"get_selfAndParentEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.WDVOAUfjEMSXtuqZrIMpjifnHNzIA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController_Element::*)()>(&::Rewired::PlayerController_Element::WDVOAUfjEMSXtuqZrIMpjifnHNzIA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"WDVOAUfjEMSXtuqZrIMpjifnHNzIA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.rVjDFNkKsOfxOejsgbXRJTdxLPnoB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Element::*)(bool)>(&::Rewired::PlayerController_Element::rVjDFNkKsOfxOejsgbXRJTdxLPnoB)> {
  constexpr static std::size_t size = 0x5290;
  constexpr static std::size_t addrs = 0x1812e54a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"rVjDFNkKsOfxOejsgbXRJTdxLPnoB", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController_Element::*)()>(&::Rewired::PlayerController_Element::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Element::*)(bool)>(&::Rewired::PlayerController_Element::set_enabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18195d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::PlayerController_Element::*)()>(&::Rewired::PlayerController_Element::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Element::*)(::StringW)>(&::Rewired::PlayerController_Element::set_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.VPzWFqfEGXfwkoSPtSSGbuWhBPKU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Element::*)()>(&::Rewired::PlayerController_Element::VPzWFqfEGXfwkoSPtSSGbuWhBPKU)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                    {::i2c::class_of<::Rewired::PlayerController_Element*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.EnabledStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Element::*)(bool)>(&::Rewired::PlayerController_Element::EnabledStateChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                    {::i2c::class_of<::Rewired::PlayerController_Element*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.IsTypeWithSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Element_PlayerController_Type)>(&::Rewired::PlayerController_Element::IsTypeWithSource)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18195d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"IsTypeWithSource", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.IsCompoundType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Element_PlayerController_Type)>(&::Rewired::PlayerController_Element::IsCompoundType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18195d450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"IsCompoundType", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.GetMaxElementCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::Element_PlayerController_Type)>(&::Rewired::PlayerController_Element::GetMaxElementCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195d3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"GetMaxElementCount", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.GetElementTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Rewired::Element_PlayerController_Type, int32_t)>(&::Rewired::PlayerController_Element::GetElementTitle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18195d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"GetElementTitle", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Element.CreateDefinition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Element_PlayerController_Definition* (*)(::Rewired::Element_PlayerController_Type)>(&::Rewired::PlayerController_Element::CreateDefinition)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18195d1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"CreateDefinition", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::PlayerController*& Rewired::PlayerController_Element::__cordl_internal_get_pDdfIdegHwIxhcFxNgCNlfNHEDGI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pDdfIdegHwIxhcFxNgCNlfNHEDGI;
}
constexpr ::Rewired::PlayerController* const& Rewired::PlayerController_Element::__cordl_internal_get_pDdfIdegHwIxhcFxNgCNlfNHEDGI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pDdfIdegHwIxhcFxNgCNlfNHEDGI;
}
constexpr void Rewired::PlayerController_Element::__cordl_internal_set_pDdfIdegHwIxhcFxNgCNlfNHEDGI(::Rewired::PlayerController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pDdfIdegHwIxhcFxNgCNlfNHEDGI = value;
}
constexpr bool& Rewired::PlayerController_Element::__cordl_internal_get_YBRdIfoZRturDajhTSqixpnchyhn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YBRdIfoZRturDajhTSqixpnchyhn;
}
constexpr bool const& Rewired::PlayerController_Element::__cordl_internal_get_YBRdIfoZRturDajhTSqixpnchyhn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YBRdIfoZRturDajhTSqixpnchyhn;
}
constexpr void Rewired::PlayerController_Element::__cordl_internal_set_YBRdIfoZRturDajhTSqixpnchyhn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YBRdIfoZRturDajhTSqixpnchyhn = value;
}
constexpr bool& Rewired::PlayerController_Element::__cordl_internal_get_PapiGFTvwdzkZriiFGUMeGxJeKrWA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PapiGFTvwdzkZriiFGUMeGxJeKrWA;
}
constexpr bool const& Rewired::PlayerController_Element::__cordl_internal_get_PapiGFTvwdzkZriiFGUMeGxJeKrWA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PapiGFTvwdzkZriiFGUMeGxJeKrWA;
}
constexpr void Rewired::PlayerController_Element::__cordl_internal_set_PapiGFTvwdzkZriiFGUMeGxJeKrWA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PapiGFTvwdzkZriiFGUMeGxJeKrWA = value;
}
constexpr ::StringW& Rewired::PlayerController_Element::__cordl_internal_get_GsslIUXEKYpKhVNXEEwBszPFDKKl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GsslIUXEKYpKhVNXEEwBszPFDKKl;
}
constexpr ::StringW const& Rewired::PlayerController_Element::__cordl_internal_get_GsslIUXEKYpKhVNXEEwBszPFDKKl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GsslIUXEKYpKhVNXEEwBszPFDKKl;
}
constexpr void Rewired::PlayerController_Element::__cordl_internal_set_GsslIUXEKYpKhVNXEEwBszPFDKKl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GsslIUXEKYpKhVNXEEwBszPFDKKl = value;
}
inline void Rewired::PlayerController_Element::setStaticF_PYxwbqtzQgHbGfiHMTFMlPpGhJts(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "PYxwbqtzQgHbGfiHMTFMlPpGhJts", ::Rewired::PlayerController_Element*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Rewired::PlayerController_Element::getStaticF_PYxwbqtzQgHbGfiHMTFMlPpGhJts()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "PYxwbqtzQgHbGfiHMTFMlPpGhJts", ::Rewired::PlayerController_Element*>();
}
inline void Rewired::PlayerController_Element::setStaticF_NlchXtAbsRmnbAqqHnqWGqjcNEjp(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "NlchXtAbsRmnbAqqHnqWGqjcNEjp", ::Rewired::PlayerController_Element*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Rewired::PlayerController_Element::getStaticF_NlchXtAbsRmnbAqqHnqWGqjcNEjp()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "NlchXtAbsRmnbAqqHnqWGqjcNEjp", ::Rewired::PlayerController_Element*>();
}
inline void Rewired::PlayerController_Element::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Element_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Element_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Player* Rewired::PlayerController_Element::get_player()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"get_player", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(this, ___internal_method);
}
inline bool Rewired::PlayerController_Element::get_selfAndParentEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"get_selfAndParentEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::PlayerController_Element::WDVOAUfjEMSXtuqZrIMpjifnHNzIA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"WDVOAUfjEMSXtuqZrIMpjifnHNzIA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::PlayerController_Element::rVjDFNkKsOfxOejsgbXRJTdxLPnoB(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"rVjDFNkKsOfxOejsgbXRJTdxLPnoB", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::PlayerController_Element::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::PlayerController_Element::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::PlayerController_Element::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::PlayerController_Element::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlayerController_Element::VPzWFqfEGXfwkoSPtSSGbuWhBPKU()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_Element*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlayerController_Element::EnabledStateChanged(bool  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_Element*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool Rewired::PlayerController_Element::IsTypeWithSource(::Rewired::Element_PlayerController_Type  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"IsTypeWithSource", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Rewired::PlayerController_Element::IsCompoundType(::Rewired::Element_PlayerController_Type  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"IsCompoundType", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline int32_t Rewired::PlayerController_Element::GetMaxElementCount(::Rewired::Element_PlayerController_Type  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"GetMaxElementCount", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline ::StringW Rewired::PlayerController_Element::GetElementTitle(::Rewired::Element_PlayerController_Type  type, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"GetElementTitle", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type, index);
}
inline ::Rewired::Element_PlayerController_Definition* Rewired::PlayerController_Element::CreateDefinition(::Rewired::Element_PlayerController_Type  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Element*>(),
                        {"CreateDefinition", {}, {::i2c::type_of<::Rewired::Element_PlayerController_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Element_PlayerController_Definition*>(nullptr, ___internal_method, type);
}
inline ::Rewired::PlayerController_Element* Rewired::PlayerController_Element::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Element_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_Element*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_Element::PlayerController_Element()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_ElementWithSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_ElementWithSource::*)(::Rewired::PlayerController*, ::Rewired::ElementWithSource_PlayerController_Definition*)>(&::Rewired::PlayerController_ElementWithSource::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18195c2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::ElementWithSource_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_ElementWithSource.get_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerController_ElementWithSource::*)()>(&::Rewired::PlayerController_ElementWithSource::get_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {"get_actionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_ElementWithSource.set_actionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_ElementWithSource::*)(int32_t)>(&::Rewired::PlayerController_ElementWithSource::set_actionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_ElementWithSource.get_actionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::PlayerController_ElementWithSource::*)()>(&::Rewired::PlayerController_ElementWithSource::get_actionName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {"get_actionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_ElementWithSource.set_actionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_ElementWithSource::*)(::StringW)>(&::Rewired::PlayerController_ElementWithSource::set_actionName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18195d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {"set_actionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::PlayerController_ElementWithSource::__cordl_internal_get_ZXkdwjaVEOeuskJyRjKIWkxJurllA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZXkdwjaVEOeuskJyRjKIWkxJurllA;
}
constexpr int32_t const& Rewired::PlayerController_ElementWithSource::__cordl_internal_get_ZXkdwjaVEOeuskJyRjKIWkxJurllA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZXkdwjaVEOeuskJyRjKIWkxJurllA;
}
constexpr void Rewired::PlayerController_ElementWithSource::__cordl_internal_set_ZXkdwjaVEOeuskJyRjKIWkxJurllA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZXkdwjaVEOeuskJyRjKIWkxJurllA = value;
}
inline void Rewired::PlayerController_ElementWithSource::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementWithSource_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::ElementWithSource_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::PlayerController_ElementWithSource::get_actionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {"get_actionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::PlayerController_ElementWithSource::set_actionId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {"set_actionId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::PlayerController_ElementWithSource::get_actionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {"get_actionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::PlayerController_ElementWithSource::set_actionName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_ElementWithSource*>(),
                        {"set_actionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::PlayerController_ElementWithSource* Rewired::PlayerController_ElementWithSource::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::ElementWithSource_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_ElementWithSource*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_ElementWithSource::PlayerController_ElementWithSource()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_Axis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Axis::*)(::Rewired::PlayerController*, ::Rewired::Axis_PlayerController_Definition*)>(&::Rewired::PlayerController_Axis::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181915640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Axis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis.get_absoluteToRelativeSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerController_Axis::*)()>(&::Rewired::PlayerController_Axis::get_absoluteToRelativeSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"get_absoluteToRelativeSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis.set_absoluteToRelativeSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Axis::*)(float_t)>(&::Rewired::PlayerController_Axis::set_absoluteToRelativeSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819159c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"set_absoluteToRelativeSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis.get_absoluteToRelativeScalingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_AbsoluteToRelativeScalingMode (::Rewired::PlayerController_Axis::*)()>(&::Rewired::PlayerController_Axis::get_absoluteToRelativeScalingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"get_absoluteToRelativeScalingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis.set_absoluteToRelativeScalingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Axis::*)(::Rewired::PlayerController_AbsoluteToRelativeScalingMode)>(&::Rewired::PlayerController_Axis::set_absoluteToRelativeScalingMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"set_absoluteToRelativeScalingMode", {}, {::i2c::type_of<::Rewired::PlayerController_AbsoluteToRelativeScalingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis.get_coordinateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCoordinateMode (::Rewired::PlayerController_Axis::*)()>(&::Rewired::PlayerController_Axis::get_coordinateMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"get_coordinateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerController_Axis::*)()>(&::Rewired::PlayerController_Axis::get_value)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1819156f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                    {::i2c::class_of<::Rewired::PlayerController_Axis*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis.get_valueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerController_Axis::*)()>(&::Rewired::PlayerController_Axis::get_valueRaw)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181915690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                    {::i2c::class_of<::Rewired::PlayerController_Axis*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr float_t& Rewired::PlayerController_Axis::__cordl_internal_get_DtlqDPSdDbjcwLLFpsjiXGpYUFaL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DtlqDPSdDbjcwLLFpsjiXGpYUFaL;
}
constexpr float_t const& Rewired::PlayerController_Axis::__cordl_internal_get_DtlqDPSdDbjcwLLFpsjiXGpYUFaL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DtlqDPSdDbjcwLLFpsjiXGpYUFaL;
}
constexpr void Rewired::PlayerController_Axis::__cordl_internal_set_DtlqDPSdDbjcwLLFpsjiXGpYUFaL(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DtlqDPSdDbjcwLLFpsjiXGpYUFaL = value;
}
constexpr ::Rewired::AxisCoordinateMode& Rewired::PlayerController_Axis::__cordl_internal_get_uBNEguoNKhAkYhLCNGomkKSUEVgT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uBNEguoNKhAkYhLCNGomkKSUEVgT;
}
constexpr ::Rewired::AxisCoordinateMode const& Rewired::PlayerController_Axis::__cordl_internal_get_uBNEguoNKhAkYhLCNGomkKSUEVgT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uBNEguoNKhAkYhLCNGomkKSUEVgT;
}
constexpr void Rewired::PlayerController_Axis::__cordl_internal_set_uBNEguoNKhAkYhLCNGomkKSUEVgT(::Rewired::AxisCoordinateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uBNEguoNKhAkYhLCNGomkKSUEVgT = value;
}
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode& Rewired::PlayerController_Axis::__cordl_internal_get_FQADjODTfYviaaPhQSYfjvFoRiTYA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FQADjODTfYviaaPhQSYfjvFoRiTYA;
}
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode const& Rewired::PlayerController_Axis::__cordl_internal_get_FQADjODTfYviaaPhQSYfjvFoRiTYA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FQADjODTfYviaaPhQSYfjvFoRiTYA;
}
constexpr void Rewired::PlayerController_Axis::__cordl_internal_set_FQADjODTfYviaaPhQSYfjvFoRiTYA(::Rewired::PlayerController_AbsoluteToRelativeScalingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FQADjODTfYviaaPhQSYfjvFoRiTYA = value;
}
inline void Rewired::PlayerController_Axis::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Axis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline float_t Rewired::PlayerController_Axis::get_absoluteToRelativeSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"get_absoluteToRelativeSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::PlayerController_Axis::set_absoluteToRelativeSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"set_absoluteToRelativeSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::PlayerController_AbsoluteToRelativeScalingMode Rewired::PlayerController_Axis::get_absoluteToRelativeScalingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"get_absoluteToRelativeScalingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_AbsoluteToRelativeScalingMode>(this, ___internal_method);
}
inline void Rewired::PlayerController_Axis::set_absoluteToRelativeScalingMode(::Rewired::PlayerController_AbsoluteToRelativeScalingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"set_absoluteToRelativeScalingMode", {}, {::i2c::type_of<::Rewired::PlayerController_AbsoluteToRelativeScalingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::AxisCoordinateMode Rewired::PlayerController_Axis::get_coordinateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis*>(),
                        {"get_coordinateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCoordinateMode>(this, ___internal_method);
}
inline float_t Rewired::PlayerController_Axis::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_Axis*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Rewired::PlayerController_Axis::get_valueRaw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_Axis*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Axis* Rewired::PlayerController_Axis::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_Axis*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_Axis::PlayerController_Axis()   {
}
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_Axis::ayRqlNWTcazvmMxFJllEJeyxDSYr{static_cast<int32_t>(0x0)};
constexpr ::Rewired::AxisCoordinateMode  Rewired::PlayerController_Axis::defaultAxisCoordinateMode{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::Rewired::MouseAxis_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseAxis_PlayerController_Definition::*)()>(&::Rewired::MouseAxis_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseAxis_PlayerController_Definition.zLhEiIdEnUKnQuUJbFkjBDteiYlLB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::MouseAxis_PlayerController_Definition::*)(::Rewired::PlayerController*)>(&::Rewired::MouseAxis_PlayerController_Definition::zLhEiIdEnUKnQuUJbFkjBDteiYlLB)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::MouseAxis_PlayerController_Definition*>(),
                    {::i2c::class_of<::Rewired::MouseAxis_PlayerController_Definition*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Rewired::MouseAxis_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Element* Rewired::MouseAxis_PlayerController_Definition::zLhEiIdEnUKnQuUJbFkjBDteiYlLB(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::MouseAxis_PlayerController_Definition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::MouseAxis_PlayerController_Definition* Rewired::MouseAxis_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::MouseAxis_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::MouseAxis_PlayerController_Definition::MouseAxis_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_MouseAxis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_MouseAxis::*)(::Rewired::PlayerController*, ::Rewired::MouseAxis_PlayerController_Definition*)>(&::Rewired::PlayerController_MouseAxis::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181963530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::MouseAxis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::PlayerController_MouseAxis::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseAxis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::MouseAxis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::PlayerController_MouseAxis::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseAxis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_MouseAxis*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_MouseAxis::PlayerController_MouseAxis()   {
}
constexpr ::Rewired::AxisCoordinateMode  Rewired::PlayerController_MouseAxis::defaultAxisCoordinateMode{static_cast<int32_t>(0x1)};
constexpr ::Rewired::PlayerController_AbsoluteToRelativeScalingMode  Rewired::PlayerController_MouseAxis::defaultAbsoluteToRelativeScalingMode{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::CompoundElement_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CompoundElement_PlayerController_Definition::*)()>(&::Rewired::CompoundElement_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18195cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CompoundElement_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::CompoundElement_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CompoundElement_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::CompoundElement_PlayerController_Definition* Rewired::CompoundElement_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CompoundElement_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::CompoundElement_PlayerController_Definition::CompoundElement_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::Axis2D_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Axis2D_PlayerController_Definition::*)()>(&::Rewired::Axis2D_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18195cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2D_PlayerController_Definition.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Axis_PlayerController_Definition* (::Rewired::Axis2D_PlayerController_Definition::*)()>(&::Rewired::Axis2D_PlayerController_Definition::get_xAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2D_PlayerController_Definition.set_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Axis2D_PlayerController_Definition::*)(::Rewired::Axis_PlayerController_Definition*)>(&::Rewired::Axis2D_PlayerController_Definition::set_xAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {"set_xAxis", {}, {::i2c::type_of<::Rewired::Axis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2D_PlayerController_Definition.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Axis_PlayerController_Definition* (::Rewired::Axis2D_PlayerController_Definition::*)()>(&::Rewired::Axis2D_PlayerController_Definition::get_yAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2D_PlayerController_Definition.set_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Axis2D_PlayerController_Definition::*)(::Rewired::Axis_PlayerController_Definition*)>(&::Rewired::Axis2D_PlayerController_Definition::set_yAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {"set_yAxis", {}, {::i2c::type_of<::Rewired::Axis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Axis2D_PlayerController_Definition.heXrUuBlbVgunFmgCojzyLnipuwh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::Axis2D_PlayerController_Definition::*)(::Rewired::PlayerController*)>(&::Rewired::Axis2D_PlayerController_Definition::heXrUuBlbVgunFmgCojzyLnipuwh)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                    {::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::Axis_PlayerController_Definition*& Rewired::Axis2D_PlayerController_Definition::__cordl_internal_get_VvXneWriCKCzNozaFoQzhlVMzTAV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VvXneWriCKCzNozaFoQzhlVMzTAV;
}
constexpr ::Rewired::Axis_PlayerController_Definition* const& Rewired::Axis2D_PlayerController_Definition::__cordl_internal_get_VvXneWriCKCzNozaFoQzhlVMzTAV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VvXneWriCKCzNozaFoQzhlVMzTAV;
}
constexpr void Rewired::Axis2D_PlayerController_Definition::__cordl_internal_set_VvXneWriCKCzNozaFoQzhlVMzTAV(::Rewired::Axis_PlayerController_Definition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VvXneWriCKCzNozaFoQzhlVMzTAV = value;
}
constexpr ::Rewired::Axis_PlayerController_Definition*& Rewired::Axis2D_PlayerController_Definition::__cordl_internal_get_iZQsguRBffAAQSKlOElUnyNWZtfj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iZQsguRBffAAQSKlOElUnyNWZtfj;
}
constexpr ::Rewired::Axis_PlayerController_Definition* const& Rewired::Axis2D_PlayerController_Definition::__cordl_internal_get_iZQsguRBffAAQSKlOElUnyNWZtfj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iZQsguRBffAAQSKlOElUnyNWZtfj;
}
constexpr void Rewired::Axis2D_PlayerController_Definition::__cordl_internal_set_iZQsguRBffAAQSKlOElUnyNWZtfj(::Rewired::Axis_PlayerController_Definition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iZQsguRBffAAQSKlOElUnyNWZtfj = value;
}
inline void Rewired::Axis2D_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Axis_PlayerController_Definition* Rewired::Axis2D_PlayerController_Definition::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Axis_PlayerController_Definition*>(this, ___internal_method);
}
inline void Rewired::Axis2D_PlayerController_Definition::set_xAxis(::Rewired::Axis_PlayerController_Definition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {"set_xAxis", {}, {::i2c::type_of<::Rewired::Axis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Axis_PlayerController_Definition* Rewired::Axis2D_PlayerController_Definition::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Axis_PlayerController_Definition*>(this, ___internal_method);
}
inline void Rewired::Axis2D_PlayerController_Definition::set_yAxis(::Rewired::Axis_PlayerController_Definition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(),
                        {"set_yAxis", {}, {::i2c::type_of<::Rewired::Axis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::PlayerController_Element* Rewired::Axis2D_PlayerController_Definition::heXrUuBlbVgunFmgCojzyLnipuwh(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Axis2D_PlayerController_Definition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Axis2D_PlayerController_Definition* Rewired::Axis2D_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Axis2D_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::Axis2D_PlayerController_Definition::Axis2D_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_CompoundElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_CompoundElement::*)(::Rewired::PlayerController*, ::Rewired::CompoundElement_PlayerController_Definition*, ::ArrayW<::Rewired::Element_PlayerController_Definition*>)>(&::Rewired::PlayerController_CompoundElement::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18195bd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::CompoundElement_PlayerController_Definition*>(), ::i2c::type_of<::ArrayW<::Rewired::Element_PlayerController_Definition*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_CompoundElement.vklNeQBGRPFuShvPqCCwcqjHsYWpb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerController_CompoundElement::*)()>(&::Rewired::PlayerController_CompoundElement::vklNeQBGRPFuShvPqCCwcqjHsYWpb)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18195c6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                        {"vklNeQBGRPFuShvPqCCwcqjHsYWpb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_CompoundElement.COYNHsrdBOkeByvbliGembtebzks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_CompoundElement::*)(::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*)>(&::Rewired::PlayerController_CompoundElement::COYNHsrdBOkeByvbliGembtebzks)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18195c4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                        {"COYNHsrdBOkeByvbliGembtebzks", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_CompoundElement.rquLIRWVgKVtxRXcmCUHAmyRfAKw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_CompoundElement::*)(::Rewired::PlayerController_Element*)>(&::Rewired::PlayerController_CompoundElement::rquLIRWVgKVtxRXcmCUHAmyRfAKw)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195c630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                        {"rquLIRWVgKVtxRXcmCUHAmyRfAKw", {}, {::i2c::type_of<::Rewired::PlayerController_Element*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*& Rewired::PlayerController_CompoundElement::__cordl_internal_get_DLDarzmDsWEeaRPuDLAjjCNSpEyx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DLDarzmDsWEeaRPuDLAjjCNSpEyx;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>* const& Rewired::PlayerController_CompoundElement::__cordl_internal_get_DLDarzmDsWEeaRPuDLAjjCNSpEyx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DLDarzmDsWEeaRPuDLAjjCNSpEyx;
}
constexpr void Rewired::PlayerController_CompoundElement::__cordl_internal_set_DLDarzmDsWEeaRPuDLAjjCNSpEyx(::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DLDarzmDsWEeaRPuDLAjjCNSpEyx = value;
}
inline void Rewired::PlayerController_CompoundElement::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::CompoundElement_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::Element_PlayerController_Definition*>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::CompoundElement_PlayerController_Definition*>(), ::i2c::type_of<::ArrayW<::Rewired::Element_PlayerController_Definition*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline int32_t Rewired::PlayerController_CompoundElement::vklNeQBGRPFuShvPqCCwcqjHsYWpb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                        {"vklNeQBGRPFuShvPqCCwcqjHsYWpb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename >
inline  Rewired::PlayerController_CompoundElement::JmREgKjaiwPLfeAlNRtahwhaZaObA(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                    {"JmREgKjaiwPLfeAlNRtahwhaZaObA", {::i2c::class_of<>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::PlayerController_CompoundElement::COYNHsrdBOkeByvbliGembtebzks(::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                        {"COYNHsrdBOkeByvbliGembtebzks", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::PlayerController_CompoundElement::rquLIRWVgKVtxRXcmCUHAmyRfAKw(::Rewired::PlayerController_Element*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_CompoundElement*>(),
                        {"rquLIRWVgKVtxRXcmCUHAmyRfAKw", {}, {::i2c::type_of<::Rewired::PlayerController_Element*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::PlayerController_CompoundElement* Rewired::PlayerController_CompoundElement::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::CompoundElement_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::Element_PlayerController_Definition*>  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_CompoundElement*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_CompoundElement::PlayerController_CompoundElement()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_Axis2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Axis2D::*)(::Rewired::PlayerController*, ::Rewired::Axis2D_PlayerController_Definition*, ::ArrayW<::Rewired::Element_PlayerController_Definition*>)>(&::Rewired::PlayerController_Axis2D::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18195bd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Axis2D_PlayerController_Definition*>(), ::i2c::type_of<::ArrayW<::Rewired::Element_PlayerController_Definition*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Axis2D::*)(::Rewired::PlayerController*, ::Rewired::Axis2D_PlayerController_Definition*)>(&::Rewired::PlayerController_Axis2D::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18195bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Axis2D_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis2D.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Axis* (::Rewired::PlayerController_Axis2D::*)()>(&::Rewired::PlayerController_Axis2D::get_xAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18195bfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis2D.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Axis* (::Rewired::PlayerController_Axis2D::*)()>(&::Rewired::PlayerController_Axis2D::get_yAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18195bfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis2D.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::PlayerController_Axis2D::*)()>(&::Rewired::PlayerController_Axis2D::get_value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                    {::i2c::class_of<::Rewired::PlayerController_Axis2D*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Axis2D.get_valueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::PlayerController_Axis2D::*)()>(&::Rewired::PlayerController_Axis2D::get_valueRaw)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195be80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                    {::i2c::class_of<::Rewired::PlayerController_Axis2D*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Rewired::PlayerController_Axis2D::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::Element_PlayerController_Definition*>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Axis2D_PlayerController_Definition*>(), ::i2c::type_of<::ArrayW<::Rewired::Element_PlayerController_Definition*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::PlayerController_Axis2D::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Axis2D_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::PlayerController_Axis* Rewired::PlayerController_Axis2D::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Axis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Axis* Rewired::PlayerController_Axis2D::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Axis2D*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Axis*>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::PlayerController_Axis2D::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_Axis2D*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::PlayerController_Axis2D::get_valueRaw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_Axis2D*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Axis2D* Rewired::PlayerController_Axis2D::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1, ::ArrayW<::Rewired::Element_PlayerController_Definition*>  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_Axis2D*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
inline ::Rewired::PlayerController_Axis2D* Rewired::PlayerController_Axis2D::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Axis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_Axis2D*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_Axis2D::PlayerController_Axis2D()   {
}
//  Writing Method size for method: ::Rewired::MouseAxis2D_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseAxis2D_PlayerController_Definition::*)()>(&::Rewired::MouseAxis2D_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18195cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseAxis2D_PlayerController_Definition.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseAxis_PlayerController_Definition* (::Rewired::MouseAxis2D_PlayerController_Definition::*)()>(&::Rewired::MouseAxis2D_PlayerController_Definition::get_xAxis)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195cce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseAxis2D_PlayerController_Definition.set_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseAxis2D_PlayerController_Definition::*)(::Rewired::MouseAxis_PlayerController_Definition*)>(&::Rewired::MouseAxis2D_PlayerController_Definition::set_xAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {"set_xAxis", {}, {::i2c::type_of<::Rewired::MouseAxis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseAxis2D_PlayerController_Definition.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseAxis_PlayerController_Definition* (::Rewired::MouseAxis2D_PlayerController_Definition::*)()>(&::Rewired::MouseAxis2D_PlayerController_Definition::get_yAxis)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseAxis2D_PlayerController_Definition.set_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseAxis2D_PlayerController_Definition::*)(::Rewired::MouseAxis_PlayerController_Definition*)>(&::Rewired::MouseAxis2D_PlayerController_Definition::set_yAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {"set_yAxis", {}, {::i2c::type_of<::Rewired::MouseAxis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseAxis2D_PlayerController_Definition.lIJJxpcZfToWvcfMuFDKidqxYann
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::MouseAxis2D_PlayerController_Definition::*)(::Rewired::PlayerController*)>(&::Rewired::MouseAxis2D_PlayerController_Definition::lIJJxpcZfToWvcfMuFDKidqxYann)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                    {::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Rewired::MouseAxis2D_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::MouseAxis_PlayerController_Definition* Rewired::MouseAxis2D_PlayerController_Definition::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseAxis_PlayerController_Definition*>(this, ___internal_method);
}
inline void Rewired::MouseAxis2D_PlayerController_Definition::set_xAxis(::Rewired::MouseAxis_PlayerController_Definition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {"set_xAxis", {}, {::i2c::type_of<::Rewired::MouseAxis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::MouseAxis_PlayerController_Definition* Rewired::MouseAxis2D_PlayerController_Definition::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseAxis_PlayerController_Definition*>(this, ___internal_method);
}
inline void Rewired::MouseAxis2D_PlayerController_Definition::set_yAxis(::Rewired::MouseAxis_PlayerController_Definition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(),
                        {"set_yAxis", {}, {::i2c::type_of<::Rewired::MouseAxis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::PlayerController_Element* Rewired::MouseAxis2D_PlayerController_Definition::lIJJxpcZfToWvcfMuFDKidqxYann(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::MouseAxis2D_PlayerController_Definition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::MouseAxis2D_PlayerController_Definition* Rewired::MouseAxis2D_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::MouseAxis2D_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::MouseAxis2D_PlayerController_Definition::MouseAxis2D_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_MouseAxis2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_MouseAxis2D::*)(::Rewired::PlayerController*, ::Rewired::MouseAxis2D_PlayerController_Definition*)>(&::Rewired::PlayerController_MouseAxis2D::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181963260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseAxis2D*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::MouseAxis2D_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseAxis2D.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseAxis* (::Rewired::PlayerController_MouseAxis2D::*)()>(&::Rewired::PlayerController_MouseAxis2D::get_xAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181963500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseAxis2D*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseAxis2D.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseAxis* (::Rewired::PlayerController_MouseAxis2D::*)()>(&::Rewired::PlayerController_MouseAxis2D::get_yAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181963510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseAxis2D*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::PlayerController_MouseAxis2D::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseAxis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseAxis2D*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::MouseAxis2D_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::PlayerController_MouseAxis2D::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseAxis2D*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::PlayerController_MouseAxis2D::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseAxis2D*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseAxis2D* Rewired::PlayerController_MouseAxis2D::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseAxis2D_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_MouseAxis2D*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_MouseAxis2D::PlayerController_MouseAxis2D()   {
}
//  Writing Method size for method: ::Rewired::Button_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Button_PlayerController_Definition::*)()>(&::Rewired::Button_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18195cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Button_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Button_PlayerController_Definition.OUGaAogVvZnPFuFcflMhjNmPCwYaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::Button_PlayerController_Definition::*)(::Rewired::PlayerController*)>(&::Rewired::Button_PlayerController_Definition::OUGaAogVvZnPFuFcflMhjNmPCwYaA)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18195ca20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Button_PlayerController_Definition*>(),
                    {::i2c::class_of<::Rewired::Button_PlayerController_Definition*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Button_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Button_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Element* Rewired::Button_PlayerController_Definition::OUGaAogVvZnPFuFcflMhjNmPCwYaA(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Button_PlayerController_Definition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Button_PlayerController_Definition* Rewired::Button_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Button_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::Button_PlayerController_Definition::Button_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_Button._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_Button::*)(::Rewired::PlayerController*, ::Rewired::Button_PlayerController_Definition*)>(&::Rewired::PlayerController_Button::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18195c2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Button_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Button.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController_Button::*)()>(&::Rewired::PlayerController_Button::get_value)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Button.get_valuePrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController_Button::*)()>(&::Rewired::PlayerController_Button::get_valuePrev)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {"get_valuePrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Button.get_justPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController_Button::*)()>(&::Rewired::PlayerController_Button::get_justPressed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {"get_justPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_Button.get_justReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController_Button::*)()>(&::Rewired::PlayerController_Button::get_justReleased)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {"get_justReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::PlayerController_Button::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Button_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::Button_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::PlayerController_Button::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::PlayerController_Button::get_valuePrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {"get_valuePrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::PlayerController_Button::get_justPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {"get_justPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::PlayerController_Button::get_justReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_Button*>(),
                        {"get_justReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::PlayerController_Button::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::Button_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_Button*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_Button::PlayerController_Button()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Element_PlayerController_Type::Element_PlayerController_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Element_PlayerController_Type::Element_PlayerController_Type()   {
}
constexpr ::Rewired::Element_PlayerController_Type  Rewired::Element_PlayerController_Type::Button{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Element_PlayerController_Type  Rewired::Element_PlayerController_Type::Axis{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Element_PlayerController_Type  Rewired::Element_PlayerController_Type::MouseAxis{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Element_PlayerController_Type  Rewired::Element_PlayerController_Type::MouseWheelAxis{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Element_PlayerController_Type  Rewired::Element_PlayerController_Type::Axis2D{static_cast<int32_t>(0x64)};
constexpr ::Rewired::Element_PlayerController_Type  Rewired::Element_PlayerController_Type::MouseAxis2D{static_cast<int32_t>(0x65)};
constexpr ::Rewired::Element_PlayerController_Type  Rewired::Element_PlayerController_Type::MouseWheel{static_cast<int32_t>(0x66)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Element_PlayerController_TypeWithSource::Element_PlayerController_TypeWithSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Element_PlayerController_TypeWithSource::Element_PlayerController_TypeWithSource()   {
}
constexpr ::Rewired::Element_PlayerController_TypeWithSource  Rewired::Element_PlayerController_TypeWithSource::Button{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Element_PlayerController_TypeWithSource  Rewired::Element_PlayerController_TypeWithSource::Axis{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Element_PlayerController_TypeWithSource  Rewired::Element_PlayerController_TypeWithSource::MouseAxis{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Element_PlayerController_TypeWithSource  Rewired::Element_PlayerController_TypeWithSource::MouseWheelAxis{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Element_PlayerController_CompoundTypes::Element_PlayerController_CompoundTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Element_PlayerController_CompoundTypes::Element_PlayerController_CompoundTypes()   {
}
constexpr ::Rewired::Element_PlayerController_CompoundTypes  Rewired::Element_PlayerController_CompoundTypes::Axis2D{static_cast<int32_t>(0x64)};
constexpr ::Rewired::Element_PlayerController_CompoundTypes  Rewired::Element_PlayerController_CompoundTypes::MouseAxis2D{static_cast<int32_t>(0x65)};
constexpr ::Rewired::Element_PlayerController_CompoundTypes  Rewired::Element_PlayerController_CompoundTypes::MouseWheel{static_cast<int32_t>(0x66)};
//  Writing Method size for method: ::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ::*)(::Rewired::ControllerElementType, int32_t, float_t)>(&::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180fb4c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ::_ctor(::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerElementType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
// Ctor Parameters [CppParam { name: "SHXMlLrgnAGKPrpVKJEPunSuXQPb", ty: "::Rewired::ControllerElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "bJYGxBXEalzRxtkGUcVSHVMIGmoAA", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pYcPkWAHUdrxvkIpBasTuOYuZgMw", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ(::Rewired::ControllerElementType  SHXMlLrgnAGKPrpVKJEPunSuXQPb, int32_t  bJYGxBXEalzRxtkGUcVSHVMIGmoAA, float_t  pYcPkWAHUdrxvkIpBasTuOYuZgMw) noexcept  {
this->SHXMlLrgnAGKPrpVKJEPunSuXQPb = SHXMlLrgnAGKPrpVKJEPunSuXQPb;
this->bJYGxBXEalzRxtkGUcVSHVMIGmoAA = bJYGxBXEalzRxtkGUcVSHVMIGmoAA;
this->pYcPkWAHUdrxvkIpBasTuOYuZgMw = pYcPkWAHUdrxvkIpBasTuOYuZgMw;
}
// Ctor Parameters []
constexpr ::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ()   {
}
//  Writing Method size for method: ::Rewired::MouseWheel_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseWheel_PlayerController_Definition::*)()>(&::Rewired::MouseWheel_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18195cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseWheel_PlayerController_Definition.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseWheelAxis_PlayerController_Definition* (::Rewired::MouseWheel_PlayerController_Definition::*)()>(&::Rewired::MouseWheel_PlayerController_Definition::get_xAxis)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195cd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseWheel_PlayerController_Definition.set_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseWheel_PlayerController_Definition::*)(::Rewired::MouseWheelAxis_PlayerController_Definition*)>(&::Rewired::MouseWheel_PlayerController_Definition::set_xAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {"set_xAxis", {}, {::i2c::type_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseWheel_PlayerController_Definition.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseWheelAxis_PlayerController_Definition* (::Rewired::MouseWheel_PlayerController_Definition::*)()>(&::Rewired::MouseWheel_PlayerController_Definition::get_yAxis)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195cdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseWheel_PlayerController_Definition.set_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseWheel_PlayerController_Definition::*)(::Rewired::MouseWheelAxis_PlayerController_Definition*)>(&::Rewired::MouseWheel_PlayerController_Definition::set_yAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {"set_yAxis", {}, {::i2c::type_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseWheel_PlayerController_Definition.jjHDNBHLcOlwwEIQVAgQRrFrBOLS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::MouseWheel_PlayerController_Definition::*)(::Rewired::PlayerController*)>(&::Rewired::MouseWheel_PlayerController_Definition::jjHDNBHLcOlwwEIQVAgQRrFrBOLS)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                    {::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Rewired::MouseWheel_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::MouseWheelAxis_PlayerController_Definition* Rewired::MouseWheel_PlayerController_Definition::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseWheelAxis_PlayerController_Definition*>(this, ___internal_method);
}
inline void Rewired::MouseWheel_PlayerController_Definition::set_xAxis(::Rewired::MouseWheelAxis_PlayerController_Definition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {"set_xAxis", {}, {::i2c::type_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::MouseWheelAxis_PlayerController_Definition* Rewired::MouseWheel_PlayerController_Definition::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseWheelAxis_PlayerController_Definition*>(this, ___internal_method);
}
inline void Rewired::MouseWheel_PlayerController_Definition::set_yAxis(::Rewired::MouseWheelAxis_PlayerController_Definition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(),
                        {"set_yAxis", {}, {::i2c::type_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::PlayerController_Element* Rewired::MouseWheel_PlayerController_Definition::jjHDNBHLcOlwwEIQVAgQRrFrBOLS(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::MouseWheel_PlayerController_Definition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::MouseWheel_PlayerController_Definition* Rewired::MouseWheel_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::MouseWheel_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::MouseWheel_PlayerController_Definition::MouseWheel_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_MouseWheel::*)(::Rewired::PlayerController*, ::Rewired::MouseWheel_PlayerController_Definition*)>(&::Rewired::PlayerController_MouseWheel::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181963840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheel*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::MouseWheel_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheel.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseWheelAxis* (::Rewired::PlayerController_MouseWheel::*)()>(&::Rewired::PlayerController_MouseWheel::get_xAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181963ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheel*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheel.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseWheelAxis* (::Rewired::PlayerController_MouseWheel::*)()>(&::Rewired::PlayerController_MouseWheel::get_yAxis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181963af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheel*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::PlayerController_MouseWheel::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseWheel_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheel*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::MouseWheel_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::PlayerController_MouseWheelAxis* Rewired::PlayerController_MouseWheel::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheel*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseWheelAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseWheelAxis* Rewired::PlayerController_MouseWheel::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheel*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseWheelAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseWheel* Rewired::PlayerController_MouseWheel::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseWheel_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_MouseWheel*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_MouseWheel::PlayerController_MouseWheel()   {
}
//  Writing Method size for method: ::Rewired::MouseWheelAxis_PlayerController_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::MouseWheelAxis_PlayerController_Definition::*)()>(&::Rewired::MouseWheelAxis_PlayerController_Definition::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::MouseWheelAxis_PlayerController_Definition.LoVrbrnFqQBpYBXgujMMmqYyUdMGA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::MouseWheelAxis_PlayerController_Definition::*)(::Rewired::PlayerController*)>(&::Rewired::MouseWheelAxis_PlayerController_Definition::LoVrbrnFqQBpYBXgujMMmqYyUdMGA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195c990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>(),
                    {::i2c::class_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr float_t& Rewired::MouseWheelAxis_PlayerController_Definition::__cordl_internal_get_repeatRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatRate;
}
constexpr float_t const& Rewired::MouseWheelAxis_PlayerController_Definition::__cordl_internal_get_repeatRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatRate;
}
constexpr void Rewired::MouseWheelAxis_PlayerController_Definition::__cordl_internal_set_repeatRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatRate = value;
}
inline void Rewired::MouseWheelAxis_PlayerController_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Element* Rewired::MouseWheelAxis_PlayerController_Definition::LoVrbrnFqQBpYBXgujMMmqYyUdMGA(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::MouseWheelAxis_PlayerController_Definition* Rewired::MouseWheelAxis_PlayerController_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::MouseWheelAxis_PlayerController_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::MouseWheelAxis_PlayerController_Definition::MouseWheelAxis_PlayerController_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheelAxis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_MouseWheelAxis::*)(::Rewired::PlayerController*, ::Rewired::MouseWheelAxis_PlayerController_Definition*)>(&::Rewired::PlayerController_MouseWheelAxis::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181963730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheelAxis.get_repeatRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerController_MouseWheelAxis::*)()>(&::Rewired::PlayerController_MouseWheelAxis::get_repeatRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819637a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {"get_repeatRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheelAxis.set_repeatRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_MouseWheelAxis::*)(float_t)>(&::Rewired::PlayerController_MouseWheelAxis::set_repeatRate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181963810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {"set_repeatRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheelAxis.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerController_MouseWheelAxis::*)()>(&::Rewired::PlayerController_MouseWheelAxis::get_value)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819637c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                    {::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheelAxis.VJmUQPHIeLItQBxnrfnoHBQnpfy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_MouseWheelAxis::*)()>(&::Rewired::PlayerController_MouseWheelAxis::VJmUQPHIeLItQBxnrfnoHBQnpfy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819636f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                    {::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheelAxis.EnabledStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_MouseWheelAxis::*)(bool)>(&::Rewired::PlayerController_MouseWheelAxis::EnabledStateChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181963540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                    {::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheelAxis.TYAugMRisLLuQkZpVqSYmcRaPBuT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerController_MouseWheelAxis::*)()>(&::Rewired::PlayerController_MouseWheelAxis::TYAugMRisLLuQkZpVqSYmcRaPBuT)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181963550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {"TYAugMRisLLuQkZpVqSYmcRaPBuT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController_MouseWheelAxis.kVaceDgtiHpFgalnDMllDidfsvhKe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController_MouseWheelAxis::*)()>(&::Rewired::PlayerController_MouseWheelAxis::kVaceDgtiHpFgalnDMllDidfsvhKe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181963800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {"kVaceDgtiHpFgalnDMllDidfsvhKe", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Rewired::PlayerController_MouseWheelAxis::__cordl_internal_get_rdJfdSZPISdOZBkFlKHBCzkNZYVLA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rdJfdSZPISdOZBkFlKHBCzkNZYVLA;
}
constexpr float_t const& Rewired::PlayerController_MouseWheelAxis::__cordl_internal_get_rdJfdSZPISdOZBkFlKHBCzkNZYVLA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rdJfdSZPISdOZBkFlKHBCzkNZYVLA;
}
constexpr void Rewired::PlayerController_MouseWheelAxis::__cordl_internal_set_rdJfdSZPISdOZBkFlKHBCzkNZYVLA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rdJfdSZPISdOZBkFlKHBCzkNZYVLA = value;
}
constexpr double_t& Rewired::PlayerController_MouseWheelAxis::__cordl_internal_get_QSXpTEGYFNAiYgzLmfXgKfFJYEft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QSXpTEGYFNAiYgzLmfXgKfFJYEft;
}
constexpr double_t const& Rewired::PlayerController_MouseWheelAxis::__cordl_internal_get_QSXpTEGYFNAiYgzLmfXgKfFJYEft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QSXpTEGYFNAiYgzLmfXgKfFJYEft;
}
constexpr void Rewired::PlayerController_MouseWheelAxis::__cordl_internal_set_QSXpTEGYFNAiYgzLmfXgKfFJYEft(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QSXpTEGYFNAiYgzLmfXgKfFJYEft = value;
}
constexpr float_t& Rewired::PlayerController_MouseWheelAxis::__cordl_internal_get_NozvdOcNoSDriinduIHvSScmiHiJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NozvdOcNoSDriinduIHvSScmiHiJ;
}
constexpr float_t const& Rewired::PlayerController_MouseWheelAxis::__cordl_internal_get_NozvdOcNoSDriinduIHvSScmiHiJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NozvdOcNoSDriinduIHvSScmiHiJ;
}
constexpr void Rewired::PlayerController_MouseWheelAxis::__cordl_internal_set_NozvdOcNoSDriinduIHvSScmiHiJ(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NozvdOcNoSDriinduIHvSScmiHiJ = value;
}
inline void Rewired::PlayerController_MouseWheelAxis::_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseWheelAxis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController*>(), ::i2c::type_of<::Rewired::MouseWheelAxis_PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline float_t Rewired::PlayerController_MouseWheelAxis::get_repeatRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {"get_repeatRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::PlayerController_MouseWheelAxis::set_repeatRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {"set_repeatRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::PlayerController_MouseWheelAxis::get_value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::PlayerController_MouseWheelAxis::VJmUQPHIeLItQBxnrfnoHBQnpfy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlayerController_MouseWheelAxis::EnabledStateChanged(bool  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline float_t Rewired::PlayerController_MouseWheelAxis::TYAugMRisLLuQkZpVqSYmcRaPBuT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {"TYAugMRisLLuQkZpVqSYmcRaPBuT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::PlayerController_MouseWheelAxis::kVaceDgtiHpFgalnDMllDidfsvhKe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController_MouseWheelAxis*>(),
                        {"kVaceDgtiHpFgalnDMllDidfsvhKe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseWheelAxis* Rewired::PlayerController_MouseWheelAxis::New_ctor(::Rewired::PlayerController*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseWheelAxis_PlayerController_Definition*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController_MouseWheelAxis*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController_MouseWheelAxis::PlayerController_MouseWheelAxis()   {
}
constexpr ::Rewired::AxisCoordinateMode  Rewired::PlayerController_MouseWheelAxis::defaultAxisCoordinateMode{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::PlayerController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::Rewired::PlayerController_Definition*)>(&::Rewired::PlayerController::_ctor)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x181926210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::Finalize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181925170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController*>(),
                    {::i2c::class_of<::Rewired::PlayerController*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::get_enabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181926b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(bool)>(&::Rewired::PlayerController::set_enabled)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181926f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::get_playerId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181926be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.set_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(int32_t)>(&::Rewired::PlayerController::set_playerId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181927130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"set_playerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_buttons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>* (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::get_buttons)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181926a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_buttons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_axes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>* (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::get_axes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181926940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_axes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_elements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>* (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::get_elements)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181926b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_elements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::get_buttonCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181926a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_buttonCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::get_axisCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819269a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_axisCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_elementCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::get_elementCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181926ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_elementCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.add_ButtonStateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::System::Action_2<int32_t,bool>*)>(&::Rewired::PlayerController::add_ButtonStateChangedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181926780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"add_ButtonStateChangedEvent", {}, {::i2c::type_of<::System::Action_2<int32_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.remove_ButtonStateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::System::Action_2<int32_t,bool>*)>(&::Rewired::PlayerController::remove_ButtonStateChangedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181926dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"remove_ButtonStateChangedEvent", {}, {::i2c::type_of<::System::Action_2<int32_t,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.add_AxisValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::System::Action_2<int32_t,float_t>*)>(&::Rewired::PlayerController::add_AxisValueChangedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1819266a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"add_AxisValueChangedEvent", {}, {::i2c::type_of<::System::Action_2<int32_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.remove_AxisValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::System::Action_2<int32_t,float_t>*)>(&::Rewired::PlayerController::remove_AxisValueChangedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181926d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"remove_AxisValueChangedEvent", {}, {::i2c::type_of<::System::Action_2<int32_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.add_EnabledStateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::System::Action_1<bool>*)>(&::Rewired::PlayerController::add_EnabledStateChangedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181926860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"add_EnabledStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.remove_EnabledStateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::System::Action_1<bool>*)>(&::Rewired::PlayerController::remove_EnabledStateChangedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181926e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"remove_EnabledStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController::*)(int32_t)>(&::Rewired::PlayerController::GetButton)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181925450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController::*)(int32_t)>(&::Rewired::PlayerController::GetButtonDown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181925310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetButtonDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.GetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController::*)(int32_t)>(&::Rewired::PlayerController::GetButtonUp)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819253b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetButtonUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerController::*)(int32_t)>(&::Rewired::PlayerController::GetAxis)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181925270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetAxis", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.GetAxisRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerController::*)(int32_t)>(&::Rewired::PlayerController::GetAxisRaw)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819251d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.GetElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Element* (::Rewired::PlayerController::*)(int32_t)>(&::Rewired::PlayerController::GetElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819254f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.IiOCqqBNQJcOEzTMGDRZEKZhAhFNA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Player* (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::IiOCqqBNQJcOEzTMGDRZEKZhAhFNA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181925580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"IiOCqqBNQJcOEzTMGDRZEKZhAhFNA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.rgqliBLWBpJpgOfiyFzWZiEkfuaE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::Rewired::UpdateLoopType)>(&::Rewired::PlayerController::rgqliBLWBpJpgOfiyFzWZiEkfuaE)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181926ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"rgqliBLWBpJpgOfiyFzWZiEkfuaE", {}, {::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerController::*)(::Rewired::UpdateLoopType)>(&::Rewired::PlayerController::Update)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x181925d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController*>(),
                    {::i2c::class_of<::Rewired::PlayerController*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.UpdateFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::UpdateFinished)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181925b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController*>(),
                    {::i2c::class_of<::Rewired::PlayerController*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.ClearVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)()>(&::Rewired::PlayerController::ClearVars)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181925140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController*>(),
                    {::i2c::class_of<::Rewired::PlayerController*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.hwqBnSmqJvDZfCiNJJJzqiqWalXP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::Rewired::PlayerController_Element*)>(&::Rewired::PlayerController::hwqBnSmqJvDZfCiNJJJzqiqWalXP)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181926c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"hwqBnSmqJvDZfCiNJJJzqiqWalXP", {}, {::i2c::type_of<::Rewired::PlayerController_Element*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.JYSwMCxRETcDpyIXBejzAatRqot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerController::*)(::Rewired::PlayerController_Element*, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Button*>*, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Axis*>*)>(&::Rewired::PlayerController::JYSwMCxRETcDpyIXBejzAatRqot)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x181925650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"JYSwMCxRETcDpyIXBejzAatRqot", {}, {::i2c::type_of<::Rewired::PlayerController_Element*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Button*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Axis*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.get_absoluteToRelativeScalingReferenceResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::Rewired::PlayerController::get_absoluteToRelativeScalingReferenceResolution)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181915600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_absoluteToRelativeScalingReferenceResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerController.set_absoluteToRelativeScalingReferenceResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector2)>(&::Rewired::PlayerController::set_absoluteToRelativeScalingReferenceResolution)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181926f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"set_absoluteToRelativeScalingReferenceResolution", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::PlayerController::__cordl_internal_get_ZZmoQcrKUzfPmEFcBluBKhyJkHZFA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZZmoQcrKUzfPmEFcBluBKhyJkHZFA;
}
constexpr int32_t const& Rewired::PlayerController::__cordl_internal_get_ZZmoQcrKUzfPmEFcBluBKhyJkHZFA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZZmoQcrKUzfPmEFcBluBKhyJkHZFA;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_ZZmoQcrKUzfPmEFcBluBKhyJkHZFA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZZmoQcrKUzfPmEFcBluBKhyJkHZFA = value;
}
constexpr bool& Rewired::PlayerController::__cordl_internal_get_otmtMQNUagHjtByJxHvEwkirsLtn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otmtMQNUagHjtByJxHvEwkirsLtn;
}
constexpr bool const& Rewired::PlayerController::__cordl_internal_get_otmtMQNUagHjtByJxHvEwkirsLtn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otmtMQNUagHjtByJxHvEwkirsLtn;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_otmtMQNUagHjtByJxHvEwkirsLtn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otmtMQNUagHjtByJxHvEwkirsLtn = value;
}
constexpr int32_t& Rewired::PlayerController::__cordl_internal_get_GGKvqWOBQcYWIwHCncrFLQeJvZJc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GGKvqWOBQcYWIwHCncrFLQeJvZJc;
}
constexpr int32_t const& Rewired::PlayerController::__cordl_internal_get_GGKvqWOBQcYWIwHCncrFLQeJvZJc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GGKvqWOBQcYWIwHCncrFLQeJvZJc;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_GGKvqWOBQcYWIwHCncrFLQeJvZJc(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GGKvqWOBQcYWIwHCncrFLQeJvZJc = value;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Element*>*& Rewired::PlayerController::__cordl_internal_get_zllpElocLhlMJeXOLkAxcZIIIAzV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zllpElocLhlMJeXOLkAxcZIIIAzV;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Element*>* const& Rewired::PlayerController::__cordl_internal_get_zllpElocLhlMJeXOLkAxcZIIIAzV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zllpElocLhlMJeXOLkAxcZIIIAzV;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_zllpElocLhlMJeXOLkAxcZIIIAzV(::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Element*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zllpElocLhlMJeXOLkAxcZIIIAzV = value;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Button*>*& Rewired::PlayerController::__cordl_internal_get_plfGHWcVZbnxndOMikXPxzryKyOab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plfGHWcVZbnxndOMikXPxzryKyOab;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Button*>* const& Rewired::PlayerController::__cordl_internal_get_plfGHWcVZbnxndOMikXPxzryKyOab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plfGHWcVZbnxndOMikXPxzryKyOab;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_plfGHWcVZbnxndOMikXPxzryKyOab(::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Button*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plfGHWcVZbnxndOMikXPxzryKyOab = value;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Axis*>*& Rewired::PlayerController::__cordl_internal_get_OtBkSRoZDipuadpUQSnjEfWmmhKT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OtBkSRoZDipuadpUQSnjEfWmmhKT;
}
constexpr ::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Axis*>* const& Rewired::PlayerController::__cordl_internal_get_OtBkSRoZDipuadpUQSnjEfWmmhKT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OtBkSRoZDipuadpUQSnjEfWmmhKT;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_OtBkSRoZDipuadpUQSnjEfWmmhKT(::Rewired::Utils::Classes::Data::AList_1<::Rewired::PlayerController_Axis*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OtBkSRoZDipuadpUQSnjEfWmmhKT = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Element*>*& Rewired::PlayerController::__cordl_internal_get_rPwACZfJLACrwqwEtIKPvjIiNfAl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rPwACZfJLACrwqwEtIKPvjIiNfAl;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Element*>* const& Rewired::PlayerController::__cordl_internal_get_rPwACZfJLACrwqwEtIKPvjIiNfAl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rPwACZfJLACrwqwEtIKPvjIiNfAl;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_rPwACZfJLACrwqwEtIKPvjIiNfAl(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Element*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rPwACZfJLACrwqwEtIKPvjIiNfAl = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Button*>*& Rewired::PlayerController::__cordl_internal_get_tXmZbbNUIRimTmmpmrGVeMhKkkWe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tXmZbbNUIRimTmmpmrGVeMhKkkWe;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Button*>* const& Rewired::PlayerController::__cordl_internal_get_tXmZbbNUIRimTmmpmrGVeMhKkkWe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tXmZbbNUIRimTmmpmrGVeMhKkkWe;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_tXmZbbNUIRimTmmpmrGVeMhKkkWe(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Button*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tXmZbbNUIRimTmmpmrGVeMhKkkWe = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Axis*>*& Rewired::PlayerController::__cordl_internal_get_BcIHjgAgTzuwRNYnmdOSjVVsKoLgb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BcIHjgAgTzuwRNYnmdOSjVVsKoLgb;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Axis*>* const& Rewired::PlayerController::__cordl_internal_get_BcIHjgAgTzuwRNYnmdOSjVVsKoLgb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BcIHjgAgTzuwRNYnmdOSjVVsKoLgb;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_BcIHjgAgTzuwRNYnmdOSjVVsKoLgb(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::PlayerController_Axis*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BcIHjgAgTzuwRNYnmdOSjVVsKoLgb = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>*& Rewired::PlayerController::__cordl_internal_get_oRJzHewxlPoKRLRwCrQghslvKTSq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oRJzHewxlPoKRLRwCrQghslvKTSq;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>* const& Rewired::PlayerController::__cordl_internal_get_oRJzHewxlPoKRLRwCrQghslvKTSq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oRJzHewxlPoKRLRwCrQghslvKTSq;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_oRJzHewxlPoKRLRwCrQghslvKTSq(::System::Collections::Generic::List_1<::Rewired::Element_PlayerController_MmwFJDgWnDjeNVGoQAGSfNlDWxKQ>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oRJzHewxlPoKRLRwCrQghslvKTSq = value;
}
constexpr ::System::Action_2<int32_t,bool>*& Rewired::PlayerController::__cordl_internal_get_NZCthpndnOzPXRbBaTnfGrONaVOz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NZCthpndnOzPXRbBaTnfGrONaVOz;
}
constexpr ::System::Action_2<int32_t,bool>* const& Rewired::PlayerController::__cordl_internal_get_NZCthpndnOzPXRbBaTnfGrONaVOz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NZCthpndnOzPXRbBaTnfGrONaVOz;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_NZCthpndnOzPXRbBaTnfGrONaVOz(::System::Action_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NZCthpndnOzPXRbBaTnfGrONaVOz = value;
}
constexpr ::System::Action_2<int32_t,float_t>*& Rewired::PlayerController::__cordl_internal_get_cevXCIvGcUanyqqWGYAoctvNYTlJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cevXCIvGcUanyqqWGYAoctvNYTlJ;
}
constexpr ::System::Action_2<int32_t,float_t>* const& Rewired::PlayerController::__cordl_internal_get_cevXCIvGcUanyqqWGYAoctvNYTlJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cevXCIvGcUanyqqWGYAoctvNYTlJ;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_cevXCIvGcUanyqqWGYAoctvNYTlJ(::System::Action_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cevXCIvGcUanyqqWGYAoctvNYTlJ = value;
}
constexpr ::System::Action_1<bool>*& Rewired::PlayerController::__cordl_internal_get_rKgzKCQgiRRVfDFWehuLTRuCEbJk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rKgzKCQgiRRVfDFWehuLTRuCEbJk;
}
constexpr ::System::Action_1<bool>* const& Rewired::PlayerController::__cordl_internal_get_rKgzKCQgiRRVfDFWehuLTRuCEbJk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rKgzKCQgiRRVfDFWehuLTRuCEbJk;
}
constexpr void Rewired::PlayerController::__cordl_internal_set_rKgzKCQgiRRVfDFWehuLTRuCEbJk(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rKgzKCQgiRRVfDFWehuLTRuCEbJk = value;
}
inline void Rewired::PlayerController::setStaticF_reHyWdIdWMPFahYUHXcthXIHrFcd(::UnityEngine::Vector2  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "reHyWdIdWMPFahYUHXcthXIHrFcd", ::Rewired::PlayerController*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 Rewired::PlayerController::getStaticF_reHyWdIdWMPFahYUHXcthXIHrFcd()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "reHyWdIdWMPFahYUHXcthXIHrFcd", ::Rewired::PlayerController*>();
}
inline void Rewired::PlayerController::_ctor(::Rewired::PlayerController_Definition*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerController_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::PlayerController::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::PlayerController::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::PlayerController::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::PlayerController::get_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::PlayerController::set_playerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"set_playerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>* Rewired::PlayerController::get_buttons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_buttons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::PlayerController_Button*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>* Rewired::PlayerController::get_axes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_axes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::PlayerController_Axis*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>* Rewired::PlayerController::get_elements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_elements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::PlayerController_Element*>*>(this, ___internal_method);
}
inline int32_t Rewired::PlayerController::get_buttonCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_buttonCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::PlayerController::get_axisCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_axisCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::PlayerController::get_elementCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_elementCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::PlayerController::add_ButtonStateChangedEvent(::System::Action_2<int32_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"add_ButtonStateChangedEvent", {}, {::i2c::type_of<::System::Action_2<int32_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlayerController::remove_ButtonStateChangedEvent(::System::Action_2<int32_t,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"remove_ButtonStateChangedEvent", {}, {::i2c::type_of<::System::Action_2<int32_t,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlayerController::add_AxisValueChangedEvent(::System::Action_2<int32_t,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"add_AxisValueChangedEvent", {}, {::i2c::type_of<::System::Action_2<int32_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlayerController::remove_AxisValueChangedEvent(::System::Action_2<int32_t,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"remove_AxisValueChangedEvent", {}, {::i2c::type_of<::System::Action_2<int32_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlayerController::add_EnabledStateChangedEvent(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"add_EnabledStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlayerController::remove_EnabledStateChangedEvent(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"remove_EnabledStateChangedEvent", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::PlayerController::GetButton(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline bool Rewired::PlayerController::GetButtonDown(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetButtonDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline bool Rewired::PlayerController::GetButtonUp(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetButtonUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline float_t Rewired::PlayerController::GetAxis(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetAxis", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline float_t Rewired::PlayerController::GetAxisRaw(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline ::Rewired::PlayerController_Element* Rewired::PlayerController::GetElement(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"GetElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Element*>(this, ___internal_method, index);
}
template<typename T>
inline T Rewired::PlayerController::GetElement(int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController*>(),
                    {"GetElement", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
inline ::Rewired::Player* Rewired::PlayerController::IiOCqqBNQJcOEzTMGDRZEKZhAhFNA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"IiOCqqBNQJcOEzTMGDRZEKZhAhFNA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Player*>(this, ___internal_method);
}
inline void Rewired::PlayerController::rgqliBLWBpJpgOfiyFzWZiEkfuaE(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"rgqliBLWBpJpgOfiyFzWZiEkfuaE", {}, {::i2c::type_of<::Rewired::UpdateLoopType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::PlayerController::Update(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, updateLoop);
}
inline void Rewired::PlayerController::UpdateFinished()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlayerController::ClearVars()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerController*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlayerController::hwqBnSmqJvDZfCiNJJJzqiqWalXP(::Rewired::PlayerController_Element*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"hwqBnSmqJvDZfCiNJJJzqiqWalXP", {}, {::i2c::type_of<::Rewired::PlayerController_Element*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::PlayerController::JYSwMCxRETcDpyIXBejzAatRqot(::Rewired::PlayerController_Element*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Button*>*  _cordl_fixed_empty_name_whitespace_param_3, ::System::Collections::Generic::List_1<::Rewired::PlayerController_Axis*>*  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"JYSwMCxRETcDpyIXBejzAatRqot", {}, {::i2c::type_of<::Rewired::PlayerController_Element*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Element*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Button*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::PlayerController_Axis*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline ::UnityEngine::Vector2 Rewired::PlayerController::get_absoluteToRelativeScalingReferenceResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"get_absoluteToRelativeScalingReferenceResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline void Rewired::PlayerController::set_absoluteToRelativeScalingReferenceResolution(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerController*>(),
                        {"set_absoluteToRelativeScalingReferenceResolution", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename >
inline int32_t Rewired::PlayerController::rRqpLdFiYMQSAXUZJKIXjfknzLNf(::System::Collections::Generic::IList_1<>*  _cordl_fixed_empty_name_whitespace, ::System::Predicate_1<>*  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerController*>(),
                    {"rRqpLdFiYMQSAXUZJKIXjfknzLNf", {::i2c::class_of<>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<>*>(), ::i2c::type_of<::System::Predicate_1<>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::PlayerController* Rewired::PlayerController::New_ctor(::Rewired::PlayerController_Definition*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerController*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr  Rewired::PlayerController::operator ::Rewired::IPlayerController*() noexcept {
return static_cast<::Rewired::IPlayerController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* Rewired::PlayerController::i___Rewired__IPlayerController() noexcept {
return static_cast<::Rewired::IPlayerController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerController::PlayerController()   {
}
