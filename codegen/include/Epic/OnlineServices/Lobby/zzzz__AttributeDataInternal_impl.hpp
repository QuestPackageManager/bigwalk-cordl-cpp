#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AttributeDataInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeDataValueInternal_impl.hpp"
#include "Epic/OnlineServices/zzzz__AttributeType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeDataInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::AttributeData>)>(&::Epic::OnlineServices::Lobby::AttributeDataInternal::Get)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180503de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::AttributeData>)>(&::Epic::OnlineServices::Lobby::AttributeDataInternal::Set)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180503eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::AttributeDataInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::AttributeDataInternal::*)()>(&::Epic::OnlineServices::Lobby::AttributeDataInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804ff310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::AttributeDataInternal::Get(::by_ref<::Epic::OnlineServices::Lobby::AttributeData>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::AttributeDataInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::AttributeData>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::AttributeDataInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::AttributeDataInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>"
constexpr  Epic::OnlineServices::Lobby::AttributeDataInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>* Epic::OnlineServices::Lobby::AttributeDataInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__AttributeData_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::AttributeData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>"
constexpr  Epic::OnlineServices::Lobby::AttributeDataInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>* Epic::OnlineServices::Lobby::AttributeDataInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__AttributeData_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::AttributeData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::AttributeDataInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::AttributeDataInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "::Epic::OnlineServices::Lobby::AttributeDataValueInternal", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ValueType", ty: "::Epic::OnlineServices::AttributeType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::AttributeDataInternal::AttributeDataInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::Epic::OnlineServices::Lobby::AttributeDataValueInternal  m_Value, ::Epic::OnlineServices::AttributeType  m_ValueType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Key = m_Key;
this->m_Value = m_Value;
this->m_ValueType = m_ValueType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::AttributeDataInternal::AttributeDataInternal()   {
}
