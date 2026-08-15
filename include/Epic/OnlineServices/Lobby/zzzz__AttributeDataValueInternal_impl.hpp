#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AttributeDataValueInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeDataValueInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeDataValue_def.hpp"
#include "Epic/OnlineServices/zzzz__AttributeType_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_2_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValueInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataValueInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>, ::Epic::OnlineServices::AttributeType, ::System::Nullable_1<int32_t>)>(&::Epic::OnlineServices::Lobby::AttributeDataValueInternal::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180503fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValueInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>>(), ::i2c::type_of<::Epic::OnlineServices::AttributeType>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValueInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataValueInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>)>(&::Epic::OnlineServices::Lobby::AttributeDataValueInternal::Set)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805040c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValueInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataValueInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataValueInternal::*)()>(&::Epic::OnlineServices::Lobby::AttributeDataValueInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804ff400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValueInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_get_m_AsInt64()  {
return this->___m_AsInt64;
}
constexpr int64_t const& Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_get_m_AsInt64() const {
return this->___m_AsInt64;
}
constexpr void Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_set_m_AsInt64(int64_t  value)  {
this->___m_AsInt64 = value;
}
constexpr double_t& Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_get_m_AsDouble()  {
return this->___m_AsDouble;
}
constexpr double_t const& Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_get_m_AsDouble() const {
return this->___m_AsDouble;
}
constexpr void Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_set_m_AsDouble(double_t  value)  {
this->___m_AsDouble = value;
}
constexpr int32_t& Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_get_m_AsBool()  {
return this->___m_AsBool;
}
constexpr int32_t const& Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_get_m_AsBool() const {
return this->___m_AsBool;
}
constexpr void Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_set_m_AsBool(int32_t  value)  {
this->___m_AsBool = value;
}
constexpr ::System::IntPtr& Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_get_m_AsUtf8()  {
return this->___m_AsUtf8;
}
constexpr ::System::IntPtr const& Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_get_m_AsUtf8() const {
return this->___m_AsUtf8;
}
constexpr void Epic::OnlineServices::Lobby::AttributeDataValueInternal::__cordl_internal_set_m_AsUtf8(::System::IntPtr  value)  {
this->___m_AsUtf8 = value;
}
inline void Epic::OnlineServices::Lobby::AttributeDataValueInternal::Get(::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>  other, ::Epic::OnlineServices::AttributeType  enumValue, ::System::Nullable_1<int32_t>  arrayLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValueInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>>(), ::i2c::type_of<::Epic::OnlineServices::AttributeType>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other, enumValue, arrayLength);
}
inline void Epic::OnlineServices::Lobby::AttributeDataValueInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValueInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AttributeDataValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::AttributeDataValueInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataValueInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>"
constexpr  Epic::OnlineServices::Lobby::AttributeDataValueInternal::operator ::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>*()  {
return static_cast<::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>"
constexpr ::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>* Epic::OnlineServices::Lobby::AttributeDataValueInternal::i___Epic__OnlineServices__IGettable_2___Epic__OnlineServices__Lobby__AttributeDataValue___Epic__OnlineServices__AttributeType_()  {
return static_cast<::Epic::OnlineServices::IGettable_2<::Epic::OnlineServices::Lobby::AttributeDataValue,::Epic::OnlineServices::AttributeType>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>"
constexpr  Epic::OnlineServices::Lobby::AttributeDataValueInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>* Epic::OnlineServices::Lobby::AttributeDataValueInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__AttributeDataValue_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeDataValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::AttributeDataValueInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::AttributeDataValueInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_AsInt64", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AsDouble", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AsBool", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AsUtf8", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::AttributeDataValueInternal::AttributeDataValueInternal(int64_t  m_AsInt64, double_t  m_AsDouble, int32_t  m_AsBool, ::System::IntPtr  m_AsUtf8) noexcept  {
this->m_AsInt64 = m_AsInt64;
this->m_AsDouble = m_AsDouble;
this->m_AsBool = m_AsBool;
this->m_AsUtf8 = m_AsUtf8;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::AttributeDataValueInternal::AttributeDataValueInternal()   {
}
