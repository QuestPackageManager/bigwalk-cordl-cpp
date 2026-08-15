#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AttributeDataValue.hpp"
#include "Epic/OnlineServices/zzzz__AttributeType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeDataValue_def.hpp"
#include "Epic/OnlineServices/zzzz__AttributeType_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.get_AsInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::Epic::OnlineServices::Lobby::AttributeDataValue::*)()>(&::Epic::OnlineServices::Lobby::AttributeDataValue::get_AsInt64)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804be750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_AsInt64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.set_AsInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataValue::*)(::System::Nullable_1<int64_t>)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::set_AsInt64)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804be940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"set_AsInt64", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.get_AsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (::Epic::OnlineServices::Lobby::AttributeDataValue::*)()>(&::Epic::OnlineServices::Lobby::AttributeDataValue::get_AsDouble)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804be700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_AsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.set_AsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataValue::*)(::System::Nullable_1<double_t>)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::set_AsDouble)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804be900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"set_AsDouble", {}, {::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.get_AsBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Epic::OnlineServices::Lobby::AttributeDataValue::*)()>(&::Epic::OnlineServices::Lobby::AttributeDataValue::get_AsBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804be6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_AsBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.set_AsBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataValue::*)(::System::Nullable_1<bool>)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::set_AsBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804be8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"set_AsBool", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.get_AsUtf8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Lobby::AttributeDataValue::*)()>(&::Epic::OnlineServices::Lobby::AttributeDataValue::get_AsUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804be7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_AsUtf8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.set_AsUtf8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataValue::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::set_AsUtf8)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804be980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"set_AsUtf8", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.get_ValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::AttributeType (::Epic::OnlineServices::Lobby::AttributeDataValue::*)()>(&::Epic::OnlineServices::Lobby::AttributeDataValue::get_ValueType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_ValueType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::AttributeDataValue (*)(::System::Nullable_1<int64_t>)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804be820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::AttributeDataValue (*)(::System::Nullable_1<double_t>)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804be7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::AttributeDataValue (*)(::System::Nullable_1<bool>)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804be800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::AttributeDataValue (*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804be8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValue.op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::AttributeDataValue (*)(::StringW)>(&::Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804be850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<int64_t> Epic::OnlineServices::Lobby::AttributeDataValue::get_AsInt64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_AsInt64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::AttributeDataValue::set_AsInt64(::System::Nullable_1<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"set_AsInt64", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<double_t> Epic::OnlineServices::Lobby::AttributeDataValue::get_AsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_AsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::AttributeDataValue::set_AsDouble(::System::Nullable_1<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"set_AsDouble", {}, {::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Epic::OnlineServices::Lobby::AttributeDataValue::get_AsBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_AsBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::AttributeDataValue::set_AsBool(::System::Nullable_1<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"set_AsBool", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Lobby::AttributeDataValue::get_AsUtf8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_AsUtf8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::AttributeDataValue::set_AsUtf8(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"set_AsUtf8", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::AttributeType Epic::OnlineServices::Lobby::AttributeDataValue::get_ValueType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"get_ValueType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::AttributeType>(*this, ___internal_method);
}
inline ::Epic::OnlineServices::Lobby::AttributeDataValue Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue(::System::Nullable_1<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::AttributeDataValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::AttributeDataValue Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue(::System::Nullable_1<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::AttributeDataValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::AttributeDataValue Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue(::System::Nullable_1<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Nullable_1<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::AttributeDataValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::AttributeDataValue Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::AttributeDataValue>(nullptr, ___internal_method, value);
}
inline ::Epic::OnlineServices::Lobby::AttributeDataValue Epic::OnlineServices::Lobby::AttributeDataValue::op_Implicit___Epic__OnlineServices__Lobby__AttributeDataValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValue>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::AttributeDataValue>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_AsInt64", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AsDouble", ty: "::System::Nullable_1<double_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AsBool", ty: "::System::Nullable_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AsUtf8", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ValueType", ty: "::Epic::OnlineServices::AttributeType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::AttributeDataValue::AttributeDataValue(::System::Nullable_1<int64_t>  m_AsInt64, ::System::Nullable_1<double_t>  m_AsDouble, ::System::Nullable_1<bool>  m_AsBool, ::Epic::OnlineServices::Utf8String*  m_AsUtf8, ::Epic::OnlineServices::AttributeType  m_ValueType) noexcept  {
this->m_AsInt64 = m_AsInt64;
this->m_AsDouble = m_AsDouble;
this->m_AsBool = m_AsBool;
this->m_AsUtf8 = m_AsUtf8;
this->m_ValueType = m_ValueType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::AttributeDataValue::AttributeDataValue()   {
}
