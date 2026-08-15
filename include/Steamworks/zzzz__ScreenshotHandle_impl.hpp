#pragma once
// IWYU pragma private; include "Steamworks/ScreenshotHandle.hpp"
#include "Steamworks/zzzz__ScreenshotHandle_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::ScreenshotHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ScreenshotHandle::*)(uint32_t)>(&::Steamworks::ScreenshotHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::ScreenshotHandle::*)()>(&::Steamworks::ScreenshotHandle::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                    {::i2c::class_of<::Steamworks::ScreenshotHandle>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::ScreenshotHandle::*)(::System::Object*)>(&::Steamworks::ScreenshotHandle::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805aacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                    {::i2c::class_of<::Steamworks::ScreenshotHandle>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::ScreenshotHandle::*)()>(&::Steamworks::ScreenshotHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                    {::i2c::class_of<::Steamworks::ScreenshotHandle>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::ScreenshotHandle, ::Steamworks::ScreenshotHandle)>(&::Steamworks::ScreenshotHandle::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::ScreenshotHandle, ::Steamworks::ScreenshotHandle)>(&::Steamworks::ScreenshotHandle::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.op_Explicit___Steamworks__ScreenshotHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ScreenshotHandle (*)(uint32_t)>(&::Steamworks::ScreenshotHandle::op_Explicit___Steamworks__ScreenshotHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.op_Explicit_uint32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Steamworks::ScreenshotHandle)>(&::Steamworks::ScreenshotHandle::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180543890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::ScreenshotHandle::*)(::Steamworks::ScreenshotHandle)>(&::Steamworks::ScreenshotHandle::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ScreenshotHandle.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::ScreenshotHandle::*)(::Steamworks::ScreenshotHandle)>(&::Steamworks::ScreenshotHandle::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::ScreenshotHandle::setStaticF_Invalid(::Steamworks::ScreenshotHandle  value)  {
::cordl_internals::setStaticField<::Steamworks::ScreenshotHandle, "Invalid", ::Steamworks::ScreenshotHandle>(std::forward<::Steamworks::ScreenshotHandle>(value));
}
inline ::Steamworks::ScreenshotHandle Steamworks::ScreenshotHandle::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::ScreenshotHandle, "Invalid", ::Steamworks::ScreenshotHandle>();
}
inline void Steamworks::ScreenshotHandle::_ctor(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::ScreenshotHandle::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ScreenshotHandle>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::ScreenshotHandle::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ScreenshotHandle>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::ScreenshotHandle::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::ScreenshotHandle>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::ScreenshotHandle::op_Equality(::Steamworks::ScreenshotHandle  x, ::Steamworks::ScreenshotHandle  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::ScreenshotHandle::op_Inequality(::Steamworks::ScreenshotHandle  x, ::Steamworks::ScreenshotHandle  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>(), ::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::ScreenshotHandle Steamworks::ScreenshotHandle::op_Explicit___Steamworks__ScreenshotHandle(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ScreenshotHandle>(nullptr, ___internal_method, value);
}
inline uint32_t Steamworks::ScreenshotHandle::op_Explicit_uint32_t(::Steamworks::ScreenshotHandle  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::ScreenshotHandle::Equals(::Steamworks::ScreenshotHandle  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::ScreenshotHandle::CompareTo(::Steamworks::ScreenshotHandle  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ScreenshotHandle>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::ScreenshotHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::ScreenshotHandle>"
constexpr  Steamworks::ScreenshotHandle::operator ::System::IEquatable_1<::Steamworks::ScreenshotHandle>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::ScreenshotHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::ScreenshotHandle>"
constexpr ::System::IEquatable_1<::Steamworks::ScreenshotHandle>* Steamworks::ScreenshotHandle::i___System__IEquatable_1___Steamworks__ScreenshotHandle_()  {
return static_cast<::System::IEquatable_1<::Steamworks::ScreenshotHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::ScreenshotHandle>"
constexpr  Steamworks::ScreenshotHandle::operator ::System::IComparable_1<::Steamworks::ScreenshotHandle>*()  {
return static_cast<::System::IComparable_1<::Steamworks::ScreenshotHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::ScreenshotHandle>"
constexpr ::System::IComparable_1<::Steamworks::ScreenshotHandle>* Steamworks::ScreenshotHandle::i___System__IComparable_1___Steamworks__ScreenshotHandle_()  {
return static_cast<::System::IComparable_1<::Steamworks::ScreenshotHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ScreenshotHandle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ScreenshotHandle::ScreenshotHandle(uint32_t  m_ScreenshotHandle) noexcept  {
this->m_ScreenshotHandle = m_ScreenshotHandle;
}
// Ctor Parameters []
constexpr ::Steamworks::ScreenshotHandle::ScreenshotHandle()   {
}
