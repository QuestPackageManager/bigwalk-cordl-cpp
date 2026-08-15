#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/AddProgressionOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__AddProgressionOptionsInternal_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__AddProgressionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>)>(&::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804f6990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::*)()>(&::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::Set(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>"
constexpr  Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>* Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__ProgressionSnapshot__AddProgressionOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SnapshotId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::AddProgressionOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_SnapshotId, ::System::IntPtr  m_Key, ::System::IntPtr  m_Value) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SnapshotId = m_SnapshotId;
this->m_Key = m_Key;
this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptionsInternal::AddProgressionOptionsInternal()   {
}
