#pragma once
// IWYU pragma private; include "Rewired/ThreadSafeUnityInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Rewired/zzzz__ThreadSafeUnityInput_def.hpp"
#include "Rewired/zzzz__ThreadSafeUnityInput_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)(bool)>(&::Rewired::ThreadSafeUnityInput_Keyboard::set_enabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181844f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.get_monitoring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::get_monitoring)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181844f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"get_monitoring", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.get_keyCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::get_keyCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180720980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"get_keyCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181844dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818448f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.PostInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::PostInitialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818449a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"PostInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::Update)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1818449b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.Monitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)(bool)>(&::Rewired::ThreadSafeUnityInput_Keyboard::Monitor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181844940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"Monitor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ThreadSafeUnityInput_Keyboard::*)(::UnityEngine::KeyCode)>(&::Rewired::ThreadSafeUnityInput_Keyboard::GetKey)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181844880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"GetKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.GetKeyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)(::ArrayW<bool>)>(&::Rewired::ThreadSafeUnityInput_Keyboard::GetKeyValues)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181844840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"GetKeyValues", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::Clear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181844790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.lGsdzbSMBfbCGfLNvKMNkOltZOSE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::lGsdzbSMBfbCGfLNvKMNkOltZOSE)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181844f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"lGsdzbSMBfbCGfLNvKMNkOltZOSE", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.ILzEOjaOgPioufXCvSlvTnUjRHQh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::ILzEOjaOgPioufXCvSlvTnUjRHQh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818448e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"ILzEOjaOgPioufXCvSlvTnUjRHQh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.UmuDeQErnhSgVmDaNQEcVXyXyzMtA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::UmuDeQErnhSgVmDaNQEcVXyXyzMtA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"UmuDeQErnhSgVmDaNQEcVXyXyzMtA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.sdAaKOGRtojMrIjyPhVTNpfJOnmiA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::sdAaKOGRtojMrIjyPhVTNpfJOnmiA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181844f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"sdAaKOGRtojMrIjyPhVTNpfJOnmiA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.zPyffqUEmLVRlWCaKAUNBoMrktyu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::zPyffqUEmLVRlWCaKAUNBoMrktyu)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181844ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"zPyffqUEmLVRlWCaKAUNBoMrktyu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Keyboard.cEsfEzjLLhHvtObwhZqwcUGxAmzY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Keyboard::*)()>(&::Rewired::ThreadSafeUnityInput_Keyboard::cEsfEzjLLhHvtObwhZqwcUGxAmzY)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181844ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"cEsfEzjLLhHvtObwhZqwcUGxAmzY", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_UmkDBdkKYvlSNPKDTMIWEPTtBesBA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UmkDBdkKYvlSNPKDTMIWEPTtBesBA;
}
constexpr int32_t const& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_UmkDBdkKYvlSNPKDTMIWEPTtBesBA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UmkDBdkKYvlSNPKDTMIWEPTtBesBA;
}
constexpr void Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_set_UmkDBdkKYvlSNPKDTMIWEPTtBesBA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UmkDBdkKYvlSNPKDTMIWEPTtBesBA = value;
}
constexpr ::ArrayW<int32_t>& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_vIeYSgvgcnMaCRRZDpxQNhPAwipR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vIeYSgvgcnMaCRRZDpxQNhPAwipR;
}
constexpr ::ArrayW<int32_t> const& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_vIeYSgvgcnMaCRRZDpxQNhPAwipR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vIeYSgvgcnMaCRRZDpxQNhPAwipR;
}
constexpr void Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_set_vIeYSgvgcnMaCRRZDpxQNhPAwipR(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vIeYSgvgcnMaCRRZDpxQNhPAwipR = value;
}
constexpr ::ArrayW<bool>& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_GUaLtgLKouYVlPFlJnHINfJLjAZBA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GUaLtgLKouYVlPFlJnHINfJLjAZBA;
}
constexpr ::ArrayW<bool> const& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_GUaLtgLKouYVlPFlJnHINfJLjAZBA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GUaLtgLKouYVlPFlJnHINfJLjAZBA;
}
constexpr void Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_set_GUaLtgLKouYVlPFlJnHINfJLjAZBA(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GUaLtgLKouYVlPFlJnHINfJLjAZBA = value;
}
constexpr bool& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_EfoSeScEcKGcVTobynjsHhrNIkQl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EfoSeScEcKGcVTobynjsHhrNIkQl;
}
constexpr bool const& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_EfoSeScEcKGcVTobynjsHhrNIkQl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EfoSeScEcKGcVTobynjsHhrNIkQl;
}
constexpr void Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_set_EfoSeScEcKGcVTobynjsHhrNIkQl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EfoSeScEcKGcVTobynjsHhrNIkQl = value;
}
constexpr int32_t& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_zRZDVDLvxxBjfFPdQlsKEhraIBUNA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zRZDVDLvxxBjfFPdQlsKEhraIBUNA;
}
constexpr int32_t const& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_zRZDVDLvxxBjfFPdQlsKEhraIBUNA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zRZDVDLvxxBjfFPdQlsKEhraIBUNA;
}
constexpr void Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_set_zRZDVDLvxxBjfFPdQlsKEhraIBUNA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zRZDVDLvxxBjfFPdQlsKEhraIBUNA = value;
}
constexpr bool& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_JRobmydNjkoIEEFhziUmFMxHkvZY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JRobmydNjkoIEEFhziUmFMxHkvZY;
}
constexpr bool const& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_JRobmydNjkoIEEFhziUmFMxHkvZY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JRobmydNjkoIEEFhziUmFMxHkvZY;
}
constexpr void Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_set_JRobmydNjkoIEEFhziUmFMxHkvZY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JRobmydNjkoIEEFhziUmFMxHkvZY = value;
}
constexpr bool& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_bfPwtYzlfBFJxPeOSXpORJblBHQl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bfPwtYzlfBFJxPeOSXpORJblBHQl;
}
constexpr bool const& Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_get_bfPwtYzlfBFJxPeOSXpORJblBHQl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bfPwtYzlfBFJxPeOSXpORJblBHQl;
}
constexpr void Rewired::ThreadSafeUnityInput_Keyboard::__cordl_internal_set_bfPwtYzlfBFJxPeOSXpORJblBHQl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bfPwtYzlfBFJxPeOSXpORJblBHQl = value;
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::setStaticF_keyValueIndex_Escape(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "keyValueIndex_Escape", ::Rewired::ThreadSafeUnityInput_Keyboard*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ThreadSafeUnityInput_Keyboard::getStaticF_keyValueIndex_Escape()  {
return ::cordl_internals::getStaticField<int32_t, "keyValueIndex_Escape", ::Rewired::ThreadSafeUnityInput_Keyboard*>();
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::setStaticF_keyValueIndex_Menu(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "keyValueIndex_Menu", ::Rewired::ThreadSafeUnityInput_Keyboard*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ThreadSafeUnityInput_Keyboard::getStaticF_keyValueIndex_Menu()  {
return ::cordl_internals::getStaticField<int32_t, "keyValueIndex_Menu", ::Rewired::ThreadSafeUnityInput_Keyboard*>();
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::setStaticF_keyValueIndex_F2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "keyValueIndex_F2", ::Rewired::ThreadSafeUnityInput_Keyboard*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ThreadSafeUnityInput_Keyboard::getStaticF_keyValueIndex_F2()  {
return ::cordl_internals::getStaticField<int32_t, "keyValueIndex_F2", ::Rewired::ThreadSafeUnityInput_Keyboard*>();
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::setStaticF_keyValueIndex_UpArrow(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "keyValueIndex_UpArrow", ::Rewired::ThreadSafeUnityInput_Keyboard*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ThreadSafeUnityInput_Keyboard::getStaticF_keyValueIndex_UpArrow()  {
return ::cordl_internals::getStaticField<int32_t, "keyValueIndex_UpArrow", ::Rewired::ThreadSafeUnityInput_Keyboard*>();
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::setStaticF_keyValueIndex_RightArrow(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "keyValueIndex_RightArrow", ::Rewired::ThreadSafeUnityInput_Keyboard*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ThreadSafeUnityInput_Keyboard::getStaticF_keyValueIndex_RightArrow()  {
return ::cordl_internals::getStaticField<int32_t, "keyValueIndex_RightArrow", ::Rewired::ThreadSafeUnityInput_Keyboard*>();
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::setStaticF_keyValueIndex_DownArrow(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "keyValueIndex_DownArrow", ::Rewired::ThreadSafeUnityInput_Keyboard*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ThreadSafeUnityInput_Keyboard::getStaticF_keyValueIndex_DownArrow()  {
return ::cordl_internals::getStaticField<int32_t, "keyValueIndex_DownArrow", ::Rewired::ThreadSafeUnityInput_Keyboard*>();
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::setStaticF_keyValueIndex_LeftArrow(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "keyValueIndex_LeftArrow", ::Rewired::ThreadSafeUnityInput_Keyboard*>(std::forward<int32_t>(value));
}
inline int32_t Rewired::ThreadSafeUnityInput_Keyboard::getStaticF_keyValueIndex_LeftArrow()  {
return ::cordl_internals::getStaticField<int32_t, "keyValueIndex_LeftArrow", ::Rewired::ThreadSafeUnityInput_Keyboard*>();
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::setStaticF_nFjzBinELIERSALlZTbXNESkITwL(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "nFjzBinELIERSALlZTbXNESkITwL", ::Rewired::ThreadSafeUnityInput_Keyboard*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Rewired::ThreadSafeUnityInput_Keyboard::getStaticF_nFjzBinELIERSALlZTbXNESkITwL()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "nFjzBinELIERSALlZTbXNESkITwL", ::Rewired::ThreadSafeUnityInput_Keyboard*>();
}
inline bool Rewired::ThreadSafeUnityInput_Keyboard::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::ThreadSafeUnityInput_Keyboard::get_monitoring()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"get_monitoring", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::ThreadSafeUnityInput_Keyboard::get_keyCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"get_keyCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::PostInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"PostInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::Monitor(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"Monitor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool Rewired::ThreadSafeUnityInput_Keyboard::GetKey(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"GetKey", {}, {::i2c::type_of<::UnityEngine::KeyCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyCode);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::GetKeyValues(::ArrayW<bool>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"GetKeyValues", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::lGsdzbSMBfbCGfLNvKMNkOltZOSE()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"lGsdzbSMBfbCGfLNvKMNkOltZOSE", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::ILzEOjaOgPioufXCvSlvTnUjRHQh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"ILzEOjaOgPioufXCvSlvTnUjRHQh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::UmuDeQErnhSgVmDaNQEcVXyXyzMtA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"UmuDeQErnhSgVmDaNQEcVXyXyzMtA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::sdAaKOGRtojMrIjyPhVTNpfJOnmiA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"sdAaKOGRtojMrIjyPhVTNpfJOnmiA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::zPyffqUEmLVRlWCaKAUNBoMrktyu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"zPyffqUEmLVRlWCaKAUNBoMrktyu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Keyboard::cEsfEzjLLhHvtObwhZqwcUGxAmzY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Keyboard*>(),
                        {"cEsfEzjLLhHvtObwhZqwcUGxAmzY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ThreadSafeUnityInput_Keyboard* Rewired::ThreadSafeUnityInput_Keyboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ThreadSafeUnityInput_Keyboard*>());
}
// Ctor Parameters []
constexpr ::Rewired::ThreadSafeUnityInput_Keyboard::ThreadSafeUnityInput_Keyboard()   {
}
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.get_monitoring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::get_monitoring)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181845c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"get_monitoring", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.get_mousePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::get_mousePosition)> {
  constexpr static std::size_t size = 0x30ca0;
  constexpr static std::size_t addrs = 0x1811318f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"get_mousePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.get_mousePresent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::get_mousePresent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"get_mousePresent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181845be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.PostInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::PostInitialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181845900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"PostInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::Update)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181845950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.Monitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)(bool)>(&::Rewired::ThreadSafeUnityInput_Mouse::Monitor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181845870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"Monitor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ThreadSafeUnityInput_Mouse::*)(int32_t)>(&::Rewired::ThreadSafeUnityInput_Mouse::GetButton)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181845820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.GetAxisRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ThreadSafeUnityInput_Mouse::*)(int32_t)>(&::Rewired::ThreadSafeUnityInput_Mouse::GetAxisRaw)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181845790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.GetButtonValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)(::ArrayW<bool>)>(&::Rewired::ThreadSafeUnityInput_Mouse::GetButtonValues)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818457e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"GetButtonValues", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.GetAxisRawValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)(::ArrayW<float_t>)>(&::Rewired::ThreadSafeUnityInput_Mouse::GetAxisRawValues)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181845750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"GetAxisRawValues", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.VBCaTotYTvfqOPFNvaeOPCtluZJK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::VBCaTotYTvfqOPFNvaeOPCtluZJK)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181845910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"VBCaTotYTvfqOPFNvaeOPCtluZJK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.xBkklKdQbbiDwGUJfPLDHlzlKlMjb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::xBkklKdQbbiDwGUJfPLDHlzlKlMjb)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181845c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"xBkklKdQbbiDwGUJfPLDHlzlKlMjb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.vwGJLjbnJaEwiDHCIzkUSntGhBXQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::vwGJLjbnJaEwiDHCIzkUSntGhBXQ)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"vwGJLjbnJaEwiDHCIzkUSntGhBXQ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.TkkQzxiGykAkTxuCZaDZUmiOElZP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::TkkQzxiGykAkTxuCZaDZUmiOElZP)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181845910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"TkkQzxiGykAkTxuCZaDZUmiOElZP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.ODWVPtZxfEzggwbVGemzqxalMUQW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::ODWVPtZxfEzggwbVGemzqxalMUQW)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818458e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"ODWVPtZxfEzggwbVGemzqxalMUQW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput_Mouse.DcYesZtKVzeYhyURaqRsmJefyccn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ThreadSafeUnityInput_Mouse::*)()>(&::Rewired::ThreadSafeUnityInput_Mouse::DcYesZtKVzeYhyURaqRsmJefyccn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181845730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"DcYesZtKVzeYhyURaqRsmJefyccn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<bool>& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_utZGqzeOkPShxrVuCTylBRmEzZNcA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___utZGqzeOkPShxrVuCTylBRmEzZNcA;
}
constexpr ::ArrayW<bool> const& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_utZGqzeOkPShxrVuCTylBRmEzZNcA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___utZGqzeOkPShxrVuCTylBRmEzZNcA;
}
constexpr void Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_set_utZGqzeOkPShxrVuCTylBRmEzZNcA(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___utZGqzeOkPShxrVuCTylBRmEzZNcA = value;
}
constexpr ::ArrayW<float_t>& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_BSVHttslunbDrJUmxJqadyPDxvGIA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BSVHttslunbDrJUmxJqadyPDxvGIA;
}
constexpr ::ArrayW<float_t> const& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_BSVHttslunbDrJUmxJqadyPDxvGIA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BSVHttslunbDrJUmxJqadyPDxvGIA;
}
constexpr void Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_set_BSVHttslunbDrJUmxJqadyPDxvGIA(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BSVHttslunbDrJUmxJqadyPDxvGIA = value;
}
constexpr int32_t& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_LayGRoCcxIZpoZjkPipwgAOHcMGY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayGRoCcxIZpoZjkPipwgAOHcMGY;
}
constexpr int32_t const& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_LayGRoCcxIZpoZjkPipwgAOHcMGY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayGRoCcxIZpoZjkPipwgAOHcMGY;
}
constexpr void Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_set_LayGRoCcxIZpoZjkPipwgAOHcMGY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LayGRoCcxIZpoZjkPipwgAOHcMGY = value;
}
constexpr ::UnityEngine::Vector3& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_YviRighcNyenPPwJvdBbgPstnUqbA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YviRighcNyenPPwJvdBbgPstnUqbA;
}
constexpr ::UnityEngine::Vector3 const& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_YviRighcNyenPPwJvdBbgPstnUqbA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YviRighcNyenPPwJvdBbgPstnUqbA;
}
constexpr void Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_set_YviRighcNyenPPwJvdBbgPstnUqbA(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YviRighcNyenPPwJvdBbgPstnUqbA = value;
}
constexpr bool& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_JRyKFWXmdMHrHEmfQNkQyteAzAVC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JRyKFWXmdMHrHEmfQNkQyteAzAVC;
}
constexpr bool const& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_JRyKFWXmdMHrHEmfQNkQyteAzAVC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JRyKFWXmdMHrHEmfQNkQyteAzAVC;
}
constexpr void Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_set_JRyKFWXmdMHrHEmfQNkQyteAzAVC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JRyKFWXmdMHrHEmfQNkQyteAzAVC = value;
}
constexpr bool& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_ClsUvGSqeyLpkGvUOrZRCyXXEgOO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClsUvGSqeyLpkGvUOrZRCyXXEgOO;
}
constexpr bool const& Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_get_ClsUvGSqeyLpkGvUOrZRCyXXEgOO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClsUvGSqeyLpkGvUOrZRCyXXEgOO;
}
constexpr void Rewired::ThreadSafeUnityInput_Mouse::__cordl_internal_set_ClsUvGSqeyLpkGvUOrZRCyXXEgOO(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClsUvGSqeyLpkGvUOrZRCyXXEgOO = value;
}
inline bool Rewired::ThreadSafeUnityInput_Mouse::get_monitoring()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"get_monitoring", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ThreadSafeUnityInput_Mouse::get_mousePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"get_mousePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Rewired::ThreadSafeUnityInput_Mouse::get_mousePresent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"get_mousePresent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::PostInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"PostInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::Monitor(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"Monitor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool Rewired::ThreadSafeUnityInput_Mouse::GetButton(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline float_t Rewired::ThreadSafeUnityInput_Mouse::GetAxisRaw(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"GetAxisRaw", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::GetButtonValues(::ArrayW<bool>  buttons)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"GetButtonValues", {}, {::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttons);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::GetAxisRawValues(::ArrayW<float_t>  axes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"GetAxisRawValues", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axes);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::VBCaTotYTvfqOPFNvaeOPCtluZJK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"VBCaTotYTvfqOPFNvaeOPCtluZJK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::xBkklKdQbbiDwGUJfPLDHlzlKlMjb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"xBkklKdQbbiDwGUJfPLDHlzlKlMjb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::vwGJLjbnJaEwiDHCIzkUSntGhBXQ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"vwGJLjbnJaEwiDHCIzkUSntGhBXQ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::TkkQzxiGykAkTxuCZaDZUmiOElZP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"TkkQzxiGykAkTxuCZaDZUmiOElZP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::ODWVPtZxfEzggwbVGemzqxalMUQW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"ODWVPtZxfEzggwbVGemzqxalMUQW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput_Mouse::DcYesZtKVzeYhyURaqRsmJefyccn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput_Mouse*>(),
                        {"DcYesZtKVzeYhyURaqRsmJefyccn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ThreadSafeUnityInput_Mouse* Rewired::ThreadSafeUnityInput_Mouse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ThreadSafeUnityInput_Mouse*>());
}
// Ctor Parameters []
constexpr ::Rewired::ThreadSafeUnityInput_Mouse::ThreadSafeUnityInput_Mouse()   {
}
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput.get_mouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ThreadSafeUnityInput_Mouse* (*)()>(&::Rewired::ThreadSafeUnityInput::get_mouse)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818478e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"get_mouse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput.get_keyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ThreadSafeUnityInput_Keyboard* (*)()>(&::Rewired::ThreadSafeUnityInput::get_keyboard)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181847770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"get_keyboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::ThreadSafeUnityInput::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput.PostInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::ThreadSafeUnityInput::PostInitialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818475d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"PostInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput.PostInitialize2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::ThreadSafeUnityInput::PostInitialize2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"PostInitialize2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput.Deinitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::ThreadSafeUnityInput::Deinitialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181847550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"Deinitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ThreadSafeUnityInput.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Rewired::ThreadSafeUnityInput::Update)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181847620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ThreadSafeUnityInput::setStaticF_zkrzynlhkQxBumXLNLfVfoRfiZJd(::Rewired::ThreadSafeUnityInput_Mouse*  value)  {
::cordl_internals::setStaticField<::Rewired::ThreadSafeUnityInput_Mouse*, "zkrzynlhkQxBumXLNLfVfoRfiZJd", ::Rewired::ThreadSafeUnityInput*>(std::forward<::Rewired::ThreadSafeUnityInput_Mouse*>(value));
}
inline ::Rewired::ThreadSafeUnityInput_Mouse* Rewired::ThreadSafeUnityInput::getStaticF_zkrzynlhkQxBumXLNLfVfoRfiZJd()  {
return ::cordl_internals::getStaticField<::Rewired::ThreadSafeUnityInput_Mouse*, "zkrzynlhkQxBumXLNLfVfoRfiZJd", ::Rewired::ThreadSafeUnityInput*>();
}
inline void Rewired::ThreadSafeUnityInput::setStaticF_RyZvGtrXpRqTShoKUhaHbbZapkxA(::Rewired::ThreadSafeUnityInput_Keyboard*  value)  {
::cordl_internals::setStaticField<::Rewired::ThreadSafeUnityInput_Keyboard*, "RyZvGtrXpRqTShoKUhaHbbZapkxA", ::Rewired::ThreadSafeUnityInput*>(std::forward<::Rewired::ThreadSafeUnityInput_Keyboard*>(value));
}
inline ::Rewired::ThreadSafeUnityInput_Keyboard* Rewired::ThreadSafeUnityInput::getStaticF_RyZvGtrXpRqTShoKUhaHbbZapkxA()  {
return ::cordl_internals::getStaticField<::Rewired::ThreadSafeUnityInput_Keyboard*, "RyZvGtrXpRqTShoKUhaHbbZapkxA", ::Rewired::ThreadSafeUnityInput*>();
}
inline ::Rewired::ThreadSafeUnityInput_Mouse* Rewired::ThreadSafeUnityInput::get_mouse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"get_mouse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ThreadSafeUnityInput_Mouse*>(nullptr, ___internal_method);
}
inline ::Rewired::ThreadSafeUnityInput_Keyboard* Rewired::ThreadSafeUnityInput::get_keyboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"get_keyboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ThreadSafeUnityInput_Keyboard*>(nullptr, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput::PostInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"PostInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput::PostInitialize2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"PostInitialize2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput::Deinitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"Deinitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Rewired::ThreadSafeUnityInput::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ThreadSafeUnityInput*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Rewired::ThreadSafeUnityInput::ThreadSafeUnityInput()   {
}
