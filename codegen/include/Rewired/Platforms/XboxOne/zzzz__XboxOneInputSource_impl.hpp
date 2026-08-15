#pragma once
// IWYU pragma private; include "Rewired/Platforms/XboxOne/XboxOneInputSource.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_impl.hpp"
#include "Rewired/Platforms/XboxOne/zzzz__XboxOneInputSource_def.hpp"
#include "GlobalNamespace/zzzz__tHsESWDQOdxcIkhJvKlfiYcSCTyD_def.hpp"
#include "Rewired/Internal/Localization/zzzz__ITryGetLocalizedName_def.hpp"
#include "Rewired/Internal/Localization/zzzz__LocalizedString_def.hpp"
#include "Rewired/Internal/zzzz__IInputManagerHardwareJoystickMapHandler_def.hpp"
#include "Rewired/Platforms/XboxOne/zzzz__IXboxOneInputSource_def.hpp"
#include "Rewired/Platforms/XboxOne/zzzz__XboxOneGamepadMotorType_def.hpp"
#include "Rewired/Platforms/XboxOne/zzzz__XboxOneInputSource_def.hpp"
#include "Rewired/zzzz__HardwareJoystickMap_InputManager_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason::XboxOneInputSource_BadConnectionReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason::XboxOneInputSource_BadConnectionReason()   {
}
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason  Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason  Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason::GamepadNotActive{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason  Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason::InvalidName{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA::*)(uint32_t, uint32_t)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a47e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA::_ctor(uint32_t  _cordl_fixed_empty_name_whitespace, uint32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
// Ctor Parameters [CppParam { name: "THnbeQFqYLaAowpqMjqsZQWWPISUA", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DDPehzNpcdaqwpznUAOjzEpnPncC", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA(uint32_t  THnbeQFqYLaAowpqMjqsZQWWPISUA, uint32_t  DDPehzNpcdaqwpznUAOjzEpnPncC) noexcept  {
this->THnbeQFqYLaAowpqMjqsZQWWPISUA = THnbeQFqYLaAowpqMjqsZQWWPISUA;
this->DDPehzNpcdaqwpznUAOjzEpnPncC = DDPehzNpcdaqwpznUAOjzEpnPncC;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA()   {
}
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA.PDGMwYLakRyZGxTnYJsLVlEOpZiL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::PDGMwYLakRyZGxTnYJsLVlEOpZiL)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"PDGMwYLakRyZGxTnYJsLVlEOpZiL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)(::Rewired::Platforms::XboxOne::IXboxOneInputSource*, uint64_t, int32_t, bool)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::_ctor)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x181880f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA.EsCmrfcKaxHiIGISYEsRtrenKraNA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::EsCmrfcKaxHiIGISYEsRtrenKraNA)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x1818807f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA.wNDDByBYqdQjMpzZjwLVqwkTcMff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)(uint64_t)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::wNDDByBYqdQjMpzZjwLVqwkTcMff)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181881390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"wNDDByBYqdQjMpzZjwLVqwkTcMff", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA.fcwIpkBapYBAZJAGSSdUoLSyXhwcA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::fcwIpkBapYBAZJAGSSdUoLSyXhwcA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818812e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"fcwIpkBapYBAZJAGSSdUoLSyXhwcA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA.afzgZAHfQeDqhDSRFbDPRyYwKlqGB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)(int32_t)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::afzgZAHfQeDqhDSRFbDPRyYwKlqGB)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818812c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"afzgZAHfQeDqhDSRFbDPRyYwKlqGB", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA.zAQAMIksVUmDDeCgauXtbgsyGZmgB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::zAQAMIksVUmDDeCgauXtbgsyGZmgB)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181881550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"zAQAMIksVUmDDeCgauXtbgsyGZmgB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA.Rewired_Internal_IInputManagerHardwareJoystickMapHandler_InitializeHardwareJoystickMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)(::Rewired::HardwareJoystickMap_InputManager*)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::Rewired_Internal_IInputManagerHardwareJoystickMapHandler_InitializeHardwareJoystickMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"Rewired.Internal.IInputManagerHardwareJoystickMapHandler.InitializeHardwareJoystickMap", {}, {::i2c::type_of<::Rewired::HardwareJoystickMap_InputManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA.Rewired_Internal_Localization_ITryGetLocalizedName_TryGetLocalizedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::*)(::by_ref<::StringW>)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::Rewired_Internal_Localization_ITryGetLocalizedName_TryGetLocalizedName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181880e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"Rewired.Internal.Localization.ITryGetLocalizedName.TryGetLocalizedName", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Platforms::XboxOne::IXboxOneInputSource*& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_USWDbgrIHJjDFUiSYHaxxmjpuXpB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___USWDbgrIHJjDFUiSYHaxxmjpuXpB;
}
constexpr ::Rewired::Platforms::XboxOne::IXboxOneInputSource* const& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_USWDbgrIHJjDFUiSYHaxxmjpuXpB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___USWDbgrIHJjDFUiSYHaxxmjpuXpB;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_set_USWDbgrIHJjDFUiSYHaxxmjpuXpB(::Rewired::Platforms::XboxOne::IXboxOneInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___USWDbgrIHJjDFUiSYHaxxmjpuXpB = value;
}
constexpr int32_t& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_fsfrITgQXtSIMmvTHjjpQFGtoMpc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fsfrITgQXtSIMmvTHjjpQFGtoMpc;
}
constexpr int32_t const& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_fsfrITgQXtSIMmvTHjjpQFGtoMpc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fsfrITgQXtSIMmvTHjjpQFGtoMpc;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_set_fsfrITgQXtSIMmvTHjjpQFGtoMpc(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fsfrITgQXtSIMmvTHjjpQFGtoMpc = value;
}
constexpr uint64_t& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_GFmWflgfyXzLpezoCsQrZLfMEmMt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GFmWflgfyXzLpezoCsQrZLfMEmMt;
}
constexpr uint64_t const& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_GFmWflgfyXzLpezoCsQrZLfMEmMt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GFmWflgfyXzLpezoCsQrZLfMEmMt;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_set_GFmWflgfyXzLpezoCsQrZLfMEmMt(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GFmWflgfyXzLpezoCsQrZLfMEmMt = value;
}
constexpr ::ArrayW<::StringW>& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_dUKmGpIiGuFfzwurZFEYJmmPsbdE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dUKmGpIiGuFfzwurZFEYJmmPsbdE;
}
constexpr ::ArrayW<::StringW> const& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_dUKmGpIiGuFfzwurZFEYJmmPsbdE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dUKmGpIiGuFfzwurZFEYJmmPsbdE;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_set_dUKmGpIiGuFfzwurZFEYJmmPsbdE(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dUKmGpIiGuFfzwurZFEYJmmPsbdE = value;
}
constexpr ::Rewired::HardwareJoystickMap_InputManager*& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_enrHtJtjERTliEMkyaiZEAciorFOA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enrHtJtjERTliEMkyaiZEAciorFOA;
}
constexpr ::Rewired::HardwareJoystickMap_InputManager* const& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_enrHtJtjERTliEMkyaiZEAciorFOA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enrHtJtjERTliEMkyaiZEAciorFOA;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_set_enrHtJtjERTliEMkyaiZEAciorFOA(::Rewired::HardwareJoystickMap_InputManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enrHtJtjERTliEMkyaiZEAciorFOA = value;
}
constexpr ::Rewired::Internal::Localization::LocalizedString*& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_VFINqewOiZloCTSItCDzSYoibQzp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VFINqewOiZloCTSItCDzSYoibQzp;
}
constexpr ::Rewired::Internal::Localization::LocalizedString* const& Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_get_VFINqewOiZloCTSItCDzSYoibQzp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VFINqewOiZloCTSItCDzSYoibQzp;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::__cordl_internal_set_VFINqewOiZloCTSItCDzSYoibQzp(::Rewired::Internal::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VFINqewOiZloCTSItCDzSYoibQzp = value;
}
inline uint64_t Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::PDGMwYLakRyZGxTnYJsLVlEOpZiL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"PDGMwYLakRyZGxTnYJsLVlEOpZiL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::_ctor(::Rewired::Platforms::XboxOne::IXboxOneInputSource*  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::EsCmrfcKaxHiIGISYEsRtrenKraNA()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::wNDDByBYqdQjMpzZjwLVqwkTcMff(uint64_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"wNDDByBYqdQjMpzZjwLVqwkTcMff", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::fcwIpkBapYBAZJAGSSdUoLSyXhwcA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"fcwIpkBapYBAZJAGSSdUoLSyXhwcA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::afzgZAHfQeDqhDSRFbDPRyYwKlqGB(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"afzgZAHfQeDqhDSRFbDPRyYwKlqGB", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::zAQAMIksVUmDDeCgauXtbgsyGZmgB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"zAQAMIksVUmDDeCgauXtbgsyGZmgB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::Rewired_Internal_IInputManagerHardwareJoystickMapHandler_InitializeHardwareJoystickMap(::Rewired::HardwareJoystickMap_InputManager*  hardwareMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"Rewired.Internal.IInputManagerHardwareJoystickMapHandler.InitializeHardwareJoystickMap", {}, {::i2c::type_of<::Rewired::HardwareJoystickMap_InputManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hardwareMap);
}
inline bool Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::Rewired_Internal_Localization_ITryGetLocalizedName_TryGetLocalizedName(::by_ref<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(),
                        {"Rewired.Internal.Localization.ITryGetLocalizedName.TryGetLocalizedName", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA* Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::New_ctor(::Rewired::Platforms::XboxOne::IXboxOneInputSource*  _cordl_fixed_empty_name_whitespace, uint64_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
/// @brief Convert operator to "::Rewired::Internal::Localization::ITryGetLocalizedName"
constexpr  Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::operator ::Rewired::Internal::Localization::ITryGetLocalizedName*() noexcept {
return static_cast<::Rewired::Internal::Localization::ITryGetLocalizedName*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Internal::Localization::ITryGetLocalizedName"
constexpr ::Rewired::Internal::Localization::ITryGetLocalizedName* Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::i___Rewired__Internal__Localization__ITryGetLocalizedName() noexcept {
return static_cast<::Rewired::Internal::Localization::ITryGetLocalizedName*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Internal::IInputManagerHardwareJoystickMapHandler"
constexpr  Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::operator ::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*() noexcept {
return static_cast<::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Internal::IInputManagerHardwareJoystickMapHandler"
constexpr ::Rewired::Internal::IInputManagerHardwareJoystickMapHandler* Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::i___Rewired__Internal__IInputManagerHardwareJoystickMapHandler() noexcept {
return static_cast<::Rewired::Internal::IInputManagerHardwareJoystickMapHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA::XboxOneInputSource_JjGEkxkGQZGveHGlfiwICJmPWKbDA()   {
}
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.get_isReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::get_isReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803151e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181885740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::Update)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1818854d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.ticvllmnqkXEdjNYnyTaViSNRcpS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)(uint32_t, bool)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::ticvllmnqkXEdjNYnyTaViSNRcpS)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181885d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"ticvllmnqkXEdjNYnyTaViSNRcpS", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.bNAXmHciqlcDaLtOWRvZPbJgyIzJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)(uint32_t, bool)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::bNAXmHciqlcDaLtOWRvZPbJgyIzJ)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818858c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"bNAXmHciqlcDaLtOWRvZPbJgyIzJ", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.mCyBxJfArJGCWWXsCDmEjHofGxsqB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::mCyBxJfArJGCWWXsCDmEjHofGxsqB)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818859e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"mCyBxJfArJGCWWXsCDmEjHofGxsqB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.tbCxiETGUtfGJBCdEoODXgRaDmwW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)(uint32_t, bool, ::by_ref<::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason>)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::tbCxiETGUtfGJBCdEoODXgRaDmwW)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181885b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"tbCxiETGUtfGJBCdEoODXgRaDmwW", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.EaBsKlHaVjsGhJzKDrAAFLPSBPiW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::EaBsKlHaVjsGhJzKDrAAFLPSBPiW)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181885100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"EaBsKlHaVjsGhJzKDrAAFLPSBPiW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.GetXboxOneUserIdFromUnityJoystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)(int32_t)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::GetXboxOneUserIdFromUnityJoystick)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818851b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"GetXboxOneUserIdFromUnityJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.PulseVibrateMotor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)(uint64_t, ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType, float_t, float_t, float_t)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::PulseVibrateMotor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181885270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"PulseVibrateMotor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.SetXboxOneVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)(uint64_t, ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::SetXboxOneVibration)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818853c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"SetXboxOneVibration", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181885020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)()>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181885120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Platforms::XboxOne::XboxOneInputSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::XboxOne::XboxOneInputSource::*)(bool)>(&::Rewired::Platforms::XboxOne::XboxOneInputSource::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181885070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                    {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_get_ZNcLNEUHnDWgchkJmEFgrDEFSFxx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZNcLNEUHnDWgchkJmEFgrDEFSFxx;
}
constexpr bool const& Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_get_ZNcLNEUHnDWgchkJmEFgrDEFSFxx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZNcLNEUHnDWgchkJmEFgrDEFSFxx;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_set_ZNcLNEUHnDWgchkJmEFgrDEFSFxx(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZNcLNEUHnDWgchkJmEFgrDEFSFxx = value;
}
constexpr bool& Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_get_yFKgnNBAGAaSveGPRLdHoCTIqeZyA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yFKgnNBAGAaSveGPRLdHoCTIqeZyA;
}
constexpr bool const& Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_get_yFKgnNBAGAaSveGPRLdHoCTIqeZyA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yFKgnNBAGAaSveGPRLdHoCTIqeZyA;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_set_yFKgnNBAGAaSveGPRLdHoCTIqeZyA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yFKgnNBAGAaSveGPRLdHoCTIqeZyA = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>*& Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_get_lplTlcepJlYtkGKtOuyzujwWrbMV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lplTlcepJlYtkGKtOuyzujwWrbMV;
}
constexpr ::System::Collections::Generic::Queue_1<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>* const& Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_get_lplTlcepJlYtkGKtOuyzujwWrbMV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lplTlcepJlYtkGKtOuyzujwWrbMV;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_set_lplTlcepJlYtkGKtOuyzujwWrbMV(::System::Collections::Generic::Queue_1<::Rewired::Platforms::XboxOne::XboxOneInputSource_pjVDOFOccKXqjpFHTspGXcoQFbheA>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lplTlcepJlYtkGKtOuyzujwWrbMV = value;
}
constexpr bool& Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_get_vPAEAkAgMRjluXrWjXjPjtaQnULrA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vPAEAkAgMRjluXrWjXjPjtaQnULrA;
}
constexpr bool const& Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_get_vPAEAkAgMRjluXrWjXjPjtaQnULrA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vPAEAkAgMRjluXrWjXjPjtaQnULrA;
}
constexpr void Rewired::Platforms::XboxOne::XboxOneInputSource::__cordl_internal_set_vPAEAkAgMRjluXrWjXjPjtaQnULrA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vPAEAkAgMRjluXrWjXjPjtaQnULrA = value;
}
inline bool Rewired::Platforms::XboxOne::XboxOneInputSource::get_isReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::ticvllmnqkXEdjNYnyTaViSNRcpS(uint32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"ticvllmnqkXEdjNYnyTaViSNRcpS", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::bNAXmHciqlcDaLtOWRvZPbJgyIzJ(uint32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"bNAXmHciqlcDaLtOWRvZPbJgyIzJ", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::mCyBxJfArJGCWWXsCDmEjHofGxsqB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"mCyBxJfArJGCWWXsCDmEjHofGxsqB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Platforms::XboxOne::XboxOneInputSource::tbCxiETGUtfGJBCdEoODXgRaDmwW(uint32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason>  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"tbCxiETGUtfGJBCdEoODXgRaDmwW", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Rewired::Platforms::XboxOne::XboxOneInputSource_BadConnectionReason>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::EaBsKlHaVjsGhJzKDrAAFLPSBPiW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"EaBsKlHaVjsGhJzKDrAAFLPSBPiW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::Platforms::XboxOne::XboxOneInputSource::GetXboxOneUserIdFromUnityJoystick(int32_t  unityJoystickId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"GetXboxOneUserIdFromUnityJoystick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, unityJoystickId);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::PulseVibrateMotor(uint64_t  xboxOneJoystickId, ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  startLevel, float_t  endLevel, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"PulseVibrateMotor", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xboxOneJoystickId, motor, startLevel, endLevel, duration);
}
inline bool Rewired::Platforms::XboxOne::XboxOneInputSource::SetXboxOneVibration(uint64_t  xboxOneJoystickId, ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  vibration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(),
                        {"SetXboxOneVibration", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xboxOneJoystickId, vibration);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Platforms::XboxOne::XboxOneInputSource::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Platforms::XboxOne::XboxOneInputSource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::Platforms::XboxOne::XboxOneInputSource* Rewired::Platforms::XboxOne::XboxOneInputSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::XboxOne::XboxOneInputSource*>());
}
/// @brief Convert operator to "::Rewired::Platforms::XboxOne::IXboxOneInputSource"
constexpr  Rewired::Platforms::XboxOne::XboxOneInputSource::operator ::Rewired::Platforms::XboxOne::IXboxOneInputSource*() noexcept {
return static_cast<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Platforms::XboxOne::IXboxOneInputSource"
constexpr ::Rewired::Platforms::XboxOne::IXboxOneInputSource* Rewired::Platforms::XboxOne::XboxOneInputSource::i___Rewired__Platforms__XboxOne__IXboxOneInputSource() noexcept {
return static_cast<::Rewired::Platforms::XboxOne::IXboxOneInputSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::XboxOne::XboxOneInputSource::XboxOneInputSource()   {
}
