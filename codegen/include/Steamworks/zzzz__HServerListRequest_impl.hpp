#pragma once
// IWYU pragma private; include "Steamworks/HServerListRequest.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Steamworks/zzzz__HServerListRequest_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::HServerListRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::HServerListRequest::*)(::System::IntPtr)>(&::Steamworks::HServerListRequest::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HServerListRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::HServerListRequest::*)()>(&::Steamworks::HServerListRequest::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a9fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HServerListRequest>(),
                    {::i2c::class_of<::Steamworks::HServerListRequest>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HServerListRequest.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HServerListRequest::*)(::System::Object*)>(&::Steamworks::HServerListRequest::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805a9f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HServerListRequest>(),
                    {::i2c::class_of<::Steamworks::HServerListRequest>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HServerListRequest.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::HServerListRequest::*)()>(&::Steamworks::HServerListRequest::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::HServerListRequest>(),
                    {::i2c::class_of<::Steamworks::HServerListRequest>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HServerListRequest.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HServerListRequest, ::Steamworks::HServerListRequest)>(&::Steamworks::HServerListRequest::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HServerListRequest.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HServerListRequest, ::Steamworks::HServerListRequest)>(&::Steamworks::HServerListRequest::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HServerListRequest.op_Explicit___Steamworks__HServerListRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerListRequest (*)(::System::IntPtr)>(&::Steamworks::HServerListRequest::op_Explicit___Steamworks__HServerListRequest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HServerListRequest.op_Explicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::HServerListRequest)>(&::Steamworks::HServerListRequest::op_Explicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::HServerListRequest.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::HServerListRequest::*)(::Steamworks::HServerListRequest)>(&::Steamworks::HServerListRequest::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::HServerListRequest::setStaticF_Invalid(::Steamworks::HServerListRequest  value)  {
::cordl_internals::setStaticField<::Steamworks::HServerListRequest, "Invalid", ::Steamworks::HServerListRequest>(std::forward<::Steamworks::HServerListRequest>(value));
}
inline ::Steamworks::HServerListRequest Steamworks::HServerListRequest::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Steamworks::HServerListRequest, "Invalid", ::Steamworks::HServerListRequest>();
}
inline void Steamworks::HServerListRequest::_ctor(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::HServerListRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HServerListRequest>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::HServerListRequest::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HServerListRequest>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::HServerListRequest::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::HServerListRequest>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::HServerListRequest::op_Equality(::Steamworks::HServerListRequest  x, ::Steamworks::HServerListRequest  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::HServerListRequest::op_Inequality(::Steamworks::HServerListRequest  x, ::Steamworks::HServerListRequest  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::HServerListRequest Steamworks::HServerListRequest::op_Explicit___Steamworks__HServerListRequest(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerListRequest>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr Steamworks::HServerListRequest::op_Explicit___System__IntPtr(::Steamworks::HServerListRequest  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, that);
}
inline bool Steamworks::HServerListRequest::Equals(::Steamworks::HServerListRequest  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::HServerListRequest>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HServerListRequest>"
constexpr  Steamworks::HServerListRequest::operator ::System::IEquatable_1<::Steamworks::HServerListRequest>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::HServerListRequest>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::HServerListRequest>"
constexpr ::System::IEquatable_1<::Steamworks::HServerListRequest>* Steamworks::HServerListRequest::i___System__IEquatable_1___Steamworks__HServerListRequest_()  {
return static_cast<::System::IEquatable_1<::Steamworks::HServerListRequest>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_HServerListRequest", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HServerListRequest::HServerListRequest(::System::IntPtr  m_HServerListRequest) noexcept  {
this->m_HServerListRequest = m_HServerListRequest;
}
// Ctor Parameters []
constexpr ::Steamworks::HServerListRequest::HServerListRequest()   {
}
