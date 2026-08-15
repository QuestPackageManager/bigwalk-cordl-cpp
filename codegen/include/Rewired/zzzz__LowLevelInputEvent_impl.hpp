#pragma once
// IWYU pragma private; include "Rewired/LowLevelInputEvent.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Rewired/zzzz__LowLevelInputEvent_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::LowLevelInputEvent::*)()>(&::Rewired::LowLevelInputEvent::get_isValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ff710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::LowLevelInputEvent::*)()>(&::Rewired::LowLevelInputEvent::get_buttonCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_buttonCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.get_axisCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::LowLevelInputEvent::*)()>(&::Rewired::LowLevelInputEvent::get_axisCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_axisCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.get_byteIndex_axesStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::LowLevelInputEvent::*)()>(&::Rewired::LowLevelInputEvent::get_byteIndex_axesStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_byteIndex_axesStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.get_byteIndex_buttonsStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::LowLevelInputEvent::*)()>(&::Rewired::LowLevelInputEvent::get_byteIndex_buttonsStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_byteIndex_buttonsStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.get_byteIndex_hatsStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::LowLevelInputEvent::*)()>(&::Rewired::LowLevelInputEvent::get_byteIndex_hatsStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_byteIndex_hatsStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::LowLevelInputEvent::*)(::System::IntPtr, int32_t, int32_t, int32_t)>(&::Rewired::LowLevelInputEvent::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181845670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.SetButtonsBitMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::LowLevelInputEvent::*)(int32_t, int32_t)>(&::Rewired::LowLevelInputEvent::SetButtonsBitMask)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181845570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"SetButtonsBitMask", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.SetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::LowLevelInputEvent::*)(int32_t, float_t)>(&::Rewired::LowLevelInputEvent::SetAxisValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181845500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"SetAxisValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.SetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::LowLevelInputEvent::*)(uint32_t)>(&::Rewired::LowLevelInputEvent::SetId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818455e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"SetId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.SetTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::LowLevelInputEvent::*)(double_t)>(&::Rewired::LowLevelInputEvent::SetTimestamp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181845610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"SetTimestamp", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.GetButtonValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::LowLevelInputEvent::*)(int32_t)>(&::Rewired::LowLevelInputEvent::GetButtonValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181845350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetButtonValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.GetButtonsBitMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::LowLevelInputEvent::*)(int32_t)>(&::Rewired::LowLevelInputEvent::GetButtonsBitMask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818453e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetButtonsBitMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.GetAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::LowLevelInputEvent::*)(int32_t)>(&::Rewired::LowLevelInputEvent::GetAxisValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818452f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetAxisValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.GetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Rewired::LowLevelInputEvent::*)()>(&::Rewired::LowLevelInputEvent::GetId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181845440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.GetTimestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::LowLevelInputEvent::*)()>(&::Rewired::LowLevelInputEvent::GetTimestamp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818454a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetTimestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::LowLevelInputEvent.GetReportSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::Rewired::LowLevelInputEvent::GetReportSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181845470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetReportSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Rewired::LowLevelInputEvent::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Rewired::LowLevelInputEvent::get_buttonCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_buttonCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Rewired::LowLevelInputEvent::get_axisCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_axisCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Rewired::LowLevelInputEvent::get_byteIndex_axesStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_byteIndex_axesStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Rewired::LowLevelInputEvent::get_byteIndex_buttonsStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_byteIndex_buttonsStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Rewired::LowLevelInputEvent::get_byteIndex_hatsStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"get_byteIndex_hatsStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::LowLevelInputEvent::_ctor(::System::IntPtr  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Rewired::LowLevelInputEvent::SetButtonsBitMask(int32_t  bitMask, int32_t  startButtonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"SetButtonsBitMask", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitMask, startButtonIndex);
}
inline void Rewired::LowLevelInputEvent::SetAxisValue(int32_t  index, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"SetAxisValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Rewired::LowLevelInputEvent::SetId(uint32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"SetId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id);
}
inline void Rewired::LowLevelInputEvent::SetTimestamp(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"SetTimestamp", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Rewired::LowLevelInputEvent::GetButtonValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetButtonValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline int32_t Rewired::LowLevelInputEvent::GetButtonsBitMask(int32_t  startButtonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetButtonsBitMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startButtonIndex);
}
inline float_t Rewired::LowLevelInputEvent::GetAxisValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetAxisValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, index);
}
inline uint32_t Rewired::LowLevelInputEvent::GetId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline double_t Rewired::LowLevelInputEvent::GetTimestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetTimestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline int32_t Rewired::LowLevelInputEvent::GetReportSize(int32_t  buttonCount, int32_t  axisCount, int32_t  hatCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::LowLevelInputEvent>(),
                        {"GetReportSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buttonCount, axisCount, hatCount);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "HcrfhGVCoXHqXGcUhEyupeGVgIalA", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FALIJnuKjqgFRTIUUlVIFdjBGToG", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hQExBjfRUvbVyJDBjrZazxEBsMHe", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BYmaLSnavbXmYeXJepHyRsiNqkbf", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ZGXAHEoMqJdNjtDRwZqzJtoNABWS", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mRJYHTJaqiGJpcJETYyLnoqojRmu", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::LowLevelInputEvent::LowLevelInputEvent(::System::IntPtr  _buffer, int32_t  HcrfhGVCoXHqXGcUhEyupeGVgIalA, int32_t  FALIJnuKjqgFRTIUUlVIFdjBGToG, int32_t  hQExBjfRUvbVyJDBjrZazxEBsMHe, int32_t  BYmaLSnavbXmYeXJepHyRsiNqkbf, int32_t  ZGXAHEoMqJdNjtDRwZqzJtoNABWS, int32_t  mRJYHTJaqiGJpcJETYyLnoqojRmu) noexcept  {
this->_buffer = _buffer;
this->HcrfhGVCoXHqXGcUhEyupeGVgIalA = HcrfhGVCoXHqXGcUhEyupeGVgIalA;
this->FALIJnuKjqgFRTIUUlVIFdjBGToG = FALIJnuKjqgFRTIUUlVIFdjBGToG;
this->hQExBjfRUvbVyJDBjrZazxEBsMHe = hQExBjfRUvbVyJDBjrZazxEBsMHe;
this->BYmaLSnavbXmYeXJepHyRsiNqkbf = BYmaLSnavbXmYeXJepHyRsiNqkbf;
this->ZGXAHEoMqJdNjtDRwZqzJtoNABWS = ZGXAHEoMqJdNjtDRwZqzJtoNABWS;
this->mRJYHTJaqiGJpcJETYyLnoqojRmu = mRJYHTJaqiGJpcJETYyLnoqojRmu;
}
// Ctor Parameters []
constexpr ::Rewired::LowLevelInputEvent::LowLevelInputEvent()   {
}
