#pragma once
// IWYU pragma private; include "Rewired/TouchInfo.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/zzzz__TouchInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::TouchInfo.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::TouchInfo::*)()>(&::Rewired::TouchInfo::get_isValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.set_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(bool)>(&::Rewired::TouchInfo::set_isValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_isValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.get_touchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::TouchInfo::*)()>(&::Rewired::TouchInfo::get_touchId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_touchId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.set_touchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(int32_t)>(&::Rewired::TouchInfo::set_touchId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_touchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.get_touchPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::TouchInfo::*)()>(&::Rewired::TouchInfo::get_touchPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_touchPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.set_touchPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(::UnityEngine::Vector2)>(&::Rewired::TouchInfo::set_touchPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_touchPos", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.get_touchPosRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::TouchInfo::*)()>(&::Rewired::TouchInfo::get_touchPosRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_touchPosRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.set_touchPosRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(::UnityEngine::Vector2)>(&::Rewired::TouchInfo::set_touchPosRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_touchPosRaw", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.get_deltaPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::TouchInfo::*)()>(&::Rewired::TouchInfo::get_deltaPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_deltaPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.set_deltaPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(::UnityEngine::Vector2)>(&::Rewired::TouchInfo::set_deltaPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_deltaPos", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.get_deltaPosRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::TouchInfo::*)()>(&::Rewired::TouchInfo::get_deltaPosRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_deltaPosRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.set_deltaPosRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(::UnityEngine::Vector2)>(&::Rewired::TouchInfo::set_deltaPosRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_deltaPosRaw", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.get_deltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::TouchInfo::*)()>(&::Rewired::TouchInfo::get_deltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_deltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.set_deltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(float_t)>(&::Rewired::TouchInfo::set_deltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_deltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.get_tapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::TouchInfo::*)()>(&::Rewired::TouchInfo::get_tapCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_tapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.set_tapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(int32_t)>(&::Rewired::TouchInfo::set_tapCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_tapCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::TouchInfo::*)(bool, int32_t, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, int32_t)>(&::Rewired::TouchInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818479b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::TouchInfo.get_Invalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::TouchInfo (*)()>(&::Rewired::TouchInfo::get_Invalid)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181847a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_Invalid", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Rewired::TouchInfo::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Rewired::TouchInfo::set_isValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_isValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::TouchInfo::get_touchId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_touchId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::TouchInfo::set_touchId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_touchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::TouchInfo::get_touchPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_touchPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void Rewired::TouchInfo::set_touchPos(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_touchPos", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::TouchInfo::get_touchPosRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_touchPosRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void Rewired::TouchInfo::set_touchPosRaw(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_touchPosRaw", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::TouchInfo::get_deltaPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_deltaPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void Rewired::TouchInfo::set_deltaPos(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_deltaPos", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::TouchInfo::get_deltaPosRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_deltaPosRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void Rewired::TouchInfo::set_deltaPosRaw(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_deltaPosRaw", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Rewired::TouchInfo::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_deltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Rewired::TouchInfo::set_deltaTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_deltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Rewired::TouchInfo::get_tapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_tapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Rewired::TouchInfo::set_tapCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"set_tapCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Rewired::TouchInfo::_ctor(bool  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_2, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_3, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_4, ::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace_param_5, float_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7);
}
inline ::Rewired::TouchInfo Rewired::TouchInfo::get_Invalid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::TouchInfo>(),
                        {"get_Invalid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::TouchInfo>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "NtAgZVDmksYzcgaEanQSQcTmKUlO", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "XzfIfPQGeDaLVgrWEnEalQufnCgKA", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "XCtyEFoGkzASirJmqainPvNBPvOy", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "jzrmZZclXeOvikPQddQgOUCjvVav", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "WzfBwKrxOamRWJFaxEZtOaFRRdpj", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bJBgFKIFyoDHWGCCKVnrTfHCpRCib", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "mIwHDCEghjcYFUDgeSHwLqWvQBsV", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vPNIQopRMMhyExVZZFOGgNVTUjTM", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::TouchInfo::TouchInfo(bool  NtAgZVDmksYzcgaEanQSQcTmKUlO, int32_t  XzfIfPQGeDaLVgrWEnEalQufnCgKA, ::UnityEngine::Vector2  XCtyEFoGkzASirJmqainPvNBPvOy, ::UnityEngine::Vector2  jzrmZZclXeOvikPQddQgOUCjvVav, ::UnityEngine::Vector2  WzfBwKrxOamRWJFaxEZtOaFRRdpj, ::UnityEngine::Vector2  bJBgFKIFyoDHWGCCKVnrTfHCpRCib, float_t  mIwHDCEghjcYFUDgeSHwLqWvQBsV, int32_t  vPNIQopRMMhyExVZZFOGgNVTUjTM) noexcept  {
this->NtAgZVDmksYzcgaEanQSQcTmKUlO = NtAgZVDmksYzcgaEanQSQcTmKUlO;
this->XzfIfPQGeDaLVgrWEnEalQufnCgKA = XzfIfPQGeDaLVgrWEnEalQufnCgKA;
this->XCtyEFoGkzASirJmqainPvNBPvOy = XCtyEFoGkzASirJmqainPvNBPvOy;
this->jzrmZZclXeOvikPQddQgOUCjvVav = jzrmZZclXeOvikPQddQgOUCjvVav;
this->WzfBwKrxOamRWJFaxEZtOaFRRdpj = WzfBwKrxOamRWJFaxEZtOaFRRdpj;
this->bJBgFKIFyoDHWGCCKVnrTfHCpRCib = bJBgFKIFyoDHWGCCKVnrTfHCpRCib;
this->mIwHDCEghjcYFUDgeSHwLqWvQBsV = mIwHDCEghjcYFUDgeSHwLqWvQBsV;
this->vPNIQopRMMhyExVZZFOGgNVTUjTM = vPNIQopRMMhyExVZZFOGgNVTUjTM;
}
// Ctor Parameters []
constexpr ::Rewired::TouchInfo::TouchInfo()   {
}
