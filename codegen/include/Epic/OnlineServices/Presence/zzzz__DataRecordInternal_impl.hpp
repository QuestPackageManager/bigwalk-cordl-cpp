#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/DataRecordInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__DataRecordInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__DataRecord_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::DataRecordInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::DataRecordInternal::*)(::by_ref<::Epic::OnlineServices::Presence::DataRecord>)>(&::Epic::OnlineServices::Presence::DataRecordInternal::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f6fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::DataRecordInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::DataRecord>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::DataRecordInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::DataRecordInternal::*)(::by_ref<::Epic::OnlineServices::Presence::DataRecord>)>(&::Epic::OnlineServices::Presence::DataRecordInternal::Set)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1804f7020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::DataRecordInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::DataRecord>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::DataRecordInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::DataRecordInternal::*)()>(&::Epic::OnlineServices::Presence::DataRecordInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::DataRecordInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::DataRecordInternal::Get(::by_ref<::Epic::OnlineServices::Presence::DataRecord>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::DataRecordInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::DataRecord>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::DataRecordInternal::Set(::by_ref<::Epic::OnlineServices::Presence::DataRecord>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::DataRecordInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::DataRecord>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Presence::DataRecordInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::DataRecordInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>"
constexpr  Epic::OnlineServices::Presence::DataRecordInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>* Epic::OnlineServices::Presence::DataRecordInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Presence__DataRecord_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::DataRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>"
constexpr  Epic::OnlineServices::Presence::DataRecordInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>* Epic::OnlineServices::Presence::DataRecordInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Presence__DataRecord_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Presence::DataRecord>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Presence::DataRecordInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Presence::DataRecordInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::DataRecordInternal::DataRecordInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::System::IntPtr  m_Value) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Key = m_Key;
this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::DataRecordInternal::DataRecordInternal()   {
}
