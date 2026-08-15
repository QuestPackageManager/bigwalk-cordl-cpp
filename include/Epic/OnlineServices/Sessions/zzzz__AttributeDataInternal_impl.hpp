#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/AttributeDataInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeDataValueInternal_impl.hpp"
#include "Epic/OnlineServices/zzzz__AttributeType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeDataInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::AttributeDataInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::AttributeDataInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::AttributeData>)>(&::Epic::OnlineServices::Sessions::AttributeDataInternal::Get)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804be240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AttributeDataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::AttributeDataInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::AttributeDataInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::AttributeData>)>(&::Epic::OnlineServices::Sessions::AttributeDataInternal::Set)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804be310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AttributeDataInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::AttributeDataInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::AttributeDataInternal::*)()>(&::Epic::OnlineServices::Sessions::AttributeDataInternal::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804be1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AttributeDataInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::AttributeDataInternal::Get(::by_ref<::Epic::OnlineServices::Sessions::AttributeData>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AttributeDataInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::AttributeDataInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::AttributeData>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AttributeDataInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::AttributeDataInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::AttributeDataInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::AttributeData>"
constexpr  Epic::OnlineServices::Sessions::AttributeDataInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::AttributeData>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::AttributeData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::AttributeData>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::AttributeData>* Epic::OnlineServices::Sessions::AttributeDataInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__AttributeData_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::AttributeData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AttributeData>"
constexpr  Epic::OnlineServices::Sessions::AttributeDataInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AttributeData>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AttributeData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AttributeData>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AttributeData>* Epic::OnlineServices::Sessions::AttributeDataInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__AttributeData_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::AttributeData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::AttributeDataInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::AttributeDataInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "::Epic::OnlineServices::Sessions::AttributeDataValueInternal", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ValueType", ty: "::Epic::OnlineServices::AttributeType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::AttributeDataInternal::AttributeDataInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::Epic::OnlineServices::Sessions::AttributeDataValueInternal  m_Value, ::Epic::OnlineServices::AttributeType  m_ValueType) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Key = m_Key;
this->m_Value = m_Value;
this->m_ValueType = m_ValueType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::AttributeDataInternal::AttributeDataInternal()   {
}
