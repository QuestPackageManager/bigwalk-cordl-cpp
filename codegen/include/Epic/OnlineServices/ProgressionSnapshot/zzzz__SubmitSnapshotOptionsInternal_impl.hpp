#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/SubmitSnapshotOptionsInternal.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotOptionsInternal_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>)>(&::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::*)()>(&::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::Set(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>"
constexpr  Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>* Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__ProgressionSnapshot__SubmitSnapshotOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SnapshotId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::SubmitSnapshotOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_SnapshotId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SnapshotId = m_SnapshotId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptionsInternal::SubmitSnapshotOptionsInternal()   {
}
