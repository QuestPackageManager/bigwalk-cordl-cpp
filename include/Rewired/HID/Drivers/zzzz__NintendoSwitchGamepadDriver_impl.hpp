#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/NintendoSwitchGamepadDriver.hpp"
#include "GlobalNamespace/zzzz__WLETGeuJfanxUuxlAoBgHTRHTfCG_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchGamepadDriver_def.hpp"
#include "GlobalNamespace/zzzz__OkcmSmRmCcUfzccQxwsvLaISCgRM_def.hpp"
#include "GlobalNamespace/zzzz__fmjOcSgFrjmQzJlrXgwToxkjNXXo_def.hpp"
#include "GlobalNamespace/zzzz__nxSccnjzMkUjLoMzgjhhzPVcPAxF_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchController_def.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchGamepadDriver_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeBuffer_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp()   {
}
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp  Rewired::HID::Drivers::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp::GetUsbStatus{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::*)(::System::Object*, ::System::IntPtr)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::_ctor)> {
  constexpr static std::size_t size = 0x1ad0;
  constexpr static std::size_t addrs = 0x180ccf260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::*)(uint32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181aba2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::*)(::System::IAsyncResult*)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::EndInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1810ec2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::Invoke(uint32_t  responseTimeoutMs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseTimeoutMs);
}
inline ::System::IAsyncResult* Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::BeginInvoke(uint32_t  responseTimeoutMs, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, responseTimeoutMs, callback, object);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF* Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt()   {
}
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt::ProController{static_cast<int32_t>(0x0)};
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt::JoyConLeft{static_cast<int32_t>(0x1)};
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt::JoyConRight{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::*)(float_t, float_t, float_t, float_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818dab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA.WUoOqddsEOaFIgvDGbbbjFISOCmbA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA (*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::WUoOqddsEOaFIgvDGbbbjFISOCmbA)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818da8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(),
                        {"WUoOqddsEOaFIgvDGbbbjFISOCmbA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA.LdgMiRiluzCpYtsfBqsAujGXflDN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::LdgMiRiluzCpYtsfBqsAujGXflDN)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181abb960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::_ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::WUoOqddsEOaFIgvDGbbbjFISOCmbA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(),
                        {"WUoOqddsEOaFIgvDGbbbjFISOCmbA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(nullptr, ___internal_method);
}
inline ::StringW Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::LdgMiRiluzCpYtsfBqsAujGXflDN()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sTTUqwkEOrtqLThXoACOtxMXIgM", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RimtPpoQKCSQNjDnKVXwToCLHCxX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VGuRNYXYUTTAhUxvOeQJkSKscSoC", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cTmuGrhuLwTtLMmZfDShvKlqEDOH", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA(float_t  sTTUqwkEOrtqLThXoACOtxMXIgM, float_t  RimtPpoQKCSQNjDnKVXwToCLHCxX, float_t  VGuRNYXYUTTAhUxvOeQJkSKscSoC, float_t  cTmuGrhuLwTtLMmZfDShvKlqEDOH) noexcept  {
this->sTTUqwkEOrtqLThXoACOtxMXIgM = sTTUqwkEOrtqLThXoACOtxMXIgM;
this->RimtPpoQKCSQNjDnKVXwToCLHCxX = RimtPpoQKCSQNjDnKVXwToCLHCxX;
this->VGuRNYXYUTTAhUxvOeQJkSKscSoC = VGuRNYXYUTTAhUxvOeQJkSKscSoC;
this->cTmuGrhuLwTtLMmZfDShvKlqEDOH = cTmuGrhuLwTtLMmZfDShvKlqEDOH;
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA()   {
}
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA.FTTKeBQqWzkoQHqasZXTYfgTMevX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::FTTKeBQqWzkoQHqasZXTYfgTMevX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"FTTKeBQqWzkoQHqasZXTYfgTMevX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA.RmSsfeftGzGiYPnIfhwiASdcKCeeb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::RmSsfeftGzGiYPnIfhwiASdcKCeeb)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181aba460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"RmSsfeftGzGiYPnIfhwiASdcKCeeb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::*)(::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181aba560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA.ZVfbefJbaeDKWhGsrMsJFKDqRCkK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::*)(float_t, float_t, float_t, float_t, float_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::ZVfbefJbaeDKWhGsrMsJFKDqRCkK)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181aba480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"ZVfbefJbaeDKWhGsrMsJFKDqRCkK", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA.BTnkQrPBupNEjiqbpGFcAmjbXKxJA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::*)(double_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::BTnkQrPBupNEjiqbpGFcAmjbXKxJA)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181aba320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"BTnkQrPBupNEjiqbpGFcAmjbXKxJA", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA.QavfzCkoECRfJqhAgQQZmGwgWXsv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::QavfzCkoECRfJqhAgQQZmGwgWXsv)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181aba400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"QavfzCkoECRfJqhAgQQZmGwgWXsv", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA.OwrSAdGfzPrmaSDVpGAAdnNsqdFN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::OwrSAdGfzPrmaSDVpGAAdnNsqdFN)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181aba3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"OwrSAdGfzPrmaSDVpGAAdnNsqdFN", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_get_zhMHJIliaWoAHdwnQQXjyjSGOnej()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zhMHJIliaWoAHdwnQQXjyjSGOnej;
}
constexpr ::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM* const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_get_zhMHJIliaWoAHdwnQQXjyjSGOnej() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zhMHJIliaWoAHdwnQQXjyjSGOnej;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_set_zhMHJIliaWoAHdwnQQXjyjSGOnej(::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zhMHJIliaWoAHdwnQQXjyjSGOnej = value;
}
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_get_WpsxSoSvvBnprPakVlnQuAiuRmmA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WpsxSoSvvBnprPakVlnQuAiuRmmA;
}
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_get_WpsxSoSvvBnprPakVlnQuAiuRmmA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WpsxSoSvvBnprPakVlnQuAiuRmmA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_set_WpsxSoSvvBnprPakVlnQuAiuRmmA(::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WpsxSoSvvBnprPakVlnQuAiuRmmA = value;
}
constexpr float_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_get_SWOBWuMblDojBWTMNMqGvouZcoZx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SWOBWuMblDojBWTMNMqGvouZcoZx;
}
constexpr float_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_get_SWOBWuMblDojBWTMNMqGvouZcoZx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SWOBWuMblDojBWTMNMqGvouZcoZx;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_set_SWOBWuMblDojBWTMNMqGvouZcoZx(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SWOBWuMblDojBWTMNMqGvouZcoZx = value;
}
constexpr double_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_get_KGBSceoHZZXeJiZODhsfquTpEoDg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KGBSceoHZZXeJiZODhsfquTpEoDg;
}
constexpr double_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_get_KGBSceoHZZXeJiZODhsfquTpEoDg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KGBSceoHZZXeJiZODhsfquTpEoDg;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::__cordl_internal_set_KGBSceoHZZXeJiZODhsfquTpEoDg(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KGBSceoHZZXeJiZODhsfquTpEoDg = value;
}
inline ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::FTTKeBQqWzkoQHqasZXTYfgTMevX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"FTTKeBQqWzkoQHqasZXTYfgTMevX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::RmSsfeftGzGiYPnIfhwiASdcKCeeb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"RmSsfeftGzGiYPnIfhwiASdcKCeeb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::_ctor(::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::ZVfbefJbaeDKWhGsrMsJFKDqRCkK(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3, float_t  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"ZVfbefJbaeDKWhGsrMsJFKDqRCkK", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::BTnkQrPBupNEjiqbpGFcAmjbXKxJA(double_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"BTnkQrPBupNEjiqbpGFcAmjbXKxJA", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::QavfzCkoECRfJqhAgQQZmGwgWXsv()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"QavfzCkoECRfJqhAgQQZmGwgWXsv", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::OwrSAdGfzPrmaSDVpGAAdnNsqdFN()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(),
                        {"OwrSAdGfzPrmaSDVpGAAdnNsqdFN", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA* Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::New_ctor(::GlobalNamespace::OkcmSmRmCcUfzccQxwsvLaISCgRM*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA()   {
}
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu::*)(uint8_t, ::ArrayW<uint8_t>, int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805e0790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu::_ctor(uint8_t  _cordl_fixed_empty_name_whitespace, ::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
// Ctor Parameters [CppParam { name: "ymsGHHRdRJAdVeaKvFLwsCndpKtbA", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nHlEozhaGHOgnaVZbQvlojUAwDzUb", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "bdMTLDfigCVrgOoMgeAYGYFvlTHs", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu(uint8_t  ymsGHHRdRJAdVeaKvFLwsCndpKtbA, ::ArrayW<uint8_t>  nHlEozhaGHOgnaVZbQvlojUAwDzUb, int32_t  bdMTLDfigCVrgOoMgeAYGYFvlTHs) noexcept  {
this->ymsGHHRdRJAdVeaKvFLwsCndpKtbA = ymsGHHRdRJAdVeaKvFLwsCndpKtbA;
this->nHlEozhaGHOgnaVZbQvlojUAwDzUb = nHlEozhaGHOgnaVZbQvlojUAwDzUb;
this->bdMTLDfigCVrgOoMgeAYGYFvlTHs = bdMTLDfigCVrgOoMgeAYGYFvlTHs;
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu()   {
}
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE.JZQZZGzvWkmStnwqzUaueaYpSooM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::JZQZZGzvWkmStnwqzUaueaYpSooM)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181abcc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint16_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_get_KnPCiVFXkYUawVOTiejtgNAweOvL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KnPCiVFXkYUawVOTiejtgNAweOvL;
}
constexpr uint16_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_get_KnPCiVFXkYUawVOTiejtgNAweOvL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KnPCiVFXkYUawVOTiejtgNAweOvL;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_set_KnPCiVFXkYUawVOTiejtgNAweOvL(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KnPCiVFXkYUawVOTiejtgNAweOvL = value;
}
constexpr uint16_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_get_APYvpRhhKvRfcMTGtYuzXPNNrIHB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___APYvpRhhKvRfcMTGtYuzXPNNrIHB;
}
constexpr uint16_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_get_APYvpRhhKvRfcMTGtYuzXPNNrIHB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___APYvpRhhKvRfcMTGtYuzXPNNrIHB;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_set_APYvpRhhKvRfcMTGtYuzXPNNrIHB(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___APYvpRhhKvRfcMTGtYuzXPNNrIHB = value;
}
constexpr uint16_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_get_pvKvivazRDmQQROPbcxLHLDwxsUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pvKvivazRDmQQROPbcxLHLDwxsUV;
}
constexpr uint16_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_get_pvKvivazRDmQQROPbcxLHLDwxsUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pvKvivazRDmQQROPbcxLHLDwxsUV;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_set_pvKvivazRDmQQROPbcxLHLDwxsUV(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pvKvivazRDmQQROPbcxLHLDwxsUV = value;
}
constexpr uint16_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_get_OQIMcubncXugvLBUcOuZPtCSyVaF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OQIMcubncXugvLBUcOuZPtCSyVaF;
}
constexpr uint16_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_get_OQIMcubncXugvLBUcOuZPtCSyVaF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OQIMcubncXugvLBUcOuZPtCSyVaF;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::__cordl_internal_set_OQIMcubncXugvLBUcOuZPtCSyVaF(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OQIMcubncXugvLBUcOuZPtCSyVaF = value;
}
inline ::StringW Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::JZQZZGzvWkmStnwqzUaueaYpSooM()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE* Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>());
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE()   {
}
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.get_vibrationMotorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::get_vibrationMotorCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180de9ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(int32_t, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::GetVibration)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ab6230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(int32_t, float_t, float_t, float_t, float_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::SetVibration)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ab75d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(int32_t, float_t, float_t, float_t, float_t, bool)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::SetVibration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ab7780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(int32_t, float_t, float_t, float_t, float_t, float_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::SetVibration)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ab7540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(int32_t, float_t, float_t, float_t, float_t, float_t, bool)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::SetVibration)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181ab7650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::StopVibration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ab7940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"StopVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::StopVibration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ab77d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"StopVibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::StopVibration)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181ab77e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"StopVibration", {}, {::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.aAlUeGUaSLYOUdOemZlPGWAItfSu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::aAlUeGUaSLYOUdOemZlPGWAItfSu)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ab8170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"aAlUeGUaSLYOUdOemZlPGWAItfSu", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ab7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_productId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ab74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_productName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ab74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ab74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ab74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ab7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt, int32_t, int32_t, int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::_ctor)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x181ab7c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Initialize)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x181ab62b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.pjUyiCYwgxGpkoNEDtskygpoAKGE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>* (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::pjUyiCYwgxGpkoNEDtskygpoAKGE)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ab8c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"pjUyiCYwgxGpkoNEDtskygpoAKGE", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.cNIGbLThlkLNVeSLXpwibpajECNG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp, uint32_t, uint32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::cNIGbLThlkLNVeSLXpwibpajECNG)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181ab8330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"cNIGbLThlkLNVeSLXpwibpajECNG", {}, {::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.gAPMUhULPzPpfHWzWBlfYxqYaTcD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(uint32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::gAPMUhULPzPpfHWzWBlfYxqYaTcD)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181ab8630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"gAPMUhULPzPpfHWzWBlfYxqYaTcD", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::Rewired::UpdateLoopType)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181ab7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.ParseInputReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::System::IntPtr, int32_t, double_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::ParseInputReport)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181ab7380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.UpdateButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::UpdateButtons)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.UpdateElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>, ::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::UpdateElements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.JSUUCxxwwWdxgYJYucnZFfUApLAu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu, ::ArrayW<uint8_t>)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::JSUUCxxwwWdxgYJYucnZFfUApLAu)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x181ab67c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"JSUUCxxwwWdxgYJYucnZFfUApLAu", {}, {::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.bWjXcTGAXnIopSZeHENThGAudMFT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::Rewired::Utils::Classes::Data::NativeBuffer*, uint8_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::bWjXcTGAXnIopSZeHENThGAudMFT)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181ab8200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"bWjXcTGAXnIopSZeHENThGAudMFT", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.FIscHhHQeyZGSaZcFDOEWQqBoQVp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::Rewired::Utils::Classes::Data::NativeBuffer*)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::FIscHhHQeyZGSaZcFDOEWQqBoQVp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ab5fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"FIscHhHQeyZGSaZcFDOEWQqBoQVp", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.YXEdCrFIBciBabbZeCnrdXThIVAhb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::Rewired::Utils::Classes::Data::NativeBuffer*, int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::YXEdCrFIBciBabbZeCnrdXThIVAhb)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ab7b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"YXEdCrFIBciBabbZeCnrdXThIVAhb", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.iinkeMqaegameQjOILpWYLDQUBOR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Utils::Classes::Data::NativeBuffer*, int32_t, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::iinkeMqaegameQjOILpWYLDQUBOR)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181ab87b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"iinkeMqaegameQjOILpWYLDQUBOR", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.mgYmibCKhWFpAaffHPCCAEcnsNJOA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(float_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::mgYmibCKhWFpAaffHPCCAEcnsNJOA)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181ab8b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"mgYmibCKhWFpAaffHPCCAEcnsNJOA", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.lckqcPzapopXuqgDNhrQEeWdkrlR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::lckqcPzapopXuqgDNhrQEeWdkrlR)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ab8a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"lckqcPzapopXuqgDNhrQEeWdkrlR", {}, {::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.OGEXuVnigtIvMqWcyzAtmpoKQqhh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::OGEXuVnigtIvMqWcyzAtmpoKQqhh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ab72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"OGEXuVnigtIvMqWcyzAtmpoKQqhh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.WkbbjJkzXWjsXaQOwdNYoskLtLDo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(bool)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::WkbbjJkzXWjsXaQOwdNYoskLtLDo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ab7ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"WkbbjJkzXWjsXaQOwdNYoskLtLDo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.uNyOVqVjJdnTSDdbNTiBxJUigBqJ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(uint8_t, uint8_t, uint8_t, ::ArrayW<uint8_t>)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::uNyOVqVjJdnTSDdbNTiBxJUigBqJ)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181ab8d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"uNyOVqVjJdnTSDdbNTiBxJUigBqJ", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.erIZVcfgwVQTrRDoJbLXhIoUPjlIb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::erIZVcfgwVQTrRDoJbLXhIoUPjlIb)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181ab8480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"erIZVcfgwVQTrRDoJbLXhIoUPjlIb", {}, {::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.uMWSHSpvEdoTrkREyOARUGOaJtuaA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::uMWSHSpvEdoTrkREyOARUGOaJtuaA)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ab8d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"uMWSHSpvEdoTrkREyOARUGOaJtuaA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.NgfhQYfmTxBAHdnnLTJVhjyNiqqW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::NgfhQYfmTxBAHdnnLTJVhjyNiqqW)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x181ab6ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"NgfhQYfmTxBAHdnnLTJVhjyNiqqW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.ExxVzWfVptrnIYinXCAGjOxhVSTx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*, bool)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::ExxVzWfVptrnIYinXCAGjOxhVSTx)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181ab5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"ExxVzWfVptrnIYinXCAGjOxhVSTx", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.sJeJHNyygiKJUrdDYPFterahqrKo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::sJeJHNyygiKJUrdDYPFterahqrKo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ab8d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"sJeJHNyygiKJUrdDYPFterahqrKo", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.GetCalibratedStickValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(uint16_t, uint16_t, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*, ::by_ref<uint16_t>, ::by_ref<uint16_t>)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::GetCalibratedStickValue)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181ab6060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"GetCalibratedStickValue", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.GetAxisCalibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE* (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::GetAxisCalibration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ab6030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"GetAxisCalibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.oODmIndwPrTMUGZSdURCubXcOoZr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(bool)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::oODmIndwPrTMUGZSdURCubXcOoZr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"oODmIndwPrTMUGZSdURCubXcOoZr", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181aaccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::*)(bool)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Dispose)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181ab5c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.jlUDgbBKtnnKKfLGxBDiWMQJzWDS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::NativeBuffer* (*)(int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::jlUDgbBKtnnKKfLGxBDiWMQJzWDS)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ab89b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"jlUDgbBKtnnKKfLGxBDiWMQJzWDS", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.DLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::DLog)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ab5ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"DLog", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver.DDisposeLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::DDisposeLog)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ab5ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"DDisposeLog", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get__controllerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get__controllerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set__controllerType(::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerType = value;
}
constexpr int32_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get__buttonCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonCount;
}
constexpr int32_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get__buttonCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonCount;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set__buttonCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonCount = value;
}
constexpr int32_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get__axisCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisCount;
}
constexpr int32_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get__axisCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisCount;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set__axisCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axisCount = value;
}
constexpr int32_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get__vibrationMotorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vibrationMotorCount;
}
constexpr int32_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get__vibrationMotorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vibrationMotorCount;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set__vibrationMotorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vibrationMotorCount = value;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_DYkiyWRHoVoCjsGyEaaGKtdYjREYA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DYkiyWRHoVoCjsGyEaaGKtdYjREYA;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice* const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_DYkiyWRHoVoCjsGyEaaGKtdYjREYA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DYkiyWRHoVoCjsGyEaaGKtdYjREYA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_DYkiyWRHoVoCjsGyEaaGKtdYjREYA(::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DYkiyWRHoVoCjsGyEaaGKtdYjREYA = value;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_DIbTSGGxEVPlKGluoQdLKZLvsoTj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DIbTSGGxEVPlKGluoQdLKZLvsoTj;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_DIbTSGGxEVPlKGluoQdLKZLvsoTj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DIbTSGGxEVPlKGluoQdLKZLvsoTj;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_DIbTSGGxEVPlKGluoQdLKZLvsoTj(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DIbTSGGxEVPlKGluoQdLKZLvsoTj = value;
}
constexpr bool& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_WkCDWOHoVfCuUyxoHrYxSZTLMGRA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WkCDWOHoVfCuUyxoHrYxSZTLMGRA;
}
constexpr bool const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_WkCDWOHoVfCuUyxoHrYxSZTLMGRA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WkCDWOHoVfCuUyxoHrYxSZTLMGRA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_WkCDWOHoVfCuUyxoHrYxSZTLMGRA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WkCDWOHoVfCuUyxoHrYxSZTLMGRA = value;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_XTFHguggGBxiTuzfYEWvTclVlHXQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XTFHguggGBxiTuzfYEWvTclVlHXQ;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_XTFHguggGBxiTuzfYEWvTclVlHXQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XTFHguggGBxiTuzfYEWvTclVlHXQ;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_XTFHguggGBxiTuzfYEWvTclVlHXQ(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XTFHguggGBxiTuzfYEWvTclVlHXQ = value;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_VzoevKgIUYIahpfVAILZcsUvyObjA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VzoevKgIUYIahpfVAILZcsUvyObjA;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_VzoevKgIUYIahpfVAILZcsUvyObjA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VzoevKgIUYIahpfVAILZcsUvyObjA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_VzoevKgIUYIahpfVAILZcsUvyObjA(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VzoevKgIUYIahpfVAILZcsUvyObjA = value;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_HblXQUCLmihZQawLyCFcEvueDVucc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HblXQUCLmihZQawLyCFcEvueDVucc;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_HblXQUCLmihZQawLyCFcEvueDVucc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HblXQUCLmihZQawLyCFcEvueDVucc;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_HblXQUCLmihZQawLyCFcEvueDVucc(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HblXQUCLmihZQawLyCFcEvueDVucc = value;
}
constexpr ::ArrayW<uint8_t>& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_ypGCAhJdcLNHCEfbItthgOKGKwHHA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ypGCAhJdcLNHCEfbItthgOKGKwHHA;
}
constexpr ::ArrayW<uint8_t> const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_ypGCAhJdcLNHCEfbItthgOKGKwHHA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ypGCAhJdcLNHCEfbItthgOKGKwHHA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_ypGCAhJdcLNHCEfbItthgOKGKwHHA(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ypGCAhJdcLNHCEfbItthgOKGKwHHA = value;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_eTObXacHgFbGElTvNpgMhmLOGmnAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eTObXacHgFbGElTvNpgMhmLOGmnAA;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_eTObXacHgFbGElTvNpgMhmLOGmnAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eTObXacHgFbGElTvNpgMhmLOGmnAA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_eTObXacHgFbGElTvNpgMhmLOGmnAA(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eTObXacHgFbGElTvNpgMhmLOGmnAA = value;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_vNICZpQmDkReImbSyEfkfikZhSZb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vNICZpQmDkReImbSyEfkfikZhSZb;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_vNICZpQmDkReImbSyEfkfikZhSZb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vNICZpQmDkReImbSyEfkfikZhSZb;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_vNICZpQmDkReImbSyEfkfikZhSZb(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vNICZpQmDkReImbSyEfkfikZhSZb = value;
}
constexpr ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_fvkmTtLDUsdtcLJLfBxctYZYxwlH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fvkmTtLDUsdtcLJLfBxctYZYxwlH;
}
constexpr ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_fvkmTtLDUsdtcLJLfBxctYZYxwlH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fvkmTtLDUsdtcLJLfBxctYZYxwlH;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_fvkmTtLDUsdtcLJLfBxctYZYxwlH(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fvkmTtLDUsdtcLJLfBxctYZYxwlH = value;
}
constexpr uint8_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_GWxRcfEFnwRJLGSzPykTMBoDmHHF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GWxRcfEFnwRJLGSzPykTMBoDmHHF;
}
constexpr uint8_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_GWxRcfEFnwRJLGSzPykTMBoDmHHF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GWxRcfEFnwRJLGSzPykTMBoDmHHF;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_GWxRcfEFnwRJLGSzPykTMBoDmHHF(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GWxRcfEFnwRJLGSzPykTMBoDmHHF = value;
}
constexpr bool& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_tnCJaLTVpqJyNookyhnMxTvOMYFl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tnCJaLTVpqJyNookyhnMxTvOMYFl;
}
constexpr bool const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_tnCJaLTVpqJyNookyhnMxTvOMYFl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tnCJaLTVpqJyNookyhnMxTvOMYFl;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_tnCJaLTVpqJyNookyhnMxTvOMYFl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tnCJaLTVpqJyNookyhnMxTvOMYFl = value;
}
constexpr ::ArrayW<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_xlxOdenNXIYqOAzmAQUhUpKDFuM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xlxOdenNXIYqOAzmAQUhUpKDFuM;
}
constexpr ::ArrayW<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*> const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_xlxOdenNXIYqOAzmAQUhUpKDFuM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xlxOdenNXIYqOAzmAQUhUpKDFuM;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_xlxOdenNXIYqOAzmAQUhUpKDFuM(::ArrayW<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_EfyNHhAHeyajgfaPdcAlDjVAovRYA*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xlxOdenNXIYqOAzmAQUhUpKDFuM = value;
}
constexpr ::ArrayW<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_cSHPUuMbRvfwNJRSIUahxzMyVkbP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cSHPUuMbRvfwNJRSIUahxzMyVkbP;
}
constexpr ::ArrayW<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*> const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_cSHPUuMbRvfwNJRSIUahxzMyVkbP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cSHPUuMbRvfwNJRSIUahxzMyVkbP;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_cSHPUuMbRvfwNJRSIUahxzMyVkbP(::ArrayW<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cSHPUuMbRvfwNJRSIUahxzMyVkbP = value;
}
constexpr double_t& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_XPzfcgiUMYpOVmDdqXBtJLmyQXfSA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XPzfcgiUMYpOVmDdqXBtJLmyQXfSA;
}
constexpr double_t const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_XPzfcgiUMYpOVmDdqXBtJLmyQXfSA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XPzfcgiUMYpOVmDdqXBtJLmyQXfSA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_XPzfcgiUMYpOVmDdqXBtJLmyQXfSA(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XPzfcgiUMYpOVmDdqXBtJLmyQXfSA = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>*& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_QFYWhNuNjNdsFmYFSdGQqmLiZglm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QFYWhNuNjNdsFmYFSdGQqmLiZglm;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>* const& Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_get_QFYWhNuNjNdsFmYFSdGQqmLiZglm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QFYWhNuNjNdsFmYFSdGQqmLiZglm;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::__cordl_internal_set_QFYWhNuNjNdsFmYFSdGQqmLiZglm(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QFYWhNuNjNdsFmYFSdGQqmLiZglm = value;
}
inline int32_t Rewired::HID::Drivers::NintendoSwitchGamepadDriver::get_vibrationMotorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::GetVibration(int32_t  motorIndex, ::by_ref<float_t>  amplitudeLow, ::by_ref<float_t>  frequencyLow, ::by_ref<float_t>  amplitudeHigh, ::by_ref<float_t>  frequencyHigh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh, stopOtherMotors);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh, duration);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh, duration, stopOtherMotors);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::StopVibration(int32_t  motorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"StopVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::StopVibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"StopVibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::StopVibration(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  asyncMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"StopVibration", {}, {::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncMode);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::aAlUeGUaSLYOUdOemZlPGWAItfSu(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"aAlUeGUaSLYOUdOemZlPGWAItfSu", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline uint16_t Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline ::StringW Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint16_t Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>* Rewired::HID::Drivers::NintendoSwitchGamepadDriver::pjUyiCYwgxGpkoNEDtskygpoAKGE()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"pjUyiCYwgxGpkoNEDtskygpoAKGE", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_BozScgUyvWJHkHnYaIebJHbeTbUF*>*>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::cNIGbLThlkLNVeSLXpwibpajECNG(::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp  _cordl_fixed_empty_name_whitespace, uint32_t  _cordl_fixed_empty_name_whitespace_param_1, uint32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"cNIGbLThlkLNVeSLXpwibpajECNG", {}, {::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_sSqahXkWVJPrMvXbKUZcBDLHsafp>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::gAPMUhULPzPpfHWzWBlfYxqYaTcD(uint32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"gAPMUhULPzPpfHWzWBlfYxqYaTcD", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Update(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::ParseInputReport(::System::IntPtr  inputReportPtr, int32_t  inputReportLength, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inputReportPtr, inputReportLength, timestamp);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::UpdateButtons(::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputReport, timestamp);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::UpdateElements(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>  elements, ::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements, inputReport, timestamp);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::JSUUCxxwwWdxgYJYucnZFfUApLAu(::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu  _cordl_fixed_empty_name_whitespace, ::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"JSUUCxxwwWdxgYJYucnZFfUApLAu", {}, {::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_zARdsRbEMajZXMESNopmQphplnYu>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::bWjXcTGAXnIopSZeHENThGAudMFT(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, uint8_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"bWjXcTGAXnIopSZeHENThGAudMFT", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::FIscHhHQeyZGSaZcFDOEWQqBoQVp(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"FIscHhHQeyZGSaZcFDOEWQqBoQVp", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::YXEdCrFIBciBabbZeCnrdXThIVAhb(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"YXEdCrFIBciBabbZeCnrdXThIVAhb", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::iinkeMqaegameQjOILpWYLDQUBOR(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"iinkeMqaegameQjOILpWYLDQUBOR", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_OEMHhLBVVwnOTfHGzUdECBCwiexGA>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline uint8_t Rewired::HID::Drivers::NintendoSwitchGamepadDriver::mgYmibCKhWFpAaffHPCCAEcnsNJOA(float_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"mgYmibCKhWFpAaffHPCCAEcnsNJOA", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::lckqcPzapopXuqgDNhrQEeWdkrlR(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"lckqcPzapopXuqgDNhrQEeWdkrlR", {}, {::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::OGEXuVnigtIvMqWcyzAtmpoKQqhh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"OGEXuVnigtIvMqWcyzAtmpoKQqhh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::WkbbjJkzXWjsXaQOwdNYoskLtLDo(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"WkbbjJkzXWjsXaQOwdNYoskLtLDo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::uNyOVqVjJdnTSDdbNTiBxJUigBqJ(uint8_t  _cordl_fixed_empty_name_whitespace, uint8_t  _cordl_fixed_empty_name_whitespace_param_1, uint8_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"uNyOVqVjJdnTSDdbNTiBxJUigBqJ", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::erIZVcfgwVQTrRDoJbLXhIoUPjlIb(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"erIZVcfgwVQTrRDoJbLXhIoUPjlIb", {}, {::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline uint8_t Rewired::HID::Drivers::NintendoSwitchGamepadDriver::uMWSHSpvEdoTrkREyOARUGOaJtuaA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"uMWSHSpvEdoTrkREyOARUGOaJtuaA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::NgfhQYfmTxBAHdnnLTJVhjyNiqqW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"NgfhQYfmTxBAHdnnLTJVhjyNiqqW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::ExxVzWfVptrnIYinXCAGjOxhVSTx(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"ExxVzWfVptrnIYinXCAGjOxhVSTx", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::sJeJHNyygiKJUrdDYPFterahqrKo(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"sJeJHNyygiKJUrdDYPFterahqrKo", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::HID::Drivers::NintendoSwitchGamepadDriver::GetCalibratedStickValue(uint16_t  valueX, uint16_t  valueY, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*  calX, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*  calY, ::by_ref<uint16_t>  calibratedX, ::by_ref<uint16_t>  calibratedY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"GetCalibratedStickValue", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, valueX, valueY, calX, calY, calibratedX, calibratedY);
}
inline ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE* Rewired::HID::Drivers::NintendoSwitchGamepadDriver::GetAxisCalibration(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"GetAxisCalibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_dlMwcHwbhCVyXMaKTHMBtoldaLZE*>(this, ___internal_method, index);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::oODmIndwPrTMUGZSdURCubXcOoZr(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"oODmIndwPrTMUGZSdURCubXcOoZr", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::Utils::Classes::Data::NativeBuffer* Rewired::HID::Drivers::NintendoSwitchGamepadDriver::jlUDgbBKtnnKKfLGxBDiWMQJzWDS(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"jlUDgbBKtnnKKfLGxBDiWMQJzWDS", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::NativeBuffer*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::DLog(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"DLog", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Rewired::HID::Drivers::NintendoSwitchGamepadDriver::DDisposeLog(::System::Object*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(),
                        {"DDisposeLog", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver* Rewired::HID::Drivers::NintendoSwitchGamepadDriver::New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr  Rewired::HID::Drivers::NintendoSwitchGamepadDriver::operator ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* Rewired::HID::Drivers::NintendoSwitchGamepadDriver::i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::NintendoSwitchGamepadDriver::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::NintendoSwitchGamepadDriver::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::HID::Drivers::NintendoSwitchGamepadDriver::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::HID::Drivers::NintendoSwitchGamepadDriver::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::HID::Drivers::NintendoSwitchGamepadDriver::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::HID::Drivers::NintendoSwitchGamepadDriver::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver::NintendoSwitchGamepadDriver()   {
}
