#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/DeleteSnapshotOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__DeleteSnapshotOptionsInternal_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__DeleteSnapshotOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>)>(&::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804e7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::*)()>(&::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::Set(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>"
constexpr  Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>* Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__ProgressionSnapshot__DeleteSnapshotOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::DeleteSnapshotOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptionsInternal::DeleteSnapshotOptionsInternal()   {
}
