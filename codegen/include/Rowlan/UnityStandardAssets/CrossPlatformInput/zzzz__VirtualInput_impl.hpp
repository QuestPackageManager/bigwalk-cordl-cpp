#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/VirtualInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__VirtualInput_def.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__CrossPlatformInputManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.get_virtualMousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::get_virtualMousePosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f80b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"get_virtualMousePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.set_virtualMousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::UnityEngine::Vector3)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::set_virtualMousePosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e10f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"set_virtualMousePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.AxisExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::AxisExists)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac25b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"AxisExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.ButtonExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::ButtonExists)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac25e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"ButtonExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.RegisterVirtualAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::RegisterVirtualAxis)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ac2610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"RegisterVirtualAxis", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.RegisterVirtualButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::RegisterVirtualButton)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ac2720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"RegisterVirtualButton", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.UnRegisterVirtualAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::UnRegisterVirtualAxis)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ac28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"UnRegisterVirtualAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.UnRegisterVirtualButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::UnRegisterVirtualButton)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ac2900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"UnRegisterVirtualButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.VirtualAxisReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::VirtualAxisReference)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ac2960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"VirtualAxisReference", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetVirtualMousePositionX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetVirtualMousePositionX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac2830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"SetVirtualMousePositionX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetVirtualMousePositionY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetVirtualMousePositionY)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ac2850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"SetVirtualMousePositionY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetVirtualMousePositionZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetVirtualMousePositionZ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ac2870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"SetVirtualMousePositionZ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW, bool)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::GetAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::GetButton)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::GetButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.GetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::GetButtonUp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetButtonUp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetAxisPositive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetAxisPositive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetAxisNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetAxisNegative)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetAxisZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetAxisZero)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.SetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)(::StringW, float_t)>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput.MousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::MousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ac29c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_get__virtualMousePosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualMousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_get__virtualMousePosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualMousePosition_k__BackingField;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_set__virtualMousePosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____virtualMousePosition_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>*& Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_get_m_VirtualAxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VirtualAxes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>* const& Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_get_m_VirtualAxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VirtualAxes;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_set_m_VirtualAxes(::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VirtualAxes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>*& Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_get_m_VirtualButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VirtualButtons;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>* const& Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_get_m_VirtualButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VirtualButtons;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_set_m_VirtualButtons(::System::Collections::Generic::Dictionary_2<::StringW,::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VirtualButtons = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_get_m_AlwaysUseVirtual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlwaysUseVirtual;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_get_m_AlwaysUseVirtual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlwaysUseVirtual;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::__cordl_internal_set_m_AlwaysUseVirtual(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlwaysUseVirtual = value;
}
inline ::UnityEngine::Vector3 Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::get_virtualMousePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"get_virtualMousePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::set_virtualMousePosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"set_virtualMousePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::AxisExists(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"AxisExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::ButtonExists(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"ButtonExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::RegisterVirtualAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"RegisterVirtualAxis", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::RegisterVirtualButton(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"RegisterVirtualButton", {}, {::i2c::type_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualButton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::UnRegisterVirtualAxis(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"UnRegisterVirtualAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::UnRegisterVirtualButton(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"UnRegisterVirtualButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::VirtualAxisReference(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"VirtualAxisReference", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetVirtualMousePositionX(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"SetVirtualMousePositionX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetVirtualMousePositionY(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"SetVirtualMousePositionY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetVirtualMousePositionZ(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {"SetVirtualMousePositionZ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline float_t Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::GetAxis(::StringW  name, bool  raw)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name, raw);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::GetButton(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::GetButtonDown(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::GetButtonUp(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetButtonDown(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetButtonUp(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetAxisPositive(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetAxisNegative(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetAxisZero(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::SetAxis(::StringW  name, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::UnityEngine::Vector3 Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::MousePosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput* Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput*>());
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput::VirtualInput()   {
}
