#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/HardwareJoystickMapCustomPlatformMap.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMap_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__HardwareJoystickMapCustomPlatformMap_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__BridgedControllerHWInfo_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__InputPlatform_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::DeepClone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181876280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button.CopyVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::*)(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Element*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::CopyVars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181876270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::DeepClone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::CopyVars(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Element*  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button::HardwareJoystickMapCustomPlatformMap_Button()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::DeepClone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181876220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis.CopyVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::*)(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Element*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::CopyVars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181876210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::DeepClone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::CopyVars(::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Element*  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis::HardwareJoystickMapCustomPlatformMap_Axis()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::get_buttonCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803aba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::get_axisCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803a9050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements.GetEffectiveElementIdentifierType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::*)(::Rewired::ControllerElementIdentifier*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::GetEffectiveElementIdentifierType)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181880220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements.GetEffectiveAxisRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::*)(::Rewired::ControllerElementIdentifier*, ::by_ref<::Rewired::AxisRange>)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::GetEffectiveAxisRange)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818800e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::DeepClone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181880090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements.CopyVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::*)(::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::CopyVars)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181880010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::__cordl_internal_get_axes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes;
}
constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*> const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::__cordl_internal_get_axes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axes;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::__cordl_internal_set_axes(::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axes = value;
}
constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::__cordl_internal_get_buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*> const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::__cordl_internal_get_buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::__cordl_internal_set_buttons(::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttons = value;
}
inline int32_t Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::get_buttonCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::get_axisCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ControllerElementType Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::GetEffectiveElementIdentifierType(::Rewired::ControllerElementIdentifier*  elementIdentifier)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(this, ___internal_method, elementIdentifier);
}
inline bool Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::GetEffectiveAxisRange(::Rewired::ControllerElementIdentifier*  elementIdentifier, ::by_ref<::Rewired::AxisRange>  axisRange)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elementIdentifier, axisRange);
}
inline ::System::Object* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::DeepClone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::CopyVars(::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base*  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements::HardwareJoystickMapCustomPlatformMap_Elements()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)(::System::Object*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::Matches)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria.get_hasData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::get_hasData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria.get_isAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::get_isAllowed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181882550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)(::Rewired::BridgedControllerHWInfo*, bool)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::Matches)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181882400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)(::System::Object*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::DeepClone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::DeepClone)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818822d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria.CopyVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)(::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::CopyVars)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181882240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::__cordl_internal_get_nameUseRegex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameUseRegex;
}
constexpr bool const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::__cordl_internal_get_nameUseRegex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameUseRegex;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::__cordl_internal_set_nameUseRegex(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameUseRegex = value;
}
constexpr ::ArrayW<::StringW>& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::ArrayW<::StringW> const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::__cordl_internal_set_name(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline bool Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::Matches(::System::Object*  customIdentifier)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, customIdentifier);
}
inline bool Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::get_hasData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::get_isAllowed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::Matches(::Rewired::BridgedControllerHWInfo*  bridgedControllerHWInfo, bool  strictMatch)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bridgedControllerHWInfo, strictMatch);
}
inline ::System::Object* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::DeepClone(::System::Object*  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline ::System::Object* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::DeepClone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::CopyVars(::Rewired::Data::Mapping::HardwareJoystickMap_MatchingCriteria_Base*  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_MatchingCriteria::HardwareJoystickMapCustomPlatformMap_MatchingCriteria()   {
}
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_assignedButtonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_assignedButtonCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181880750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_assignedAxisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_assignedAxisCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181880720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_platform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputPlatform (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_platform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1809019c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_Axes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*> (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_Axes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181880580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_Buttons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*> (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_Buttons)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181880650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_Axes_orig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*> (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_Axes_orig)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181880630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                        {"get_Axes_orig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_Buttons_orig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*> (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_Buttons_orig)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181880700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                        {"get_Buttons_orig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_hasData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_hasData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181880780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_isAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_isAllowed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818807d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.get_elements_base
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_elements_base)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.GetVariants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::GetVariants)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)(::System::Object*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::DeepClone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::DeepClone)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181880450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap.CopyVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)(::Rewired::Data::Mapping::HardwareJoystickMap_Platform*)>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::CopyVars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818803f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                    {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::*)()>(&::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements* const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_set_elements(::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Elements*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_get__axesOrigGame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axesOrigGame;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*> const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_get__axesOrigGame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axesOrigGame;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_set__axesOrigGame(::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axesOrigGame = value;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_get__buttonsOrigGame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonsOrigGame;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*> const& Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_get__buttonsOrigGame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonsOrigGame;
}
constexpr void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::__cordl_internal_set__buttonsOrigGame(::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonsOrigGame = value;
}
inline int32_t Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_assignedButtonCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_assignedAxisCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::InputPlatform Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_platform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputPlatform>(this, ___internal_method);
}
inline ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*> Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_Axes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Axis*>>(this, ___internal_method);
}
inline ::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*> Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_Buttons()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::Data::Mapping::Platform_Custom_HardwareJoystickMap_Button*>>(this, ___internal_method);
}
inline ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*> Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_Axes_orig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                        {"get_Axes_orig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Axis*>>(this, ___internal_method);
}
inline ::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*> Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_Buttons_orig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                        {"get_Buttons_orig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap_Button*>>(this, ___internal_method);
}
inline bool Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_hasData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_isAllowed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::get_elements_base()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::GetVariants()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::DeepClone(::System::Object*  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline ::System::Object* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::DeepClone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::CopyVars(::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  destination)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap* Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::HardwareJoystickMapCustomPlatformMap::HardwareJoystickMapCustomPlatformMap()   {
}
