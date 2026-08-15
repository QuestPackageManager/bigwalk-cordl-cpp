#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/TouchPad.hpp"
#include "Rewired/ComponentControls/zzzz__TouchInteractable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Rewired/ComponentControls/zzzz__TouchPad_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSetForBoolean_def.hpp"
#include "Rewired/ComponentControls/Data/zzzz__CustomControllerElementTargetSetForFloat_def.hpp"
#include "Rewired/ComponentControls/zzzz__TouchPad_def.hpp"
#include "Rewired/Internal/zzzz__StandaloneAxis2D_def.hpp"
#include "Rewired/zzzz__Axis2DCalibration_def.hpp"
#include "Rewired/zzzz__AxisCalibration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection::TouchPad_AxisDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection::TouchPad_AxisDirection()   {
}
constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection  Rewired::ComponentControls::TouchPad_AxisDirection::Both{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection  Rewired::ComponentControls::TouchPad_AxisDirection::Horizontal{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection  Rewired::ComponentControls::TouchPad_AxisDirection::Vertical{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode::TouchPad_TouchPadMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode::TouchPad_TouchPadMode()   {
}
constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode  Rewired::ComponentControls::TouchPad_TouchPadMode::Delta{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode  Rewired::ComponentControls::TouchPad_TouchPadMode::ScreenPosition{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode  Rewired::ComponentControls::TouchPad_TouchPadMode::VectorFromCenter{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode  Rewired::ComponentControls::TouchPad_TouchPadMode::VectorFromInitialTouch{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat::TouchPad_ValueFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat::TouchPad_ValueFormat()   {
}
constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat  Rewired::ComponentControls::TouchPad_ValueFormat::Pixels{static_cast<int32_t>(0x0)};
constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat  Rewired::ComponentControls::TouchPad_ValueFormat::Screen{static_cast<int32_t>(0x1)};
constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat  Rewired::ComponentControls::TouchPad_ValueFormat::Physical{static_cast<int32_t>(0x2)};
constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat  Rewired::ComponentControls::TouchPad_ValueFormat::Direction{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::*)()>(&::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_get_meaYmCWZTyHQJeIhFTaAaGJlRvQv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meaYmCWZTyHQJeIhFTaAaGJlRvQv;
}
constexpr float_t const& Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_get_meaYmCWZTyHQJeIhFTaAaGJlRvQv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meaYmCWZTyHQJeIhFTaAaGJlRvQv;
}
constexpr void Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_set_meaYmCWZTyHQJeIhFTaAaGJlRvQv(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meaYmCWZTyHQJeIhFTaAaGJlRvQv = value;
}
constexpr float_t& Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_get_uXItBsqRKlrItqGOxgDPPsnHAVAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uXItBsqRKlrItqGOxgDPPsnHAVAA;
}
constexpr float_t const& Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_get_uXItBsqRKlrItqGOxgDPPsnHAVAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uXItBsqRKlrItqGOxgDPPsnHAVAA;
}
constexpr void Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_set_uXItBsqRKlrItqGOxgDPPsnHAVAA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uXItBsqRKlrItqGOxgDPPsnHAVAA = value;
}
constexpr uint32_t& Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_get_dSZvEHMKHQOhgjKIRqVFQwGueile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dSZvEHMKHQOhgjKIRqVFQwGueile;
}
constexpr uint32_t const& Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_get_dSZvEHMKHQOhgjKIRqVFQwGueile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dSZvEHMKHQOhgjKIRqVFQwGueile;
}
constexpr void Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::__cordl_internal_set_dSZvEHMKHQOhgjKIRqVFQwGueile(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dSZvEHMKHQOhgjKIRqVFQwGueile = value;
}
inline void Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR* Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::*)(int32_t)>(&::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818fdae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb.QyzXobKBPifuOXLbffcBiWsnSHXD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::*)(float_t, float_t)>(&::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::QyzXobKBPifuOXLbffcBiWsnSHXD)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818fd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"QyzXobKBPifuOXLbffcBiWsnSHXD", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb.VDxKgTnlzWukyosbXQizlfwbcRtKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::*)()>(&::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::VDxKgTnlzWukyosbXQizlfwbcRtKA)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818fd9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"VDxKgTnlzWukyosbXQizlfwbcRtKA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb.nuZvuCvAeYruDliZCdKkkmyBjnifb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::*)()>(&::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::nuZvuCvAeYruDliZCdKkkmyBjnifb)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818fdb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"nuZvuCvAeYruDliZCdKkkmyBjnifb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb.JgsuiiMRwsMpimmAFdYPMDyXYiNV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::JgsuiiMRwsMpimmAFdYPMDyXYiNV)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"JgsuiiMRwsMpimmAFdYPMDyXYiNV", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb.UnQQFAivPruigpCSRgDbBKDgiIIh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::*)(int32_t, int32_t)>(&::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::UnQQFAivPruigpCSRgDbBKDgiIIh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fd9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"UnQQFAivPruigpCSRgDbBKDgiIIh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb.dAMOhHkFZFUiljIwPTpWRxzHbyK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint32_t)>(&::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::dAMOhHkFZFUiljIwPTpWRxzHbyK)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818fdb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"dAMOhHkFZFUiljIwPTpWRxzHbyK", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_get_NTRXTJwsVcwROgHtYTnhAAPupzXF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NTRXTJwsVcwROgHtYTnhAAPupzXF;
}
constexpr int32_t const& Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_get_NTRXTJwsVcwROgHtYTnhAAPupzXF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NTRXTJwsVcwROgHtYTnhAAPupzXF;
}
constexpr void Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_set_NTRXTJwsVcwROgHtYTnhAAPupzXF(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NTRXTJwsVcwROgHtYTnhAAPupzXF = value;
}
constexpr ::ArrayW<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>& Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_get_eSYFQMbvLAMPWPEvRZlfBpDsQzXu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eSYFQMbvLAMPWPEvRZlfBpDsQzXu;
}
constexpr ::ArrayW<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*> const& Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_get_eSYFQMbvLAMPWPEvRZlfBpDsQzXu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eSYFQMbvLAMPWPEvRZlfBpDsQzXu;
}
constexpr void Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_set_eSYFQMbvLAMPWPEvRZlfBpDsQzXu(::ArrayW<::Rewired::ComponentControls::jBojNJDTyFWPznhONwSqSCpNPCbGb_TouchPad_WaznCkNdFDAyuUaCmYpLpziPfgdR*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eSYFQMbvLAMPWPEvRZlfBpDsQzXu = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_get_etybDCAfhEBzMSRFnufWBNiEGBxAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___etybDCAfhEBzMSRFnufWBNiEGBxAA;
}
constexpr int32_t const& Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_get_etybDCAfhEBzMSRFnufWBNiEGBxAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___etybDCAfhEBzMSRFnufWBNiEGBxAA;
}
constexpr void Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::__cordl_internal_set_etybDCAfhEBzMSRFnufWBNiEGBxAA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___etybDCAfhEBzMSRFnufWBNiEGBxAA = value;
}
inline void Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::QyzXobKBPifuOXLbffcBiWsnSHXD(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"QyzXobKBPifuOXLbffcBiWsnSHXD", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::UnityEngine::Vector2 Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::VDxKgTnlzWukyosbXQizlfwbcRtKA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"VDxKgTnlzWukyosbXQizlfwbcRtKA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::nuZvuCvAeYruDliZCdKkkmyBjnifb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"nuZvuCvAeYruDliZCdKkkmyBjnifb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::JgsuiiMRwsMpimmAFdYPMDyXYiNV(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"JgsuiiMRwsMpimmAFdYPMDyXYiNV", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::UnQQFAivPruigpCSRgDbBKDgiIIh(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"UnQQFAivPruigpCSRgDbBKDgiIIh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::dAMOhHkFZFUiljIwPTpWRxzHbyK(uint32_t  _cordl_fixed_empty_name_whitespace, uint32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(),
                        {"dAMOhHkFZFUiljIwPTpWRxzHbyK", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb* Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler::*)()>(&::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchPad_ValueChangedEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler* Rewired::ComponentControls::TouchPad_ValueChangedEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler::TouchPad_ValueChangedEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_TapEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad_TapEventHandler::*)()>(&::Rewired::ComponentControls::TouchPad_TapEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_TapEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchPad_TapEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_TapEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchPad_TapEventHandler* Rewired::ComponentControls::TouchPad_TapEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchPad_TapEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad_TapEventHandler::TouchPad_TapEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_PressDownEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad_PressDownEventHandler::*)()>(&::Rewired::ComponentControls::TouchPad_PressDownEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_PressDownEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchPad_PressDownEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_PressDownEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchPad_PressDownEventHandler* Rewired::ComponentControls::TouchPad_PressDownEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchPad_PressDownEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad_PressDownEventHandler::TouchPad_PressDownEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad_PressUpEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad_PressUpEventHandler::*)()>(&::Rewired::ComponentControls::TouchPad_PressUpEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_PressUpEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ComponentControls::TouchPad_PressUpEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad_PressUpEventHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchPad_PressUpEventHandler* Rewired::ComponentControls::TouchPad_PressUpEventHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchPad_PressUpEventHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad_PressUpEventHandler::TouchPad_PressUpEventHandler()   {
}
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.add_ValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::Rewired::ComponentControls::TouchPad::add_ValueChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f9670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"add_ValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.remove_ValueChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*)>(&::Rewired::ComponentControls::TouchPad::remove_ValueChangedEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"remove_ValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.add_TapEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchPad::add_TapEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f9640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"add_TapEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.remove_TapEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchPad::remove_TapEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"remove_TapEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.add_PressDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchPad::add_PressDownEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f95e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"add_PressDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.remove_PressDownEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchPad::remove_PressDownEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"remove_PressDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.add_PressUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchPad::add_PressUpEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f9610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"add_PressUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.remove_PressUpEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Events::UnityAction*)>(&::Rewired::ComponentControls::TouchPad::remove_PressUpEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"remove_PressUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_horizontalAxisCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_horizontalAxisCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_horizontalAxisCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_verticalAxisCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_verticalAxisCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_verticalAxisCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_tapCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_tapCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_tapCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_pressCustomControllerElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_pressCustomControllerElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_pressCustomControllerElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_axesToUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchPad_AxisDirection (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_axesToUse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_axesToUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_axesToUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::Rewired::ComponentControls::TouchPad_AxisDirection)>(&::Rewired::ComponentControls::TouchPad::set_axesToUse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818fb1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_axesToUse", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchPad_AxisDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_touchPadMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchPad_TouchPadMode (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_touchPadMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_touchPadMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_touchPadMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::Rewired::ComponentControls::TouchPad_TouchPadMode)>(&::Rewired::ComponentControls::TouchPad::set_touchPadMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_touchPadMode", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchPad_TouchPadMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_valueFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ComponentControls::TouchPad_ValueFormat (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_valueFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_valueFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_valueFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::Rewired::ComponentControls::TouchPad_ValueFormat)>(&::Rewired::ComponentControls::TouchPad::set_valueFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_valueFormat", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchPad_ValueFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_useInertia
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_useInertia)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_useInertia", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_useInertia
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(bool)>(&::Rewired::ComponentControls::TouchPad::set_useInertia)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e48d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_useInertia", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_inertiaFriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_inertiaFriction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_inertiaFriction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_inertiaFriction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(float_t)>(&::Rewired::ComponentControls::TouchPad::set_inertiaFriction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818fb230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_inertiaFriction", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_activateOnSwipeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_activateOnSwipeIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_activateOnSwipeIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_activateOnSwipeIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(bool)>(&::Rewired::ComponentControls::TouchPad::set_activateOnSwipeIn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818e4900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_activateOnSwipeIn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_stayActiveOnSwipeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_stayActiveOnSwipeOut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_stayActiveOnSwipeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_stayActiveOnSwipeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(bool)>(&::Rewired::ComponentControls::TouchPad::set_stayActiveOnSwipeOut)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_stayActiveOnSwipeOut", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_allowTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_allowTap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_allowTap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_allowTap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(bool)>(&::Rewired::ComponentControls::TouchPad::set_allowTap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_allowTap", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_tapTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_tapTimeout)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818e3ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_tapTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_tapTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(float_t)>(&::Rewired::ComponentControls::TouchPad::set_tapTimeout)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818fb3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_tapTimeout", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_tapDistanceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_tapDistanceLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_tapDistanceLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_tapDistanceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(int32_t)>(&::Rewired::ComponentControls::TouchPad::set_tapDistanceLimit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818fb350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_tapDistanceLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_allowPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_allowPress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_allowPress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_allowPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(bool)>(&::Rewired::ComponentControls::TouchPad::set_allowPress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_allowPress", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_pressStartDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_pressStartDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_pressStartDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_pressStartDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(float_t)>(&::Rewired::ComponentControls::TouchPad::set_pressStartDelay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818fb2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_pressStartDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_pressDistanceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_pressDistanceLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_pressDistanceLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_pressDistanceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(int32_t)>(&::Rewired::ComponentControls::TouchPad::set_pressDistanceLimit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818fb290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_pressDistanceLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_hideAtRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_hideAtRuntime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_hideAtRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_hideAtRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(bool)>(&::Rewired::ComponentControls::TouchPad::set_hideAtRuntime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fb200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_hideAtRuntime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_pointerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_pointerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.set_pointerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(int32_t)>(&::Rewired::ComponentControls::TouchPad::set_pointerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fb280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_pointerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_hasPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_hasPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818fa040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_hasPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_touchStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_touchStartPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fa1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_touchStartPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_touchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_touchPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818fa0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_touchPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_horizontalAxisCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_horizontalAxisCalibration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fa060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_horizontalAxisCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_verticalAxisCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCalibration* (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_verticalAxisCalibration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fa1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_verticalAxisCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.get_axis2DCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Axis2DCalibration* (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::get_axis2DCalibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818fa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_axis2DCalibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.jZDETYWFoUAIkRRiNmaSivHcDDMT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::StandaloneAxis2D* (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::jZDETYWFoUAIkRRiNmaSivHcDDMT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"jZDETYWFoUAIkRRiNmaSivHcDDMT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.bTlAcsJWlXsuWRSzhVMeZdhcMmmJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::bTlAcsJWlXsuWRSzhVMeZdhcMmmJ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f96a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"bTlAcsJWlXsuWRSzhVMeZdhcMmmJ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.vNjeMnILCXQWxljmPlbOyyleOsIk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::vNjeMnILCXQWxljmPlbOyyleOsIk)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818fb450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"vNjeMnILCXQWxljmPlbOyyleOsIk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::_ctor)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1818f9210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818f83f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::OnValidate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818f8ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.hDGrHByQgZiRAiKrwVrfwqUCninz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::hDGrHByQgZiRAiKrwVrfwqUCninz)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818fa210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.cumegikKNQAGKrFXLCTKuzUNaEzoA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::cumegikKNQAGKrFXLCTKuzUNaEzoA)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1818f98c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.lBFBEZySOTMuuvcCfLJeKzPUfsxA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::lBFBEZySOTMuuvcCfLJeKzPUfsxA)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1818faa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.rtrhCWAYjYKzIxExZftkWjCXRIOM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::rtrhCWAYjYKzIxExZftkWjCXRIOM)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818fb120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.nDtWVGJylFqtryGsVjQKQdwqikKT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::nDtWVGJylFqtryGsVjQKQdwqikKT)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818fac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.ClearValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::ClearValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818f8430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.hsmphSgmvKDMqDixwXxDMPfzgVZU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::hsmphSgmvKDMqDixwXxDMPfzgVZU)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818fa240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"hsmphSgmvKDMqDixwXxDMPfzgVZU", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.bWjKcmCFrdZsEClpvcmCCBXAsihX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::bWjKcmCFrdZsEClpvcmCCBXAsihX)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818f96d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"bWjKcmCFrdZsEClpvcmCCBXAsihX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.reKlwjneDghirffpJEwuPSkaqpYe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::Rewired::ComponentControls::TouchPad_AxisDirection)>(&::Rewired::ComponentControls::TouchPad::reKlwjneDghirffpJEwuPSkaqpYe)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818faf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"reKlwjneDghirffpJEwuPSkaqpYe", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchPad_AxisDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.YiNLyHlhxIiJqusikdCpBMiRSjHM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::YiNLyHlhxIiJqusikdCpBMiRSjHM)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1818f8e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"YiNLyHlhxIiJqusikdCpBMiRSjHM", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.htHEWmZEuczQnWjhifksdlkyAJBEb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::htHEWmZEuczQnWjhifksdlkyAJBEb)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1818fa2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"htHEWmZEuczQnWjhifksdlkyAJBEb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.yfQVKwiDdZHQdAScfcyOuEAPrIdH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::yfQVKwiDdZHQdAScfcyOuEAPrIdH)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818fb5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"yfQVKwiDdZHQdAScfcyOuEAPrIdH", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.JfxgmYsBXGeZBdUPbrFslufDMlRu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::JfxgmYsBXGeZBdUPbrFslufDMlRu)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1818f8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"JfxgmYsBXGeZBdUPbrFslufDMlRu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.mKOEsuscJsEahFRvJrsNgMdOCWVGb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ComponentControls::TouchPad::mKOEsuscJsEahFRvJrsNgMdOCWVGb)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818fab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"mKOEsuscJsEahFRvJrsNgMdOCWVGb", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.ZdxMjiZiEtOjtvyUerTExoUXNhvC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ComponentControls::TouchPad::ZdxMjiZiEtOjtvyUerTExoUXNhvC)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818f9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"ZdxMjiZiEtOjtvyUerTExoUXNhvC", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.RXMxPGuKoCDulCnoPRmlOPhLnXyo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::RXMxPGuKoCDulCnoPRmlOPhLnXyo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818f8be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"RXMxPGuKoCDulCnoPRmlOPhLnXyo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.TCUcCNutSJOIAWBTEVRBKHBZJTPs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchPad::TCUcCNutSJOIAWBTEVRBKHBZJTPs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818f8ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"TCUcCNutSJOIAWBTEVRBKHBZJTPs", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.oTuQqbKwhPUcEOTpgEgINDhoZDHi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(bool)>(&::Rewired::ComponentControls::TouchPad::oTuQqbKwhPUcEOTpgEgINDhoZDHi)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818facd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"oTuQqbKwhPUcEOTpgEgINDhoZDHi", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.gQtOcsBxxLAEvdqtyGKbFbYcPYkBb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::gQtOcsBxxLAEvdqtyGKbFbYcPYkBb)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1818f9ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"gQtOcsBxxLAEvdqtyGKbFbYcPYkBb", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.ZAktBMgIFjptuVBQwCgzcThgEJqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::ZAktBMgIFjptuVBQwCgzcThgEJqA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818f9040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"ZAktBMgIFjptuVBQwCgzcThgEJqA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.fJiQraipNoYQMBjKRtyUNUvpkWLP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::fJiQraipNoYQMBjKRtyUNUvpkWLP)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1818f9b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"fJiQraipNoYQMBjKRtyUNUvpkWLP", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.KUfirxVzFMTPetJrLaWUVOpyHpqN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::KUfirxVzFMTPetJrLaWUVOpyHpqN)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818f86c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"KUfirxVzFMTPetJrLaWUVOpyHpqN", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.AtuQQYepiRNldWHfwbBpjLPhptqkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(int32_t, ::UnityEngine::Vector2)>(&::Rewired::ComponentControls::TouchPad::AtuQQYepiRNldWHfwbBpjLPhptqkA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818f8360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"AtuQQYepiRNldWHfwbBpjLPhptqkA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.qAbDScddiKnPlzSmQobVpdBSJXLF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::qAbDScddiKnPlzSmQobVpdBSJXLF)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1818fad20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"qAbDScddiKnPlzSmQobVpdBSJXLF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.OnPointerUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::OnPointerUp)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818f8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::OnPointerDown)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f8900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::OnPointerEnter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818f8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::OnPointerExit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818f89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                    {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.TszfKZAMlGcLLsjWojETulpCcDmYA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)()>(&::Rewired::ComponentControls::TouchPad::TszfKZAMlGcLLsjWojETulpCcDmYA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818f8e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"TszfKZAMlGcLLsjWojETulpCcDmYA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.fYBPgdTguSWvmhHmaQXFvgkuFPsh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ComponentControls::TouchPad::*)(int32_t)>(&::Rewired::ComponentControls::TouchPad::fYBPgdTguSWvmhHmaQXFvgkuFPsh)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818f9cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"fYBPgdTguSWvmhHmaQXFvgkuFPsh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.iyeQRRVIzLeJrEXqRPDtDybubmCh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchPad::*)(int32_t, ::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchPad::iyeQRRVIzLeJrEXqRPDtDybubmCh)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1818fa710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"iyeQRRVIzLeJrEXqRPDtDybubmCh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.ckqtQDxWOZRfolzpXrZwdgQnnVh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchPad::*)(int32_t, ::UnityEngine::GameObject*)>(&::Rewired::ComponentControls::TouchPad::ckqtQDxWOZRfolzpXrZwdgQnnVh)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818f97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"ckqtQDxWOZRfolzpXrZwdgQnnVh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.wlRKeaoPzNeHBLjKwFUZPUAgHidaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchPad::*)(int32_t)>(&::Rewired::ComponentControls::TouchPad::wlRKeaoPzNeHBLjKwFUZPUAgHidaA)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1818fb470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"wlRKeaoPzNeHBLjKwFUZPUAgHidaA", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.LUBhVDBsNrAQnlhOOXXTxQjOejgW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ComponentControls::TouchPad::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::ComponentControls::TouchPad::LUBhVDBsNrAQnlhOOXXTxQjOejgW)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1818f87a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"LUBhVDBsNrAQnlhOOXXTxQjOejgW", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ComponentControls::TouchPad.gKmRuqqieMJskagJRcJkcGeMXIVJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::Rewired::ComponentControls::TouchPad::*)(int32_t)>(&::Rewired::ComponentControls::TouchPad::gKmRuqqieMJskagJRcJkcGeMXIVJ)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1818f9d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"gKmRuqqieMJskagJRcJkcGeMXIVJ", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__horizontalAxisCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalAxisCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__horizontalAxisCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____horizontalAxisCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__horizontalAxisCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____horizontalAxisCustomControllerElement = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__verticalAxisCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalAxisCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__verticalAxisCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____verticalAxisCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__verticalAxisCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____verticalAxisCustomControllerElement = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__tapCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__tapCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__tapCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tapCustomControllerElement = value;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pressCustomControllerElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressCustomControllerElement;
}
constexpr ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pressCustomControllerElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressCustomControllerElement;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__pressCustomControllerElement(::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressCustomControllerElement = value;
}
constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection& Rewired::ComponentControls::TouchPad::__cordl_internal_get__axesToUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axesToUse;
}
constexpr ::Rewired::ComponentControls::TouchPad_AxisDirection const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__axesToUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axesToUse;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__axesToUse(::Rewired::ComponentControls::TouchPad_AxisDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axesToUse = value;
}
constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode& Rewired::ComponentControls::TouchPad::__cordl_internal_get__touchPadMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchPadMode;
}
constexpr ::Rewired::ComponentControls::TouchPad_TouchPadMode const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__touchPadMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchPadMode;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__touchPadMode(::Rewired::ComponentControls::TouchPad_TouchPadMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchPadMode = value;
}
constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat& Rewired::ComponentControls::TouchPad::__cordl_internal_get__valueFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueFormat;
}
constexpr ::Rewired::ComponentControls::TouchPad_ValueFormat const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__valueFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueFormat;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__valueFormat(::Rewired::ComponentControls::TouchPad_ValueFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueFormat = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__useInertia()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useInertia;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__useInertia() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useInertia;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__useInertia(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useInertia = value;
}
constexpr float_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__inertiaFriction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inertiaFriction;
}
constexpr float_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__inertiaFriction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inertiaFriction;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__inertiaFriction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inertiaFriction = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__activateOnSwipeIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateOnSwipeIn;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__activateOnSwipeIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateOnSwipeIn;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__activateOnSwipeIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateOnSwipeIn = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__stayActiveOnSwipeOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayActiveOnSwipeOut;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__stayActiveOnSwipeOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayActiveOnSwipeOut;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__stayActiveOnSwipeOut(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stayActiveOnSwipeOut = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__allowTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowTap;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__allowTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowTap;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__allowTap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowTap = value;
}
constexpr float_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__tapTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapTimeout;
}
constexpr float_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__tapTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapTimeout;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__tapTimeout(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tapTimeout = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__tapDistanceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapDistanceLimit;
}
constexpr int32_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__tapDistanceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapDistanceLimit;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__tapDistanceLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tapDistanceLimit = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__allowPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowPress;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__allowPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowPress;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__allowPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowPress = value;
}
constexpr float_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pressStartDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressStartDelay;
}
constexpr float_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pressStartDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressStartDelay;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__pressStartDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressStartDelay = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pressDistanceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressDistanceLimit;
}
constexpr int32_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pressDistanceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressDistanceLimit;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__pressDistanceLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressDistanceLimit = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__hideAtRuntime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideAtRuntime;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__hideAtRuntime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideAtRuntime;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__hideAtRuntime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideAtRuntime = value;
}
constexpr ::Rewired::Internal::StandaloneAxis2D*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__axis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr ::Rewired::Internal::StandaloneAxis2D* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__axis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2D;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__axis2D(::Rewired::Internal::StandaloneAxis2D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2D = value;
}
constexpr ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__onValueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onValueChanged;
}
constexpr ::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__onValueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onValueChanged;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__onValueChanged(::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onValueChanged = value;
}
constexpr ::Rewired::ComponentControls::TouchPad_TapEventHandler*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__onTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTap;
}
constexpr ::Rewired::ComponentControls::TouchPad_TapEventHandler* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__onTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTap;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__onTap(::Rewired::ComponentControls::TouchPad_TapEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTap = value;
}
constexpr ::Rewired::ComponentControls::TouchPad_PressDownEventHandler*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__onPressDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPressDown;
}
constexpr ::Rewired::ComponentControls::TouchPad_PressDownEventHandler* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__onPressDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPressDown;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__onPressDown(::Rewired::ComponentControls::TouchPad_PressDownEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPressDown = value;
}
constexpr ::Rewired::ComponentControls::TouchPad_PressUpEventHandler*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__onPressUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPressUp;
}
constexpr ::Rewired::ComponentControls::TouchPad_PressUpEventHandler* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__onPressUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onPressUp;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__onPressUp(::Rewired::ComponentControls::TouchPad_PressUpEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onPressUp = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__useXAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useXAxis;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__useXAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useXAxis;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__useXAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useXAxis = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__useYAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useYAxis;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__useYAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useYAxis;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__useYAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useYAxis = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pointerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerId;
}
constexpr int32_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pointerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerId;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__pointerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerId = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__realMousePointerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____realMousePointerId;
}
constexpr int32_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__realMousePointerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____realMousePointerId;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__realMousePointerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____realMousePointerId = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get_uldmQqpMAWCNQIQyGOPheAUhJhmnA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uldmQqpMAWCNQIQyGOPheAUhJhmnA;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get_uldmQqpMAWCNQIQyGOPheAUhJhmnA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uldmQqpMAWCNQIQyGOPheAUhJhmnA;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set_uldmQqpMAWCNQIQyGOPheAUhJhmnA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uldmQqpMAWCNQIQyGOPheAUhJhmnA = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get_IgjTfOWBPNVpnYXocDkPsnfKzwcD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgjTfOWBPNVpnYXocDkPsnfKzwcD;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get_IgjTfOWBPNVpnYXocDkPsnfKzwcD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgjTfOWBPNVpnYXocDkPsnfKzwcD;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set_IgjTfOWBPNVpnYXocDkPsnfKzwcD(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgjTfOWBPNVpnYXocDkPsnfKzwcD = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pointerDownIsFake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerDownIsFake;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pointerDownIsFake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerDownIsFake;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__pointerDownIsFake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerDownIsFake = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchPad::__cordl_internal_get__touchStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchStartPosition;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__touchStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchStartPosition;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__touchStartPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchStartPosition = value;
}
constexpr float_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__touchStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchStartTime;
}
constexpr float_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__touchStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchStartTime;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__touchStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchStartTime = value;
}
constexpr ::UnityEngine::Vector3& Rewired::ComponentControls::TouchPad::__cordl_internal_get__currentCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCenter;
}
constexpr ::UnityEngine::Vector3 const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__currentCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCenter;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__currentCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentCenter = value;
}
constexpr ::UnityEngine::Vector2& Rewired::ComponentControls::TouchPad::__cordl_internal_get__previousTouchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousTouchPosition;
}
constexpr ::UnityEngine::Vector2 const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__previousTouchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousTouchPosition;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__previousTouchPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousTouchPosition = value;
}
constexpr int32_t& Rewired::ComponentControls::TouchPad::__cordl_internal_get__lastTapFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTapFrame;
}
constexpr int32_t const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__lastTapFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTapFrame;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__lastTapFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastTapFrame = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__isEligibleForTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEligibleForTap;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__isEligibleForTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEligibleForTap;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__isEligibleForTap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEligibleForTap = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__isEligibleForPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEligibleForPress;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__isEligibleForPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEligibleForPress;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__isEligibleForPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEligibleForPress = value;
}
constexpr bool& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pressValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressValue;
}
constexpr bool const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__pressValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressValue;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__pressValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressValue = value;
}
constexpr ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*& Rewired::ComponentControls::TouchPad::__cordl_internal_get__smoothDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothDelta;
}
constexpr ::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get__smoothDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothDelta;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set__smoothDelta(::Rewired::ComponentControls::TouchPad_jBojNJDTyFWPznhONwSqSCpNPCbGb*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothDelta = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*& Rewired::ComponentControls::TouchPad::__cordl_internal_get___fakePointerEventData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____fakePointerEventData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* const& Rewired::ComponentControls::TouchPad::__cordl_internal_get___fakePointerEventData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____fakePointerEventData;
}
constexpr void Rewired::ComponentControls::TouchPad::__cordl_internal_set___fakePointerEventData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____fakePointerEventData = value;
}
inline void Rewired::ComponentControls::TouchPad::add_ValueChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"add_ValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchPad::remove_ValueChangedEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"remove_ValueChangedEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchPad::add_TapEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"add_TapEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchPad::remove_TapEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"remove_TapEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchPad::add_PressDownEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"add_PressDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchPad::remove_PressDownEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"remove_PressDownEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchPad::add_PressUpEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"add_PressUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ComponentControls::TouchPad::remove_PressUpEvent(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"remove_PressUpEvent", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* Rewired::ComponentControls::TouchPad::get_horizontalAxisCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_horizontalAxisCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* Rewired::ComponentControls::TouchPad::get_verticalAxisCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_verticalAxisCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* Rewired::ComponentControls::TouchPad::get_tapCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_tapCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* Rewired::ComponentControls::TouchPad::get_pressCustomControllerElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_pressCustomControllerElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean*>(this, ___internal_method);
}
inline ::Rewired::ComponentControls::TouchPad_AxisDirection Rewired::ComponentControls::TouchPad::get_axesToUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_axesToUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchPad_AxisDirection>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_axesToUse(::Rewired::ComponentControls::TouchPad_AxisDirection  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_axesToUse", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchPad_AxisDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::TouchPad_TouchPadMode Rewired::ComponentControls::TouchPad::get_touchPadMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_touchPadMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchPad_TouchPadMode>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_touchPadMode(::Rewired::ComponentControls::TouchPad_TouchPadMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_touchPadMode", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchPad_TouchPadMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ComponentControls::TouchPad_ValueFormat Rewired::ComponentControls::TouchPad::get_valueFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_valueFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ComponentControls::TouchPad_ValueFormat>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_valueFormat(::Rewired::ComponentControls::TouchPad_ValueFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_valueFormat", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchPad_ValueFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchPad::get_useInertia()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_useInertia", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_useInertia(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_useInertia", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchPad::get_inertiaFriction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_inertiaFriction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_inertiaFriction(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_inertiaFriction", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchPad::get_activateOnSwipeIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_activateOnSwipeIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_activateOnSwipeIn(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_activateOnSwipeIn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchPad::get_stayActiveOnSwipeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_stayActiveOnSwipeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_stayActiveOnSwipeOut(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_stayActiveOnSwipeOut", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchPad::get_allowTap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_allowTap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_allowTap(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_allowTap", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchPad::get_tapTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_tapTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_tapTimeout(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_tapTimeout", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ComponentControls::TouchPad::get_tapDistanceLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_tapDistanceLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_tapDistanceLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_tapDistanceLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchPad::get_allowPress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_allowPress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_allowPress(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_allowPress", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ComponentControls::TouchPad::get_pressStartDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_pressStartDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_pressStartDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_pressStartDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ComponentControls::TouchPad::get_pressDistanceLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_pressDistanceLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_pressDistanceLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_pressDistanceLimit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchPad::get_hideAtRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_hideAtRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_hideAtRuntime(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_hideAtRuntime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ComponentControls::TouchPad::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_pointerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::set_pointerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"set_pointerId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ComponentControls::TouchPad::get_hasPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_hasPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::ComponentControls::TouchPad::get_touchStartPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_touchStartPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::ComponentControls::TouchPad::get_touchPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_touchPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::Rewired::AxisCalibration* Rewired::ComponentControls::TouchPad::get_horizontalAxisCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_horizontalAxisCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(this, ___internal_method);
}
inline ::Rewired::AxisCalibration* Rewired::ComponentControls::TouchPad::get_verticalAxisCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_verticalAxisCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCalibration*>(this, ___internal_method);
}
inline ::Rewired::Axis2DCalibration* Rewired::ComponentControls::TouchPad::get_axis2DCalibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"get_axis2DCalibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Axis2DCalibration*>(this, ___internal_method);
}
inline ::Rewired::Internal::StandaloneAxis2D* Rewired::ComponentControls::TouchPad::jZDETYWFoUAIkRRiNmaSivHcDDMT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"jZDETYWFoUAIkRRiNmaSivHcDDMT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::StandaloneAxis2D*>(this, ___internal_method);
}
inline int32_t Rewired::ComponentControls::TouchPad::bTlAcsJWlXsuWRSzhVMeZdhcMmmJ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"bTlAcsJWlXsuWRSzhVMeZdhcMmmJ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchPad::vNjeMnILCXQWxljmPlbOyyleOsIk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"vNjeMnILCXQWxljmPlbOyyleOsIk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchPad::hDGrHByQgZiRAiKrwVrfwqUCninz()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::cumegikKNQAGKrFXLCTKuzUNaEzoA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::lBFBEZySOTMuuvcCfLJeKzPUfsxA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::rtrhCWAYjYKzIxExZftkWjCXRIOM()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::nDtWVGJylFqtryGsVjQKQdwqikKT()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::ClearValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::hsmphSgmvKDMqDixwXxDMPfzgVZU()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"hsmphSgmvKDMqDixwXxDMPfzgVZU", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::bWjKcmCFrdZsEClpvcmCCBXAsihX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"bWjKcmCFrdZsEClpvcmCCBXAsihX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::reKlwjneDghirffpJEwuPSkaqpYe(::Rewired::ComponentControls::TouchPad_AxisDirection  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"reKlwjneDghirffpJEwuPSkaqpYe", {}, {::i2c::type_of<::Rewired::ComponentControls::TouchPad_AxisDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::YiNLyHlhxIiJqusikdCpBMiRSjHM()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"YiNLyHlhxIiJqusikdCpBMiRSjHM", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::htHEWmZEuczQnWjhifksdlkyAJBEb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"htHEWmZEuczQnWjhifksdlkyAJBEb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::yfQVKwiDdZHQdAScfcyOuEAPrIdH()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"yfQVKwiDdZHQdAScfcyOuEAPrIdH", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::JfxgmYsBXGeZBdUPbrFslufDMlRu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"JfxgmYsBXGeZBdUPbrFslufDMlRu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::mKOEsuscJsEahFRvJrsNgMdOCWVGb(::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"mKOEsuscJsEahFRvJrsNgMdOCWVGb", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::ZdxMjiZiEtOjtvyUerTExoUXNhvC(::by_ref<::UnityEngine::Vector2>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"ZdxMjiZiEtOjtvyUerTExoUXNhvC", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::RXMxPGuKoCDulCnoPRmlOPhLnXyo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"RXMxPGuKoCDulCnoPRmlOPhLnXyo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::ComponentControls::TouchPad::TCUcCNutSJOIAWBTEVRBKHBZJTPs(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"TCUcCNutSJOIAWBTEVRBKHBZJTPs", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::oTuQqbKwhPUcEOTpgEgINDhoZDHi(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"oTuQqbKwhPUcEOTpgEgINDhoZDHi", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::gQtOcsBxxLAEvdqtyGKbFbYcPYkBb(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"gQtOcsBxxLAEvdqtyGKbFbYcPYkBb", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::ZAktBMgIFjptuVBQwCgzcThgEJqA(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"ZAktBMgIFjptuVBQwCgzcThgEJqA", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::fJiQraipNoYQMBjKRtyUNUvpkWLP(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"fJiQraipNoYQMBjKRtyUNUvpkWLP", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::KUfirxVzFMTPetJrLaWUVOpyHpqN(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"KUfirxVzFMTPetJrLaWUVOpyHpqN", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::AtuQQYepiRNldWHfwbBpjLPhptqkA(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"AtuQQYepiRNldWHfwbBpjLPhptqkA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::ComponentControls::TouchPad::qAbDScddiKnPlzSmQobVpdBSJXLF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"qAbDScddiKnPlzSmQobVpdBSJXLF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ComponentControls::TouchPad::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchPad::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchPad::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchPad::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Rewired::ComponentControls::TouchPad::TszfKZAMlGcLLsjWojETulpCcDmYA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"TszfKZAMlGcLLsjWojETulpCcDmYA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::ComponentControls::TouchPad::fYBPgdTguSWvmhHmaQXFvgkuFPsh(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"fYBPgdTguSWvmhHmaQXFvgkuFPsh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchPad::iyeQRRVIzLeJrEXqRPDtDybubmCh(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"iyeQRRVIzLeJrEXqRPDtDybubmCh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchPad::ckqtQDxWOZRfolzpXrZwdgQnnVh(int32_t  _cordl_fixed_empty_name_whitespace, ::UnityEngine::GameObject*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"ckqtQDxWOZRfolzpXrZwdgQnnVh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchPad::wlRKeaoPzNeHBLjKwFUZPUAgHidaA(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"wlRKeaoPzNeHBLjKwFUZPUAgHidaA", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ComponentControls::TouchPad::LUBhVDBsNrAQnlhOOXXTxQjOejgW(::UnityEngine::EventSystems::PointerEventData*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"LUBhVDBsNrAQnlhOOXXTxQjOejgW", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::EventSystems::PointerEventData* Rewired::ComponentControls::TouchPad::gKmRuqqieMJskagJRcJkcGeMXIVJ(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ComponentControls::TouchPad*>(),
                        {"gKmRuqqieMJskagJRcJkcGeMXIVJ", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ComponentControls::TouchPad* Rewired::ComponentControls::TouchPad::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ComponentControls::TouchPad*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  Rewired::ComponentControls::TouchPad::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* Rewired::ComponentControls::TouchPad::i___UnityEngine__EventSystems__IPointerDownHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Rewired::ComponentControls::TouchPad::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Rewired::ComponentControls::TouchPad::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  Rewired::ComponentControls::TouchPad::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* Rewired::ComponentControls::TouchPad::i___UnityEngine__EventSystems__IPointerUpHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ComponentControls::TouchPad::TouchPad()   {
}
