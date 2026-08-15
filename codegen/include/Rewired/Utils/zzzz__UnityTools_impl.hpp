#pragma once
// IWYU pragma private; include "Rewired/Utils/UnityTools.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_impl.hpp"
#include "Rewired/Platforms/zzzz__Platform_impl.hpp"
#include "Rewired/Platforms/zzzz__ScriptingAPILevel_impl.hpp"
#include "Rewired/Platforms/zzzz__ScriptingBackend_impl.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_impl.hpp"
#include "Rewired/Utils/zzzz__UnityTools_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__UnityTools_def.hpp"
#include "GlobalNamespace/zzzz__UwgmyYuPJEgSIFfrbQnGaDeecOoF_def.hpp"
#include "Rewired/Interfaces/zzzz__IAndroidFallbackPlatformHelper_def.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Platforms/zzzz__ScriptingAPILevel_def.hpp"
#include "Rewired/Platforms/zzzz__ScriptingBackend_def.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExternalTools_def.hpp"
#include "Rewired/Utils/zzzz__UnityTools_def.hpp"
#include "Rewired/zzzz__ButtonStateFlags_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj::*)(::Rewired::Platforms::Platform, ::Rewired::Platforms::Platform, ::Rewired::Platforms::EditorPlatform, bool, ::Rewired::Platforms::WebplayerPlatform, ::Rewired::Platforms::ScriptingBackend, ::Rewired::Platforms::ScriptingAPILevel, ::Rewired::Utils::Interfaces::IExternalTools*)>(&::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819309d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<::Rewired::Platforms::ScriptingBackend>(), ::i2c::type_of<::Rewired::Platforms::ScriptingAPILevel>(), ::i2c::type_of<::Rewired::Utils::Interfaces::IExternalTools*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj::_ctor(::Rewired::Platforms::Platform  _cordl_fixed_empty_name_whitespace, ::Rewired::Platforms::Platform  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Platforms::EditorPlatform  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Platforms::WebplayerPlatform  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::Platforms::ScriptingBackend  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Platforms::ScriptingAPILevel  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Utils::Interfaces::IExternalTools*  _cordl_fixed_empty_name_whitespace_param_7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<::Rewired::Platforms::ScriptingBackend>(), ::i2c::type_of<::Rewired::Platforms::ScriptingAPILevel>(), ::i2c::type_of<::Rewired::Utils::Interfaces::IExternalTools*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7);
}
// Ctor Parameters [CppParam { name: "eoBcGZeGDVEVjtMxnUSRUmFgpBDS", ty: "::Rewired::Platforms::Platform", modifiers: "", def_value: Some("{}") }, CppParam { name: "SzUfiJYnokwRCEZJFiGBMJwDslFj", ty: "::Rewired::Platforms::Platform", modifiers: "", def_value: Some("{}") }, CppParam { name: "KxcvsazCCoRJfKlMzPIOvHKYfVud", ty: "::Rewired::Platforms::EditorPlatform", modifiers: "", def_value: Some("{}") }, CppParam { name: "FBPUYoSuSPraVyNbaxJBEaldggVM", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beNwFGMmApnKbHdNtQvyvqArvADR", ty: "::Rewired::Platforms::WebplayerPlatform", modifiers: "", def_value: Some("{}") }, CppParam { name: "XuEtZulklbKWEUWmtumdOqnjIGGAA", ty: "::Rewired::Platforms::ScriptingBackend", modifiers: "", def_value: Some("{}") }, CppParam { name: "CGyVZxmzagUBqoTvChWxwhQRFsdx", ty: "::Rewired::Platforms::ScriptingAPILevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "LJucddBvhVVOyzaKEfcKDkvWWCVB", ty: "::Rewired::Utils::Interfaces::IExternalTools*", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj(::Rewired::Platforms::Platform  eoBcGZeGDVEVjtMxnUSRUmFgpBDS, ::Rewired::Platforms::Platform  SzUfiJYnokwRCEZJFiGBMJwDslFj, ::Rewired::Platforms::EditorPlatform  KxcvsazCCoRJfKlMzPIOvHKYfVud, bool  FBPUYoSuSPraVyNbaxJBEaldggVM, ::Rewired::Platforms::WebplayerPlatform  beNwFGMmApnKbHdNtQvyvqArvADR, ::Rewired::Platforms::ScriptingBackend  XuEtZulklbKWEUWmtumdOqnjIGGAA, ::Rewired::Platforms::ScriptingAPILevel  CGyVZxmzagUBqoTvChWxwhQRFsdx, ::Rewired::Utils::Interfaces::IExternalTools*  LJucddBvhVVOyzaKEfcKDkvWWCVB) noexcept  {
this->eoBcGZeGDVEVjtMxnUSRUmFgpBDS = eoBcGZeGDVEVjtMxnUSRUmFgpBDS;
this->SzUfiJYnokwRCEZJFiGBMJwDslFj = SzUfiJYnokwRCEZJFiGBMJwDslFj;
this->KxcvsazCCoRJfKlMzPIOvHKYfVud = KxcvsazCCoRJfKlMzPIOvHKYfVud;
this->FBPUYoSuSPraVyNbaxJBEaldggVM = FBPUYoSuSPraVyNbaxJBEaldggVM;
this->beNwFGMmApnKbHdNtQvyvqArvADR = beNwFGMmApnKbHdNtQvyvqArvADR;
this->XuEtZulklbKWEUWmtumdOqnjIGGAA = XuEtZulklbKWEUWmtumdOqnjIGGAA;
this->CGyVZxmzagUBqoTvChWxwhQRFsdx = CGyVZxmzagUBqoTvChWxwhQRFsdx;
this->LJucddBvhVVOyzaKEfcKDkvWWCVB = LJucddBvhVVOyzaKEfcKDkvWWCVB;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::UnityTools_UnityVersion::UnityTools_UnityVersion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::UnityTools_UnityVersion::UnityTools_UnityVersion()   {
}
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2_6{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2_6_1{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_0{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_0_0{static_cast<int32_t>(0x3)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_1{static_cast<int32_t>(0x4)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_2{static_cast<int32_t>(0x5)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_3{static_cast<int32_t>(0x6)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_4{static_cast<int32_t>(0x7)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_5{static_cast<int32_t>(0x8)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_5_2{static_cast<int32_t>(0x9)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_5_7{static_cast<int32_t>(0xa)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_3_MAX{static_cast<int32_t>(0xb)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_0{static_cast<int32_t>(0xc)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_0_1{static_cast<int32_t>(0xd)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_1{static_cast<int32_t>(0xe)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_2{static_cast<int32_t>(0xf)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_3{static_cast<int32_t>(0x10)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_4{static_cast<int32_t>(0x11)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_5{static_cast<int32_t>(0x12)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_6{static_cast<int32_t>(0x13)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_6_3p1{static_cast<int32_t>(0x14)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_6_3p1Plus{static_cast<int32_t>(0x15)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_7{static_cast<int32_t>(0x16)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_8{static_cast<int32_t>(0x17)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_9{static_cast<int32_t>(0x18)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_4_MAX{static_cast<int32_t>(0x19)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_0{static_cast<int32_t>(0x1a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_0_0p1{static_cast<int32_t>(0x1b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_0_0p1Plus{static_cast<int32_t>(0x1c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_0_1{static_cast<int32_t>(0x1d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_0_2{static_cast<int32_t>(0x1e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_1{static_cast<int32_t>(0x1f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_2{static_cast<int32_t>(0x20)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_3{static_cast<int32_t>(0x21)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_4{static_cast<int32_t>(0x22)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_5{static_cast<int32_t>(0x23)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_6{static_cast<int32_t>(0x24)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_7{static_cast<int32_t>(0x25)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_8{static_cast<int32_t>(0x26)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_9{static_cast<int32_t>(0x27)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_5_MAX{static_cast<int32_t>(0x28)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_0{static_cast<int32_t>(0x29)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_1{static_cast<int32_t>(0x2a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_2{static_cast<int32_t>(0x2b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_3{static_cast<int32_t>(0x2c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_4{static_cast<int32_t>(0x2d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_5{static_cast<int32_t>(0x2e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_6{static_cast<int32_t>(0x2f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_7{static_cast<int32_t>(0x30)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_8{static_cast<int32_t>(0x31)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_9{static_cast<int32_t>(0x32)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2017_MAX{static_cast<int32_t>(0x33)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_0{static_cast<int32_t>(0x34)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_1{static_cast<int32_t>(0x35)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_2{static_cast<int32_t>(0x36)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_3{static_cast<int32_t>(0x37)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_4{static_cast<int32_t>(0x38)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_5{static_cast<int32_t>(0x39)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_6{static_cast<int32_t>(0x3a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_7{static_cast<int32_t>(0x3b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_8{static_cast<int32_t>(0x3c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_9{static_cast<int32_t>(0x3d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2018_MAX{static_cast<int32_t>(0x3e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_0{static_cast<int32_t>(0x3f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_1{static_cast<int32_t>(0x40)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_2{static_cast<int32_t>(0x41)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_3{static_cast<int32_t>(0x42)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_4{static_cast<int32_t>(0x43)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_5{static_cast<int32_t>(0x44)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_6{static_cast<int32_t>(0x45)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_7{static_cast<int32_t>(0x46)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_8{static_cast<int32_t>(0x47)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_9{static_cast<int32_t>(0x48)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2019_MAX{static_cast<int32_t>(0x49)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_0{static_cast<int32_t>(0x4a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_1{static_cast<int32_t>(0x4b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_2{static_cast<int32_t>(0x4c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_3{static_cast<int32_t>(0x4d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_4{static_cast<int32_t>(0x4e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_5{static_cast<int32_t>(0x4f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_6{static_cast<int32_t>(0x50)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_7{static_cast<int32_t>(0x51)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_8{static_cast<int32_t>(0x52)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_9{static_cast<int32_t>(0x53)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2020_MAX{static_cast<int32_t>(0x54)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_0{static_cast<int32_t>(0x55)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_1{static_cast<int32_t>(0x56)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_2{static_cast<int32_t>(0x57)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_3{static_cast<int32_t>(0x58)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_4{static_cast<int32_t>(0x59)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_5{static_cast<int32_t>(0x5a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_6{static_cast<int32_t>(0x5b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_7{static_cast<int32_t>(0x5c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_8{static_cast<int32_t>(0x5d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_9{static_cast<int32_t>(0x5e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2021_MAX{static_cast<int32_t>(0x5f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_0{static_cast<int32_t>(0x60)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_1{static_cast<int32_t>(0x61)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_2{static_cast<int32_t>(0x62)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_3{static_cast<int32_t>(0x63)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_4{static_cast<int32_t>(0x64)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_5{static_cast<int32_t>(0x65)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_6{static_cast<int32_t>(0x66)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_7{static_cast<int32_t>(0x67)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_8{static_cast<int32_t>(0x68)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_9{static_cast<int32_t>(0x69)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2022_MAX{static_cast<int32_t>(0x6a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_0{static_cast<int32_t>(0x6b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_1{static_cast<int32_t>(0x6c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_2{static_cast<int32_t>(0x6d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_3{static_cast<int32_t>(0x6e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_4{static_cast<int32_t>(0x6f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_5{static_cast<int32_t>(0x70)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_6{static_cast<int32_t>(0x71)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_7{static_cast<int32_t>(0x72)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_8{static_cast<int32_t>(0x73)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_9{static_cast<int32_t>(0x74)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_2023_MAX{static_cast<int32_t>(0x75)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_0{static_cast<int32_t>(0x76)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_1{static_cast<int32_t>(0x77)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_2{static_cast<int32_t>(0x78)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_3{static_cast<int32_t>(0x79)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_4{static_cast<int32_t>(0x7a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_5{static_cast<int32_t>(0x7b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_6{static_cast<int32_t>(0x7c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_7{static_cast<int32_t>(0x7d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_8{static_cast<int32_t>(0x7e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_9{static_cast<int32_t>(0x7f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_6000_MAX{static_cast<int32_t>(0x80)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_0{static_cast<int32_t>(0x81)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_1{static_cast<int32_t>(0x82)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_2{static_cast<int32_t>(0x83)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_3{static_cast<int32_t>(0x84)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_4{static_cast<int32_t>(0x85)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_5{static_cast<int32_t>(0x86)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_6{static_cast<int32_t>(0x87)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_7{static_cast<int32_t>(0x88)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_8{static_cast<int32_t>(0x89)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_9{static_cast<int32_t>(0x8a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_7000_MAX{static_cast<int32_t>(0x8b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_0{static_cast<int32_t>(0x8c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_1{static_cast<int32_t>(0x8d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_2{static_cast<int32_t>(0x8e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_3{static_cast<int32_t>(0x8f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_4{static_cast<int32_t>(0x90)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_5{static_cast<int32_t>(0x91)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_6{static_cast<int32_t>(0x92)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_7{static_cast<int32_t>(0x93)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_8{static_cast<int32_t>(0x94)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_9{static_cast<int32_t>(0x95)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_8000_MAX{static_cast<int32_t>(0x96)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_0{static_cast<int32_t>(0x97)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_1{static_cast<int32_t>(0x98)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_2{static_cast<int32_t>(0x99)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_3{static_cast<int32_t>(0x9a)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_4{static_cast<int32_t>(0x9b)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_5{static_cast<int32_t>(0x9c)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_6{static_cast<int32_t>(0x9d)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_7{static_cast<int32_t>(0x9e)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_8{static_cast<int32_t>(0x9f)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_9{static_cast<int32_t>(0xa0)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::UNITY_9000_MAX{static_cast<int32_t>(0xa1)};
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools_UnityVersion::Unknown{static_cast<int32_t>(0x3e8)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::UnityTools_GetComponentFlags::UnityTools_GetComponentFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::UnityTools_GetComponentFlags::UnityTools_GetComponentFlags()   {
}
constexpr ::Rewired::Utils::UnityTools_GetComponentFlags  Rewired::Utils::UnityTools_GetComponentFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::UnityTools_GetComponentFlags  Rewired::Utils::UnityTools_GetComponentFlags::SkipInactiveGameObjectRelatives{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Utils::UnityTools_GetComponentFlags  Rewired::Utils::UnityTools_GetComponentFlags::SkipDisabledComponents{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi()   {
}
constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi::Normal{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi::Beta{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi::Patch{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::UnityTools_UnityVersionClass::*)(::StringW)>(&::Rewired::Utils::UnityTools_UnityVersionClass::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181943640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::UnityTools_UnityVersionClass::*)()>(&::Rewired::Utils::UnityTools_UnityVersionClass::ToString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1819434f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                    {::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.vnWBZnCMEDcEKkHKtJUPYtwWjSMcA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::UnityTools_UnityVersionClass::*)(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi)>(&::Rewired::Utils::UnityTools_UnityVersionClass::vnWBZnCMEDcEKkHKtJUPYtwWjSMcA)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181943910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"vnWBZnCMEDcEKkHKtJUPYtwWjSMcA", {}, {::i2c::type_of<::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::UnityTools_UnityVersionClass::*)(::System::Object*)>(&::Rewired::Utils::UnityTools_UnityVersionClass::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181943340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                    {::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::UnityTools_UnityVersionClass::*)()>(&::Rewired::Utils::UnityTools_UnityVersionClass::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815f4340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                    {::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::UnityTools_UnityVersionClass*, ::Rewired::Utils::UnityTools_UnityVersionClass*)>(&::Rewired::Utils::UnityTools_UnityVersionClass::op_LessThan)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819438b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::UnityTools_UnityVersionClass*, ::Rewired::Utils::UnityTools_UnityVersionClass*)>(&::Rewired::Utils::UnityTools_UnityVersionClass::op_GreaterThan)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181943850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::UnityTools_UnityVersionClass*, ::Rewired::Utils::UnityTools_UnityVersionClass*)>(&::Rewired::Utils::UnityTools_UnityVersionClass::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181943830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::UnityTools_UnityVersionClass*, ::Rewired::Utils::UnityTools_UnityVersionClass*)>(&::Rewired::Utils::UnityTools_UnityVersionClass::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181943890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::UnityTools_UnityVersionClass*, ::Rewired::Utils::UnityTools_UnityVersionClass*)>(&::Rewired::Utils::UnityTools_UnityVersionClass::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181943810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::UnityTools_UnityVersionClass*, ::Rewired::Utils::UnityTools_UnityVersionClass*)>(&::Rewired::Utils::UnityTools_UnityVersionClass::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181943870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.Comparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::Utils::UnityTools_UnityVersionClass*, ::Rewired::Utils::UnityTools_UnityVersionClass*)>(&::Rewired::Utils::UnityTools_UnityVersionClass::Comparison)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181943210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"Comparison", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.IsValidVersionString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Rewired::Utils::UnityTools_UnityVersionClass::IsValidVersionString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1819433d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"IsValidVersionString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools_UnityVersionClass.otABaOmDhJexybezgUgTiXQUZuPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi)>(&::Rewired::Utils::UnityTools_UnityVersionClass::otABaOmDhJexybezgUgTiXQUZuPS)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819438d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"otABaOmDhJexybezgUgTiXQUZuPS", {}, {::i2c::type_of<::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_major()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___major;
}
constexpr int32_t const& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_major() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___major;
}
constexpr void Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_set_major(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___major = value;
}
constexpr int32_t& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_minor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minor;
}
constexpr int32_t const& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_minor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minor;
}
constexpr void Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_set_minor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minor = value;
}
constexpr int32_t& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_maintenance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maintenance;
}
constexpr int32_t const& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_maintenance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maintenance;
}
constexpr void Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_set_maintenance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maintenance = value;
}
constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi const& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_set_type(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr int32_t& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_build()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___build;
}
constexpr int32_t const& Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_get_build() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___build;
}
constexpr void Rewired::Utils::UnityTools_UnityVersionClass::__cordl_internal_set_build(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___build = value;
}
inline void Rewired::Utils::UnityTools_UnityVersionClass::_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::Utils::UnityTools_UnityVersionClass::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Utils::UnityTools_UnityVersionClass::vnWBZnCMEDcEKkHKtJUPYtwWjSMcA(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"vnWBZnCMEDcEKkHKtJUPYtwWjSMcA", {}, {::i2c::type_of<::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Utils::UnityTools_UnityVersionClass::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Rewired::Utils::UnityTools_UnityVersionClass::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::Utils::UnityTools_UnityVersionClass::op_LessThan(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_LessThan", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::Utils::UnityTools_UnityVersionClass::op_GreaterThan(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::Utils::UnityTools_UnityVersionClass::op_GreaterThanOrEqual(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::Utils::UnityTools_UnityVersionClass::op_LessThanOrEqual(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::Utils::UnityTools_UnityVersionClass::op_Equality(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_Equality", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::Utils::UnityTools_UnityVersionClass::op_Inequality(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t Rewired::Utils::UnityTools_UnityVersionClass::Comparison(::Rewired::Utils::UnityTools_UnityVersionClass*  a, ::Rewired::Utils::UnityTools_UnityVersionClass*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"Comparison", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_UnityVersionClass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline bool Rewired::Utils::UnityTools_UnityVersionClass::IsValidVersionString(::StringW  versionString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"IsValidVersionString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, versionString);
}
inline int32_t Rewired::Utils::UnityTools_UnityVersionClass::otABaOmDhJexybezgUgTiXQUZuPS(::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools_UnityVersionClass*>(),
                        {"otABaOmDhJexybezgUgTiXQUZuPS", {}, {::i2c::type_of<::Rewired::Utils::UnityVersionClass_UnityTools_tSBgjBnFQqqiPXLacFbtvAfiHlNi>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::UnityTools_UnityVersionClass* Rewired::Utils::UnityTools_UnityVersionClass::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::UnityTools_UnityVersionClass*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::UnityTools_UnityVersionClass::UnityTools_UnityVersionClass()   {
}
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_unityVersionObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::UnityTools_UnityVersionClass* (*)()>(&::Rewired::Utils::UnityTools::get_unityVersionObj)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_unityVersionObj", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_unityVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::UnityTools_UnityVersion (*)()>(&::Rewired::Utils::UnityTools::get_unityVersion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_unityVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_unityVersionString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Rewired::Utils::UnityTools::get_unityVersionString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181942cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_unityVersionString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_platform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Platform (*)()>(&::Rewired::Utils::UnityTools::get_platform)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_platform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_effectivePlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::Platform (*)()>(&::Rewired::Utils::UnityTools::get_effectivePlatform)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181942740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_effectivePlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_editorPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::EditorPlatform (*)()>(&::Rewired::Utils::UnityTools::get_editorPlatform)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_editorPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isEditor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isEditor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isPlaying)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819428f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isDebugBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isDebugBuild)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isDebugBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_webplayerPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::WebplayerPlatform (*)()>(&::Rewired::Utils::UnityTools::get_webplayerPlatform)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_webplayerPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_logToDebugLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_logToDebugLog)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819429c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_logToDebugLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_editorPlatformMatchesBuildPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_editorPlatformMatchesBuildPlatform)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819426a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_editorPlatformMatchesBuildPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isSupportedVersion3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isSupportedVersion3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isSupportedVersion3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isSupportedVersion4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isSupportedVersion4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isSupportedVersion4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supports2DColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supports2DColliders)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supports2DColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsSortingLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsSortingLayers)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsSortingLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsUnityUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsUnityUI)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsUnityUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsTouchControls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsTouchControls)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsTouchControls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsPhysicalKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsPhysicalKeys)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsPhysicalKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isAndroidPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isAndroidPlatform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819427e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isAndroidPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isIOSPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isIOSPlatform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181942890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isIOSPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isStandalonePlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isStandalonePlatform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181942910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isStandalonePlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsUnityUIGraphicRaycastTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsUnityUIGraphicRaycastTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsUnityUIGraphicRaycastTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsNestedPrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsNestedPrefabs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsNestedPrefabs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsWindowsAppStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsWindowsAppStore)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181942c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsWindowsAppStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsWindowsUWP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsWindowsUWP)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsWindowsUWP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsWindowsUWP_IL2CPP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsWindowsUWP_IL2CPP)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsWindowsUWP_IL2CPP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_supportsXboxOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_supportsXboxOne)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsXboxOne", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_windowsStandalone_supportsRawInputForwarding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_windowsStandalone_supportsRawInputForwarding)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_windowsStandalone_supportsRawInputForwarding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_scriptingBackend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::ScriptingBackend (*)()>(&::Rewired::Utils::UnityTools::get_scriptingBackend)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181942ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_scriptingBackend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_scriptingAPILevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::ScriptingAPILevel (*)()>(&::Rewired::Utils::UnityTools::get_scriptingAPILevel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181942aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_scriptingAPILevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_externalTools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IExternalTools* (*)()>(&::Rewired::Utils::UnityTools::get_externalTools)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819427b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_externalTools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.lVBOXYWbvFetWdJqutDAJWPcTQDM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IAndroidFallbackPlatformHelper* (*)()>(&::Rewired::Utils::UnityTools::lVBOXYWbvFetWdJqutDAJWPcTQDM)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181942de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"lVBOXYWbvFetWdJqutDAJWPcTQDM", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.lzgEIwerDsVUUbjluNONuBhVyoWn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Interfaces::IAndroidFallbackPlatformHelper*)>(&::Rewired::Utils::UnityTools::lzgEIwerDsVUUbjluNONuBhVyoWn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181942e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"lzgEIwerDsVUUbjluNONuBhVyoWn", {}, {::i2c::type_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.get_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::get_isInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819428d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.hYZyUEgcAEBKYMmGRSFeJWwyDbQi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::hYZyUEgcAEBKYMmGRSFeJWwyDbQi)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181942dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"hYZyUEgcAEBKYMmGRSFeJWwyDbQi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GaqDlBnZncUOMUIsSkusCdFeESFkA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Rewired::Utils::UnityTools::GaqDlBnZncUOMUIsSkusCdFeESFkA)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18193e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GaqDlBnZncUOMUIsSkusCdFeESFkA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.yczdFfdNBfiXfvlUkYSlsDxSiSQTA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj)>(&::Rewired::Utils::UnityTools::yczdFfdNBfiXfvlUkYSlsDxSiSQTA)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x181942f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"yczdFfdNBfiXfvlUkYSlsDxSiSQTA", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.DetermineWebplayerPlatformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::WebplayerPlatform (*)(::Rewired::Platforms::Platform, ::Rewired::Platforms::EditorPlatform)>(&::Rewired::Utils::UnityTools::DetermineWebplayerPlatformType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"DetermineWebplayerPlatformType", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.IsUnityVersionInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Rewired::Utils::UnityTools::IsUnityVersionInRange)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181940150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsUnityVersionInRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.LAnBUsAuhZgGyEOLXhzqjnnTATWlA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>)>(&::Rewired::Utils::UnityTools::LAnBUsAuhZgGyEOLXhzqjnnTATWlA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181940470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"LAnBUsAuhZgGyEOLXhzqjnnTATWlA", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.EnzbqvIEZHQYhntLWeuRLpmQJBqqA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::Utils::UnityTools::EnzbqvIEZHQYhntLWeuRLpmQJBqqA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193de00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"EnzbqvIEZHQYhntLWeuRLpmQJBqqA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.czojIValaFRLiQVBqmmeCjxmlBQj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::UnityTools_UnityVersion (*)(::StringW)>(&::Rewired::Utils::UnityTools::czojIValaFRLiQVBqmmeCjxmlBQj)> {
  constexpr static std::size_t size = 0x1380;
  constexpr static std::size_t addrs = 0x181941320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"czojIValaFRLiQVBqmmeCjxmlBQj", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.NiktslXGoqfLHkOYrhCVywWbpiux
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::UnityTools_UnityVersion (*)(int32_t)>(&::Rewired::Utils::UnityTools::NiktslXGoqfLHkOYrhCVywWbpiux)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181940540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"NiktslXGoqfLHkOYrhCVywWbpiux", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.aBlRVhonicQEiqyerYCNTbygKolj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::UnityTools_UnityVersion (*)(int32_t)>(&::Rewired::Utils::UnityTools::aBlRVhonicQEiqyerYCNTbygKolj)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1819411d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"aBlRVhonicQEiqyerYCNTbygKolj", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.RWWwOmxlyoJXOaRjpWHBhAsgLrNh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::Utils::UnityTools::RWWwOmxlyoJXOaRjpWHBhAsgLrNh)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181940620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"RWWwOmxlyoJXOaRjpWHBhAsgLrNh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.teBryrkDbxKezlrbaBhbzpVLbaWL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF)>(&::Rewired::Utils::UnityTools::teBryrkDbxKezlrbaBhbzpVLbaWL)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181942e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"teBryrkDbxKezlrbaBhbzpVLbaWL", {}, {::i2c::type_of<::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.acFriRFiEwQsVEWppYQVsZLPzIrI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF)>(&::Rewired::Utils::UnityTools::acFriRFiEwQsVEWppYQVsZLPzIrI)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819412b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"acFriRFiEwQsVEWppYQVsZLPzIrI", {}, {::i2c::type_of<::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetCurrentPlatformResourecesDLLPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(&::Rewired::Utils::UnityTools::GetCurrentPlatformResourecesDLLPaths)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18193fca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetCurrentPlatformResourecesDLLPaths", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.FindTransformInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::StringW)>(&::Rewired::Utils::UnityTools::FindTransformInChildren)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18193df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"FindTransformInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.FindTransformInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::GameObject*, ::StringW)>(&::Rewired::Utils::UnityTools::FindTransformInChildren)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"FindTransformInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.FindGameObjectInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*, ::StringW)>(&::Rewired::Utils::UnityTools::FindGameObjectInChildren)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18193de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"FindGameObjectInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.FindGameObjectInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::Transform*, ::StringW)>(&::Rewired::Utils::UnityTools::FindGameObjectInChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193dee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"FindGameObjectInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::Transform*, ::System::Type*, bool)>(&::Rewired::Utils::UnityTools::GetComponent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193e5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::Component*, ::System::Type*, bool)>(&::Rewired::Utils::UnityTools::GetComponent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193e5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::GameObject*, ::System::Type*, bool)>(&::Rewired::Utils::UnityTools::GetComponent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18193e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::Transform*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::Component*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::GameObject*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18193e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::GameObject*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponentInChildren)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193e2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::Component*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponentInChildren)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193e250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::Transform*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponentInChildren)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18193e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::GameObject*, ::System::Type*, ::Rewired::Utils::UnityTools_GetComponentFlags)>(&::Rewired::Utils::UnityTools::GetComponentInChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::Component*, ::System::Type*, ::Rewired::Utils::UnityTools_GetComponentFlags)>(&::Rewired::Utils::UnityTools::GetComponentInChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (*)(::UnityEngine::Transform*, ::System::Type*, ::Rewired::Utils::UnityTools_GetComponentFlags)>(&::Rewired::Utils::UnityTools::GetComponentInChildren)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18193e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::Transform*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18193f790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::Component*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18193f790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::GameObject*, ::System::Type*)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193fab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::Transform*, ::System::Type*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::Component*, ::System::Type*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::GameObject*, ::System::Type*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18193fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::Transform*)>(&::Rewired::Utils::UnityTools::GetComponentsInChildren)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18193ec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::Component*)>(&::Rewired::Utils::UnityTools::GetComponentsInChildren)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193ebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::GameObject*)>(&::Rewired::Utils::UnityTools::GetComponentsInChildren)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193eab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInParents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::Transform*)>(&::Rewired::Utils::UnityTools::GetComponentsInParents)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18193ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInParents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::Component*)>(&::Rewired::Utils::UnityTools::GetComponentsInParents)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193ef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInParents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* (*)(::UnityEngine::GameObject*)>(&::Rewired::Utils::UnityTools::GetComponentsInParents)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193ee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Component*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18193f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*, ::System::Type*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193fa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Component*, ::System::Type*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193fc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*, ::System::Type*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponents)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18193f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInSelfAndChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18193f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInSelfAndChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInSelfAndChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Component*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193f180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInSelfAndChildren", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInSelfAndChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInSelfAndChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInChildren)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18193eb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Component*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInChildren)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18193e990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInChildren)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18193ecf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInParents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInParents)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInParents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Component*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInParents)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193f110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetComponentsInParents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, bool)>(&::Rewired::Utils::UnityTools::GetComponentsInParents)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18193efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Component*)>(&::Rewired::Utils::UnityTools::IsEnabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819400b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsEnabled", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.IsActiveAndEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Component*)>(&::Rewired::Utils::UnityTools::IsActiveAndEnabled)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18193ffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsActiveAndEnabled", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Transform*, bool)>(&::Rewired::Utils::UnityTools::Instantiate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193ff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(&::Rewired::Utils::UnityTools::Instantiate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.TransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Rewired::Utils::UnityTools::TransformPoint)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181940970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.TransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Rewired::Utils::UnityTools::TransformPoint)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181940a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.TransformDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Rewired::Utils::UnityTools::TransformDirection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181940790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.TransformDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Rewired::Utils::UnityTools::TransformDirection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181940880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.TransformVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Rewired::Utils::UnityTools::TransformVector)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181940fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformVector", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.TransformVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Rewired::Utils::UnityTools::TransformVector)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181940e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformVector", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.TransformRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Rect)>(&::Rewired::Utils::UnityTools::TransformRect)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x181940b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformRect", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.DebugDrawCross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Color)>(&::Rewired::Utils::UnityTools::DebugDrawCross)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18193d890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"DebugDrawCross", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.DebugDrawCross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Color, float_t)>(&::Rewired::Utils::UnityTools::DebugDrawCross)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x18193db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"DebugDrawCross", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetUnityInputAxisName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t)>(&::Rewired::Utils::UnityTools::GetUnityInputAxisName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetUnityInputAxisName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetUnityInputAxisNameByJoystickId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t)>(&::Rewired::Utils::UnityTools::GetUnityInputAxisNameByJoystickId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193fdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetUnityInputAxisNameByJoystickId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetUnityInputButtonName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t)>(&::Rewired::Utils::UnityTools::GetUnityInputButtonName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetUnityInputButtonName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.GetUnityInputButtonNameByJoystickId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t)>(&::Rewired::Utils::UnityTools::GetUnityInputButtonNameByJoystickId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetUnityInputButtonNameByJoystickId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.IsValidUnityJoystickName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Rewired::Utils::UnityTools::IsValidUnityJoystickName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181940390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsValidUnityJoystickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(::UnityEngine::AnimationCurve*)>(&::Rewired::Utils::UnityTools::Copy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18193d7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"Copy", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.IsNullOrDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Rewired::Utils::UnityTools::IsNullOrDestroyed)> {
  constexpr static std::size_t size = 0x1a50;
  constexpr static std::size_t addrs = 0x1808f96b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsNullOrDestroyed", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.odHhbxEOCYeHPDOjTYfgIdMyHoKFA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ButtonStateFlags (*)(::UnityEngine::KeyCode)>(&::Rewired::Utils::UnityTools::odHhbxEOCYeHPDOjTYfgIdMyHoKFA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181942e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"odHhbxEOCYeHPDOjTYfgIdMyHoKFA", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::UnityTools.UpNqDZUFCdERcqqmOTVGiVdoxVsL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ButtonStateFlags (*)(::StringW)>(&::Rewired::Utils::UnityTools::UpNqDZUFCdERcqqmOTVGiVdoxVsL)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181941140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"UpNqDZUFCdERcqqmOTVGiVdoxVsL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::UnityTools::setStaticF_ZHgjDGoKWlMgzMdZQsSdyHTJregP(::Rewired::Utils::UnityTools_UnityVersionClass*  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::UnityTools_UnityVersionClass*, "ZHgjDGoKWlMgzMdZQsSdyHTJregP", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Utils::UnityTools_UnityVersionClass*>(value));
}
inline ::Rewired::Utils::UnityTools_UnityVersionClass* Rewired::Utils::UnityTools::getStaticF_ZHgjDGoKWlMgzMdZQsSdyHTJregP()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::UnityTools_UnityVersionClass*, "ZHgjDGoKWlMgzMdZQsSdyHTJregP", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_uUhgwQhiaKwKWmnFkEqjprualqbTA(::Rewired::Utils::UnityTools_UnityVersion  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::UnityTools_UnityVersion, "uUhgwQhiaKwKWmnFkEqjprualqbTA", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Utils::UnityTools_UnityVersion>(value));
}
inline ::Rewired::Utils::UnityTools_UnityVersion Rewired::Utils::UnityTools::getStaticF_uUhgwQhiaKwKWmnFkEqjprualqbTA()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::UnityTools_UnityVersion, "uUhgwQhiaKwKWmnFkEqjprualqbTA", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_kvfDppkhtoFEIIadCayMkCnGWwBtc(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "kvfDppkhtoFEIIadCayMkCnGWwBtc", ::Rewired::Utils::UnityTools*>(std::forward<::StringW>(value));
}
inline ::StringW Rewired::Utils::UnityTools::getStaticF_kvfDppkhtoFEIIadCayMkCnGWwBtc()  {
return ::cordl_internals::getStaticField<::StringW, "kvfDppkhtoFEIIadCayMkCnGWwBtc", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_KLPiPeZnCgnZiePzhcDgqrdpPedn(::Rewired::Platforms::Platform  value)  {
::cordl_internals::setStaticField<::Rewired::Platforms::Platform, "KLPiPeZnCgnZiePzhcDgqrdpPedn", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Platforms::Platform>(value));
}
inline ::Rewired::Platforms::Platform Rewired::Utils::UnityTools::getStaticF_KLPiPeZnCgnZiePzhcDgqrdpPedn()  {
return ::cordl_internals::getStaticField<::Rewired::Platforms::Platform, "KLPiPeZnCgnZiePzhcDgqrdpPedn", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_UZWyZCVCpdLUEwqepArqGAVlstfBA(::Rewired::Platforms::EditorPlatform  value)  {
::cordl_internals::setStaticField<::Rewired::Platforms::EditorPlatform, "UZWyZCVCpdLUEwqepArqGAVlstfBA", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Platforms::EditorPlatform>(value));
}
inline ::Rewired::Platforms::EditorPlatform Rewired::Utils::UnityTools::getStaticF_UZWyZCVCpdLUEwqepArqGAVlstfBA()  {
return ::cordl_internals::getStaticField<::Rewired::Platforms::EditorPlatform, "UZWyZCVCpdLUEwqepArqGAVlstfBA", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_ktlEJLroTySytIwVTogCKnAvGwxJ(bool  value)  {
::cordl_internals::setStaticField<bool, "ktlEJLroTySytIwVTogCKnAvGwxJ", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_ktlEJLroTySytIwVTogCKnAvGwxJ()  {
return ::cordl_internals::getStaticField<bool, "ktlEJLroTySytIwVTogCKnAvGwxJ", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_DCOFmwDjShWExbmQIXOhowVuhrKP(bool  value)  {
::cordl_internals::setStaticField<bool, "DCOFmwDjShWExbmQIXOhowVuhrKP", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_DCOFmwDjShWExbmQIXOhowVuhrKP()  {
return ::cordl_internals::getStaticField<bool, "DCOFmwDjShWExbmQIXOhowVuhrKP", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_tJdZHgHBcVAbwzgUaEXJhKoedfxX(bool  value)  {
::cordl_internals::setStaticField<bool, "tJdZHgHBcVAbwzgUaEXJhKoedfxX", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_tJdZHgHBcVAbwzgUaEXJhKoedfxX()  {
return ::cordl_internals::getStaticField<bool, "tJdZHgHBcVAbwzgUaEXJhKoedfxX", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_fcnKoaswaaKBecvHdQHXLfPlqGmX(::Rewired::Platforms::WebplayerPlatform  value)  {
::cordl_internals::setStaticField<::Rewired::Platforms::WebplayerPlatform, "fcnKoaswaaKBecvHdQHXLfPlqGmX", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Platforms::WebplayerPlatform>(value));
}
inline ::Rewired::Platforms::WebplayerPlatform Rewired::Utils::UnityTools::getStaticF_fcnKoaswaaKBecvHdQHXLfPlqGmX()  {
return ::cordl_internals::getStaticField<::Rewired::Platforms::WebplayerPlatform, "fcnKoaswaaKBecvHdQHXLfPlqGmX", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_YLKdpFBLarbrbJvXUyflQcKePoswA(bool  value)  {
::cordl_internals::setStaticField<bool, "YLKdpFBLarbrbJvXUyflQcKePoswA", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_YLKdpFBLarbrbJvXUyflQcKePoswA()  {
return ::cordl_internals::getStaticField<bool, "YLKdpFBLarbrbJvXUyflQcKePoswA", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_NsQnvTPEDsUYBQgbKNmWgjRuLTKc(bool  value)  {
::cordl_internals::setStaticField<bool, "NsQnvTPEDsUYBQgbKNmWgjRuLTKc", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_NsQnvTPEDsUYBQgbKNmWgjRuLTKc()  {
return ::cordl_internals::getStaticField<bool, "NsQnvTPEDsUYBQgbKNmWgjRuLTKc", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_lzQFuZbObvrlHQHwmVaBGJCeCCiJA(bool  value)  {
::cordl_internals::setStaticField<bool, "lzQFuZbObvrlHQHwmVaBGJCeCCiJA", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_lzQFuZbObvrlHQHwmVaBGJCeCCiJA()  {
return ::cordl_internals::getStaticField<bool, "lzQFuZbObvrlHQHwmVaBGJCeCCiJA", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_INsApxjzvoobXlhRtgZBwFYkoNjJ(bool  value)  {
::cordl_internals::setStaticField<bool, "INsApxjzvoobXlhRtgZBwFYkoNjJ", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_INsApxjzvoobXlhRtgZBwFYkoNjJ()  {
return ::cordl_internals::getStaticField<bool, "INsApxjzvoobXlhRtgZBwFYkoNjJ", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_xRrnrVsRuqSRaLnRRasCGlaZHfdgA(bool  value)  {
::cordl_internals::setStaticField<bool, "xRrnrVsRuqSRaLnRRasCGlaZHfdgA", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_xRrnrVsRuqSRaLnRRasCGlaZHfdgA()  {
return ::cordl_internals::getStaticField<bool, "xRrnrVsRuqSRaLnRRasCGlaZHfdgA", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_agaCPsndihvwUCXLqNIUcDGUgHhp(bool  value)  {
::cordl_internals::setStaticField<bool, "agaCPsndihvwUCXLqNIUcDGUgHhp", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_agaCPsndihvwUCXLqNIUcDGUgHhp()  {
return ::cordl_internals::getStaticField<bool, "agaCPsndihvwUCXLqNIUcDGUgHhp", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_vSaehEGkdzplLtwppLHfJCUfqlmn(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "vSaehEGkdzplLtwppLHfJCUfqlmn", ::Rewired::Utils::UnityTools*>(std::forward<::StringW>(value));
}
inline ::StringW Rewired::Utils::UnityTools::getStaticF_vSaehEGkdzplLtwppLHfJCUfqlmn()  {
return ::cordl_internals::getStaticField<::StringW, "vSaehEGkdzplLtwppLHfJCUfqlmn", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_JZEEjoJOuJfnoEjqOeBEYsxrjcnN(::Rewired::Platforms::ScriptingBackend  value)  {
::cordl_internals::setStaticField<::Rewired::Platforms::ScriptingBackend, "JZEEjoJOuJfnoEjqOeBEYsxrjcnN", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Platforms::ScriptingBackend>(value));
}
inline ::Rewired::Platforms::ScriptingBackend Rewired::Utils::UnityTools::getStaticF_JZEEjoJOuJfnoEjqOeBEYsxrjcnN()  {
return ::cordl_internals::getStaticField<::Rewired::Platforms::ScriptingBackend, "JZEEjoJOuJfnoEjqOeBEYsxrjcnN", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_AglikHjmTOisAUfmokUJCruERkgyA(::Rewired::Platforms::ScriptingAPILevel  value)  {
::cordl_internals::setStaticField<::Rewired::Platforms::ScriptingAPILevel, "AglikHjmTOisAUfmokUJCruERkgyA", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Platforms::ScriptingAPILevel>(value));
}
inline ::Rewired::Platforms::ScriptingAPILevel Rewired::Utils::UnityTools::getStaticF_AglikHjmTOisAUfmokUJCruERkgyA()  {
return ::cordl_internals::getStaticField<::Rewired::Platforms::ScriptingAPILevel, "AglikHjmTOisAUfmokUJCruERkgyA", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_qZfApbzuluDbBfUVgSVSnYHoDhXH(bool  value)  {
::cordl_internals::setStaticField<bool, "qZfApbzuluDbBfUVgSVSnYHoDhXH", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_qZfApbzuluDbBfUVgSVSnYHoDhXH()  {
return ::cordl_internals::getStaticField<bool, "qZfApbzuluDbBfUVgSVSnYHoDhXH", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_rzxSPEHBsLraakLAbClZfCbVpwDiA(::Rewired::Utils::Interfaces::IExternalTools*  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::Interfaces::IExternalTools*, "rzxSPEHBsLraakLAbClZfCbVpwDiA", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Utils::Interfaces::IExternalTools*>(value));
}
inline ::Rewired::Utils::Interfaces::IExternalTools* Rewired::Utils::UnityTools::getStaticF_rzxSPEHBsLraakLAbClZfCbVpwDiA()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::Interfaces::IExternalTools*, "rzxSPEHBsLraakLAbClZfCbVpwDiA", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_CIyOpxFeimZPRQDQdSHFCIGvCHxhA(::Rewired::Interfaces::IAndroidFallbackPlatformHelper*  value)  {
::cordl_internals::setStaticField<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*, "CIyOpxFeimZPRQDQdSHFCIGvCHxhA", ::Rewired::Utils::UnityTools*>(std::forward<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(value));
}
inline ::Rewired::Interfaces::IAndroidFallbackPlatformHelper* Rewired::Utils::UnityTools::getStaticF_CIyOpxFeimZPRQDQdSHFCIGvCHxhA()  {
return ::cordl_internals::getStaticField<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*, "CIyOpxFeimZPRQDQdSHFCIGvCHxhA", ::Rewired::Utils::UnityTools*>();
}
inline void Rewired::Utils::UnityTools::setStaticF_XyPgRQIUlragbwjPHgJwzBbpjbbf(bool  value)  {
::cordl_internals::setStaticField<bool, "XyPgRQIUlragbwjPHgJwzBbpjbbf", ::Rewired::Utils::UnityTools*>(std::forward<bool>(value));
}
inline bool Rewired::Utils::UnityTools::getStaticF_XyPgRQIUlragbwjPHgJwzBbpjbbf()  {
return ::cordl_internals::getStaticField<bool, "XyPgRQIUlragbwjPHgJwzBbpjbbf", ::Rewired::Utils::UnityTools*>();
}
inline ::Rewired::Utils::UnityTools_UnityVersionClass* Rewired::Utils::UnityTools::get_unityVersionObj()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_unityVersionObj", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::UnityTools_UnityVersionClass*>(nullptr, ___internal_method);
}
inline ::Rewired::Utils::UnityTools_UnityVersion Rewired::Utils::UnityTools::get_unityVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_unityVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::UnityTools_UnityVersion>(nullptr, ___internal_method);
}
inline ::StringW Rewired::Utils::UnityTools::get_unityVersionString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_unityVersionString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::Rewired::Platforms::Platform Rewired::Utils::UnityTools::get_platform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_platform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Platform>(nullptr, ___internal_method);
}
inline ::Rewired::Platforms::Platform Rewired::Utils::UnityTools::get_effectivePlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_effectivePlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::Platform>(nullptr, ___internal_method);
}
inline ::Rewired::Platforms::EditorPlatform Rewired::Utils::UnityTools::get_editorPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_editorPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::EditorPlatform>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_isEditor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isEditor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_isDebugBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isDebugBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Rewired::Platforms::WebplayerPlatform Rewired::Utils::UnityTools::get_webplayerPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_webplayerPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::WebplayerPlatform>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_logToDebugLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_logToDebugLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_editorPlatformMatchesBuildPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_editorPlatformMatchesBuildPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_isSupportedVersion3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isSupportedVersion3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_isSupportedVersion4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isSupportedVersion4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supports2DColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supports2DColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsSortingLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsSortingLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsUnityUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsUnityUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsTouchControls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsTouchControls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsPhysicalKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsPhysicalKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_isAndroidPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isAndroidPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_isIOSPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isIOSPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_isStandalonePlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isStandalonePlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_windowsJoystickNamesReturnsEmptyStringsIfJoystickNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsUnityUIGraphicRaycastTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsUnityUIGraphicRaycastTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsNestedPrefabs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsNestedPrefabs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsWindowsAppStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsWindowsAppStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsWindowsUWP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsWindowsUWP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsWindowsUWP_IL2CPP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsWindowsUWP_IL2CPP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_supportsXboxOne()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_supportsXboxOne", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::get_windowsStandalone_supportsRawInputForwarding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_windowsStandalone_supportsRawInputForwarding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Rewired::Platforms::ScriptingBackend Rewired::Utils::UnityTools::get_scriptingBackend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_scriptingBackend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::ScriptingBackend>(nullptr, ___internal_method);
}
inline ::Rewired::Platforms::ScriptingAPILevel Rewired::Utils::UnityTools::get_scriptingAPILevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_scriptingAPILevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::ScriptingAPILevel>(nullptr, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IExternalTools* Rewired::Utils::UnityTools::get_externalTools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_externalTools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IExternalTools*>(nullptr, ___internal_method);
}
inline ::Rewired::Interfaces::IAndroidFallbackPlatformHelper* Rewired::Utils::UnityTools::lVBOXYWbvFetWdJqutDAJWPcTQDM()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"lVBOXYWbvFetWdJqutDAJWPcTQDM", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>(nullptr, ___internal_method);
}
inline void Rewired::Utils::UnityTools::lzgEIwerDsVUUbjluNONuBhVyoWn(::Rewired::Interfaces::IAndroidFallbackPlatformHelper*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"lzgEIwerDsVUUbjluNONuBhVyoWn", {}, {::i2c::type_of<::Rewired::Interfaces::IAndroidFallbackPlatformHelper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Utils::UnityTools::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"get_isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::hYZyUEgcAEBKYMmGRSFeJWwyDbQi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"hYZyUEgcAEBKYMmGRSFeJWwyDbQi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Rewired::Utils::UnityTools::GaqDlBnZncUOMUIsSkusCdFeESFkA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GaqDlBnZncUOMUIsSkusCdFeESFkA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Rewired::Utils::UnityTools::yczdFfdNBfiXfvlUkYSlsDxSiSQTA(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"yczdFfdNBfiXfvlUkYSlsDxSiSQTA", {}, {::i2c::type_of<::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Platforms::WebplayerPlatform Rewired::Utils::UnityTools::DetermineWebplayerPlatformType(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::EditorPlatform  editorPlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"DetermineWebplayerPlatformType", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::WebplayerPlatform>(nullptr, ___internal_method, platform, editorPlatform);
}
inline bool Rewired::Utils::UnityTools::IsUnityVersionInRange(::StringW  minVersionStr, ::StringW  maxVersionStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsUnityVersionInRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, minVersionStr, maxVersionStr);
}
inline bool Rewired::Utils::UnityTools::LAnBUsAuhZgGyEOLXhzqjnnTATWlA(::StringW  _cordl_fixed_empty_name_whitespace, ::by_ref<int32_t>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"LAnBUsAuhZgGyEOLXhzqjnnTATWlA", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Utils::UnityTools::EnzbqvIEZHQYhntLWeuRLpmQJBqqA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"EnzbqvIEZHQYhntLWeuRLpmQJBqqA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Rewired::Utils::UnityTools_UnityVersion Rewired::Utils::UnityTools::czojIValaFRLiQVBqmmeCjxmlBQj(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"czojIValaFRLiQVBqmmeCjxmlBQj", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::UnityTools_UnityVersion>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::UnityTools_UnityVersion Rewired::Utils::UnityTools::NiktslXGoqfLHkOYrhCVywWbpiux(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"NiktslXGoqfLHkOYrhCVywWbpiux", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::UnityTools_UnityVersion>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::UnityTools_UnityVersion Rewired::Utils::UnityTools::aBlRVhonicQEiqyerYCNTbygKolj(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"aBlRVhonicQEiqyerYCNTbygKolj", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::UnityTools_UnityVersion>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::UnityTools::RWWwOmxlyoJXOaRjpWHBhAsgLrNh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"RWWwOmxlyoJXOaRjpWHBhAsgLrNh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Type* Rewired::Utils::UnityTools::teBryrkDbxKezlrbaBhbzpVLbaWL(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"teBryrkDbxKezlrbaBhbzpVLbaWL", {}, {::i2c::type_of<::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Type* Rewired::Utils::UnityTools::acFriRFiEwQsVEWppYQVsZLPzIrI(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"acFriRFiEwQsVEWppYQVsZLPzIrI", {}, {::i2c::type_of<::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Collections::Generic::List_1<::StringW>* Rewired::Utils::UnityTools::GetCurrentPlatformResourecesDLLPaths()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetCurrentPlatformResourecesDLLPaths", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Rewired::Utils::UnityTools::FindTransformInChildren(::UnityEngine::Transform*  transform, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"FindTransformInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, transform, name);
}
inline ::UnityW<::UnityEngine::Transform> Rewired::Utils::UnityTools::FindTransformInChildren(::UnityEngine::GameObject*  gameObject, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"FindTransformInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, gameObject, name);
}
inline ::UnityW<::UnityEngine::GameObject> Rewired::Utils::UnityTools::FindGameObjectInChildren(::UnityEngine::GameObject*  gameObject, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"FindGameObjectInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, gameObject, name);
}
inline ::UnityW<::UnityEngine::GameObject> Rewired::Utils::UnityTools::FindGameObjectInChildren(::UnityEngine::Transform*  transform, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"FindGameObjectInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, transform, name);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponent(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponent(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponent(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponent(::UnityEngine::Transform*  transform, bool  includeDisabledComponents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform, includeDisabledComponents);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponent(::UnityEngine::Component*  component, bool  includeDisabledComponents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component, includeDisabledComponents);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponent(::UnityEngine::GameObject*  gameObject, bool  includeDisabledComponents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject, includeDisabledComponents);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponent(::UnityEngine::Transform*  transform, ::System::Type*  type, bool  includeDisabledComponents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, transform, type, includeDisabledComponents);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponent(::UnityEngine::Component*  component, ::System::Type*  type, bool  includeDisabledComponents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, component, type, includeDisabledComponents);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponent(::UnityEngine::GameObject*  gameObject, ::System::Type*  type, bool  includeDisabledComponents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, gameObject, type, includeDisabledComponents);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponent(::UnityEngine::Transform*  transform, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, transform, type);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponent(::UnityEngine::Component*  component, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, component, type);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponent(::UnityEngine::GameObject*  gameObject, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, gameObject, type);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject, options);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component, options);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform, options);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::GameObject*  gameObject, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, gameObject, type);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::Component*  component, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, component, type);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::Transform*  transform, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, transform, type);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::GameObject*  gameObject, ::System::Type*  type, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, gameObject, type, options);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::Component*  component, ::System::Type*  type, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, component, type, options);
}
inline ::UnityW<::UnityEngine::Component> Rewired::Utils::UnityTools::GetComponentInChildren(::UnityEngine::Transform*  transform, ::System::Type*  type, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(nullptr, ___internal_method, transform, type, options);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrChildren(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrChildren(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrChildren(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform, options);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component, options);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject, options);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInParents(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInParents(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInParents(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrParents(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrParents(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, component);
}
template<typename T>
inline T Rewired::Utils::UnityTools::GetComponentInSelfOrParents(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentInSelfOrParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, transform);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, transform);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, component);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Transform*  transform, bool  includeDisabledComponents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, transform, includeDisabledComponents);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Component*  component, bool  includeDisabledComponents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, component, includeDisabledComponents);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::GameObject*  gameObject, bool  includeDisabledComponents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, gameObject, includeDisabledComponents);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Transform*  transform, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, transform, type);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Component*  component, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, component, type);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, gameObject, type);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Transform*  transform, ::System::Type*  type, bool  includeDisabledComponents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, transform, type, includeDisabledComponents);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Component*  component, ::System::Type*  type, bool  includeDisabledComponents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, component, type, includeDisabledComponents);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Type*  type, bool  includeDisabledComponents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, gameObject, type, includeDisabledComponents);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, transform);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, component);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, transform, options);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, component, options);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, gameObject, options);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, transform);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, component);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, transform);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, component);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, transform);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::Component*  component)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, component);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, gameObject);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, transform);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, component);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Transform*  transform, bool  includeDisabledComponents, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, includeDisabledComponents, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Component*  component, bool  includeDisabledComponents, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, includeDisabledComponents, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::GameObject*  gameObject, bool  includeDisabledComponents, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, includeDisabledComponents, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Transform*  transform, ::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, type, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::Component*  component, ::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, type, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponents(::UnityEngine::GameObject*  gameObject, ::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, type, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInSelfAndChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInSelfAndChildren", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInSelfAndChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, options, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, options, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInSelfAndChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInSelfAndChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, options, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Transform*  transform, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, options, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Component*  component, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, options, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::GameObject*  gameObject, ::Rewired::Utils::UnityTools_GetComponentFlags  options, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Rewired::Utils::UnityTools_GetComponentFlags>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, options, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInChildren(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, results, append);
}
template<typename T>
inline int32_t Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<T>*  results, bool  append)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"GetComponentsInParents", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::Transform*  transform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::Component*  component, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component, results, append);
}
inline int32_t Rewired::Utils::UnityTools::GetComponentsInParents(::UnityEngine::GameObject*  gameObject, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  results, bool  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetComponentsInParents", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, gameObject, results, append);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponent(::UnityEngine::Transform*  transform, ::System::Action_1<T>*  delegate, bool  includeChildren)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, delegate, includeChildren);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponent(::UnityEngine::Transform*  transform, ::System::Action_1<T>*  delegate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, delegate);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponent(::UnityEngine::Component*  component, ::System::Action_1<T>*  delegate, bool  includeChildren)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, delegate, includeChildren);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponent(::UnityEngine::Component*  component, ::System::Action_1<T>*  delegate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, delegate);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponent(::UnityEngine::GameObject*  gameObject, ::System::Action_1<T>*  delegate, bool  includeChildren)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, delegate, includeChildren);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponent(::UnityEngine::GameObject*  gameObject, ::System::Action_1<T>*  delegate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, delegate);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponentInChildren(::UnityEngine::Transform*  transform, ::System::Action_1<T>*  delegate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, delegate);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponentInChildren(::UnityEngine::Component*  component, ::System::Action_1<T>*  delegate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, delegate);
}
template<typename T>
inline void Rewired::Utils::UnityTools::ForEachComponentInChildren(::UnityEngine::GameObject*  gameObject, ::System::Action_1<T>*  delegate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"ForEachComponentInChildren", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, delegate);
}
inline bool Rewired::Utils::UnityTools::IsEnabled(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsEnabled", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component);
}
inline bool Rewired::Utils::UnityTools::IsActiveAndEnabled(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsActiveAndEnabled", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component);
}
inline ::UnityW<::UnityEngine::Object> Rewired::Utils::UnityTools::Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, original, parent, instantiateInWorldSpace);
}
inline ::UnityW<::UnityEngine::Object> Rewired::Utils::UnityTools::Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"Instantiate", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, original, position, rotation, parent, instantiateInWorldSpace);
}
template<typename T>
inline T Rewired::Utils::UnityTools::Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"Instantiate", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original, parent, instantiateInWorldSpace);
}
template<typename T>
inline T Rewired::Utils::UnityTools::Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"Instantiate", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, original, position, rotation, parent, instantiateInWorldSpace);
}
inline ::UnityEngine::Vector3 Rewired::Utils::UnityTools::TransformPoint(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, from, to, point);
}
inline ::UnityEngine::Vector3 Rewired::Utils::UnityTools::TransformPoint(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, from, to);
}
inline ::UnityEngine::Vector3 Rewired::Utils::UnityTools::TransformDirection(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, from, to, direction);
}
inline ::UnityEngine::Vector3 Rewired::Utils::UnityTools::TransformDirection(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, from, to);
}
inline ::UnityEngine::Vector3 Rewired::Utils::UnityTools::TransformVector(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to, ::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformVector", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, from, to, vector);
}
inline ::UnityEngine::Vector3 Rewired::Utils::UnityTools::TransformVector(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformVector", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, from, to);
}
inline ::UnityEngine::Rect Rewired::Utils::UnityTools::TransformRect(::UnityEngine::Transform*  from, ::UnityEngine::Transform*  to, ::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"TransformRect", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, from, to, rect);
}
inline void Rewired::Utils::UnityTools::DebugDrawCross(::UnityEngine::Vector3  position, float_t  length, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"DebugDrawCross", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, length, color);
}
inline void Rewired::Utils::UnityTools::DebugDrawCross(::UnityEngine::Vector3  position, float_t  length, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"DebugDrawCross", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, length, color, duration);
}
template<typename T>
inline bool Rewired::Utils::UnityTools::IsObjectInScene(T  object)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"IsObjectInScene", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, object);
}
inline ::StringW Rewired::Utils::UnityTools::GetUnityInputAxisName(int32_t  unityJoystickIndex, int32_t  axisIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetUnityInputAxisName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unityJoystickIndex, axisIndex);
}
inline ::StringW Rewired::Utils::UnityTools::GetUnityInputAxisNameByJoystickId(int32_t  unityJoystickId, int32_t  axisIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetUnityInputAxisNameByJoystickId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unityJoystickId, axisIndex);
}
inline ::StringW Rewired::Utils::UnityTools::GetUnityInputButtonName(int32_t  unityJoystickIndex, int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetUnityInputButtonName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unityJoystickIndex, buttonIndex);
}
inline ::StringW Rewired::Utils::UnityTools::GetUnityInputButtonNameByJoystickId(int32_t  unityJoystickId, int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"GetUnityInputButtonNameByJoystickId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, unityJoystickId, buttonIndex);
}
inline bool Rewired::Utils::UnityTools::IsValidUnityJoystickName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsValidUnityJoystickName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::AnimationCurve* Rewired::Utils::UnityTools::Copy(::UnityEngine::AnimationCurve*  orig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"Copy", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, orig);
}
inline bool Rewired::Utils::UnityTools::IsNullOrDestroyed(::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"IsNullOrDestroyed", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, object);
}
template<typename T>
inline bool Rewired::Utils::UnityTools::IsNullOrDestroyed(T  object)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"IsNullOrDestroyed", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, object);
}
template<typename >
inline  Rewired::Utils::UnityTools::hgEyUgkuECCCGcpZMHqxUibYaAZX(  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                    {"hgEyUgkuECCCGcpZMHqxUibYaAZX", {::i2c::class_of<>()}, {::i2c::type_of<>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ButtonStateFlags Rewired::Utils::UnityTools::odHhbxEOCYeHPDOjTYfgIdMyHoKFA(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"odHhbxEOCYeHPDOjTYfgIdMyHoKFA", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ButtonStateFlags>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ButtonStateFlags Rewired::Utils::UnityTools::UpNqDZUFCdERcqqmOTVGiVdoxVsL(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::UnityTools*>(),
                        {"UpNqDZUFCdERcqqmOTVGiVdoxVsL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ButtonStateFlags>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::UnityTools::UnityTools()   {
}
constexpr ::Rewired::Utils::UnityTools_UnityVersion  Rewired::Utils::UnityTools::ctLpchExytJeRKRvJpwsihUNgLXw{static_cast<int32_t>(0x1a)};
